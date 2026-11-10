/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001fa210; name: FUN_001fa210
 */


undefined8 FUN_001fa210(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  int local_14;
  
  if (param_4 < 0) {
    return 0xfffffe0b;
  }
  if (param_3 == 0) {
    local_14 = param_4 - *(int *)(param_1 + 0x95c);
    if (local_14 == 0) {
      return 0;
    }
    piVar3 = (int *)(param_1 + 0x95c);
    lVar1 = param_1 + 0x950;
    lVar2 = param_1 + 0x958;
  }
  else {
    lVar2 = FUN_001edb18(param_1,param_3);
    if (lVar2 == 0) {
      return 0;
    }
    piVar3 = (int *)(lVar2 + 0xcc);
    local_14 = param_4 - *piVar3;
    if (local_14 == 0) {
      return 0;
    }
    lVar1 = lVar2 + 0xc0;
    lVar2 = lVar2 + 200;
  }
  if (local_14 < 0) {
    uVar4 = FUN_001ed598(piVar3,lVar1,lVar2,&local_14);
    return uVar4;
  }
  uVar4 = FUN_001ed688();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (local_14 < 1) {
    return 0;
  }
  uVar4 = FUN_001f3450(param_1,0,param_3);
  return uVar4;
}


