/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0253efd0; name: FUN_0253efd0
 */


void FUN_0253efd0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar5 = param_1[4];
  lVar9 = param_1[1] - *param_1 >> 7;
  uVar1 = lVar9 + 1;
  if (0x7ffffffffffffffe < uVar5) {
    uVar5 = 0x7fffffffffffffff;
  }
  if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  uVar4 = lVar3 >> 6;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  plVar6 = param_1 + 3;
  if (uVar5 >> 1 <= (ulong)(lVar3 >> 7)) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar1 << 7,0x10);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xe8))();
    }
  }
  lVar10 = lVar3 + lVar9 * 0x80;
  FUN_0253eed0(plVar6,lVar10,param_2);
  lVar8 = *param_1;
  lVar7 = param_1[1];
  lVar9 = lVar10 + 0x80;
  if (lVar7 == lVar8) {
    lVar7 = lVar8;
  }
  else {
    do {
      lVar10 = lVar10 + -0x80;
      lVar7 = lVar7 + -0x80;
      FUN_015a9dec(plVar6,lVar10,lVar7);
    } while (lVar8 != lVar7);
    lVar8 = *param_1;
    lVar7 = param_1[1];
  }
  *param_1 = lVar10;
  param_1[1] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = lVar3 + uVar1 * 0x80;
  while (lVar3 = lVar7, lVar3 != lVar8) {
    pcVar2 = *(code **)(lVar3 + -0x78);
    lVar7 = lVar3 + -0x80;
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(lVar3 + -0x70) = 0;
      *(undefined8 *)(lVar3 + -0x68) = 0;
      *(undefined8 *)(lVar3 + -0x80) = 0;
      *(undefined8 *)(lVar3 + -0x78) = 0;
      (*pcVar2)(lVar3 + -0x60);
    }
  }
  if (lVar8 == 0) {
    return;
  }
  plVar6 = (long *)*plVar6;
  uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar1 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0253f154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar9 - lVar8,0x10);
    return;
  }
  FUN_00c48fe8(plVar6,lVar8,lVar9 - lVar8,0x10);
  return;
}


