/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019cc8f4; name: FUN_019cc8f4
 */


void FUN_019cc8f4(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  lVar11 = param_1[1] - *param_1 >> 6;
  uVar3 = lVar11 + 1;
  if (uVar3 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1;
  uVar8 = lVar6 >> 5;
  if (uVar3 <= uVar8) {
    uVar3 = uVar8;
  }
  plVar10 = param_1 + 3;
  local_50 = 0;
  if (0x1fffffffffffffe < (ulong)(lVar6 >> 6)) {
    uVar3 = 0x3ffffffffffffff;
  }
  plStack_48 = plVar10;
  if (uVar3 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar3 << 6,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xe8))((long *)*plVar10);
    }
  }
  puVar1 = (undefined8 *)(local_68 + lVar11 * 0x40);
  local_50 = local_68 + uVar3 * 0x40;
  local_60 = puVar1;
  FUN_019ccac8(plVar10,puVar1,param_2);
  local_58 = puVar1 + 8;
  FUN_019acb84(param_1,&local_68);
  puVar1 = local_60;
  if (local_58 != local_60) {
    puVar9 = local_58 + -8;
    pcVar7 = (code *)local_58[-7];
    puVar4 = puVar9;
    if (pcVar7 != (code *)0x0) {
      puVar4 = local_58 + -4;
      local_58[-6] = 0;
      local_58[-5] = 0;
      *puVar9 = 0;
      local_58[-7] = 0;
      local_58 = puVar9;
      (*pcVar7)(puVar4);
      puVar4 = local_58;
    }
    while (local_58 = puVar4, puVar2 = puVar9, puVar2 != puVar1) {
      puVar9 = puVar2 + -8;
      pcVar7 = (code *)puVar2[-7];
      puVar4 = puVar9;
      if (pcVar7 != (code *)0x0) {
        puVar2[-6] = 0;
        puVar2[-5] = 0;
        puVar2[-8] = 0;
        puVar2[-7] = 0;
        local_58 = puVar9;
        (*pcVar7)(puVar2 + -4);
        puVar4 = local_58;
      }
    }
  }
  lVar11 = local_68;
  if (local_68 != 0) {
    lVar6 = local_50 - local_68;
    plVar10 = (long *)*plStack_48;
    uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar6,0x10);
    }
    else {
      FUN_00c48fe8(plVar10,lVar11,lVar6,0x10);
    }
  }
  return;
}


