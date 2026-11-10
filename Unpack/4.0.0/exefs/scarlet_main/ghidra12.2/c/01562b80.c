/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01562b80; name: FUN_01562b80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01562b80(undefined1 *param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *unaff_x19;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  ulong *puVar23;
  ulong *puVar24;
  float fVar25;
  long *local_80;
  undefined8 *local_78;
  ulong local_70;
  undefined8 local_68;
  
  lVar14 = DAT_04840888;
  if (*param_2 == 0) {
    lVar18 = 0;
  }
  else {
    lVar10 = *(long *)(*param_2 + 0x10);
    lVar18 = 0;
    if (lVar10 != 0) {
      lVar18 = lVar10 + -0x28;
    }
  }
  FUN_00cebc38(&local_80,lVar18);
  plVar21 = local_80;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x60))(local_80);
  }
  puVar23 = (ulong *)plVar21[0x33];
  plVar1 = (long *)(lVar14 + 0x78);
  puVar24 = *(ulong **)(lVar14 + 0x80);
  if (puVar24 == (ulong *)0x0) {
LAB_01562c50:
    puVar19 = (undefined8 *)(lVar14 + 0xb0);
    plVar22 = (long *)(**(code **)(*(long *)*puVar19 + 0x10))((long *)*puVar19,0x80,8);
    if (plVar22 == (long *)0x0) {
      (**(code **)(*(long *)*puVar19 + 0xe8))();
    }
    local_70 = local_70 & 0xffffffffffffff00;
    uVar20 = *puVar19;
    local_80 = plVar22;
    local_78 = puVar19;
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      plVar22[2] = plVar21[0x33];
      memset(plVar22 + 3,0,0x68);
      FUN_015637dc(plVar22 + 3);
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_015636a4;
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar20;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      plVar22[2] = plVar21[0x33];
      memset(plVar22 + 3,0,0x68);
      FUN_015637dc(plVar22 + 3);
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    plVar22 = local_80;
    local_70 = CONCAT71(local_70._1_7_,1);
    *local_80 = 0;
    local_80[1] = (long)puVar23;
    fVar25 = (float)(*(long *)(lVar14 + 0xd0) + 1);
    if ((puVar24 == (ulong *)0x0) || (*(float *)(lVar14 + 0xd8) * (float)puVar24 < fVar25)) {
      uVar11 = (ulong)(puVar24 < (ulong *)0x3 || ((ulong)puVar24 & (long)puVar24 - 1U) != 0) |
               (long)puVar24 << 1;
      uVar16 = (ulong)(fVar25 / *(float *)(lVar14 + 0xd8));
      if (uVar16 <= uVar11) {
        uVar16 = uVar11;
      }
      if (uVar16 - 1 == 0) {
        uVar16 = 2;
      }
      else if ((uVar16 & uVar16 - 1) != 0) {
        uVar16 = std::__next_prime(uVar16);
      }
      uVar11 = *(ulong *)(lVar14 + 0x80);
      if (uVar11 < uVar16) {
        uVar17 = uVar16;
LAB_01562f68:
        FUN_01563a30(plVar1,uVar17);
      }
      else if (uVar16 < uVar11) {
        uVar17 = (ulong)((float)*(ulong *)(lVar14 + 0xd0) / *(float *)(lVar14 + 0xd8));
        if ((uVar11 < 3) ||
           (uVar15 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
           uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333),
           1 < (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar17 = std::__next_prime(uVar17);
        }
        else if (1 < uVar17) {
          uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
        }
        if (uVar17 <= uVar16) {
          uVar17 = uVar16;
        }
        if (uVar17 < uVar11) goto LAB_01562f68;
      }
      puVar24 = *(ulong **)(lVar14 + 0x80);
      if (((ulong)puVar24 & (long)puVar24 - 1U) == 0) {
        unaff_x19 = (ulong *)((long)puVar24 - 1U & (ulong)puVar23);
      }
      else if (puVar23 < puVar24) {
        unaff_x19 = puVar23;
      }
      else {
        uVar11 = 0;
        if (puVar24 != (ulong *)0x0) {
          uVar11 = (ulong)puVar23 / (ulong)puVar24;
        }
        unaff_x19 = (ulong *)((long)puVar23 - uVar11 * (long)puVar24);
      }
    }
    plVar13 = *(long **)(*plVar1 + (long)unaff_x19 * 8);
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)(lVar14 + 0xa8);
      *plVar22 = *plVar13;
      *plVar13 = (long)plVar22;
      *(long **)(*(long *)(lVar14 + 0x78) + (long)unaff_x19 * 8) = plVar13;
      if (*plVar22 != 0) {
        puVar23 = *(ulong **)(*plVar22 + 8);
        if (((ulong)puVar24 & (long)puVar24 - 1U) == 0) {
          puVar23 = (ulong *)((ulong)puVar23 & (long)puVar24 - 1U);
        }
        else if (puVar24 <= puVar23) {
          uVar11 = 0;
          if (puVar24 != (ulong *)0x0) {
            uVar11 = (ulong)puVar23 / (ulong)puVar24;
          }
          puVar23 = (ulong *)((long)puVar23 - uVar11 * (long)puVar24);
        }
        *(long **)(*plVar1 + (long)puVar23 * 8) = plVar22;
      }
    }
    else {
      *plVar22 = *plVar13;
      *plVar13 = (long)plVar22;
    }
    local_80 = (long *)0x0;
    *(long *)(lVar14 + 0xd0) = *(long *)(lVar14 + 0xd0) + 1;
    FUN_015636a8(&local_80);
  }
  else {
    uVar11 = (long)puVar24 - 1;
    if (((ulong)puVar24 & uVar11) == 0) {
      unaff_x19 = (ulong *)(uVar11 & (ulong)puVar23);
      plVar22 = *(long **)(*plVar1 + (long)unaff_x19 * 8);
      if (plVar22 == (long *)0x0) goto LAB_01562c50;
      do {
        plVar22 = (long *)*plVar22;
        if ((plVar22 == (long *)0x0) ||
           ((ulong *)plVar22[1] != puVar23 && (ulong *)((ulong)plVar22[1] & uVar11) != unaff_x19))
        goto LAB_01562c50;
      } while ((ulong *)plVar22[2] != puVar23);
    }
    else {
      unaff_x19 = puVar23;
      if (puVar24 <= puVar23) {
        uVar11 = 0;
        if (puVar24 != (ulong *)0x0) {
          uVar11 = (ulong)puVar23 / (ulong)puVar24;
        }
        unaff_x19 = (ulong *)((long)puVar23 - uVar11 * (long)puVar24);
      }
      plVar22 = *(long **)(*plVar1 + (long)unaff_x19 * 8);
      if (plVar22 == (long *)0x0) goto LAB_01562c50;
      do {
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) goto LAB_01562c50;
        puVar12 = (ulong *)plVar22[1];
        if (puVar12 != puVar23) {
          if (puVar24 <= puVar12) {
            uVar11 = 0;
            if (puVar24 != (ulong *)0x0) {
              uVar11 = (ulong)puVar12 / (ulong)puVar24;
            }
            puVar12 = (ulong *)((long)puVar12 - uVar11 * (long)puVar24);
          }
          if (puVar12 != unaff_x19) goto LAB_01562c50;
        }
      } while ((ulong *)plVar22[2] != puVar23);
    }
  }
  uVar11 = *(ulong *)(lVar18 + 0x368);
  plVar1 = plVar22 + 3;
  uVar16 = plVar22[4];
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar15 = uVar16 - 1 & uVar11;
    }
    else if (uVar11 < uVar16) {
      uVar15 = uVar11;
    }
    else {
      uVar15 = 0;
      if (uVar16 != 0) {
        uVar15 = uVar11 / uVar16;
      }
      uVar15 = uVar11 - uVar15 * uVar16;
    }
    puVar23 = *(ulong **)(*plVar1 + uVar15 * 8);
    if ((puVar23 != (ulong *)0x0) && (unaff_x19 = (ulong *)*puVar23, unaff_x19 != (ulong *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (unaff_x19[1] == uVar11) {
            if (unaff_x19[2] == uVar11) goto LAB_01563454;
          }
          else if ((unaff_x19[1] & uVar16 - 1) != uVar15) break;
          unaff_x19 = (ulong *)*unaff_x19;
        } while (unaff_x19 != (ulong *)0x0);
      }
      else {
        do {
          uVar17 = unaff_x19[1];
          if (uVar17 == uVar11) {
            if (unaff_x19[2] == uVar11) {
LAB_01563454:
              FUN_00ca1a48(unaff_x19 + 4,param_2);
              *param_1 = 0;
              *(ulong *)(param_1 + 8) = unaff_x19[3];
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined8 *)(param_1 + 0x18) = 0;
              FUN_00ca1a48(param_1 + 0x10,unaff_x19 + 4);
              *param_1 = 1;
              return;
            }
          }
          else {
            if (uVar16 <= uVar17) {
              uVar8 = 0;
              if (uVar16 != 0) {
                uVar8 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar8 * uVar16;
            }
            if (uVar17 != uVar15) break;
          }
          unaff_x19 = (ulong *)*unaff_x19;
        } while (unaff_x19 != (ulong *)0x0);
      }
    }
  }
  plVar13 = *(long **)(lVar14 + 0x40);
  if (plVar13 == *(long **)(lVar14 + 0x48)) {
LAB_01562ef4:
    *param_1 = 0;
    return;
  }
  lVar10 = plVar21[0x33];
  plVar21 = (long *)0x0;
  do {
    if ((*plVar13 == lVar10) && (plVar13[1] == uVar11)) goto LAB_01562e60;
    plVar4 = plVar13;
    if (plVar21 != (long *)0x0 || *plVar13 != 0) {
      plVar4 = plVar21;
    }
    plVar13 = plVar13 + 0x40;
    plVar21 = plVar4;
  } while (*(long **)(lVar14 + 0x48) != plVar13);
  if (plVar4 == (long *)0x0) goto LAB_01562ef4;
  lVar10 = *plVar4;
  plVar13 = plVar4;
