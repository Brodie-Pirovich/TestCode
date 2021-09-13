using System;
using System.Collections.Generic;
using System.Text;

namespace Test
{
    class Cat
    {
        public Cat(string catName, int catAge)
        {
            name = catName;
            age = catAge;
        }

        public string name;
        public int age;

        public void Meow()
        {
            Console.WriteLine(name + " meows");
        }
    }
}
