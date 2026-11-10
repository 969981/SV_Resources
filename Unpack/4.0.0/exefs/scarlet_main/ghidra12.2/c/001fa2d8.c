/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001fa2d8; name: FUN_001fa2d8
 */


undefined8
FUN_001fa2d8(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,long param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x9aa) != '\0') {
    return 0xfffffe07;
  }
  if (param_2 != (int *)0x0) {
    iVar1 = FUN_001eda30(param_2);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x930) == *param_2) {
        return 0xfffffe0b;
      }
    }
    else {
      param_2 = (int *)0x0;
    }
  }
  if ((param_5 == 0) || (*(long *)(param_5 + 8) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  if (param_2 != (int *)0x0) {
    uVar3 = uVar3 | 0x20;
  }
  uVar2 = FUN_001f9f98(param_1,uVar3,0xffffffff,param_2,param_3,param_4,param_5,param_6);
  return uVar2;
}


