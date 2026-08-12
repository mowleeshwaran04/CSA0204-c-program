1. A recycling plant processes 5,000 kg of waste every day.
Waste Categories:
Plastic
Paper
Metal
Electronic Waste
Efficiency Levels:
≥90% Recycled → Excellent
75–89% → Good
50–74% → Average
Below 50% → Poor
(a) Develop a C program using arithmetic operators to calculate recycled waste percentage and remaining waste. Use decision-making statements to determine plant efficiency.
(b) Use looping constructs to process waste data for 30 days. Use continue to skip maintenance days and break if the processing machine fails.
Code :
#include <stdio.h>

#define TOTAL_WASTE 5000.0
#define MAX_DAYS 30

int main()
{
    int day;
    int maintenanceDay;
    int machineFailureDay = 0;

    printf("=============================================\n");
    printf(" RECYCLING PLANT WASTE PROCESSING SYSTEM\n");
    printf("=============================================\n");

    // Input maintenance day
    do
    {
        printf("Enter Maintenance Day (1-30, 0 if none): ");
        scanf("%d", &maintenanceDay);

        if ((maintenanceDay < 0 || maintenanceDay > 30))
            printf("Invalid input! Enter a value between 0 and 30.\n");

    } while (maintenanceDay < 0 || maintenanceDay > 30);

    // Input machine failure day
    do
    {
        printf("Enter Machine Failure Day (1-30, 0 if no failure): ");
        scanf("%d", &machineFailureDay);

        if (machineFailureDay < 0 || machineFailureDay > 30)
            printf("Invalid input! Enter a value between 0 and 30.\n");

    } while (machineFailureDay < 0 || machineFailureDay > 30);

    printf("\nStarting 30-Day Processing...\n");

    for (day = 1; day <= MAX_DAYS; day++)
    {
        // Skip maintenance day
        if (day == maintenanceDay)
        {
            printf("\nDay %d : Maintenance Day -> Processing Skipped.\n", day);
            continue;
        }

        // Stop if machine fails
        if (day == machineFailureDay)
        {
            printf("\nDay %d : Machine Failure! Processing Stopped.\n", day);
            break;
        }

        printf("\n--------------------------------------\n");
        printf("Day %d\n", day);

        double plastic, paper, metal, ewaste;
        double totalRecycled, remainingWaste, percentage;

        // Plastic
        do
        {
            printf("Plastic Recycled (kg): ");
            scanf("%lf", &plastic);

            if (plastic < 0 || plastic > TOTAL_WASTE)
                printf("Invalid! Enter value between 0 and %.0lf kg.\n", TOTAL_WASTE);

        } while (plastic < 0 || plastic > TOTAL_WASTE);

        // Paper
        do
        {
            printf("Paper Recycled (kg): ");
            scanf("%lf", &paper);

            if (paper < 0 || paper > TOTAL_WASTE)
                printf("Invalid! Enter value between 0 and %.0lf kg.\n", TOTAL_WASTE);

        } while (paper < 0 || paper > TOTAL_WASTE);

        // Metal
        do
        {
            printf("Metal Recycled (kg): ");
            scanf("%lf", &metal);

            if (metal < 0 || metal > TOTAL_WASTE)
                printf("Invalid! Enter value between 0 and %.0lf kg.\n", TOTAL_WASTE);

        } while (metal < 0 || metal > TOTAL_WASTE);

        // Electronic Waste
        do
        {
            printf("Electronic Waste Recycled (kg): ");
            scanf("%lf", &ewaste);

            if (ewaste < 0 || ewaste > TOTAL_WASTE)
                printf("Invalid! Enter value between 0 and %.0lf kg.\n", TOTAL_WASTE);

        } while (ewaste < 0 || ewaste > TOTAL_WASTE);

        totalRecycled = plastic + paper + metal + ewaste;

        // Ensure total recycled does not exceed total waste
        if (totalRecycled > TOTAL_WASTE)
        {
            printf("\nERROR: Total recycled waste exceeds %.0lf kg.\n", TOTAL_WASTE);
            printf("Please re-enter data for this day.\n");
            day--;
            continue;
        }

        percentage = (totalRecycled / TOTAL_WASTE) * 100;
        remainingWaste = TOTAL_WASTE - totalRecycled;

        printf("\n========== DAILY REPORT ==========\n");
        printf("Total Waste Processed : %.2lf kg\n", TOTAL_WASTE);
        printf("Plastic              : %.2lf kg\n", plastic);
        printf("Paper                : %.2lf kg\n", paper);
        printf("Metal                : %.2lf kg\n", metal);
        printf("Electronic Waste     : %.2lf kg\n", ewaste);
        printf("Total Recycled       : %.2lf kg\n", totalRecycled);
        printf("Remaining Waste      : %.2lf kg\n", remainingWaste);
        printf("Recycling Percentage : %.2lf%%\n", percentage);

        // Efficiency
        if (percentage >= 90)
        {
            printf("Efficiency Level     : Excellent\n");
        }
        else if (percentage >= 75)
        {
            printf("Efficiency Level     : Good\n");
        }
        else if (percentage >= 50)
        {
            printf("Efficiency Level     : Average\n");
        }
        else
        {
            printf("Efficiency Level     : Poor\n");
        }
    }

    printf("\n=====================================\n");
    printf("Program Finished.\n");
    printf("=====================================\n");

    return 0;
2. An IT company completed 20 software projects during the financial year 2025–2026. Each project is evaluated based on Quality Score (100 marks) and Delivery Delay (days).
Performance Criteria:
Quality ≥ 90 and Delay ≤ 2 days → Excellent
Quality 75–89 and Delay ≤ 5 days → Good
Quality 60–74 → Average
Below 60 → Needs Improvement
A) Develop a C program using arithmetic operators to calculate the average quality score and delivery percentage. Use decision-making statements to classify each project.
B) Use looping constructs to process all 20 projects. Use continue to ignore cancelled projects and break if management stops the evaluation.
Code :
#include <stdio.h>

