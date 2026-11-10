/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6d820; name: FUN_00d6d820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d6d820(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  short sVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  undefined8 uVar30;
  undefined1 in_q3 [16];
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_b0;
  float fStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  uVar31 = in_q3._8_8_;
  uVar30 = in_q3._0_8_;
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  if (*(short *)(*(long *)(param_1 + 0x80) + 0x1a) == 0) {
    return;
  }
  lVar15 = *(long *)(param_1 + 0x80);
  if (lVar15 == 0) {
    return;
  }
  if (*(short *)(lVar15 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar15 + 0x1a);
  sVar21 = *(short *)(lVar15 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar21) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00d6d8b8;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d6d8b8:
      bVar5 = false;
    }
    if (bVar5) {
      if (*(long *)(lVar15 + 0x10) == 0) {
        return;
      }
      plVar28 = (long *)(*(long *)(lVar15 + 0x10) + -0x28);
      plVar12 = (long *)FUN_00d6431c(param_1);
      if ((((*plVar12 == 0) || (*(short *)(*plVar12 + 0x1a) == 0)) ||
          (lVar15 = *plVar12, lVar15 == 0)) || (*(short *)(lVar15 + 0x1a) == 0)) goto LAB_00d6d904;
      psVar1 = (short *)(lVar15 + 0x1a);
      sVar21 = *(short *)(lVar15 + 0x1a);
      goto LAB_00d6d928;
    }
    sVar21 = sVar3;
    if (sVar3 == 0) {
      return;
    }
  } while( true );
LAB_00d6d9e0:
  sVar3 = *psVar1;
  if (sVar3 == sVar21) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar21 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_00d6da04;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00d6da04:
    bVar5 = false;
  }
  if (!bVar5) goto code_r0x00d6da0c;
  lVar16 = *(long *)(lVar16 + 0x10);
  if (lVar16 != 0) {
    lVar17 = FUN_01104bd8(lVar16 + 0xe0,&local_78);
    if (lVar17 != 0) {
      local_78 = (long *)0x0;
      local_70 = (long *)0x0;
      FUN_00c43ef0(&local_78,lVar17 + 0x98);
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      if (local_78[2] == lVar17 + 0x28) {
        FUN_00d6ca28(&local_88,&local_78);
      }
      plVar29 = local_78;
      if (local_78 != (long *)0x0) {
        plVar26 = local_78 + 3;
        do {
          sVar21 = (short)*plVar26;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar5) {
            *(short *)plVar26 = sVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar21 == 1) {
          piVar2 = (int *)((long)local_78 + 0x1c);
          do {
            iVar11 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar17 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar17;
            local_68 = *plVar29;
            FUN_00c44438(lVar17 + 0x8040,&local_68);
          }
        }
        else if (sVar21 == 0) goto LAB_00d6de28;
      }
      FUN_00d6c658(plVar12,&local_88);
      puVar10 = local_88;
      if (local_88 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_88 + 3);
        do {
          sVar21 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar21 == 1) {
          piVar2 = (int *)((long)local_88 + 0x1c);
          do {
            iVar11 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar17 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar17;
            local_78 = (long *)*puVar10;
            FUN_00c44438(lVar17 + 0x8040,&local_78);
          }
        }
        else if (sVar21 == 0) goto LAB_00d6de28;
      }
    }
    (**(code **)(*(long *)(lVar16 + -0x28) + 0x60))();
  }
  goto LAB_00d6d988;
code_r0x00d6da0c:
  sVar21 = sVar3;
  if (sVar3 == 0) goto LAB_00d6d988;
  goto LAB_00d6d9e0;