LAB_01562e60:
  if (lVar10 == 0) {
    memset(plVar13,0,0x200);
    *(undefined2 *)(plVar13 + 6) = 0xffff;
    *(undefined1 *)((long)plVar13 + 0x32) = 0xff;
    *(undefined1 *)((long)plVar13 + 0x34) = 0xff;
    *(undefined2 *)((long)plVar13 + 0x36) = 0xffff;
    if (lVar18 == 0) {
      lVar14 = _DAT_03cabe50;
      lVar10 = _UNK_03cabe58;
    }
    else {
      FUN_00cebc38(&local_80,lVar18);
      *plVar13 = local_80[0x33];
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x60))();
      }
      plVar13[1] = *(long *)(lVar18 + 0x368);
      lVar14 = *(long *)(lVar18 + 0xe0);
      plVar13[3] = *(long *)(lVar18 + 0xe8);
      plVar13[2] = lVar14;
      lVar10 = *(long *)(lVar18 + 0xd8);
      lVar14 = *(long *)(lVar18 + 0xd0);
    }
    plVar13[5] = lVar10;
    plVar13[4] = lVar14;
  }
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_80 = plVar13;
  FUN_00ca1a48(&local_78,param_2);
  puVar23 = *(ulong **)(lVar18 + 0x368);
  puVar24 = (ulong *)plVar22[4];
  if (puVar24 != (ulong *)0x0) {
    uVar11 = (long)puVar24 - 1;
    if (((ulong)puVar24 & uVar11) == 0) {
      unaff_x19 = (ulong *)(uVar11 & (ulong)puVar23);
      plVar21 = *(long **)(*plVar1 + (long)unaff_x19 * 8);
      if (plVar21 != (long *)0x0) {
        do {
          plVar21 = (long *)*plVar21;
          if ((plVar21 == (long *)0x0) ||
             ((ulong *)plVar21[1] != puVar23 && (ulong *)((ulong)plVar21[1] & uVar11) != unaff_x19))
          goto LAB_015630b0;
        } while ((ulong *)plVar21[2] != puVar23);
        goto LAB_015631a4;
      }
    }
    else {
      unaff_x19 = puVar23;
      if (puVar24 <= puVar23) {
        uVar11 = 0;
        if (puVar24 != (ulong *)0x0) {
          uVar11 = (ulong)puVar23 / (ulong)puVar24;
        }
        unaff_x19 = (ulong *)((long)puVar23 - uVar11 * (long)puVar24);
      }
      plVar21 = *(long **)(*plVar1 + (long)unaff_x19 * 8);
      if (plVar21 != (long *)0x0) {
        do {
          plVar21 = (long *)*plVar21;
          if (plVar21 == (long *)0x0) goto LAB_015630b0;
          puVar12 = (ulong *)plVar21[1];
          if (puVar12 != puVar23) {
            if (puVar24 <= puVar12) {
              uVar11 = 0;
              if (puVar24 != (ulong *)0x0) {
                uVar11 = (ulong)puVar12 / (ulong)puVar24;
              }
              puVar12 = (ulong *)((long)puVar12 - uVar11 * (long)puVar24);
            }
            if (puVar12 != unaff_x19) goto LAB_015630b0;
          }
        } while ((ulong *)plVar21[2] != puVar23);
        goto LAB_015631a4;
      }
    }
  }
