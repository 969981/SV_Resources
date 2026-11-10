/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0039070c; name: FUN_0039070c
 */


uint FUN_0039070c(ulong param_1,ulong param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  ulong local_20;
  undefined4 local_18;
  
  uVar1 = (uint)param_2;
  if ((uVar1 & 0xff) == 0x14) {
    if (0x7ffffffe < param_1) {
      param_1 = 0x7fffffff;
    }
    *param_4 = (int)param_1;
  }
  else {
    if ((uVar1 - 10 & 0xff) < 8) {
      local_20 = param_2;
      local_18 = param_3;
      uVar1 = FUN_00391f60((double)param_1,&local_20,param_4);
      return uVar1 & 1;
    }
    if ((param_2 & 0xff) == 0) {
      FUN_00391340(param_1,param_2,param_3);
    }
    else {
      if (5 < (uVar1 - 4 & 0xff)) {
        return 0;
      }
      FUN_00390ba0();
    }
  }
  return 1;
}


