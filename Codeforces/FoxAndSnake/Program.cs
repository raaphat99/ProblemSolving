using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FoxAndSnake
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int[] numbers = input.Split(' ').Select(int.Parse).ToArray();
            int x = numbers[0], y = numbers[1];
            string flag = "dot"; // "hash"
            for (int i = 1; i <= x; i++)
            {
                for (int j = 1; j <= y; j++)
                {
                    if (i % 2 != 0 || (flag == "dot" && j == y) || (flag != "dot" && j == 1))
                    {
                        Console.Write("#");
                    }
                    else
                    {
                        Console.Write(".");
                    }
                }
                if (i % 2 == 0)
                    flag = flag == "dot" ? "hash" : "dot";

                Console.WriteLine();
            }

            //for (int i = 1; i <= x; i++)
            //{
            //    for (int j = 1; j <= y; j++)
            //    {
            //        if (i % 2 != 0)
            //        {
            //            Console.Write("#");
            //        }
            //        else
            //        {
            //            if (flag == "dot")
            //            {
            //                if (j == y)
            //                    Console.Write("#");
            //                else
            //                    Console.Write(".");
            //            }
            //            else
            //            {
            //                if (j == 1)
            //                    Console.Write("#");
            //                else
            //                    Console.Write(".");
            //            }
            //        }
            //    }
            //    if (i % 2 == 0)
            //        flag = flag == "dot" ? "hash" : "dot";
            //    Console.WriteLine();
            //}
        }
    }
}