int main()
{
    int i;
    double quality, totalQuality = 0, averageQuality;
    int delay;
    int cancelled;
    int stop;
    int count = 0;
    int onTime = 0;
    double deliveryPercentage;

    printf("IT Company Project Evaluation (2025-2026)\n");

    for(i = 1; i <= 20; i++)
    {
        printf("\nProject %d\n", i);

        printf("Stop evaluation? (1-Yes, 0-No): ");
        scanf("%d", &stop);

        if(stop == 1)
        {
            printf("Evaluation stopped by management.\n");
            break;
        }

        printf("Is the project cancelled? (1-Yes, 0-No): ");
        scanf("%d", &cancelled);

        if(cancelled == 1)
        {
            printf("Project cancelled.\n");
            continue;
        }

        do
        {
            printf("Enter Quality Score (0-100): ");
            scanf("%lf", &quality);

            if(quality < 0 || quality > 100)
                printf("Invalid Quality Score. Enter again.\n");

        }while(quality < 0 || quality > 100);

        do
        {
            printf("Enter Delivery Delay (Days): ");
            scanf("%d", &delay);

            if(delay < 0)
                printf("Delay cannot be negative.\n");

        }while(delay < 0);

        totalQuality += quality;
        count++;

        if(delay == 0)
            onTime++;

        printf("Performance : ");

        if(quality >= 90 && delay <= 2)
        {
            printf("Excellent\n");
        }
        else if(quality >= 75 && quality < 90 && delay <= 5)
        {
            printf("Good\n");
        }
        else if(quality >= 60 && quality < 75)
        {
            printf("Average\n");
        }
        else
        {
            printf("Needs Improvement\n");
        }
    }

    if(count > 0)
    {
        averageQuality = totalQuality / count;
        deliveryPercentage = ((float)onTime / count) * 100;

        printf("\n========== Final Report ==========\n");
        printf("Projects Evaluated : %d\n", count);
        printf("Average Quality Score : %.2lf\n", averageQuality);
        printf("On-Time Delivery Percentage : %.2lf%%\n", deliveryPercentage);
    }
    else
    {
        printf("\nNo projects were evaluated.\n");
    }

    return 0;
}
  3.A semiconductor company manufactures 10,000 chips per day.
Quality Standards:
Defect Rate <1% → Grade A
1–3% → Grade B
3–5% → Grade C
Above 5% → Reject Batch
A) Develop a C program using arithmetic operators to calculate the defect percentage and accepted chips. Use decision-making statements to assign quality grades.
B) Use looping constructs to process production for 30 days. Use continue for maintenance days and break if a machine breakdown occurs.
  code :
  #include <stdio.h>

#define TOTAL_CHIPS 10000
#define TOTAL_DAYS 30

int main()
{
    int day;
    int defective, accepted;
    int maintenance, breakdown;
    double defectPercentage;

    printf("=============================================\n");
    printf(" Semiconductor Chip Quality Monitoring System\n");
    printf("=============================================\n");

    for(day = 1; day <= TOTAL_DAYS; day++)
    {
        printf("\n------------- Day %d -------------\n", day);

        // Check for machine breakdown
        do
        {
            printf("Machine Breakdown? (1-Yes, 0-No): ");
            scanf("%d", &breakdown);

            if(breakdown != 0 && breakdown != 1)
                printf("Invalid choice! Enter 0 or 1.\n");

        } while(breakdown != 0 && breakdown != 1);

        if(breakdown == 1)
        {
            printf("\nMachine breakdown detected.\n");
            printf("Production stopped.\n");
            break;
        }

        // Check maintenance
        do
        {
            printf("Maintenance Day? (1-Yes, 0-No): ");
            scanf("%d", &maintenance);

            if(maintenance != 0 && maintenance != 1)
                printf("Invalid choice! Enter 0 or 1.\n");

        } while(maintenance != 0 && maintenance != 1);

        if(maintenance == 1)
        {
            printf("Maintenance work in progress.\n");
            printf("Production skipped for today.\n");
            continue;
        }

        // Get defective chips
        do
        {
            printf("Enter Defective Chips (0-%d): ", TOTAL_CHIPS);
            scanf("%d", &defective);

            if(defective < 0 || defective > TOTAL_CHIPS)
                printf("Invalid input! Value must be between 0 and %d.\n", TOTAL_CHIPS);

        } while(defective < 0 || defective > TOTAL_CHIPS);

        accepted = TOTAL_CHIPS - defective;
        defectPercentage = ((double)defective / TOTAL_CHIPS) * 100;

        printf("\n========= Daily Production Report =========\n");
        printf("Total Chips Produced : %d\n", TOTAL_CHIPS);
        printf("Defective Chips      : %d\n", defective);
        printf("Accepted Chips       : %d\n", accepted);
        printf("Defect Percentage    : %.2lf%%\n", defectPercentage);

        if(defectPercentage < 1.0)
            printf("Quality Grade        : Grade A\n");
        else if(defectPercentage <= 3.0)
            printf("Quality Grade        : Grade B\n");
        else if(defectPercentage <= 5.0)
            printf("Quality Grade        : Grade C\n");
        else
            printf("Quality Grade        : Reject Batch");
    }

    printf("\n=============================================\n");
    printf("Monitoring Completed.\n");
    printf("=============================================\n");

    return 0;
}
  4. A cloud company offers storage plans:
