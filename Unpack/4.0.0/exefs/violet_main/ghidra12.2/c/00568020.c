/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00568020; name: FUN_00568020
 */


void FUN_00568020(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != param_1[1]) {
    FUN_00568b98(param_1,(param_2[1] - *param_2 >> 3) + (param_1[1] - lVar3 >> 3));
    lVar3 = *param_2;
    lVar2 = param_2[1];
    if (lVar3 != lVar2) {
      do {
        FUN_00568468(param_1,lVar3);
        lVar3 = lVar3 + 8;
      } while (lVar2 != lVar3);
      lVar3 = *param_2;
      lVar2 = param_2[1];
      while (lVar2 != lVar3) {
        lVar2 = lVar2 + -8;
        FUN_0056b3f0(lVar2);
      }
    }
    param_2[1] = lVar3;
    return;
  }
  if ((long *)param_1[3] != (long *)param_2[3]) {
    uVar1 = (**(code **)(*(long *)param_1[3] + 0x20))();
    if ((uVar1 & 1) == 0) {
      FUN_00568c90(param_1,*param_2,param_2[1]);
      return;
    }
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    if (lVar2 == lVar3) {
      lVar2 = lVar3;
    }
    else {
      do {
        lVar2 = lVar2 + -8;
        FUN_0056b3f0(lVar2);
      } while (lVar3 != lVar2);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar2,param_1[2] - lVar2,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar3;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}