LAB_00d6d988:
  plVar29 = (long *)(lVar15 + -0x28);
  if ((((*plVar12 == 0) || (*(short *)(*plVar12 + 0x1a) == 0)) || (lVar16 = *plVar12, lVar16 == 0))
     || (*(short *)(lVar16 + 0x1a) == 0)) goto LAB_00d6d9ac;
  psVar1 = (short *)(lVar16 + 0x1a);
  sVar21 = *(short *)(lVar16 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar21) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00d6da4c;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d6da4c:
      bVar5 = false;
    }
    if (bVar5) {
      lVar16 = *(long *)(lVar16 + 0x10);
      if (lVar16 == 0) goto LAB_00d6d9ac;
      plVar12 = (long *)(param_1 + 0x130);
      if ((((*(long *)(param_1 + 0x130) != 0) &&
           (*(short *)(*(long *)(param_1 + 0x130) + 0x1a) != 0)) ||
          ((*(long *)(param_1 + 0x80) == 0 ||
           ((*(short *)(*(long *)(param_1 + 0x80) + 0x1a) == 0 ||
            (lVar17 = *(long *)(param_1 + 0x80), lVar17 == 0)))))) ||
         (*(short *)(lVar17 + 0x1a) == 0)) goto LAB_00d6dedc;
      psVar1 = (short *)(lVar17 + 0x1a);
      sVar21 = *(short *)(lVar17 + 0x1a);
      break;
    }
    sVar21 = sVar3;
    if (sVar3 == 0) goto LAB_00d6d9ac;
  } while( true );
  while (sVar21 = sVar3, sVar3 != 0) {
    sVar3 = *psVar1;
    if (sVar3 == sVar21) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00d6db5c;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d6db5c:
      bVar5 = false;
    }
    if (bVar5) {
      lVar17 = *(long *)(lVar17 + 0x10);
      if (lVar17 != 0) {
        lVar18 = FUN_01104bd8(lVar17 + 0xe0,&local_78);
        if (lVar18 != 0) {
          local_78 = (long *)0x0;
          local_70 = (long *)0x0;
          FUN_00c43ef0(&local_78,lVar18 + 0x98);
          local_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          if (local_78[2] == lVar18 + 0x28) {
            FUN_00d6ca28(&local_88,&local_78);
          }
          plVar26 = local_78;
          puVar9 = PTR_DAT_047d3918;
          puVar8 = PTR_DAT_047d3910;
          puVar7 = PTR_DAT_047d3908;
          if (local_78 != (long *)0x0) {
            plVar25 = local_78 + 3;
            do {
              sVar21 = (short)*plVar25;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar5) {
                *(short *)plVar25 = sVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar21 == 1) {
              piVar2 = (int *)((long)local_78 + 0x1c);
              do {
                iVar11 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 != -1) {
                if (((*puVar7 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar18 = *(long *)puVar8;
                *(long *)puVar9 = lVar18;
                local_68 = *plVar26;
                FUN_00c44438(lVar18 + 0x8040,&local_68);
              }
            }
            else if (sVar21 == 0) goto LAB_00d6de28;
          }
          FUN_00d6c658(plVar12,&local_88);
          puVar10 = local_88;
          if (local_88 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_88 + 3);
            do {
              sVar21 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar21 == 1) {
              piVar2 = (int *)((long)local_88 + 0x1c);
              do {
                iVar11 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 != -1) {
                if (((*puVar7 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar18 = *(long *)puVar8;
                *(long *)puVar9 = lVar18;
                local_78 = (long *)*puVar10;
                FUN_00c44438(lVar18 + 0x8040,&local_78);
              }
            }
            else if (sVar21 == 0) {
LAB_00d6de28:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
        }
        (**(code **)(*(long *)(lVar17 + -0x28) + 0x60))();
      }
      break;
    }
  }
LAB_00d6dedc:
  if ((((*plVar12 == 0) || (*(short *)(*plVar12 + 0x1a) == 0)) || (lVar17 = *plVar12, lVar17 == 0))
     || (*(short *)(lVar17 + 0x1a) == 0)) goto LAB_00d6e6b8;
  psVar1 = (short *)(lVar17 + 0x1a);
  sVar21 = *(short *)(lVar17 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar21) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00d6df30;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d6df30:
      bVar5 = false;
    }
    if (bVar5) {
      lVar17 = *(long *)(lVar17 + 0x10);
      if (lVar17 == 0) goto LAB_00d6e6b8;
      plVar12 = (long *)FUN_01a2e4fc(param_1);
      if (((*plVar12 == 0) || (*(short *)(*plVar12 + 0x1a) == 0)) ||
         ((lVar18 = *plVar12, lVar18 == 0 || (*(short *)(lVar18 + 0x1a) == 0)))) goto LAB_00d6e6a8;
      psVar1 = (short *)(lVar18 + 0x1a);
      sVar21 = *(short *)(lVar18 + 0x1a);
      break;
    }
    sVar21 = sVar3;
    if (sVar3 == 0) goto LAB_00d6e6b8;
  } while( true );
LAB_00d6df84:
  sVar3 = *psVar1;
  if (sVar3 == sVar21) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar21 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_00d6dfa8;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00d6dfa8:
    bVar5 = false;
  }
  if (bVar5) {
    lVar18 = *(long *)(lVar18 + 0x10);
    if (lVar18 == 0) goto LAB_00d6e6a8;
    plVar12 = (long *)FUN_017abc40(param_1);
    if (((*plVar12 == 0) || (*(short *)(*plVar12 + 0x1a) == 0)) ||
       ((lVar19 = *plVar12, lVar19 == 0 || (*(short *)(lVar19 + 0x1a) == 0)))) goto LAB_00d6e648;
    psVar1 = (short *)(lVar19 + 0x1a);
    sVar21 = *(short *)(lVar19 + 0x1a);
    goto LAB_00d6e000;
  }
  sVar21 = sVar3;
  if (sVar3 == 0) goto LAB_00d6e6a8;
  goto LAB_00d6df84;
LAB_00d6e000:
  sVar3 = *psVar1;
  if (sVar3 == sVar21) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar21 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_00d6e024;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00d6e024:
    bVar5 = false;
  }
  if (bVar5) {
    lVar19 = *(long *)(lVar19 + 0x10);
    if (lVar19 == 0) goto LAB_00d6e648;
    if (*(char *)(lVar19 + 0x1c8) != '\0') {
      *(undefined4 *)(lVar18 + 0x44) = 1;
      *(undefined1 *)(param_1 + 0x1c2) = 0;
      *(undefined4 *)(param_1 + 0x390) = 0;
      goto LAB_00d6e60c;
    }
    lVar13 = (**(code **)(*plVar28 + 0x68))(plVar28);
    uVar20 = *(ulong *)(lVar13 + 0x38);
    local_a0 = *(undefined8 *)(lVar13 + 0x30);
    uStack_98 = uVar20 & 0xffffffff;
    lVar13 = *(long *)(*(long *)(lVar17 + 0x110) + 0x70);
    plVar12 = *(long **)(lVar13 + 0x30);
    plVar26 = *(long **)(lVar13 + 0x38);
    if (plVar12 == plVar26) goto LAB_00d6e3b4;
    plVar25 = plVar12;
    goto LAB_00d6e0ac;
  }
  sVar21 = sVar3;
  if (sVar3 == 0) goto LAB_00d6e648;
  goto LAB_00d6e000;
LAB_00d6e0ac:
  uVar22 = *(ulong *)(*plVar25 + 0x40);
  if (uVar22 != 0) {
    uVar23 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar24 = uVar22 - 1 & 0x49a7bcfacb27321d;
    }
    else {
      uVar24 = 0x49a7bcfacb27321d;
      if (uVar22 < 0x49a7bcfacb27321e) {
        uVar24 = 0;
        if (uVar22 != 0) {
          uVar24 = 0x49a7bcfacb27321d / uVar22;
        }
        uVar24 = 0x49a7bcfacb27321d - uVar24 * uVar22;
      }
    }
    plVar27 = *(long **)(*(long *)(*plVar25 + 0x38) + uVar24 * 8);
    if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
      if (uVar23 < 2) {
        do {
          if (plVar27[1] == 0x49a7bcfacb27321d) {
            if (plVar27[2] == 0x49a7bcfacb27321d) goto LAB_00d6e1a0;
          }
          else if ((plVar27[1] & uVar22 - 1) != uVar24) break;
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar27[1];
          if (uVar23 == 0x49a7bcfacb27321d) {
            if (plVar27[2] == 0x49a7bcfacb27321d) goto LAB_00d6e1a0;
          }
          else {
            if (uVar22 <= uVar23) {
              uVar6 = 0;
              if (uVar22 != 0) {
                uVar6 = uVar23 / uVar22;
              }
              uVar23 = uVar23 - uVar6 * uVar22;
            }
            if (uVar23 != uVar24) break;
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
    }
  }
  goto LAB_00d6e1a8;
LAB_00d6e1a0:
  if (-1 < (short)plVar27[6]) {
    if (-1 < (short)(*(short *)((long)plVar25 + 10) + (short)plVar27[6])) goto LAB_00d6e1cc;
    goto LAB_00d6e3b4;
  }
LAB_00d6e1a8:
  plVar25 = plVar25 + 2;
  if (plVar25 == plVar26) goto LAB_00d6e3b4;
  goto LAB_00d6e0ac;
LAB_00d6e1cc:
  uVar22 = *(ulong *)(*plVar12 + 0x40);
  if (uVar22 != 0) {
    uVar23 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar24 = uVar22 - 1 & 0x49a7bcfacb27321d;
    }
    else {
      uVar24 = 0x49a7bcfacb27321d;
      if (uVar22 < 0x49a7bcfacb27321e) {
        uVar24 = 0;
        if (uVar22 != 0) {
          uVar24 = 0x49a7bcfacb27321d / uVar22;
        }
        uVar24 = 0x49a7bcfacb27321d - uVar24 * uVar22;
      }
    }
    plVar25 = *(long **)(*(long *)(*plVar12 + 0x38) + uVar24 * 8);
    if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
      if (uVar23 < 2) {
        do {
          if (plVar25[1] == 0x49a7bcfacb27321d) {
            if (plVar25[2] == 0x49a7bcfacb27321d) goto LAB_00d6e2c0;
          }
          else if ((plVar25[1] & uVar22 - 1) != uVar24) break;
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar25[1];
          if (uVar23 == 0x49a7bcfacb27321d) {
            if (plVar25[2] == 0x49a7bcfacb27321d) goto LAB_00d6e2c0;
          }
          else {
            if (uVar22 <= uVar23) {
              uVar6 = 0;
              if (uVar22 != 0) {
                uVar6 = uVar23 / uVar22;
              }
              uVar23 = uVar23 - uVar6 * uVar22;
            }
            if (uVar23 != uVar24) break;
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
    }
  }
  goto LAB_00d6e2c8;
LAB_00d6e2c0:
  if (-1 < (short)plVar25[6]) {
    if ((~((uint)*(ushort *)((long)plVar12 + 10) + (int)(short)plVar25[6]) & 0xffff) != 0) {
      lVar14 = FUN_00c4c40c(lVar13);
      fVar32 = (float)*(undefined8 *)(lVar14 + 0x30);
      fVar33 = (float)((ulong)*(undefined8 *)(lVar14 + 0x30) >> 0x20);
      uVar31 = *(ulong *)(lVar13 + 0x418);
      uVar30 = *(undefined8 *)(lVar13 + 0x410);
      fVar34 = (float)*(undefined8 *)(lVar14 + 0x38);
      fVar35 = (float)((ulong)*(undefined8 *)(lVar14 + 0x38) >> 0x20);
      local_b0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x3e0) >> 0x20) * fVar32 +
                          (float)((ulong)*(undefined8 *)(lVar13 + 0x3f0) >> 0x20) * fVar33 +
                          (float)((ulong)*(undefined8 *)(lVar13 + 0x400) >> 0x20) * fVar34 +
                          (float)((ulong)uVar30 >> 0x20) * fVar35,
                          (float)*(undefined8 *)(lVar13 + 0x3e0) * fVar32 +
                          (float)*(undefined8 *)(lVar13 + 0x3f0) * fVar33 +
                          (float)*(undefined8 *)(lVar13 + 0x400) * fVar34 + (float)uVar30 * fVar35);
      fStack_a8 = (float)*(undefined8 *)(lVar13 + 1000) * fVar32 +
                  (float)*(undefined8 *)(lVar13 + 0x3f8) * fVar33 +
                  (float)*(undefined8 *)(lVar13 + 0x408) * fVar34 + (float)uVar31 * fVar35;
      goto LAB_00d6e39c;
    }
    goto LAB_00d6e31c;
  }
LAB_00d6e2c8:
  plVar12 = plVar12 + 2;
  if (plVar12 == plVar26) goto LAB_00d6e31c;
  goto LAB_00d6e1cc;
LAB_00d6e31c:
  FUN_00c9e664(&local_78,lVar17 + 0xc0);
  if (local_78 == (long *)0x0) {
    fStack_a8 = (float)_UNK_03cabe58;
    local_b0 = _DAT_03cabe50;
  }
  else {
    (**(code **)(*(long *)local_70[9] + 0xb0))();
    fStack_a8 = (float)uVar31;
    local_b0 = uVar30;
  }
  if (local_70 != (long *)0x0) {
    plVar12 = local_70 + 5;
    do {
      lVar13 = *plVar12;
      iVar11 = (int)lVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar13 == 0) goto LAB_00d6e5ac;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x60))();
  }
