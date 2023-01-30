int main(void)
{
	char *joined;
	char *strs[] = {"abcdefghijklmnopkrstuvwxyz", "424242", "abddef123456789"};
	char *sep = ", ";

	joined = ft_strjoin(46, strs, sep);
	printf("%s\n", joined);
}
