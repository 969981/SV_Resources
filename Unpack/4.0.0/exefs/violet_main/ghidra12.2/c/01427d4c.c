/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01427d4c; name: FUN_01427d4c
 */


ulong FUN_01427d4c(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined4 *local_70;
  undefined4 *local_68;
  long local_60;
  undefined8 *local_58;
  
  uVar9 = *(ulong *)(param_1 + 0x78);
  if (uVar9 != 0) {
    uVar11 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar5 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar7 = uVar9 - 1 & uVar5;
    }
    else if (uVar5 < uVar9) {
      uVar7 = uVar5;
    }
    else {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar5 / uVar9;
      }
      uVar7 = uVar5 - uVar7 * uVar9;
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x70) + uVar7 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (1 < uVar11) {
        do {
          uVar11 = plVar12[1];
          if (uVar11 == uVar5) {
            if (plVar12[2] == uVar5) goto LAB_01427e68;
          }
          else {
            if (uVar9 <= uVar11) {
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar11 / uVar9;
              }
              uVar11 = uVar11 - uVar3 * uVar9;
            }
            if (uVar11 != uVar7) goto LAB_01427e08;
          }
          plVar12 = (long *)*plVar12;
          uVar3 = 0;
          uVar11 = 0;
        } while (plVar12 != (long *)0x0);
        goto LAB_01427f28;
      }
      do {
        if (plVar12[1] == uVar5) {
          if (plVar12[2] == uVar5) goto LAB_01427e68;
        }
        else if ((plVar12[1] & uVar9 - 1) != uVar7) break;
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
LAB_01427e08:
  uVar3 = 0;
  uVar11 = 0;
  goto LAB_01427f28;
LAB_01427e68:
  puVar6 = *(undefined4 **)(param_1 + 0xd8);
  puVar13 = *(undefined4 **)(param_1 + 0xe0);
  puVar10 = puVar13;
  if ((long)puVar13 - (long)puVar6 != 0) {
    uVar9 = (long)puVar13 - (long)puVar6 >> 2;
    uVar11 = 0;
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    do {
      if ((int)puVar6[uVar11] < 0) {
        puVar6[uVar11] = (int)plVar12[6];
        goto LAB_01427f24;
      }
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
    puVar10 = puVar6;
  }
  puVar1 = (undefined8 *)(param_1 + 0xf0);
  if (*(undefined4 **)(param_1 + 0xe8) == puVar13) {
    uVar11 = *(ulong *)(param_1 + 0xf8);
    uVar5 = (long)puVar13 - (long)puVar10 >> 2;
    uVar9 = uVar5 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = (long)puVar13 - (long)puVar10 >> 1;
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    if (uVar11 >> 1 <= uVar5) {
      uVar9 = uVar11;
    }
    local_60 = 0;
    local_58 = puVar1;
    if (uVar9 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar9 << 2,4);
      if (lVar4 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    puVar13 = (undefined4 *)(lVar4 + uVar5 * 4);
    local_60 = lVar4 + uVar9 * 4;
    uVar14 = *puVar1;
    local_70 = puVar13;
    local_68 = puVar13;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      *puVar13 = (int)plVar12[6];
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_014281c8;
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar14;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar13 = (int)plVar12[6];
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      puVar13 = local_68;
    }
    local_68 = puVar13 + 1;
    FUN_014281e0(puVar1,*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),&local_70);
    puVar13 = *(undefined4 **)(param_1 + 0xd8);
    lVar4 = *(long *)(param_1 + 0xe0);
    *(undefined4 **)(param_1 + 0xd8) = local_70;
    *(undefined4 **)(param_1 + 0xe0) = local_68;
    lVar8 = *(long *)(param_1 + 0xe8);
    *(long *)(param_1 + 0xe8) = local_60;
    local_68 = (undefined4 *)lVar4;
    if (lVar4 - (long)puVar13 != 0) {
      local_68 = (undefined4 *)
                 (lVar4 + ((lVar4 - (long)puVar13) - 4U >> 2 ^ 0xffffffffffffffff) * 4);
    }
    if (puVar13 != (undefined4 *)0x0) {
      lVar4 = lVar8 - (long)puVar13;
      plVar12 = (long *)*local_58;
      local_70 = puVar13;
      local_60 = lVar8;
      uVar9 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar13,lVar4,4);
      }
      else {
        FUN_00c48fe8(plVar12,puVar13,lVar4,4);
      }
    }
    puVar13 = *(undefined4 **)(param_1 + 0xe0);
  }
  else {
    uVar14 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      *puVar13 = (int)plVar12[6];
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_014281c8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar14;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar13 = (int)plVar12[6];
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    puVar13 = puVar13 + 1;
    *(undefined4 **)(param_1 + 0xe0) = puVar13;
  }
  uVar11 = ((long)puVar13 - *(long *)(param_1 + 0xd8) >> 2) + 0xffffffff;
LAB_01427f24:
  uVar3 = 1;
LAB_01427f28:
  return uVar3 | uVar11 << 0x20;
}


