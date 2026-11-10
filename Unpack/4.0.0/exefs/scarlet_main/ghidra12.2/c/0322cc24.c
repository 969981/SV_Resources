/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322cc24; name: FUN_0322cc24
 */


ulong FUN_0322cc24(ulong param_1)

{
  uint uVar1;
  size_t sVar2;
  ulong uVar3;
  char *__s;
  
  __s = (char *)(param_1 + 0x50);
  uVar3 = param_1;
  if (*__s != '\0') {
    sVar2 = strlen(__s);
    *(undefined2 *)(param_1 + (long)(int)((int)sVar2 - (uint)((int)sVar2 == 0xff)) + 0x50) = 10;
    printf("%s",__s);
    uVar1 = fflush(*(FILE **)PTR_stdout_047cb860);
    uVar3 = (ulong)uVar1;
  }
  if ((*(ulong *)(param_1 + 0x28) & 1) == 0) {
    return uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0322ccb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(param_1 + 0x28) - 1,0);
  return uVar3;
}


