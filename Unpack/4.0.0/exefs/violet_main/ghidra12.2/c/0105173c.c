/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0105173c; name: FUN_0105173c
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_0105173c(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  long *unaff_x26;
  long *plVar24;
  float fVar25;
  int local_cc;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  ulong local_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  long local_80;
  long local_78;
  long *local_70 [2];
  
  lVar20 = *param_1;
  if ((int)param_1[1] == 0) {
    plVar24 = (long *)*param_2;
    lVar21 = param_2[1];
    lVar23 = param_2[2];
    plVar6 = (long *)param_2[3];
    if (plVar6 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar6 + 0x18);
      plVar19 = plVar6;
LAB_01051bac:
      (*pcVar10)(plVar6);
      plVar6 = plVar19;
    }
  }
  else {
    FUN_00daf8b8(&local_c0,param_2,(int)param_1[1]);
    plVar19 = local_c0;
    plVar24 = (long *)PTR_DAT_047d8b70;
    if (local_c0 != (long *)0x0) {
      plVar24 = local_c0 + 6;
    }
    plVar24 = (long *)*plVar24;
    plVar6 = (long *)PTR_PTR_047d4508;
    if (local_c0 != (long *)0x0) {
      plVar6 = local_c0 + 7;
    }
    lVar21 = *plVar6;
    plVar6 = plVar19;
    if (local_c0 == (long *)0x0) {
      lVar23 = 0;
    }
    else {
      lVar23 = local_c0[8];
      (**(code **)(*local_c0 + 0x18))(local_c0);
      if (local_c0 != (long *)0x0) {
        pcVar10 = *(code **)(*local_c0 + 0x20);
        plVar6 = local_c0;
        goto LAB_01051bac;
      }
    }
  }
  plVar7 = *(long **)(lVar20 + 0x18);
  plVar19 = (long *)(lVar20 + 0x10);
  if (plVar7 != (long *)0x0) {
    uVar11 = (long)plVar7 - ((ulong)plVar7 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      plVar12 = (long *)((long)plVar7 - 1U & (ulong)plVar24);
    }
    else {
      plVar12 = plVar24;
      if (plVar7 <= plVar24) {
        uVar14 = 0;
        if (plVar7 != (long *)0x0) {
          uVar14 = (ulong)plVar24 / (ulong)plVar7;
        }
        plVar12 = (long *)((long)plVar24 - uVar14 * (long)plVar7);
      }
    }
    puVar17 = *(undefined8 **)(*plVar19 + (long)plVar12 * 8);
    if ((puVar17 != (undefined8 *)0x0) && (plVar22 = (long *)*puVar17, plVar22 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((long *)plVar22[1] == plVar24) {
            if ((long *)plVar22[2] == plVar24) goto LAB_01051d68;
          }
          else if ((long *)((ulong)plVar22[1] & (long)plVar7 - 1U) != plVar12) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          plVar15 = (long *)plVar22[1];
          if (plVar15 == plVar24) {
            if ((long *)plVar22[2] == plVar24) goto LAB_01051d68;
          }
          else {
            if (plVar7 <= plVar15) {
              uVar11 = 0;
              if (plVar7 != (long *)0x0) {
                uVar11 = (ulong)plVar15 / (ulong)plVar7;
              }
              plVar15 = (long *)((long)plVar15 - uVar11 * (long)plVar7);
            }
            if (plVar15 != plVar12) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
  local_c8 = *(long **)(lVar20 + 8);
  local_cc = 0;
  local_c0 = (long *)0x0;
  local_b8 = (long *)0x0;
  local_90 = 0;
  local_b0 = (long *)0x0;
  local_a0 = 0x276276276276276;
  local_98 = 0;
  local_a8 = local_c8;
  local_70[0] = local_c8;
  do {
    if (local_b8 < local_b0) {
      FUN_029b6f9c(&local_c0,local_70);
    }
    else {
      lVar13 = (long)local_b8 - (long)local_c0 >> 3;
      uVar11 = local_a0;
      if (0x7ffffffffffffffe < local_a0) {
        uVar11 = 0x7fffffffffffffff;
      }
      uVar14 = lVar13 * 0x4ec4ec4ec4ec4ec5 + 1;
      if (uVar11 < uVar14) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar8 = (long)local_b0 - (long)local_c0 >> 3;
      uVar16 = lVar8 * -0x6276276276276276;
      if (uVar14 <= uVar16) {
        uVar14 = uVar16;
      }
      if (uVar11 >> 1 <= (ulong)(lVar8 * 0x4ec4ec4ec4ec4ec5)) {
        uVar14 = uVar11;
      }
      if (uVar14 == 0) {
        unaff_x26 = (long *)0x0;
      }
      else {
        unaff_x26 = (long *)(**(code **)(*local_a8 + 0x10))(local_a8,uVar14 * 0x68,8);
        if (unaff_x26 == (long *)0x0) {
          (**(code **)(*local_a8 + 0xe8))();
        }
      }
      plVar7 = local_a8;
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      plVar12 = local_b8;
      if (lVar8 != 0) {
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01052160;
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar7;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        local_c8 = local_70[0];
      }
      plVar7 = unaff_x26 + lVar13;
      *plVar7 = 0;
      plVar7[1] = 0;
      unaff_x26[lVar13 + 2] = (long)local_c8;
      unaff_x26[lVar13 + 3] = 0x2e8ba2e8ba2e8ba;
      unaff_x26[lVar13 + 8] = 0x2e8ba2e8ba2e8ba;
      unaff_x26[lVar13 + 9] = 0;
      unaff_x26[lVar13 + 4] = 0;
      *(undefined4 *)(unaff_x26 + lVar13 + 5) = 0;
      *(undefined4 *)(unaff_x26 + lVar13 + 10) = 0;
      unaff_x26[lVar13 + 6] = 0;
      unaff_x26[lVar13 + 7] = (long)local_c8;
      unaff_x26[lVar13 + 0xb] = 0;
      *(undefined4 *)(unaff_x26 + lVar13 + 0xc) = 0x3f800000;
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      if (local_b8 == local_c0) {
        plVar12 = plVar7;
        plVar22 = local_c0;
      }
      else {
        lVar8 = 0;
        lVar13 = (long)local_c0 - (long)local_b8;
        do {
          plVar22 = local_a8;
          if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar5 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar5 != 0) {
            if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01052160;
            *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar22;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          }
          uVar18 = *(undefined8 *)((long)plVar12 + lVar8 + -0x68);
          *(undefined8 *)((long)plVar12 + lVar8 + -0x68) = 0;
          *(undefined8 *)((long)plVar7 + lVar8 + -0x68) = uVar18;
          memcpy((void *)((long)plVar7 + lVar8 + -0x60),(void *)((long)plVar12 + lVar8 + -0x60),0x28
                );
          *(undefined8 *)((long)plVar12 + lVar8 + -0x60) = 0;
          memcpy((void *)((long)plVar7 + lVar8 + -0x38),(void *)((long)plVar12 + lVar8 + -0x38),0x28
                );
          lVar9 = *(long *)((long)plVar12 + lVar8 + -0x10);
          *(long *)((long)plVar7 + lVar8 + -0x10) = lVar9;
          *(undefined4 *)((long)plVar7 + lVar8 + -8) = *(undefined4 *)((long)plVar12 + lVar8 + -8);
          if (lVar9 != 0) {
            plVar22 = (long *)((long)plVar7 + lVar8 + -0x38);
            uVar11 = *(ulong *)(*plVar22 + 8);
            uVar16 = *(ulong *)((long)plVar7 + lVar8 + -0x60);
            if ((uVar16 & uVar16 - 1) == 0) {
              uVar11 = uVar16 - 1 & uVar11;
            }
            else if (uVar16 <= uVar11) {
              uVar1 = 0;
              if (uVar16 != 0) {
                uVar1 = uVar11 / uVar16;
              }
              uVar11 = uVar11 - uVar1 * uVar16;
            }
            *(long **)(*(long *)((long)plVar7 + lVar8 + -0x68) + uVar11 * 8) = plVar22;
            *(undefined8 *)((long)plVar12 + lVar8 + -0x38) = 0;
            *(undefined8 *)((long)plVar12 + lVar8 + -0x10) = 0;
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
          }
          lVar8 = lVar8 + -0x68;
        } while (lVar13 != lVar8);
        plVar12 = (long *)((long)plVar7 + lVar8);
        plVar22 = local_b8;
      }
      plVar2 = local_b0;
      plVar15 = local_c0;
      local_b0 = unaff_x26 + uVar14 * 0xd;
      local_b8 = plVar7 + 0xd;
      bVar3 = plVar22 != local_c0;
      local_c0 = plVar12;
      if (((bVar3) && (FUN_00f720b4(plVar22 + -0xd), plVar22 + -0xd != plVar15)) &&
         (FUN_00f720b4(plVar22 + -0x1a), plVar22 + -0x1a != plVar15)) {
        do {
          FUN_00f720b4(plVar22 + -0x27);
          plVar22 = plVar22 + -0xd;
        } while (plVar15 + 0x1a != plVar22);
      }
      plVar7 = local_a8;
      if (plVar15 != (long *)0x0) {
        uVar11 = (**(code **)(*local_a8 + 0xf8))(local_a8);
        unaff_x26 = plVar7;
        if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,plVar15,(long)plVar2 - (long)plVar15,8);
        }
        else {
          FUN_00c48fe8(plVar7,plVar15,(long)plVar2 - (long)plVar15,8);
        }
      }
    }
    local_cc = local_cc + 1;
  } while (local_cc != 3);
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  plVar7 = *(long **)(lVar20 + 0x18);
  if (plVar7 != (long *)0x0) {
    uVar11 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar11) == 0) {
      unaff_x26 = (long *)(uVar11 & (ulong)plVar24);
      plVar22 = *(long **)(*plVar19 + (long)unaff_x26 * 8);
      if (plVar22 != (long *)0x0) {
        do {
          plVar22 = (long *)*plVar22;
          if ((plVar22 == (long *)0x0) ||
             ((long *)plVar22[1] != plVar24 && (long *)((ulong)plVar22[1] & uVar11) != unaff_x26))
          goto LAB_01051c34;
        } while ((long *)plVar22[2] != plVar24);
        goto LAB_01051d60;
      }
    }
    else {
      unaff_x26 = plVar24;
      if (plVar7 <= plVar24) {
        uVar11 = 0;
        if (plVar7 != (long *)0x0) {
          uVar11 = (ulong)plVar24 / (ulong)plVar7;
        }
        unaff_x26 = (long *)((long)plVar24 - uVar11 * (long)plVar7);
      }
      plVar22 = *(long **)(*plVar19 + (long)unaff_x26 * 8);
      if (plVar22 != (long *)0x0) {
        do {
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) goto LAB_01051c34;
          plVar12 = (long *)plVar22[1];
          if (plVar12 != plVar24) {
            if (plVar7 <= plVar12) {
              uVar11 = 0;
              if (plVar7 != (long *)0x0) {
                uVar11 = (ulong)plVar12 / (ulong)plVar7;
              }
              plVar12 = (long *)((long)plVar12 - uVar11 * (long)plVar7);
            }
            if (plVar12 != unaff_x26) goto LAB_01051c34;
          }
        } while ((long *)plVar22[2] != plVar24);
        goto LAB_01051d60;
      }
    }
  }
