/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a5f84; name: FUN_010a5f84
 */


ulong FUN_010a5f84(int param_1,uint param_2,undefined4 param_3,int param_4,uint param_5)

{
  ulong uVar1;
  
  if (param_1 == 2) {
    uVar1 = FUN_010a6f4c(param_3,param_5);
    return uVar1;
  }
  if (param_1 == 0) {
    if ((int)param_5 < 5) {
      if (((param_2 & 0xff) == 0) || (param_4 != 3)) {
        return (ulong)(param_5 == 1);
      }
      return (ulong)((&DAT_03d6a2fd)[param_5] != '\0');
    }
  }
  else if (param_1 == 1) {
    uVar1 = FUN_010ad7c4(param_2,param_3,param_5);
    return uVar1;
  }
  return 0;
}


