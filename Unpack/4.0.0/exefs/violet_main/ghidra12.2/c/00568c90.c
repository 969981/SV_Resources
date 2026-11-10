/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00568c90; name: FUN_00568c90
 */


void FUN_00568c90(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_3 - param_2 >> 3;
  lVar1 = param_1[2];
  lVar2 = *param_1;
  if (uVar4 <= (ulong)(lVar1 - lVar2 >> 3)) {
    uVar5 = param_1[1] - lVar2 >> 3;
    lVar1 = param_2 + (param_1[1] - lVar2);
    if (uVar4 <= uVar5) {
      lVar1 = param_3;
    }
    for (; param_2 != lVar1; param_2 = param_2 + 8) {
      FUN_0056b4e0(lVar2,param_2);
      lVar2 = lVar2 + 8;
    }
    if (uVar5 < uVar4) {
      lVar2 = param_1[1];
      for (; lVar1 != param_3; lVar1 = lVar1 + 8) {
        FUN_0056b4c4(lVar2,lVar1);
        lVar2 = lVar2 + 8;
      }
      param_1[1] = lVar2;
      return;
    }
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -8;
      FUN_0056b3f0(lVar1);
    }
LAB_00568e38:
    param_1[1] = lVar2;
    return;
  }
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar3 == lVar2) {
      lVar3 = lVar2;
    }
    else {
      do {
        lVar3 = lVar3 + -8;
        FUN_0056b3f0(lVar3);
      } while (lVar2 != lVar3);
      lVar1 = param_1[2];
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar3,lVar1 - lVar3,8);
    lVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (uVar4 >> 0x3d == 0) {
    if (uVar4 <= (ulong)(lVar1 >> 2)) {
      uVar4 = lVar1 >> 2;
    }
    if (0xffffffffffffffe < (ulong)(lVar1 >> 3)) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 >> 0x3d == 0) {
      lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 * 8,8);
      param_1[2] = lVar2 + uVar4 * 8;
      *param_1 = lVar2;
      param_1[1] = lVar2;
      for (; param_2 != param_3; param_2 = param_2 + 8) {
        FUN_0056b4c4(lVar2,param_2);
        lVar2 = lVar2 + 8;
      }
      goto LAB_00568e38;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}


