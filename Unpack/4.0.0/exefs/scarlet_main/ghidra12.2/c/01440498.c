/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01440498; name: FUN_01440498
 */


bool FUN_01440498(long param_1,long *param_2,long *param_3)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  undefined4 uVar4;
  short sVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  short sVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  long *unaff_x28;
  float fVar26;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long *local_78;
  undefined8 *puStack_70;
  undefined1 local_68;
  
  lVar10 = *param_3;
  if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) {
    return false;
  }
  psVar1 = (short *)(lVar10 + 0x1a);
  sVar19 = *(short *)(lVar10 + 0x1a);
  do {
    sVar5 = *psVar1;
    if (sVar5 == sVar19) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 != '\0') goto LAB_01440524;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01440524:
      bVar8 = false;
    }
    if (bVar8) {
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 == 0) {
        return false;
      }
      lVar11 = *param_2;
      if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) goto LAB_0144054c;
      psVar1 = (short *)(lVar11 + 0x1a);
      sVar19 = *(short *)(lVar11 + 0x1a);
      break;
    }
    sVar19 = sVar5;
    if (sVar5 == 0) {
      return false;
    }
  } while( true );
  while (bVar8 = false, sVar19 = sVar5, sVar5 != 0) {
    sVar5 = *psVar1;
    if (sVar5 == sVar19) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 != '\0') goto LAB_01440598;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01440598:
      bVar8 = false;
    }
    if (bVar8) {
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) goto LAB_0144054c;
      plVar14 = *(long **)(param_1 + 200);
      plVar23 = (long *)(lVar11 + -0x28);
      plVar2 = (long *)(param_1 + 0xc0);
      if (plVar14 == (long *)0x0) goto LAB_014406c0;
      uVar12 = (long)plVar14 - ((ulong)plVar14 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        plVar21 = (long *)((long)plVar14 - 1U & (ulong)plVar23);
      }
      else if (plVar23 < plVar14) {
        plVar21 = plVar23;
      }
      else {
        uVar16 = 0;
        if (plVar14 != (long *)0x0) {
          uVar16 = (ulong)plVar23 / (ulong)plVar14;
        }
        plVar21 = (long *)((long)plVar23 - uVar16 * (long)plVar14);
      }
      plVar13 = *(long **)(*plVar2 + (long)plVar21 * 8);
      if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
      goto LAB_014406c0;
      if (1 < uVar12) goto LAB_01440630;
      goto LAB_01440818;
    }
  }
  goto LAB_01440550;
LAB_0144054c:
  bVar8 = false;
  goto LAB_01440550;
LAB_01440630:
  do {
    plVar20 = (long *)plVar13[1];
    if (plVar20 == plVar23) {
      if ((long *)plVar13[2] == plVar23) goto LAB_01440648;
    }
    else {
      if (plVar14 <= plVar20) {
        uVar12 = 0;
        if (plVar14 != (long *)0x0) {
          uVar12 = (ulong)plVar20 / (ulong)plVar14;
        }
        plVar20 = (long *)((long)plVar20 - uVar12 * (long)plVar14);
      }
      if (plVar20 != plVar21) break;
    }
    plVar13 = (long *)*plVar13;
  } while (plVar13 != (long *)0x0);
  goto LAB_014406c0;
LAB_01440648:
  lVar15 = plVar13[5];
  if ((lVar15 == 0) || (*(short *)(lVar15 + 0x1a) == 0)) goto LAB_01440650;
  psVar1 = (short *)(lVar15 + 0x1a);
  sVar19 = *(short *)(lVar15 + 0x1a);
  do {
    sVar5 = *psVar1;
    if (sVar5 == sVar19) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 != '\0') goto LAB_01440cec;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01440cec:
      bVar8 = false;
    }
    if (bVar8) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 == 0) goto LAB_01440650;
      lVar17 = 0;
      if ((long *)plVar13[5] != (long *)0x0) {
        lVar17 = *(long *)plVar13[5];
      }
      lVar18 = 0;
      if ((long *)*param_3 != (long *)0x0) {
        lVar18 = *(long *)*param_3;
      }
      bVar8 = lVar17 == lVar18;
      if (bVar8) {
        *(undefined4 *)(plVar13 + 7) = 0;
      }
      (**(code **)(*(long *)(lVar15 + -0x28) + 0x60))();
      break;
    }
    bVar8 = false;
    sVar19 = sVar5;
  } while (sVar5 != 0);
  goto LAB_01440654;
