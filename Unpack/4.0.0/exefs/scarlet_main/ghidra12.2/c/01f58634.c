/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f58634; name: FUN_01f58634
 */


void FUN_01f58634(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  uVar8 = param_1[4];
  lVar12 = param_1[1] - *param_1 >> 7;
  uVar3 = lVar12 + 1;
  if (0x7ffffffffffffffe < uVar8) {
    uVar8 = 0x7fffffffffffffff;
  }
  if (uVar8 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1;
  uVar7 = lVar6 >> 6;
  if (uVar3 <= uVar7) {
    uVar3 = uVar7;
  }
  plVar11 = param_1 + 3;
  local_50 = 0;
  if (uVar8 >> 1 <= (ulong)(lVar6 >> 7)) {
    uVar3 = uVar8;
  }
  plStack_48 = plVar11;
  if (uVar3 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar3 << 7,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar11 + 0xe8))((long *)*plVar11);
    }
  }
  puVar1 = (undefined8 *)(local_68 + lVar12 * 0x80);
  local_50 = local_68 + uVar3 * 0x80;
  local_60 = puVar1;
  FUN_01f58530(plVar11,puVar1,param_2);
  local_58 = puVar1 + 0x10;
  FUN_0181acfc(param_1,&local_68);
  puVar9 = local_58;
  puVar1 = local_60;
  if (local_58 != local_60) {
    puVar10 = local_58 + -0x10;
    pcVar5 = (code *)local_58[-0xf];
    puVar2 = puVar10;
    if (pcVar5 != (code *)0x0) {
      puVar2 = local_58 + -0xc;
      local_58[-0xe] = 0;
      local_58[-0xd] = 0;
      *puVar10 = 0;
      local_58[-0xf] = 0;
      local_58 = puVar10;
      (*pcVar5)(puVar2);
      puVar2 = local_58;
    }
    local_58 = puVar2;
    if (puVar10 != puVar1) {
      puVar2 = puVar9 + -0x20;
      pcVar5 = (code *)puVar9[-0x1f];
      local_58 = puVar2;
      if (pcVar5 != (code *)0x0) {
        puVar9[-0x1e] = 0;
        puVar9[-0x1d] = 0;
        *puVar2 = 0;
        puVar9[-0x1f] = 0;
        (*pcVar5)(puVar9 + -0x1c);
      }
      if (puVar2 != puVar1) {
        puVar2 = puVar9 + -0x30;
        pcVar5 = (code *)puVar9[-0x2f];
        local_58 = puVar2;
        if (pcVar5 != (code *)0x0) {
          puVar9[-0x2e] = 0;
          puVar9[-0x2d] = 0;
          *puVar2 = 0;
          puVar9[-0x2f] = 0;
          (*pcVar5)(puVar9 + -0x2c);
        }
        if (puVar2 != puVar1) {
          puVar2 = puVar9 + -0x40;
          pcVar5 = (code *)puVar9[-0x3f];
          local_58 = puVar2;
          if (pcVar5 != (code *)0x0) {
            puVar9[-0x3e] = 0;
            puVar9[-0x3d] = 0;
            *puVar2 = 0;
            puVar9[-0x3f] = 0;
            (*pcVar5)(puVar9 + -0x3c);
          }
          if (puVar2 != puVar1) {
            puVar2 = puVar9 + -0x50;
            pcVar5 = (code *)puVar9[-0x4f];
            local_58 = puVar2;
            if (pcVar5 != (code *)0x0) {
              puVar9[-0x4e] = 0;
              puVar9[-0x4d] = 0;
              *puVar2 = 0;
              puVar9[-0x4f] = 0;
              (*pcVar5)(puVar9 + -0x4c);
            }
            if (puVar2 != puVar1) {
              do {
                local_58 = puVar9 + -0x60;
                pcVar5 = (code *)puVar9[-0x5f];
                if (pcVar5 != (code *)0x0) {
                  puVar9[-0x5e] = 0;
                  puVar9[-0x5d] = 0;
                  *local_58 = 0;
                  puVar9[-0x5f] = 0;
                  (*pcVar5)(puVar9 + -0x5c);
                }
                puVar9 = puVar9 + -0x10;
              } while (puVar1 + 0x50 != puVar9);
            }
          }
        }
      }
    }
  }
  lVar12 = local_68;
  if (local_68 != 0) {
    lVar6 = local_50 - local_68;
    plVar11 = (long *)*plStack_48;
    uVar3 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,lVar6,0x10);
    }
    else {
      FUN_00c48fe8(plVar11,lVar12,lVar6,0x10);
    }
  }
  return;
}


