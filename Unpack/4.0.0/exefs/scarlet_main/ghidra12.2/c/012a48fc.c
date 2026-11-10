/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a48fc; name: FUN_012a48fc
 */


void FUN_012a48fc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_58;
  
  uVar6 = param_1[4];
  lVar4 = param_1[1] - *param_1 >> 4;
  if (0x7ffffffffffffffe < uVar6) {
    uVar6 = 0x7fffffffffffffff;
  }
  uVar1 = lVar4 * -0x71c71c71c71c71c7 + 1;
  if (uVar6 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1 >> 4;
  uVar5 = lVar2 * 0x1c71c71c71c71c72;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  plVar7 = param_1 + 3;
  if (uVar6 >> 1 <= (ulong)(lVar2 * -0x71c71c71c71c71c7)) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar1 * 0x90,0x10);
    if (lVar2 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xe8))();
    }
  }
  lVar10 = lVar2 + lVar4 * 0x10;
  FUN_012a4678(plVar7,lVar10,param_2,param_3,param_4);
  lVar9 = *param_1;
  lVar8 = param_1[1];
  lVar4 = lVar10 + 0x90;
  if (lVar8 == lVar9) {
    lVar8 = lVar9;
  }
  else {
    do {
      lVar10 = lVar10 + -0x90;
      lVar8 = lVar8 + -0x90;
      FUN_010b5fa4(plVar7,lVar10,lVar8);
    } while (lVar9 != lVar8);
    lVar9 = *param_1;
    lVar8 = param_1[1];
  }
  *param_1 = lVar10;
  param_1[1] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = lVar2 + uVar1 * 0x90;
  while (lVar2 = lVar8, lVar2 != lVar9) {
    if (*(code **)(lVar2 + -0x50) != (code *)0x0) {
      local_58 = *(undefined8 *)(lVar2 + -0x10);
      (**(code **)(lVar2 + -0x50))(lVar2 + -0x30,&local_58);
    }
    pcVar3 = *(code **)(lVar2 + -0x48);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0x40) = 0;
      *(undefined8 *)(lVar2 + -0x38) = 0;
      *(undefined8 *)(lVar2 + -0x50) = 0;
      *(undefined8 *)(lVar2 + -0x48) = 0;
      (*pcVar3)(lVar2 + -0x30);
    }
    pcVar3 = *(code **)(lVar2 + -0x88);
    lVar8 = lVar2 + -0x90;
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0x80) = 0;
      *(undefined8 *)(lVar2 + -0x78) = 0;
      *(undefined8 *)(lVar2 + -0x90) = 0;
      *(undefined8 *)(lVar2 + -0x88) = 0;
      (*pcVar3)(lVar2 + -0x70);
    }
  }
  if (lVar9 != 0) {
    plVar7 = (long *)*plVar7;
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar4 - lVar9,0x10);
    }
    else {
      FUN_00c48fe8(plVar7,lVar9,lVar4 - lVar9,0x10);
    }
  }
  return;
}