LAB_01440874:
  if ((*(byte *)(plVar20 + 3) >> 1 & 1) != 0) {
    *(byte *)(plVar20 + 3) = *(byte *)(plVar20 + 3) | 1;
    uVar4 = (undefined4)plVar14[4];
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    FUN_00fa4838(&local_a0);
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    FUN_00d0a71c(&local_90,param_3);
    local_80 = 0;
    plVar14 = *(long **)(param_1 + 200);
    uStack_7c = uVar4;
    if (plVar14 == (long *)0x0) {
LAB_014408e0:
      puVar24 = (undefined8 *)(param_1 + 0xf8);
      plVar21 = (long *)(**(code **)(*(long *)*puVar24 + 0x10))((long *)*puVar24,0x40,8);
      if (plVar21 == (long *)0x0) {
        (**(code **)(*(long *)*puVar24 + 0xe8))();
      }
      local_68 = 0;
      uVar25 = *puVar24;
      local_78 = plVar21;
      puStack_70 = puVar24;
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar15 != 0) {
        if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar25;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      }
      plVar21[2] = (long)plVar23;
      plVar21[3] = 0;
      plVar21[4] = 0;
      FUN_00fa4468(plVar21 + 3,&local_a0);
      plVar21[5] = 0;
      plVar21[6] = 0;
      FUN_00d0a34c(plVar21 + 5,&local_90);
      plVar13 = local_78;
      plVar21[7] = CONCAT44(uStack_7c,local_80);
      if (lVar15 != 0) {
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
      }
      local_68 = 1;
      *local_78 = 0;
      local_78[1] = (long)plVar23;
      fVar26 = (float)(*(long *)(param_1 + 0x118) + 1);
      if ((plVar14 == (long *)0x0) || (*(float *)(param_1 + 0x120) * (float)plVar14 < fVar26)) {
        uVar12 = (ulong)(plVar14 < (long *)0x3 || ((ulong)plVar14 & (long)plVar14 - 1U) != 0) |
                 (long)plVar14 << 1;
        uVar16 = (ulong)(fVar26 / *(float *)(param_1 + 0x120));
        if (uVar16 <= uVar12) {
          uVar16 = uVar12;
        }
        FUN_01920f68(plVar2,uVar16);
        plVar14 = *(long **)(param_1 + 200);
        if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
          unaff_x28 = (long *)((long)plVar14 - 1U & (ulong)plVar23);
        }
        else if (plVar23 < plVar14) {
          unaff_x28 = plVar23;
        }
        else {
          uVar12 = 0;
          if (plVar14 != (long *)0x0) {
            uVar12 = (ulong)plVar23 / (ulong)plVar14;
          }
          unaff_x28 = (long *)((long)plVar23 - uVar12 * (long)plVar14);
        }
      }
      plVar21 = *(long **)(*plVar2 + (long)unaff_x28 * 8);
      if (plVar21 == (long *)0x0) {
        plVar21 = (long *)(param_1 + 0xf0);
        *plVar13 = *plVar21;
        *plVar21 = (long)plVar13;
        *(long **)(*(long *)(param_1 + 0xc0) + (long)unaff_x28 * 8) = plVar21;
        if (*plVar13 != 0) {
          plVar21 = *(long **)(*plVar13 + 8);
          if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
            plVar21 = (long *)((ulong)plVar21 & (long)plVar14 - 1U);
          }
          else if (plVar14 <= plVar21) {
            uVar12 = 0;
            if (plVar14 != (long *)0x0) {
              uVar12 = (ulong)plVar21 / (ulong)plVar14;
            }
            plVar21 = (long *)((long)plVar21 - uVar12 * (long)plVar14);
          }
          *(long **)(*plVar2 + (long)plVar21 * 8) = plVar13;
        }
      }
      else {
        *plVar13 = *plVar21;
        *plVar21 = (long)plVar13;
      }
      local_78 = (long *)0x0;
      *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
      FUN_00c7ecd0(&local_78);
    }
    else {
      uVar12 = (long)plVar14 - 1;
      if (((ulong)plVar14 & uVar12) == 0) {
        unaff_x28 = (long *)(uVar12 & (ulong)plVar23);
        plVar21 = *(long **)(*plVar2 + (long)unaff_x28 * 8);
        if (plVar21 == (long *)0x0) goto LAB_014408e0;
        do {
          plVar21 = (long *)*plVar21;
          if ((plVar21 == (long *)0x0) ||
             ((long *)plVar21[1] != plVar23 && (long *)((ulong)plVar21[1] & uVar12) != unaff_x28))
          goto LAB_014408e0;
        } while ((long *)plVar21[2] != plVar23);
      }
      else {
        if (plVar23 < plVar14) {
          unaff_x28 = plVar23;
        }
        else {
          uVar12 = 0;
          if (plVar14 != (long *)0x0) {
            uVar12 = (ulong)plVar23 / (ulong)plVar14;
          }
          unaff_x28 = (long *)((long)plVar23 - uVar12 * (long)plVar14);
        }
        plVar21 = *(long **)(*plVar2 + (long)unaff_x28 * 8);
        if (plVar21 == (long *)0x0) goto LAB_014408e0;
        do {
          plVar21 = (long *)*plVar21;
          if (plVar21 == (long *)0x0) goto LAB_014408e0;
          plVar13 = (long *)plVar21[1];
          if (plVar13 != plVar23) {
            if (plVar14 <= plVar13) {
              uVar12 = 0;
              if (plVar14 != (long *)0x0) {
                uVar12 = (ulong)plVar13 / (ulong)plVar14;
              }
              plVar13 = (long *)((long)plVar13 - uVar12 * (long)plVar14);
            }
            if (plVar13 != unaff_x28) goto LAB_014408e0;
          }
        } while ((long *)plVar21[2] != plVar23);
      }
    }
    puVar24 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_90 + 3);
      do {
        sVar19 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar19 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_90 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_78 = (long *)*puVar24;
          FUN_00c44438(lVar15 + 0x8040,&local_78);
        }
      }
      else if (sVar19 == 0) goto LAB_01440ae0;
    }
    puVar24 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a0 + 3);
      do {
        sVar19 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar19 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_a0 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_78 = (long *)*puVar24;
          FUN_00c44438(lVar15 + 0x8040,&local_78);
        }
      }
      else if (sVar19 == 0) {
LAB_01440ae0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    bVar8 = true;
    goto LAB_01440654;
  }
  goto LAB_01440650;
  while (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0) {
LAB_01440818:
    if ((long *)plVar13[1] == plVar23) {
      if ((long *)plVar13[2] == plVar23) goto LAB_01440648;
    }
    else if ((long *)((ulong)plVar13[1] & (long)plVar14 - 1U) != plVar21) break;
  }
