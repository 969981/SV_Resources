/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d35b48; name: FUN_00d35b48
 */


void FUN_00d35b48(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  byte bVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 *puVar27;
  long *plVar28;
  long *plVar29;
  undefined1 *puVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  float fVar33;
  undefined1 *local_b8;
  long *local_a8;
  ulong local_a0;
  long *local_98;
  undefined1 *local_90;
  byte *local_88;
  size_t local_80;
  long *local_78;
  long *local_70;
  long *plStack_68;
  
  lVar14 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
  uVar10 = FUN_00d35890(param_4);
  uVar10 = FUN_00d36c34(param_2,&DAT_00003010 + lVar14,uVar10,0);
  plVar26 = *(long **)(param_1 + 8);
  puVar11 = (undefined8 *)(**(code **)(*plVar26 + 0x10))(plVar26,0x40,8);
  if (puVar11 == (undefined8 *)0x0) {
    plVar26 = (long *)0x0;
    local_a0 = 0;
    uVar10 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00d36a6c;
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar26;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    *puVar11 = uVar10;
    uVar32 = *param_4;
    uVar3 = param_4[1];
    uVar10 = 8;
    uVar2 = param_4[2];
    uVar4 = param_4[3];
    *(undefined1 *)((long)puVar11 + 0x32) = 0;
    puVar11[1] = uVar32;
    puVar11[2] = uVar3;
    puVar11[3] = uVar2;
    puVar11[4] = uVar4;
    puVar11[5] = 0x3f800000;
    *(undefined2 *)(puVar11 + 6) = 1;
    puVar11[7] = 0;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    local_a0 = 0x40;
  }
  puVar11[7] = param_1 + 0x642;
  local_88 = (byte *)FUN_00d35890(param_4);
  if (local_88 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar18 = *(undefined1 **)PTR_DAT_047d3e30;
    local_88 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_80 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_78 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    local_90 = puVar18;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  else {
    puVar18 = &DAT_cbf29ce484222645;
    local_80 = strlen((char *)local_88);
    bVar6 = *local_88;
    pbVar19 = local_88;
    while (bVar6 != 0) {
      pbVar19 = pbVar19 + 1;
      puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar19;
    }
    local_78 = (long *)0x0;
    local_90 = puVar18;
  }
  if (param_3 != 0) {
    lVar14 = FUN_00d36bcc(param_3,0x14);
    FUN_00d370a8(*(undefined8 *)(lVar14 + 8),&local_90,puVar11);
    goto LAB_00d35cb4;
  }
  puVar30 = *(undefined1 **)(param_1 + 600);
  plVar12 = (long *)(param_1 + 0x250);
  if (puVar30 == (undefined1 *)0x0) {
LAB_00d36348:
    plVar29 = (long *)(**(code **)(**(long **)(param_1 + 0x288) + 0x10))
                                (*(long **)(param_1 + 0x288),0x38,8);
    if (plVar29 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x288) + 0xe8))();
    }
    uVar32 = *(undefined8 *)(param_1 + 0x288);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar14 != 0) {
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00d36a6c;
      *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar32;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    }
    plVar29[2] = (long)local_90;
    plVar29[3] = (long)local_88;
    plVar29[4] = local_80;
    plVar29[5] = (long)local_78;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
    plVar29[6] = (long)puVar11;
    if (lVar14 != 0) {
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    }
    *plVar29 = 0;
    plVar29[1] = (long)puVar18;
    fVar33 = (float)(*(long *)(param_1 + 0x2a8) + 1);
    if ((puVar30 == (undefined1 *)0x0) || (*(float *)(param_1 + 0x2b0) * (float)puVar30 < fVar33)) {
      uVar15 = (ulong)(puVar30 < (undefined1 *)0x3 || ((ulong)puVar30 & (ulong)(puVar30 + -1)) != 0)
               | (long)puVar30 << 1;
      uVar21 = (ulong)(fVar33 / *(float *)(param_1 + 0x2b0));
      if (uVar21 <= uVar15) {
        uVar21 = uVar15;
      }
      FUN_00d36cf0(plVar12,uVar21);
      puVar30 = *(undefined1 **)(param_1 + 600);
      if (((ulong)puVar30 & (ulong)(puVar30 + -1)) == 0) {
        local_b8 = (undefined1 *)((ulong)(puVar30 + -1) & (ulong)puVar18);
      }
      else {
        local_b8 = puVar18;
        if (puVar30 <= puVar18) {
          uVar15 = 0;
          if (puVar30 != (undefined1 *)0x0) {
            uVar15 = (ulong)puVar18 / (ulong)puVar30;
          }
          local_b8 = puVar18 + -(uVar15 * (long)puVar30);
        }
      }
    }
    plVar24 = *(long **)(*plVar12 + (long)local_b8 * 8);
    if (plVar24 == (long *)0x0) {
      *plVar29 = *(long *)(param_1 + 0x280);
      *(long **)(param_1 + 0x280) = plVar29;
      *(long *)(*(long *)(param_1 + 0x250) + (long)local_b8 * 8) = param_1 + 0x280;
      if (*plVar29 != 0) {
        puVar18 = *(undefined1 **)(*plVar29 + 8);
        if (((ulong)puVar30 & (ulong)(puVar30 + -1)) == 0) {
          puVar18 = (undefined1 *)((ulong)puVar18 & (ulong)(puVar30 + -1));
        }
        else if (puVar30 <= puVar18) {
          uVar15 = 0;
          if (puVar30 != (undefined1 *)0x0) {
            uVar15 = (ulong)puVar18 / (ulong)puVar30;
          }
          puVar18 = puVar18 + -(uVar15 * (long)puVar30);
        }
        plVar24 = (long *)(*plVar12 + (long)puVar18 * 8);
        goto LAB_00d36478;
      }
    }
    else {
      *plVar29 = *plVar24;
LAB_00d36478:
      *plVar24 = (long)plVar29;
    }
    *(long *)(param_1 + 0x2a8) = *(long *)(param_1 + 0x2a8) + 1;
  }
  else {
    puVar16 = puVar30 + -1;
    if (((ulong)puVar30 & (ulong)puVar16) == 0) {
      local_b8 = (undefined1 *)((ulong)puVar16 & (ulong)puVar18);
      plVar29 = *(long **)(*plVar12 + (long)local_b8 * 8);
      if (plVar29 == (long *)0x0) goto LAB_00d36348;
      do {
        plVar29 = (long *)*plVar29;
        if ((plVar29 == (long *)0x0) ||
           ((undefined1 *)plVar29[1] != puVar18 &&
            (undefined1 *)((ulong)plVar29[1] & (ulong)puVar16) != local_b8)) goto LAB_00d36348;
      } while ((undefined1 *)plVar29[2] != puVar18);
    }
    else {
      local_b8 = puVar18;
      if (puVar30 <= puVar18) {
        uVar15 = 0;
        if (puVar30 != (undefined1 *)0x0) {
          uVar15 = (ulong)puVar18 / (ulong)puVar30;
        }
        local_b8 = puVar18 + -(uVar15 * (long)puVar30);
      }
      plVar29 = *(long **)(*plVar12 + (long)local_b8 * 8);
      if (plVar29 == (long *)0x0) goto LAB_00d36348;
      do {
        plVar29 = (long *)*plVar29;
        if (plVar29 == (long *)0x0) goto LAB_00d36348;
        puVar16 = (undefined1 *)plVar29[1];
        if (puVar16 != puVar18) {
          if (puVar30 <= puVar16) {
            uVar15 = 0;
            if (puVar30 != (undefined1 *)0x0) {
              uVar15 = (ulong)puVar16 / (ulong)puVar30;
            }
            puVar16 = puVar16 + -(uVar15 * (long)puVar30);
          }
          if (puVar16 != local_b8) goto LAB_00d36348;
        }
      } while ((undefined1 *)plVar29[2] != puVar18);
    }
  }
