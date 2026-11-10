/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c981f8; name: FUN_01c981f8
 */


undefined4 FUN_01c981f8(char *param_1,code *param_2,ulong param_3)

{
  undefined4 uVar1;
  
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
    }
    uVar1 = (*param_2)();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


