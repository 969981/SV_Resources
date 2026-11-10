/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02001ee4; name: FUN_02001ee4
 */


void FUN_02001ee4(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long local_70;
  long local_68;
  long local_60;
  long *local_58;
  
  uVar6 = param_1[4];
  lVar9 = param_1[1] - *param_1 >> 7;
  uVar2 = lVar9 + 1;
  if (0x7ffffffffffffffe < uVar6) {
    uVar6 = 0x7fffffffffffffff;
  }
  if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  uVar4 = lVar3 >> 6;
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  plVar8 = param_1 + 3;
  local_60 = 0;
  if (uVar6 >> 1 <= (ulong)(lVar3 >> 7)) {
    uVar2 = uVar6;
  }
  local_58 = plVar8;
  if (uVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar2 << 7,0x10);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*plVar8 + 0xe8))();
    }
  }
  lVar9 = lVar3 + lVar9 * 0x80;
  local_60 = lVar3 + uVar2 * 0x80;
  local_70 = lVar9;
  FUN_02001de4(plVar8,lVar9,param_2);
  local_68 = lVar9 + 0x80;
  FUN_010095a4(plVar8,*param_1,param_1[1],&local_70);
  lVar7 = *param_1;
  lVar9 = param_1[1];
  lVar3 = param_1[2];
  *param_1 = local_70;
  param_1[1] = local_68;
  param_1[2] = local_60;
  local_70 = lVar7;
  local_68 = lVar9;
  local_60 = lVar3;
  while (lVar1 = lVar9, lVar1 != lVar7) {
    lVar9 = lVar1 + -0x80;
    pcVar5 = *(code **)(lVar1 + -0x78);
    local_68 = lVar9;
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(lVar1 + -0x70) = 0;
      *(undefined8 *)(lVar1 + -0x68) = 0;
      *(undefined8 *)(lVar1 + -0x80) = 0;
      *(undefined8 *)(lVar1 + -0x78) = 0;
      (*pcVar5)(lVar1 + -0x60);
    }
  }
  if (lVar7 != 0) {
    lVar3 = lVar3 - lVar7;
    plVar8 = (long *)*local_58;
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,lVar3,0x10);
    }
    else {
      FUN_00c48fe8(plVar8,lVar7,lVar3,0x10);
    }
  }
  return;
}


