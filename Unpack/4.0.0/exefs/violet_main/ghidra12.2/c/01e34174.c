/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e34174; name: FUN_01e34174
 */


void FUN_01e34174(long *param_1,undefined8 param_2)

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
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
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
  local_50 = 0;
  if (uVar6 >> 1 <= (ulong)(lVar3 >> 7)) {
    uVar2 = uVar6;
  }
  plStack_48 = plVar8;
  if (uVar2 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar2 << 7,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar8 + 0xe8))();
    }
  }
  lVar9 = local_68 + lVar9 * 0x80;
  local_50 = local_68 + uVar2 * 0x80;
  local_60 = lVar9;
  FUN_01e34074(plVar8,lVar9,param_2);
  local_58 = lVar9 + 0x80;
  FUN_0109ba94(param_1,&local_68);
  lVar3 = local_60;
  lVar9 = local_68;
  lVar7 = local_58;
  while (lVar1 = lVar7, local_68 = lVar9, lVar1 != lVar3) {
    lVar7 = lVar1 + -0x80;
    pcVar5 = *(code **)(lVar1 + -0x78);
    local_58 = lVar7;
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(lVar1 + -0x70) = 0;
      *(undefined8 *)(lVar1 + -0x68) = 0;
      *(undefined8 *)(lVar1 + -0x80) = 0;
      *(undefined8 *)(lVar1 + -0x78) = 0;
      (*pcVar5)(lVar1 + -0x60);
      lVar9 = local_68;
    }
  }
  if (lVar9 != 0) {
    lVar3 = local_50 - lVar9;
    plVar8 = (long *)*plStack_48;
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar3,0x10);
    }
    else {
      FUN_00c48fe8(plVar8,lVar9,lVar3,0x10);
    }
  }
  return;
}