LAB_015630b0:
  plVar21 = (long *)(**(code **)(*(long *)plVar22[10] + 0x10))((long *)plVar22[10],0x30,8);
  if (plVar21 == (long *)0x0) {
    (**(code **)(*(long *)plVar22[10] + 0xe8))();
  }
  lVar14 = plVar22[10];
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar10 != 0) {
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_015636a4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar14;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  }
  plVar21[2] = *(long *)(lVar18 + 0x368);
  plVar21[4] = 0;
  plVar21[5] = 0;
  plVar21[3] = (long)local_80;
  FUN_00ca1ea4(plVar21 + 4,&local_78);
  if (lVar10 != 0) {
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  *plVar21 = 0;
  plVar21[1] = (long)puVar23;
  if ((puVar24 == (ulong *)0x0) ||
     (*(float *)(plVar22 + 0xf) * (float)puVar24 < (float)(plVar22[0xe] + 1))) {
    uVar11 = (ulong)(puVar24 < (ulong *)0x3 || ((ulong)puVar24 & (long)puVar24 - 1U) != 0) |
             (long)puVar24 << 1;
    uVar16 = (ulong)((float)(plVar22[0xe] + 1) / *(float *)(plVar22 + 0xf));
    if (uVar16 <= uVar11) {
      uVar16 = uVar11;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
      uVar16 = std::__next_prime(uVar16);
    }
    uVar11 = plVar22[4];
    if (uVar11 < uVar16) {
      uVar17 = uVar16;
LAB_01563228:
      FUN_01563d74(plVar1,uVar17);
    }
    else if (uVar16 < uVar11) {
      uVar17 = (ulong)((float)(ulong)plVar22[0xe] / *(float *)(plVar22 + 0xf));
      if ((uVar11 < 3) ||
         (uVar15 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333),
         1 < (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar17 = std::__next_prime(uVar17);
      }
      else if (1 < uVar17) {
        uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
      }
      if (uVar17 <= uVar16) {
        uVar17 = uVar16;
      }
      if (uVar17 < uVar11) goto LAB_01563228;
    }
    puVar24 = (ulong *)plVar22[4];
    if (((ulong)puVar24 & (long)puVar24 - 1U) == 0) {
      unaff_x19 = (ulong *)((long)puVar24 - 1U & (ulong)puVar23);
    }
    else if (puVar23 < puVar24) {
      unaff_x19 = puVar23;
    }
    else {
      uVar11 = 0;
      if (puVar24 != (ulong *)0x0) {
        uVar11 = (ulong)puVar23 / (ulong)puVar24;
      }
      unaff_x19 = (ulong *)((long)puVar23 - uVar11 * (long)puVar24);
    }
  }
  plVar13 = *(long **)(*plVar1 + (long)unaff_x19 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = plVar22 + 9;
    *plVar21 = *plVar13;
    *plVar13 = (long)plVar21;
    *(long **)(plVar22[3] + (long)unaff_x19 * 8) = plVar13;
    if (*plVar21 != 0) {
      puVar23 = *(ulong **)(*plVar21 + 8);
      if (((ulong)puVar24 & (long)puVar24 - 1U) == 0) {
        puVar23 = (ulong *)((ulong)puVar23 & (long)puVar24 - 1U);
      }
      else if (puVar24 <= puVar23) {
        uVar11 = 0;
        if (puVar24 != (ulong *)0x0) {
          uVar11 = (ulong)puVar23 / (ulong)puVar24;
        }
        puVar23 = (ulong *)((long)puVar23 - uVar11 * (long)puVar24);
      }
      plVar13 = (long *)(*plVar1 + (long)puVar23 * 8);
      goto LAB_01563194;
    }
  }
  else {
    *plVar21 = *plVar13;
LAB_01563194:
    *plVar13 = (long)plVar21;
  }
  plVar22[0xe] = plVar22[0xe] + 1;
LAB_015631a4:
  puVar19 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_78 + 3);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_68 = *puVar19;
        FUN_00c44438(lVar14 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *param_1 = 0;
  lVar14 = plVar21[3];
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 8) = lVar14;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00ca1a48(param_1 + 0x10,plVar21 + 4);
  *param_1 = 1;
  return;
}


