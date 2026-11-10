/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018faa10; name: FUN_018faa10
 */


void FUN_018faa10(long param_1,uint param_2,long param_3,long *param_4,int param_5)

{
  short *psVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  bool bVar20;
  short sVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  undefined1 *local_1e8;
  char *local_1e0;
  undefined8 uStack_1d8;
  long *local_1d0;
  code *local_1c8;
  long lStack_1c0;
  long local_1b8;
  code *local_1b0;
  undefined1 local_1a8 [4];
  undefined4 local_1a4;
  code *local_1a0;
  code *local_198;
  undefined1 *local_190;
  long *local_188;
  int *local_180 [30];
  code *local_90;
  code *local_88;
  undefined8 *local_80 [2];
  int local_6c [3];
  
  uVar17 = *(ulong *)(param_1 + 0x50);
  if (uVar17 == 0) {
    return;
  }
  uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
  uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
  uVar23 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uVar18 = (ulong)param_2;
  if (uVar23 < 2) {
    uVar22 = (ulong)((int)uVar17 - 1U & param_2);
  }
  else {
    uVar22 = uVar18;
    if (uVar17 <= uVar18) {
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = uVar18 / uVar17;
      }
      uVar22 = uVar18 - uVar22 * uVar17;
    }
  }
  plVar19 = *(long **)(*(long *)(param_1 + 0x48) + uVar22 * 8);
  if (plVar19 == (long *)0x0) {
    return;
  }
  plVar19 = (long *)*plVar19;
  if (plVar19 == (long *)0x0) {
    return;
  }
  if (1 < uVar23) {
    do {
      uVar23 = plVar19[1];
      if (uVar23 == uVar18) {
        if (*(uint *)(plVar19 + 2) == param_2) goto LAB_018fab20;
      }
      else {
        if (uVar17 <= uVar23) {
          uVar8 = 0;
          if (uVar17 != 0) {
            uVar8 = uVar23 / uVar17;
          }
          uVar23 = uVar23 - uVar8 * uVar17;
        }
        if (uVar23 != uVar22) {
          return;
        }
      }
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar19[1] == uVar18) {
      if (*(uint *)(plVar19 + 2) == param_2) goto LAB_018fab20;
    }
    else if ((plVar19[1] & uVar17 - 1) != uVar22) {
      return;
    }
    plVar19 = (long *)*plVar19;
    if (plVar19 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_018fac3c:
  sVar6 = *psVar1;
  if (sVar6 == sVar21) {
    cVar7 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar20) {
      *psVar1 = sVar21 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 != '\0') goto LAB_018fac60;
    bVar20 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_018fac60:
    bVar20 = false;
  }
  if (bVar20) {
    lVar16 = *(long *)(lVar16 + 0x10);
    if (lVar16 != 0) {
      plVar19 = (long *)(lVar16 + 0xe8);
      lVar24 = *plVar19;
      lVar11 = nn::os::GetCurrentThread();
      if (lVar11 == lVar24) {
        bVar20 = true;
      }
      else {
        lVar11 = nn::os::GetCurrentThread();
        do {
          if (*plVar19 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0xf0));
              while (*plVar19 == 0) {
                cVar7 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar20) {
                  *plVar19 = lVar11;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_018facb4;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar7 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar20) {
            *plVar19 = lVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_018facb4:
        bVar20 = false;
      }
      lVar11 = FUN_02b1b128(lVar16 + 0x100);
      if (lVar11 == 0) {
        lVar11 = FUN_02b1b128(lVar16 + 0x138);
      }
      if (!bVar20) {
        *(undefined8 *)(lVar16 + 0xe8) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0xf0));
      }
      if (lVar11 != 0) {
        local_6c[0] = 0x1e;
        local_1a0 = (code *)&DAT_afc4d6c05abef19e;
        local_198 = (code *)0x3c7b602;
        local_190 = (undefined1 *)0x7;
        local_188 = (long *)0x0;
        FUN_00f425a4(&local_88,lVar11,&local_1a0);
        if (local_188 != (long *)0x0) {
          (**(code **)(*local_188 + 0x20))();
        }
        if (((local_88 == (code *)0x0) || (local_80[0] == (undefined8 *)0x0)) ||
           (*(short *)((long)local_80[0] + 0x1a) == 0)) {
LAB_018fb0d4:
          local_90 = (code *)0x0;
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar12 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar12;
          FUN_00cf9884(&local_1a0,uVar12,
                       "Top/poke_default/ground_state/attack/one_attack/00400_attack01");
          pcVar2 = local_90;
          pcVar25 = local_1a0;
          local_90 = (code *)0x0;
          if (pcVar2 != (code *)0x0) {
            (**(code **)(*(long *)pcVar2 + 0x20))();
          }
        }
        else {
          lVar24 = (**(code **)(*(long *)local_88 + 0x38))();
          puVar9 = PTR_DAT_047d3e30;
          puVar14 = PTR_DAT_047d3e28;
          if (lVar24 == 0) goto LAB_018fb0d4;
          do {
            FUN_029c4f80(&local_1a0,&local_88);
            local_88 = local_1a0;
            FUN_00c96b7c(local_80,&local_198);
            pcVar25 = local_198;
            if (local_198 != (code *)0x0) {
              pcVar2 = local_198 + 0x18;
              do {
                sVar21 = *(short *)pcVar2;
                cVar7 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar20) {
                  *(short *)pcVar2 = sVar21 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar21 == 1) {
                pcVar2 = local_198 + 0x1c;
                do {
                  iVar10 = *(int *)pcVar2;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                  if (bVar20) {
                    *(int *)pcVar2 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar24 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar24;
                  local_1c8 = *(code **)pcVar25;
                  FUN_00c44438(lVar24 + 0x8040,&local_1c8);
                }
              }
              else if (sVar21 == 0) goto LAB_018fb448;
            }
            if (((local_88 == (code *)0x0) || (local_80[0] == (undefined8 *)0x0)) ||
               (*(short *)((long)local_80[0] + 0x1a) == 0)) {
              plVar19 = (long *)puVar9;
              if (((*puVar14 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar14), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar14);
              }
            }
            else {
              plVar19 = (long *)(**(code **)(*(long *)local_88 + 0x18))();
            }
            lVar24 = *plVar19;
            if (((local_88 == (code *)0x0) || (local_80[0] == (undefined8 *)0x0)) ||
               (*(short *)((long)local_80[0] + 0x1a) == 0)) {
              plVar19 = (long *)puVar9;
              if (((*puVar14 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar14), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar14);
              }
            }
            else {
              plVar19 = (long *)(**(code **)(*(long *)local_88 + 0x18))();
            }
            lVar26 = *plVar19;
            if (((local_88 == (code *)0x0) || (local_80[0] == (undefined8 *)0x0)) ||
               (*(short *)((long)local_80[0] + 0x1a) == 0)) {
              plVar19 = (long *)puVar9;
              if (((*puVar14 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar14), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar14);
              }
            }
            else {
              plVar19 = (long *)(**(code **)(*(long *)local_88 + 0x18))();
            }
            lVar27 = *plVar19;
            uVar5 = -(uint)(lVar24 != 0x3cb7ab1f29e27544);
            if (((local_88 == (code *)0x0) || (local_80[0] == (undefined8 *)0x0)) ||
               (*(short *)((long)local_80[0] + 0x1a) == 0)) {
              if (((*puVar14 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar14), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar14);
              }
            }
            else {
              (**(code **)(*(long *)local_88 + 0x18))();
            }
            if (lVar26 == -0x6dde15489ae1e3a2) {
              uVar5 = 1;
            }
            uVar4 = 2;
            if (lVar27 != 0x21c5209747110bec) {
              uVar4 = uVar5;
            }
          } while ((((local_88 != (code *)0x0) && (local_80[0] != (undefined8 *)0x0)) &&
                   (*(short *)((long)local_80[0] + 0x1a) != 0)) &&
                  ((lVar24 = (**(code **)(*(long *)local_88 + 0x38))(), uVar4 == 0xffffffff &&
                   (lVar24 != 0))));
          local_90 = (code *)0x0;
          if (uVar4 == 0xffffffff) goto LAB_018fb0d4;
          memcpy(&local_1a0,&PTR_DAT_04591ae0,0x108);
          if (((local_88 == (code *)0x0) || (local_80[0] == (undefined8 *)0x0)) ||
             (*(short *)((long)local_80[0] + 0x1a) == 0)) {
            if ((*puVar14 & 1) == 0) {
              iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28);
              puVar14 = PTR_DAT_047d3e30;
              if (iVar10 != 0) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
                goto LAB_018fb1ac;
              }
            }
            puVar14 = PTR_DAT_047d3e30;
          }
          else {
            puVar14 = (undefined *)(**(code **)(*(long *)local_88 + 0x10))();
          }
LAB_018fb1ac:
          FUN_0210f424(&local_1c8,puVar14,local_1a8 + (long)param_5 * 8 + (ulong)uVar4 * 0x58 + 8);
          pcVar25 = local_90;
          local_90 = (code *)0x0;
          if (pcVar25 != (code *)0x0) {
            (**(code **)(*(long *)pcVar25 + 0x20))();
          }
          pcVar25 = local_1c8;
        }
        local_1a8[0] = 1;
        local_1a4 = 0;
        local_1c8 = (code *)PTR_DAT_047d8b70;
        if (pcVar25 != (code *)0x0) {
          local_1c8 = pcVar25 + 0x30;
        }
        local_1c8 = *(code **)local_1c8;
        pcVar2 = (code *)PTR_PTR_047d4508;
        if (pcVar25 != (code *)0x0) {
          pcVar2 = pcVar25 + 0x38;
        }
        lStack_1c0 = *(long *)pcVar2;
        if (pcVar25 == (code *)0x0) {
          local_1b8 = 0;
        }
        else {
          local_1b8 = *(long *)(pcVar25 + 0x40);
        }
        local_1b0 = (code *)0x0;
        local_90 = pcVar25;
        if (pcVar25 != (code *)0x0) {
          (**(code **)(*(long *)pcVar25 + 0x18))(pcVar25);
        }
        local_180[0] = local_6c;
        local_1a0 = FUN_02b1b26c;
        local_198 = FUN_02b1b3f0;
        local_190 = &LAB_02b1b3f4;
        local_188 = (long *)&LAB_02b1b400;
        local_1e8 = &DAT_afc4d6c05abef19e;
        local_1d0 = (long *)0x0;
        local_1e0 = "default";
        uStack_1d8 = 7;
        local_1b0 = pcVar25;
        FUN_011c625c(lVar11,local_1a8,&local_1c8,&local_1a0,&local_1e8,0);
        if (local_1d0 != (long *)0x0) {
          (**(code **)(*local_1d0 + 0x20))();
        }
        pcVar25 = local_198;
        if (local_198 != (code *)0x0) {
          local_190 = (undefined1 *)0x0;
          local_188 = (long *)0x0;
          local_1a0 = (code *)0x0;
          local_198 = (code *)0x0;
          (*pcVar25)(local_180);
        }
        if (local_1b0 != (code *)0x0) {
          (**(code **)(*(long *)local_1b0 + 0x20))();
        }
        local_1a0 = (code *)0xfa10a8cc472de71c;
        iVar10 = 0x32 - local_6c[0];
        puVar13 = (undefined8 *)FUN_01235878(param_3 + 0x158,&local_1a0);
        *(int *)(puVar13 + 2) = iVar10;
        *puVar13 = PTR_LAB_047dcd88;
        local_1a0 = (code *)0xed4839939eb65cf3;
        puVar13 = (undefined8 *)FUN_01235878(param_3 + 0x158,&local_1a0);
        puVar14 = PTR_LAB_047dcd90;
        *(undefined1 *)(puVar13 + 2) = 0;
        *puVar13 = puVar14;
        if (local_90 != (code *)0x0) {
          (**(code **)(*(long *)local_90 + 0x20))();
        }
        if (local_80[0] != (undefined8 *)0x0) {
          psVar1 = (short *)(local_80[0] + 3);
          do {
            sVar21 = *psVar1;
            cVar7 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar20) {
              *psVar1 = sVar21 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar21 == 1) {
            piVar3 = (int *)((long)local_80[0] + 0x1c);
            do {
              iVar10 = *piVar3;
              cVar7 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar20) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_1a0 = (code *)*local_80[0];
              FUN_00c44438(lVar11 + 0x8040,&local_1a0);
            }
          }
          else if (sVar21 == 0) {
LAB_018fb448:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
      (**(code **)(*(long *)(lVar16 + -0x28) + 0x60))((long *)(lVar16 + -0x28));
    }
    goto LAB_018fabc8;
  }
  sVar21 = sVar6;
  if (sVar6 == 0) {
LAB_018fabc8:
    lVar16 = *(long *)(lVar15 + 8);
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar7 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*(long *)(lVar15 + -0x28) + 0x50))();
      return;
    }
    if (sVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  goto LAB_018fac3c;
LAB_018fab20:
  if ((((plVar19[5] != 0) && (*(short *)(plVar19[5] + 0x1a) != 0)) &&
      (lVar15 = plVar19[5], lVar15 != 0)) && (*(short *)(lVar15 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar15 + 0x1a);
    sVar21 = *(short *)(lVar15 + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar21) {
        cVar7 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_018fab9c;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018fab9c:
        bVar20 = false;
      }
      if (bVar20) {
        lVar15 = *(long *)(lVar15 + 0x10);
        if (lVar15 == 0) {
          return;
        }
        lVar16 = *param_4;
        if ((lVar16 == 0) || (*(short *)(lVar16 + 0x1a) == 0)) goto LAB_018fabc8;
        psVar1 = (short *)(lVar16 + 0x1a);
        sVar21 = *(short *)(lVar16 + 0x1a);
        goto LAB_018fac3c;
      }
      sVar21 = sVar6;
    } while (sVar6 != 0);
  }
  return;
}