LAB_00d6e39c:
  local_a0 = CONCAT44((float)((ulong)local_b0 >> 0x20) - (float)((ulong)local_a0 >> 0x20),
                      (float)local_b0 - (float)local_a0);
  uStack_98 = (ulong)(uint)(fStack_a8 - (float)uVar20);
LAB_00d6e3b4:
  *(ulong *)(lVar15 + 0xc0) = uStack_98;
  *(undefined8 *)(lVar15 + 0xb8) = local_a0;
  if (*(char *)(lVar15 + 0xcc) == '\0') {
    *(undefined1 *)(lVar15 + 0xcc) = 1;
    (**(code **)(*plVar29 + 0x78))(plVar29);
  }
  lVar15 = *(long *)(*(long *)(lVar16 + 0x110) + 0x70);
  plVar12 = *(long **)(lVar15 + 0x30);
  if (plVar12 != *(long **)(lVar15 + 0x38)) {
    uVar20 = *(ulong *)(param_1 + 0x298);
LAB_00d6e3fc:
    uVar22 = *(ulong *)(*plVar12 + 0x40);
    if (uVar22 != 0) {
      uVar23 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        uVar24 = uVar22 - 1 & uVar20;
      }
      else {
        uVar24 = uVar20;
        if (uVar22 <= uVar20) {
          uVar24 = 0;
          if (uVar22 != 0) {
            uVar24 = uVar20 / uVar22;
          }
          uVar24 = uVar20 - uVar24 * uVar22;
        }
      }
      plVar26 = *(long **)(*(long *)(*plVar12 + 0x38) + uVar24 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if (plVar26[1] == uVar20) {
              if (plVar26[2] == uVar20) goto LAB_00d6e4f0;
            }
            else if ((plVar26[1] & uVar22 - 1) != uVar24) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar23 = plVar26[1];
            if (uVar23 == uVar20) {
              if (plVar26[2] == uVar20) goto LAB_00d6e4f0;
            }
            else {
              if (uVar22 <= uVar23) {
                uVar6 = 0;
                if (uVar22 != 0) {
                  uVar6 = uVar23 / uVar22;
                }
                uVar23 = uVar23 - uVar6 * uVar22;
              }
              if (uVar23 != uVar24) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_00d6e4f8;
  }
LAB_00d6e54c:
  FUN_00c9e664(&local_78,lVar16 + 0xc0);
  if (local_78 == (long *)0x0) {
    uStack_98 = _UNK_03cabe58;
    local_a0 = _DAT_03cabe50;
  }
  else {
    (**(code **)(*(long *)local_70[9] + 0xb0))();
    local_a0 = uVar30;
    uStack_98 = uVar31;
  }
  if (local_70 != (long *)0x0) {
    plVar12 = local_70 + 5;
    do {
      lVar15 = *plVar12;
      iVar11 = (int)lVar15 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar15 == 0) {
LAB_00d6e5ac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x60))();
  }
LAB_00d6e5f4:
  *(undefined4 *)(lVar18 + 0x44) = 2;
  *(ulong *)(lVar18 + 0xe0) = uStack_98 & 0xffffffff;
  *(undefined8 *)(lVar18 + 0xd8) = local_a0;
LAB_00d6e60c:
  lVar15 = *(long *)(lVar19 + 0x70);
  psVar1 = (short *)(lVar15 + 0x1a);
  do {
    sVar21 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar21 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar21 == 1) {
    *(undefined8 *)(lVar15 + 0x10) = 0;
    (**(code **)(*(long *)(lVar19 + -0x28) + 0x50))();
  }
  else if (sVar21 == 0) goto LAB_00d6e66c;
LAB_00d6e648:
  lVar15 = *(long *)(lVar18 + 8);
  psVar1 = (short *)(lVar15 + 0x1a);
  do {
    sVar21 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar21 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar21 == 1) {
    *(undefined8 *)(lVar15 + 0x10) = 0;
    (**(code **)(*(long *)(lVar18 + -0x28) + 0x50))((long *)(lVar18 + -0x28));
  }
  else if (sVar21 == 0) {
LAB_00d6e66c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00d6e6a8:
  (**(code **)(*(long *)(lVar17 + -0x28) + 0x60))();
LAB_00d6e6b8:
  (**(code **)(*(long *)(lVar16 + -0x28) + 0x60))();
LAB_00d6d9ac:
  (**(code **)(*plVar29 + 0x60))(plVar29);
  goto LAB_00d6d904;
LAB_00d6e4f0:
  if (-1 < (short)plVar26[6]) {
    if ((~((uint)*(ushort *)((long)plVar12 + 10) + (int)(short)plVar26[6]) & 0xffff) != 0) {
      lVar13 = FUN_00c4c40c(lVar15);
      fVar32 = (float)*(undefined8 *)(lVar13 + 0x30);
      fVar33 = (float)((ulong)*(undefined8 *)(lVar13 + 0x30) >> 0x20);
      fVar34 = (float)*(undefined8 *)(lVar13 + 0x38);
      fVar35 = (float)((ulong)*(undefined8 *)(lVar13 + 0x38) >> 0x20);
      local_a0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar15 + 0x3e0) >> 0x20) * fVar32 +
                          (float)((ulong)*(undefined8 *)(lVar15 + 0x3f0) >> 0x20) * fVar33 +
                          (float)((ulong)*(undefined8 *)(lVar15 + 0x400) >> 0x20) * fVar34 +
                          (float)((ulong)*(undefined8 *)(lVar15 + 0x410) >> 0x20) * fVar35,
                          (float)*(undefined8 *)(lVar15 + 0x3e0) * fVar32 +
                          (float)*(undefined8 *)(lVar15 + 0x3f0) * fVar33 +
                          (float)*(undefined8 *)(lVar15 + 0x400) * fVar34 +
                          (float)*(undefined8 *)(lVar15 + 0x410) * fVar35);
      uStack_98 = (ulong)(uint)((float)*(undefined8 *)(lVar15 + 1000) * fVar32 +
                                (float)*(undefined8 *)(lVar15 + 0x3f8) * fVar33 +
                                (float)*(undefined8 *)(lVar15 + 0x408) * fVar34 +
                               (float)*(undefined8 *)(lVar15 + 0x418) * fVar35);
      goto LAB_00d6e5f4;
    }
    goto LAB_00d6e54c;
  }
