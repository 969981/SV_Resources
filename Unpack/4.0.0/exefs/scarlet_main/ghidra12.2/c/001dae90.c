/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001dae90; name: FUN_001dae90
 */


int FUN_001dae90(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = 0;
  if ((param_3 != 0) && (param_1 = param_1 - param_2, param_1 != 0)) {
    if (param_1 < 0x20c49ba5e353f7) {
      lVar3 = 0;
      if (param_3 != 0) {
        lVar3 = (param_1 * 1000) / param_3;
      }
    }
    else {
      lVar1 = 0;
      if (param_3 != 0) {
        lVar1 = param_1 / param_3;
      }
      lVar3 = lVar1 * 1000;
      if (0x20c49a < lVar1) {
        lVar3 = 0x7fffffff;
      }
    }
    iVar2 = FUN_001e0e28(param_6,param_7,param_4,param_5);
    if (iVar2 < lVar3) {
      iVar2 = (int)lVar3 - iVar2;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}


