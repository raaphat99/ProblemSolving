using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LittlePonyAndCrystalMine
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int[] numbers = input.Split(' ').Select(int.Parse).ToArray();
            int x = numbers[0], y = numbers[1], z = numbers[2], sum = 0;
            for (int i = 1; i <= z; i++)
            {
                sum += x * i;
            }
            if (sum <= y)
                Console.WriteLine(0);
            else
                Console.WriteLine(sum - y);
        }
    }
}
