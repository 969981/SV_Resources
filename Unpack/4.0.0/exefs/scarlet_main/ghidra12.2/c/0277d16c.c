/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277d16c; name: FUN_0277d16c
 */


void FUN_0277d16c(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  
  lVar8 = param_1[1] - *param_1 >> 6;
  uVar2 = lVar8 + 1;
  if (uVar2 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  uVar5 = lVar3 >> 5;
  if (uVar2 <= uVar5) {
    uVar2 = uVar5;
  }
  plVar7 = param_1 + 3;
  local_50 = 0;
  if (0x1fffffffffffffe < (ulong)(lVar3 >> 6)) {
    uVar2 = 0x3ffffffffffffff;
  }
  local_48 = plVar7;
  if (uVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar2 << 6,0x10);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xe8))((long *)*plVar7);
    }
  }
  lVar8 = lVar3 + lVar8 * 0x40;
  local_50 = lVar3 + uVar2 * 0x40;
  local_60 = lVar8;
  FUN_0277d060(plVar7,lVar8,param_2);
  local_58 = lVar8 + 0x40;
  FUN_02777ab8(plVar7,*param_1,param_1[1],&local_60);
  lVar6 = *param_1;
  lVar8 = param_1[1];
  lVar3 = param_1[2];
  *param_1 = local_60;
  param_1[1] = local_58;
  param_1[2] = local_50;
  local_60 = lVar6;
  local_58 = lVar8;
  local_50 = lVar3;
  while (lVar1 = lVar8, lVar1 != lVar6) {
    lVar8 = lVar1 + -0x40;
    pcVar4 = *(code **)(lVar1 + -0x38);
    local_58 = lVar8;
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar1 + -0x30) = 0;
      *(undefined8 *)(lVar1 + -0x28) = 0;
      *(undefined8 *)(lVar1 + -0x40) = 0;
      *(undefined8 *)(lVar1 + -0x38) = 0;
      (*pcVar4)(lVar1 + -0x20);
    }
  }
  if (lVar6 != 0) {
    lVar3 = lVar3 - lVar6;
    plVar7 = (long *)*local_48;
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar3,0x10);
    }
    else {
      FUN_00c48fe8(plVar7,lVar6,lVar3,0x10);
    }
  }
  return;
}


