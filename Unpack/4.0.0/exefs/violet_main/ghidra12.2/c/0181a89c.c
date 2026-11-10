/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0181a89c; name: FUN_0181a89c
 */


ulong FUN_0181a89c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *plStack_58;
  
  while( true ) {
    lVar7 = param_1[0xf] - param_1[0xe];
    if (lVar7 == 0) break;
    uVar5 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar7 + param_1[0xe] + -8;
    uVar12 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar12) =
         *(ulong *)(param_1[7] + uVar12) & (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar5 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar1 = (undefined8 *)(*param_1 + uVar5 * 0x80);
      pcVar9 = (code *)puVar1[1];
      if (pcVar9 != (code *)0x0) {
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        (*pcVar9)(puVar1 + 4);
      }
      puVar1[4] = *param_2;
      *puVar1 = &LAB_00b59310;
      puVar1[1] = FUN_00b5931c;
      puVar1[2] = &LAB_00b59320;
      puVar1[3] = &LAB_00b5932c;
      if ((ulong)param_1[0x15] <= uVar5) {
        param_1[0x15] = uVar5 + 1;
      }
      return uVar5;
    }
  }
  uVar12 = param_1[1] - *param_1 >> 7;
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_0181ae9c(param_1,param_2);
  }
  else {
    uVar10 = param_1[4];
    uVar5 = uVar12 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1;
    uVar8 = lVar7 >> 6;
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    plVar15 = param_1 + 3;
    local_60 = 0;
    if (uVar10 >> 1 <= (ulong)(lVar7 >> 7)) {
      uVar5 = uVar10;
    }
    plStack_58 = plVar15;
    if (uVar5 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar15 + 0x10))((long *)*plVar15,uVar5 << 7,0x10);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar15 + 0xe8))();
      }
    }
    puVar1 = (undefined8 *)(local_78 + uVar12 * 0x80);
    local_60 = local_78 + uVar5 * 0x80;
    lVar7 = *plVar15;
    local_70 = puVar1;
    local_68 = puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar11 = *param_2;
    puVar1[3] = &LAB_00b5932c;
    puVar1[4] = uVar11;
    puVar1[2] = &LAB_00b59320;
    *puVar1 = &LAB_00b59310;
    puVar1[1] = FUN_00b5931c;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    local_68 = local_68 + 0x10;
    FUN_0181acfc(param_1,&local_78);
    puVar13 = local_68;
    puVar1 = local_70;
    if (local_68 != local_70) {
      puVar14 = local_68 + -0x10;
      pcVar9 = (code *)local_68[-0xf];
      puVar4 = puVar14;
      if (pcVar9 != (code *)0x0) {
        puVar4 = local_68 + -0xc;
        local_68[-0xe] = 0;
        local_68[-0xd] = 0;
        *puVar14 = 0;
        local_68[-0xf] = 0;
        local_68 = puVar14;
        (*pcVar9)(puVar4);
        puVar4 = local_68;
      }
      local_68 = puVar4;
      if (puVar14 != puVar1) {
        puVar4 = puVar13 + -0x20;
        pcVar9 = (code *)puVar13[-0x1f];
        local_68 = puVar4;
        if (pcVar9 != (code *)0x0) {
          puVar13[-0x1e] = 0;
          puVar13[-0x1d] = 0;
          *puVar4 = 0;
          puVar13[-0x1f] = 0;
          (*pcVar9)(puVar13 + -0x1c);
        }
        if (puVar4 != puVar1) {
          puVar4 = puVar13 + -0x30;
          pcVar9 = (code *)puVar13[-0x2f];
          local_68 = puVar4;
          if (pcVar9 != (code *)0x0) {
            puVar13[-0x2e] = 0;
            puVar13[-0x2d] = 0;
            *puVar4 = 0;
            puVar13[-0x2f] = 0;
            (*pcVar9)(puVar13 + -0x2c);
          }
          if (puVar4 != puVar1) {
            puVar4 = puVar13 + -0x40;
            pcVar9 = (code *)puVar13[-0x3f];
            local_68 = puVar4;
            if (pcVar9 != (code *)0x0) {
              puVar13[-0x3e] = 0;
              puVar13[-0x3d] = 0;
              *puVar4 = 0;
              puVar13[-0x3f] = 0;
              (*pcVar9)(puVar13 + -0x3c);
            }
            if (puVar4 != puVar1) {
              puVar4 = puVar13 + -0x50;
              pcVar9 = (code *)puVar13[-0x4f];
              local_68 = puVar4;
              if (pcVar9 != (code *)0x0) {
                puVar13[-0x4e] = 0;
                puVar13[-0x4d] = 0;
                *puVar4 = 0;
                puVar13[-0x4f] = 0;
                (*pcVar9)(puVar13 + -0x4c);
              }
              if (puVar4 != puVar1) {
                do {
                  local_68 = puVar13 + -0x60;
                  pcVar9 = (code *)puVar13[-0x5f];
                  if (pcVar9 != (code *)0x0) {
                    puVar13[-0x5e] = 0;
                    puVar13[-0x5d] = 0;
                    *local_68 = 0;
                    puVar13[-0x5f] = 0;
                    (*pcVar9)(puVar13 + -0x5c);
                  }
                  puVar13 = puVar13 + -0x10;
                } while (puVar1 + 0x50 != puVar13);
              }
            }
          }
        }
      }
    }
    lVar7 = local_78;
    if (local_78 != 0) {
      lVar3 = local_60 - local_78;
      plVar15 = (long *)*plStack_58;
      uVar5 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar7,lVar3,0x10);
      }
      else {
        FUN_00c48fe8(plVar15,lVar7,lVar3,0x10);
      }
    }
  }
  param_1[0x15] = uVar12 + 1;
  return uVar12;
}