LAB_01051c34:
  plVar22 = (long *)(**(code **)(**(long **)(lVar20 + 0x48) + 0x10))
                              (*(long **)(lVar20 + 0x48),0x80,8);
  if (plVar22 == (long *)0x0) {
    (**(code **)(**(long **)(lVar20 + 0x48) + 0xe8))();
  }
  uVar18 = *(undefined8 *)(lVar20 + 0x48);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar13 != 0) {
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_01052160:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar18;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  }
  plVar22[2] = (long)plVar24;
  plVar22[3] = lVar21;
  plVar22[4] = lVar23;
  plVar22[5] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar22[6] = 0;
  plVar22[0xb] = local_98;
  plVar22[0xc] = CONCAT44(uStack_8c,local_90);
  plVar22[9] = (long)local_a8;
  plVar22[10] = local_a0;
  plVar22[6] = (long)local_c0;
  plVar22[7] = (long)local_b8;
  plVar22[8] = (long)local_b0;
  local_c0 = (long *)0x0;
  local_b8 = (long *)0x0;
  local_b0 = (long *)0x0;
  plVar22[0xd] = local_88;
  plVar22[0xe] = local_80;
  plVar22[0xf] = local_78;
  if (lVar13 != 0) {
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  *plVar22 = 0;
  plVar22[1] = (long)plVar24;
  fVar25 = (float)(*(long *)(lVar20 + 0x68) + 1);
  if ((plVar7 == (long *)0x0) || (*(float *)(lVar20 + 0x70) * (float)plVar7 < fVar25)) {
    uVar11 = (ulong)(plVar7 < (long *)0x3 || ((ulong)plVar7 & (long)plVar7 - 1U) != 0) |
             (long)plVar7 << 1;
    uVar14 = (ulong)(fVar25 / *(float *)(lVar20 + 0x70));
    if (uVar14 <= uVar11) {
      uVar14 = uVar11;
    }
    FUN_0105216c(plVar19,uVar14);
    plVar7 = *(long **)(lVar20 + 0x18);
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar7 - 1U & (ulong)plVar24);
    }
    else if (plVar24 < plVar7) {
      unaff_x26 = plVar24;
    }
    else {
      uVar11 = 0;
      if (plVar7 != (long *)0x0) {
        uVar11 = (ulong)plVar24 / (ulong)plVar7;
      }
      unaff_x26 = (long *)((long)plVar24 - uVar11 * (long)plVar7);
    }
  }
  plVar24 = *(long **)(*plVar19 + (long)unaff_x26 * 8);
  if (plVar24 == (long *)0x0) {
    plVar24 = (long *)(lVar20 + 0x40);
    *plVar22 = *plVar24;
    *plVar24 = (long)plVar22;
    *(long **)(*(long *)(lVar20 + 0x10) + (long)unaff_x26 * 8) = plVar24;
    if (*plVar22 != 0) {
      plVar24 = *(long **)(*plVar22 + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar24 = (long *)((ulong)plVar24 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar24) {
        uVar11 = 0;
        if (plVar7 != (long *)0x0) {
          uVar11 = (ulong)plVar24 / (ulong)plVar7;
        }
        plVar24 = (long *)((long)plVar24 - uVar11 * (long)plVar7);
      }
      plVar24 = (long *)(*plVar19 + (long)plVar24 * 8);
      goto LAB_01051d50;
    }
  }
  else {
    *plVar22 = *plVar24;
LAB_01051d50:
    *plVar24 = (long)plVar22;
  }
  *(long *)(lVar20 + 0x68) = *(long *)(lVar20 + 0x68) + 1;
LAB_01051d60:
  plVar12 = local_c0;
  plVar24 = local_c0;
  plVar19 = local_b8;
  plVar7 = local_a8;
  if (local_c0 != (long *)0x0) {
    while( true ) {
      local_c0 = plVar24;
      local_a8 = plVar7;
      if (plVar19 == plVar12) break;
      FUN_00f720b4(plVar19 + -0xd);
      plVar24 = local_c0;
      plVar19 = plVar19 + -0xd;
      plVar7 = local_a8;
    }
    local_b8 = plVar12;
    lVar20 = (long)local_b0 - (long)plVar24;
    uVar11 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar11 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar24,lVar20,8);
    }
    else {
      FUN_00c48fe8(plVar7,plVar24,lVar20,8);
    }
  }
LAB_01051d68:
  plVar22[(long)(int)param_1[1] + 0xd] = param_3;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  return plVar22;
}


