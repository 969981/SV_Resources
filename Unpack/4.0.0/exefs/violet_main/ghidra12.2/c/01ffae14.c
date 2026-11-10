/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ffae14; name: FUN_01ffae14
 */


void FUN_01ffae14(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  uVar8 = param_1[4];
  lVar12 = param_1[1] - *param_1 >> 7;
  uVar2 = lVar12 + 1;
  if (0x7ffffffffffffffe < uVar8) {
    uVar8 = 0x7fffffffffffffff;
  }
  if (uVar8 < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1;
  uVar7 = lVar6 >> 6;
  if (uVar2 <= uVar7) {
    uVar2 = uVar7;
  }
  plVar10 = param_1 + 3;
  local_50 = 0;
  if (uVar8 >> 1 <= (ulong)(lVar6 >> 7)) {
    uVar2 = uVar8;
  }
  plStack_48 = plVar10;
  if (uVar2 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar2 << 7,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xe8))((long *)*plVar10);
    }
  }
  puVar1 = (undefined8 *)(local_68 + lVar12 * 0x80);
  local_50 = local_68 + uVar2 * 0x80;
  local_60 = puVar1;
  FUN_01ffad14(plVar10,puVar1,param_2);
  local_58 = puVar1 + 0x10;
  FUN_00e94be8(param_1,&local_68);
  puVar9 = local_58;
  puVar1 = local_60;
  if (local_58 != local_60) {
    puVar11 = local_58 + -0x10;
    pcVar5 = (code *)local_58[-0xf];
    puVar3 = puVar11;
    if (pcVar5 != (code *)0x0) {
      puVar3 = local_58 + -0xc;
      local_58[-0xe] = 0;
      local_58[-0xd] = 0;
      *puVar11 = 0;
      local_58[-0xf] = 0;
      local_58 = puVar11;
      (*pcVar5)(puVar3);
      puVar3 = local_58;
    }
    local_58 = puVar3;
    if (puVar11 != puVar1) {
      puVar3 = puVar9 + -0x20;
      pcVar5 = (code *)puVar9[-0x1f];
      local_58 = puVar3;
      if (pcVar5 != (code *)0x0) {
        puVar9[-0x1e] = 0;
        puVar9[-0x1d] = 0;
        *puVar3 = 0;
        puVar9[-0x1f] = 0;
        (*pcVar5)(puVar9 + -0x1c);
      }
      if (puVar3 != puVar1) {
        do {
          local_58 = puVar9 + -0x30;
          pcVar5 = (code *)puVar9[-0x2f];
          if (pcVar5 != (code *)0x0) {
            puVar9[-0x2e] = 0;
            puVar9[-0x2d] = 0;
            *local_58 = 0;
            puVar9[-0x2f] = 0;
            (*pcVar5)(puVar9 + -0x2c);
          }
          puVar9 = puVar9 + -0x10;
        } while (puVar1 + 0x20 != puVar9);
      }
    }
  }
  lVar12 = local_68;
  if (local_68 != 0) {
    lVar6 = local_50 - local_68;
    plVar10 = (long *)*plStack_48;
    uVar2 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar6,0x10);
    }
    else {
      FUN_00c48fe8(plVar10,lVar12,lVar6,0x10);
    }
  }
  return;
}


