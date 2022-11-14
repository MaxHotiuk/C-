string wword(string line)
{
    string word;
    while (line[n] != ' ' && n < line.length())
    {
        word += line[n];
        n++;
    }
    n++;
    return word;
}