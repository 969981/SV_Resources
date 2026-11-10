/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e0990; name: FUN_002e0990
 */


void FUN_002e0990(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  if (((9 < param_3) && ((int)param_2 < 0xb)) && ((param_4 & 0x804) != 4)) {
    if ((int)param_2 < 10) {
      if ((param_4 & 1) == 0) {
        FUN_002e626c();
      }
      else {
        FUN_002e0c70(param_1,param_2,9,0);
      }
    }
    if (param_3 < 0xb) {
      return;
    }
    param_2 = 0xb;
  }
  if ((param_4 & 1) == 0) {
    FUN_002e626c(param_1,param_2,param_3);
    return;
  }
  FUN_002e0c70(param_1,param_2,param_3,0);
  return;
}