LAB_00d35cb4:
  FUN_00d36e00(&local_98,param_3,&local_90);
  plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0x720) + 0x10))
                              (*(long **)(param_1 + 0x720),0x38,8);
  if (plVar12 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x720) + 0xe8))();
  }
  uVar32 = *(undefined8 *)(param_1 + 0x720);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  plVar29 = local_98;
  if (lVar14 != 0) {
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00d36a6c;
    *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar32;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  }
  plVar24 = (long *)PTR_DAT_047d8b70;
  if (local_98 != (long *)0x0) {
    plVar24 = local_98 + 6;
  }
  plVar28 = (long *)PTR_PTR_047d4508;
  if (local_98 != (long *)0x0) {
    plVar28 = local_98 + 7;
  }
  lVar20 = *plVar28;
  if (local_98 == (long *)0x0) {
    lVar22 = 0;
  }
  else {
    lVar22 = local_98[8];
  }
  plVar12[2] = *plVar24;
  plVar12[3] = lVar20;
  plVar12[4] = lVar22;
  plVar12[5] = 0;
  if (local_98 == (long *)0x0) {
    plVar12[5] = 0;
  }
  else {
    (**(code **)(*local_98 + 0x18))(local_98);
    plVar24 = (long *)plVar12[5];
    plVar12[5] = (long)plVar29;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x20))();
    }
  }
  plVar12[6] = (long)puVar11;
  if (lVar14 != 0) {
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  }
  uVar21 = plVar12[2];
  *plVar12 = 0;
  plVar12[1] = uVar21;
  uVar15 = *(ulong *)(param_1 + 0x6f0);
  plVar29 = (long *)(param_1 + 0x6e8);
  if (uVar15 == 0) {
LAB_00d35f14:
    fVar33 = (float)(*(long *)(param_1 + 0x740) + 1);
    if ((uVar15 == 0) || (*(float *)(param_1 + 0x748) * (float)uVar15 < fVar33)) {
      uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
      uVar21 = (ulong)(fVar33 / *(float *)(param_1 + 0x748));
      if (uVar21 <= uVar15) {
        uVar21 = uVar15;
      }
      FUN_00d36cf0(plVar29,uVar21);
      uVar15 = *(ulong *)(param_1 + 0x6f0);
      uVar21 = plVar12[1];
    }
    uVar23 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar21 = uVar15 - 1 & uVar21;
    }
    else if (uVar15 <= uVar21) {
      uVar25 = 0;
      if (uVar15 != 0) {
        uVar25 = uVar21 / uVar15;
      }
      uVar21 = uVar21 - uVar25 * uVar15;
    }
    plVar24 = *(long **)(*plVar29 + uVar21 * 8);
    if (plVar24 == (long *)0x0) {
      *plVar12 = *(long *)(param_1 + 0x718);
      *(long **)(param_1 + 0x718) = plVar12;
      *(long *)(*(long *)(param_1 + 0x6e8) + uVar21 * 8) = param_1 + 0x718;
      if (*plVar12 != 0) {
        uVar21 = *(ulong *)(*plVar12 + 8);
        if (uVar23 < 2) {
          uVar21 = uVar21 & uVar15 - 1;
        }
        else if (uVar15 <= uVar21) {
          uVar23 = 0;
          if (uVar15 != 0) {
            uVar23 = uVar21 / uVar15;
          }
          uVar21 = uVar21 - uVar23 * uVar15;
        }
        plVar24 = (long *)(*plVar29 + uVar21 * 8);
        goto LAB_00d36018;
      }
    }
    else {
      *plVar12 = *plVar24;
LAB_00d36018:
      *plVar24 = (long)plVar12;
    }
    *(long *)(param_1 + 0x740) = *(long *)(param_1 + 0x740) + 1;
  }
  else {
    uVar23 = uVar15 - 1;
    if ((uVar15 & uVar23) == 0) {
      plVar24 = *(long **)(*plVar29 + (uVar23 & uVar21) * 8);
      if (plVar24 == (long *)0x0) goto LAB_00d35f14;
      do {
        plVar24 = (long *)*plVar24;
        if ((plVar24 == (long *)0x0) || ((plVar24[1] & uVar23) != (uVar23 & uVar21)))
        goto LAB_00d35f14;
      } while (plVar24[2] != uVar21);
    }
    else {
      uVar23 = uVar21;
      if (uVar15 <= uVar21) {
        uVar23 = 0;
        if (uVar15 != 0) {
          uVar23 = uVar21 / uVar15;
        }
        uVar23 = uVar21 - uVar23 * uVar15;
      }
      plVar24 = *(long **)(*plVar29 + uVar23 * 8);
      if (plVar24 == (long *)0x0) goto LAB_00d35f14;
      do {
        plVar24 = (long *)*plVar24;
        if (plVar24 == (long *)0x0) goto LAB_00d35f14;
        uVar25 = plVar24[1];
        if (uVar15 <= uVar25) {
          uVar7 = 0;
          if (uVar15 != 0) {
            uVar7 = uVar25 / uVar15;
          }
          uVar25 = uVar25 - uVar7 * uVar15;
        }
        if (uVar25 != uVar23) goto LAB_00d35f14;
      } while (plVar24[2] != uVar21);
    }
    if (plVar12 != (long *)0x0) {
      if ((long *)plVar12[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar12[5] + 0x20))();
      }
      plVar29 = *(long **)(param_1 + 0x720);
      uVar15 = (**(code **)(*plVar29 + 0xf8))(plVar29);
      if (((uVar15 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar29 + 0x18))(plVar29,plVar12,0x38,8);
      }
      else {
        FUN_00c48fe8(plVar29,plVar12,0x38,8);
      }
    }
  }
  puVar27 = *(undefined8 **)(param_1 + 0x2c0);
  if (puVar27 < *(undefined8 **)(param_1 + 0x2c8)) {
    uVar32 = *(undefined8 *)(param_1 + 0x2d0);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar14 == 0) {
      *puVar27 = puVar11;
      puVar27[1] = plVar26;
      puVar27[2] = local_a0;
      puVar27[3] = uVar10;
    }
    else {
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00d36a6c;
      *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar32;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      *puVar27 = puVar11;
      puVar27[1] = plVar26;
      puVar27[2] = local_a0;
      puVar27[3] = uVar10;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x2c0) = puVar27 + 4;
  }
  else {
    uVar21 = *(ulong *)(param_1 + 0x2d8);
    lVar14 = (long)puVar27 - *(long *)(param_1 + 0x2b8) >> 5;
    uVar15 = lVar14 + 1;
    if (0x7ffffffffffffffe < uVar21) {
      uVar21 = 0x7fffffffffffffff;
    }
    if (uVar21 < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar20 = (long)*(undefined8 **)(param_1 + 0x2c8) - *(long *)(param_1 + 0x2b8);
    uVar23 = lVar20 >> 4;
    if (uVar15 <= uVar23) {
      uVar15 = uVar23;
    }
    if (uVar21 >> 1 <= (ulong)(lVar20 >> 5)) {
      uVar15 = uVar21;
    }
    if (uVar15 == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = (**(code **)(**(long **)(param_1 + 0x2d0) + 0x10))
                         (*(long **)(param_1 + 0x2d0),uVar15 << 5,8);
      if (lVar20 == 0) {
        (**(code **)(**(long **)(param_1 + 0x2d0) + 0xe8))();
      }
    }
    uVar32 = *(undefined8 *)(param_1 + 0x2d0);
    puVar27 = (undefined8 *)(lVar20 + lVar14 * 0x20);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar14 == 0) {
      *puVar27 = puVar11;
      puVar27[1] = plVar26;
      puVar27[2] = local_a0;
      puVar27[3] = uVar10;
    }
    else {
      if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_00d36a6c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar32;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      *puVar27 = puVar11;
      puVar27[1] = plVar26;
      puVar27[2] = local_a0;
      puVar27[3] = uVar10;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    }
    plVar26 = *(long **)(param_1 + 0x2b8);
    plVar12 = *(long **)(param_1 + 0x2c0);
    if (plVar12 == plVar26) {
      puVar11 = puVar27;
      plVar12 = plVar26;
    }
    else {
      puVar31 = puVar27;
      do {
        uVar10 = *(undefined8 *)(param_1 + 0x2d0);
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar14 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar14 != 0) {
          if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00d36a6c;
          *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar10;
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        }
        lVar22 = plVar12[-4];
        plVar12[-4] = 0;
        puVar31[-4] = lVar22;
        lVar22 = plVar12[-3];
        lVar17 = plVar12[-1];
        puVar31[-2] = plVar12[-2];
        puVar31[-1] = lVar17;
        puVar11 = puVar31 + -4;
        plVar12 = plVar12 + -4;
        puVar31[-3] = lVar22;
        if (lVar14 != 0) {
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
        }
        puVar31 = puVar11;
      } while (plVar26 != plVar12);
      plVar26 = *(long **)(param_1 + 0x2b8);
      plVar12 = *(long **)(param_1 + 0x2c0);
    }
    lVar14 = *(long *)(param_1 + 0x2c8);
    *(undefined8 **)(param_1 + 0x2b8) = puVar11;
    *(undefined8 **)(param_1 + 0x2c0) = puVar27 + 4;
    *(ulong *)(param_1 + 0x2c8) = lVar20 + uVar15 * 0x20;
    if (plVar12 != plVar26) {
      do {
        plVar29 = plVar12 + -4;
        lVar20 = *plVar29;
        *plVar29 = 0;
        if (lVar20 != 0) {
          FUN_00c4e600();
          FUN_00c4e600();
          lVar22 = FUN_00c4e600();
          iVar5 = *(int *)(lVar22 + 0x12c8);
          iVar9 = iVar5 + 1;
          *(int *)(lVar22 + 0x12c8) = iVar9;
          if (*(int *)(lVar22 + 0x12cc) <= iVar5) {
            *(int *)(lVar22 + 0x12cc) = iVar9;
          }
          plVar24 = (long *)plVar12[-3];
          lVar22 = plVar12[-2];
          lVar17 = plVar12[-1];
          uVar15 = (**(code **)(*plVar24 + 0xf8))(plVar24);
          if (((uVar15 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar24 + 0x18))(plVar24,lVar20,lVar22,lVar17);
          }
          else {
            FUN_00c48fe8(plVar24,lVar20,lVar22,lVar17);
          }
          lVar20 = FUN_00c4e600();
          iVar9 = *(int *)(lVar20 + 0x12c8) + -1;
          *(int *)(lVar20 + 0x12c8) = iVar9;
          if (iVar9 == 0) {
            plVar12 = (long *)FUN_00c4e600();
            if (plVar12[600] != 0) {
              local_70 = plVar12 + plVar12[600] * 3;
              plStack_68 = plVar12;
              FUN_00c4ea30(&plStack_68,&local_70);
              plVar28 = (long *)*plVar12;
              plVar24 = plVar12;
              if (plVar12[600] != 0) {
                plVar24 = plVar12 + plVar12[600] * 3;
              }
              if (plVar24 == plVar12) {
                local_a0 = 0;
                uVar15 = 0;
              }
              else {
                (**(code **)(*(long *)*plVar12 + 0xd0))();
                if ((long *)*plVar12 != plVar28) {
                  (**(code **)(*plVar28 + 0x100))(plVar28,plVar12,plVar12);
                  plVar28 = (long *)*plVar12;
                }
                plVar1 = plVar12 + 3;
                if (plVar24 == plVar1) {
                  local_a0 = 0;
                  uVar15 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  bVar8 = (long *)*plVar1 != plVar28;
                  if (bVar8) {
                    (**(code **)(*plVar28 + 0x100))(plVar28,plVar12,plVar12 + 3);
                    plVar28 = (long *)plVar12[3];
                  }
                  local_a0 = (ulong)bVar8;
                  plVar1 = plVar12 + 6;
                  if (plVar24 == plVar1) {
                    uVar15 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar28) {
                      (**(code **)(*plVar28 + 0x100))(plVar28,plVar12 + local_a0 * 3,plVar12 + 6);
                      plVar28 = (long *)plVar12[6];
                      local_a0 = 2;
                    }
                    plVar1 = plVar12 + 9;
                    if (plVar24 == plVar1) {
                      uVar15 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar28) {
                        (**(code **)(*plVar28 + 0x100))(plVar28,plVar12 + local_a0 * 3,plVar12 + 9);
                        plVar28 = (long *)plVar12[9];
                        local_a0 = 3;
                      }
                      plVar1 = plVar12 + 0xc;
                      if (plVar24 == plVar1) {
                        uVar15 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar28) {
                          (**(code **)(*plVar28 + 0x100))
                                    (plVar28,plVar12 + local_a0 * 3,plVar12 + 0xc);
                          plVar28 = (long *)plVar12[0xc];
                          local_a0 = 4;
                        }
                        plVar1 = plVar12 + 0xf;
                        if (plVar24 == plVar1) {
                          uVar15 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar1 + 0xd0))();
                          if ((long *)*plVar1 != plVar28) {
                            (**(code **)(*plVar28 + 0x100))
                                      (plVar28,plVar12 + local_a0 * 3,plVar12 + 0xf);
                            plVar28 = (long *)plVar12[0xf];
                            local_a0 = 5;
                          }
                          local_a8 = plVar12 + 0x12;
                          uVar15 = 6;
                          if (plVar24 != local_a8) {
                            do {
                              (**(code **)(*(long *)*local_a8 + 0xd0))();
                              if ((long *)*local_a8 != plVar28) {
                                (**(code **)(*plVar28 + 0x100))
                                          (plVar28,plVar12 + local_a0 * 3,local_a8);
                                plVar28 = (long *)*local_a8;
                                local_a0 = uVar15;
                              }
                              local_a8 = local_a8 + 3;
                              uVar15 = uVar15 + 1;
                            } while (plVar24 != local_a8);
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar28 + 0x100))(plVar28,plVar12 + local_a0 * 3,plVar12 + uVar15 * 3);
              plVar12[600] = 0;
            }
            *(undefined4 *)(lVar20 + 0x12cc) = 0;
          }
        }
        plVar12 = plVar29;
      } while (plVar29 != plVar26);
    }
    if (plVar26 != (long *)0x0) {
      plVar12 = *(long **)(param_1 + 0x2d0);
      lVar14 = lVar14 - (long)plVar26;
      uVar15 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar15 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,plVar26,lVar14,8);
      }
      else {
        FUN_00c48fe8(plVar12,plVar26,lVar14,8);
      }
    }
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return;
}


