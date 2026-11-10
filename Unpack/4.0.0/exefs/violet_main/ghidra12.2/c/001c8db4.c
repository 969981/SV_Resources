/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c8db4; name: FUN_001c8db4
 */


undefined8 FUN_001c8db4(long *param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(int *)(param_1 + 0xa5) = param_2;
  if (param_2 == 0) {
    if (param_3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar3 = *param_1;
      if (*(long *)(lVar3 + 0xe8) != 0) {
        FUN_001dc298(lVar3,3,2);
      }
      lVar2 = FUN_001c9228(lVar3,param_3,param_1[0xa2],(int)param_1[0xa3]);
      if (*(long *)(lVar3 + 0xe8) != 0) {
        FUN_001dc2d8(lVar3,3);
      }
      if (lVar2 != 0) {
        uVar1 = 0;
        goto LAB_001c8e4c;
      }
      FUN_001c7e00(param_3);
    }
    uVar1 = 0x1b;
  }
  else {
    uVar1 = 0;
    lVar2 = 0;
  }
LAB_001c8e4c:
  param_1[0xa4] = lVar2;
  *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) | 1;
  return uVar1;
}