LAB_00d6e4f8:
  plVar12 = plVar12 + 2;
  if (plVar12 == *(long **)(lVar15 + 0x38)) goto LAB_00d6e54c;
  goto LAB_00d6e3fc;
  while (sVar21 = sVar3, sVar3 != 0) {
LAB_00d6d928:
    sVar3 = *psVar1;
    if (sVar3 == sVar21) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00d6d94c;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d6d94c:
      bVar5 = false;
    }
    if (bVar5) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 != 0) {
        plVar12 = (long *)(param_1 + 0x1a0);
        if ((*(long *)(param_1 + 0x1a0) != 0) &&
           (*(short *)(*(long *)(param_1 + 0x1a0) + 0x1a) != 0)) goto LAB_00d6d988;
        plVar29 = (long *)FUN_00d6431c(param_1);
        lVar16 = *plVar29;
        if ((lVar16 == 0) || (*(short *)(lVar16 + 0x1a) == 0)) goto LAB_00d6d988;
        psVar1 = (short *)(lVar16 + 0x1a);
        sVar21 = *(short *)(lVar16 + 0x1a);
        goto LAB_00d6d9e0;
      }
      break;
    }
  }
LAB_00d6d904:
  (**(code **)(*plVar28 + 0x60))(plVar28);
  return;
}


