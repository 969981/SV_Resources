/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00152bd0; name: FUN_00152bd0
 */


ulong FUN_00152bd0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 local_10e0 [128];
  char acStack_1040 [4096];
  
  if ((int)param_1 < 2) {
    FUN_00155fb0(acStack_1040,0x1000,param_4,local_10e0 + 0x80);
    uVar1 = fputs(acStack_1040,*(FILE **)PTR_stdout_047cb860);
    param_1 = (ulong)uVar1;
  }
  return param_1;
}