Basic – 100 GB
Standard – 500 GB
Enterprise – 2 TB
Extra storage costs ₹4 per GB.
If storage usage exceeds 95%, a warning should be generated.
A) Develop a C program using arithmetic operators to calculate used storage, remaining storage, and extra charges. Use decision-making statements to determine storage status.
B) Use looping constructs to process multiple customers. Use continue for inactive accounts and break if server storage becomes full.
  Code :
  #include <stdio.h>

int main()
{
    int customers;
    int i;

    int plan;
    int active;
    int serverFull;

    double totalStorage;
    double usedStorage;
    double remainingStorage;
    double extraStorage;
    double extraCharge;
    double usagePercentage;

    printf("=========================================\n");
    printf(" Cloud Storage Management System\n");
    printf("=========================================\n");

    printf("Enter Number of Customers: ");
    scanf("%d", &customers);

    if(customers <= 0)
    {
        printf("Invalid number of customers.\n");
        return 0;
    }

    for(i = 1; i <= customers; i++)
    {
        printf("\n========== Customer %d ==========\n", i);

        // Server Status
        do
        {
            printf("Is Server Full? (1-Yes, 0-No): ");
            scanf("%d", &serverFull);

            if(serverFull != 0 && serverFull != 1)
                printf("Invalid Input! Enter 0 or 1.\n");

        }while(serverFull != 0 && serverFull != 1);

        if(serverFull == 1)
        {
            printf("\nServer storage is full.\n");
            printf("Stopping customer processing...\n");
            break;
        }

        // Account Status
        do
        {
            printf("Is Account Active? (1-Yes, 0-No): ");
            scanf("%d", &active);

            if(active != 0 && active != 1)
                printf("Invalid Input! Enter 0 or 1.\n");

        }while(active != 0 && active != 1);

        if(active == 0)
        {
            printf("Inactive Account. Skipping...\n");
            continue;
        }

        // Plan Selection
        do
        {
            printf("\nSelect Storage Plan\n");
            printf("1. Basic (100 GB)\n");
            printf("2. Standard (500 GB)\n");
            printf("3. Enterprise (2000 GB)\n");
            printf("Enter Choice: ");
            scanf("%d", &plan);

            if(plan < 1 || plan > 3)
                printf("Invalid Plan Selection.\n");

        }while(plan < 1 || plan > 3);

        if(plan == 1)
            totalStorage = 100;
        else if(plan == 2)
            totalStorage = 500;
        else
            totalStorage = 2000;

        // Storage Used
        do
        {
            printf("Enter Used Storage (GB): ");
            scanf("%lf", &usedStorage);

            if(usedStorage < 0)
                printf("Storage cannot be negative.\n");

        }while(usedStorage < 0);

        usagePercentage = (usedStorage / totalStorage) * 100;

        if(usedStorage > totalStorage)
        {
            extraStorage = usedStorage - totalStorage;
            extraCharge = extraStorage * 4;
            remainingStorage = 0;
        }
        else
        {
            remainingStorage = totalStorage - usedStorage;
            extraStorage = 0;
            extraCharge = 0;
        }

        printf("\n------ Customer Report ------\n");
        printf("Plan Storage      : %.0lf GB\n", totalStorage);
        printf("Used Storage      : %.2lf GB\n", usedStorage);
        printf("Remaining Storage : %.2lf GB\n", remainingStorage);
        printf("Extra Storage     : %.2lf GB\n", extraStorage);
        printf("Extra Charges     : ₹%.2lf\n", extraCharge);
        printf("Storage Usage     : %.2lf%%\n", usagePercentage);

        if(usagePercentage > 95)
            printf("Storage Status    : Warning - Storage above 95%%\n");
        else
            printf("Storage Status    : Normal\n");
    }

    printf("\n=========================================\n");
    printf("Processing Completed.\n");
    printf("=========================================\n");

    return 0;
}
}
