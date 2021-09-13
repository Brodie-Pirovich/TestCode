using System;
using System.Collections.Generic;
using System.Text;

namespace Test
{
    class Theater
    {
        public Theater(string title, string session)
        {
            movie = title;
            time = session;
        }

        public string movie;
        public string time;

        public void printTheater()
        {
            Console.WriteLine(movie + " showing at " + time);
        }
    }
}
