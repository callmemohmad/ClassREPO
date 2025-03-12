




using System;

class Individual {
    protected string fullName;
    protected int yearsOfExperience;

    public Individual(string name, int experience) {
        fullName = name;
        yearsOfExperience = experience;
    }

    public string GetFullName() { return fullName; }
    public int GetExperienceYears() { return yearsOfExperience; }
}

class Engineer : Individual {
    private double projectSuccessRate;

    public Engineer(string name, int experience, double successRate) : base(name, experience) {
        projectSuccessRate = successRate;
    }

    public double GetSuccessRate() { return projectSuccessRate; }
    public string GetEngineerName() { return fullName; }
}

class Manager : Individual {
    private double annualBudget;

    public Manager(string name, int experience, double budget) : base(name, experience) {
        annualBudget = budget;
    }

    public double GetBudget() { return annualBudget; }
    public string GetManagerName() { return fullName; }
}

class Program {
    static void Main() {
        Individual person = new Individual("Alex Johnson", 8);
        Console.WriteLine(person.GetFullName());
        Console.WriteLine(person.GetExperienceYears());

        Engineer engineer = new Engineer("Sarah Williams", 5, 92.3);
        Console.WriteLine(engineer.GetEngineerName());
        Console.WriteLine(engineer.GetSuccessRate());

        Manager manager = new Manager("David Carter", 12, 750000);
        Console.WriteLine(manager.GetManagerName());
        Console.WriteLine(manager.GetBudget());
    }
}