LAB_014406c0:
  plVar14 = *(long **)(param_1 + 0x88);
  if (plVar14 == (long *)(param_1 + 0x90)) {
LAB_01440650:
    bVar8 = false;
  }
  else {
    do {
      plVar21 = (long *)plVar14[6];
      if (plVar21 != (long *)0x0) {
        uVar12 = (long)plVar21 - ((ulong)plVar21 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          plVar13 = (long *)((long)plVar21 - 1U & (ulong)plVar23);
        }
        else if (plVar23 < plVar21) {
          plVar13 = plVar23;
        }
        else {
          uVar16 = 0;
          if (plVar21 != (long *)0x0) {
            uVar16 = (ulong)plVar23 / (ulong)plVar21;
          }
          plVar13 = (long *)((long)plVar23 - uVar16 * (long)plVar21);
        }
        plVar20 = *(long **)(plVar14[5] + (long)plVar13 * 8);
        if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
          if (uVar12 < 2) {
            do {
              if ((long *)plVar20[1] == plVar23) {
                if ((long *)plVar20[2] == plVar23) goto LAB_01440874;
              }
              else if ((long *)((ulong)plVar20[1] & (long)plVar21 - 1U) != plVar13) break;
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          else {
            do {
              plVar22 = (long *)plVar20[1];
              if (plVar22 == plVar23) {
                if ((long *)plVar20[2] == plVar23) goto LAB_01440874;
              }
              else {
                if (plVar21 <= plVar22) {
                  uVar12 = 0;
                  if (plVar21 != (long *)0x0) {
                    uVar12 = (ulong)plVar22 / (ulong)plVar21;
                  }
                  plVar22 = (long *)((long)plVar22 - uVar12 * (long)plVar21);
                }
                if (plVar22 != plVar13) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      plVar21 = (long *)plVar14[1];
      if (plVar21 == (long *)0x0) {
        plVar21 = (long *)plVar14[2];
        if (*(long **)plVar14[2] != plVar14) {
          lVar15 = plVar14[2];
          plVar21 = *(long **)(lVar15 + 0x10);
          if (**(long **)(lVar15 + 0x10) != lVar15) {
            lVar15 = *(long *)(lVar15 + 0x10);
            while( true ) {
              plVar21 = *(long **)(lVar15 + 0x10);
              if (*plVar21 == lVar15) break;
              lVar15 = *(long *)(lVar15 + 0x10);
            }
          }
        }
      }
      else {
        for (plVar14 = (long *)*plVar21; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
          plVar21 = plVar14;
        }
      }
      plVar14 = plVar21;
      bVar8 = false;
    } while (plVar14 != (long *)(param_1 + 0x90));
  }
LAB_01440654:
  lVar11 = *(long *)(lVar11 + 8);
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar19 = *psVar1;
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar19 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar19 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar23 + 0x50))(plVar23);
  }
  else if (sVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_01440550:
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))();
  return bVar8;
}


