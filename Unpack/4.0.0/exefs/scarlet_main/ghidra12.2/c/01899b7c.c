/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01899b7c; name: FUN_01899b7c
 */


void FUN_01899b7c(long param_1,uint param_2,long param_3,undefined8 *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 uStack_98;
  undefined2 uStack_97;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined4 local_4c;
  undefined4 local_48;
  uint uStack_44;
  long local_28;
  
  uVar15 = *(ulong *)(param_1 + 0x50);
  if (uVar15 == 0) {
    return;
  }
  uVar13 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar18 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uVar13 = (ulong)param_2;
  if (uVar18 < 2) {
    uVar17 = (ulong)((int)uVar15 - 1U & param_2);
  }
  else {
    uVar17 = uVar13;
    if (uVar15 <= uVar13) {
      uVar17 = 0;
      if (uVar15 != 0) {
        uVar17 = uVar13 / uVar15;
      }
      uVar17 = uVar13 - uVar17 * uVar15;
    }
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x48) + uVar17 * 8);
  if (plVar14 == (long *)0x0) {
    return;
  }
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) {
    return;
  }
  if (1 < uVar18) {
    do {
      uVar18 = plVar14[1];
      if (uVar18 == uVar13) {
        if (*(uint *)(plVar14 + 2) == param_2) goto LAB_01899c20;
      }
      else {
        if (uVar15 <= uVar18) {
          uVar7 = 0;
          if (uVar15 != 0) {
            uVar7 = uVar18 / uVar15;
          }
          uVar18 = uVar18 - uVar7 * uVar15;
        }
        if (uVar18 != uVar17) {
          return;
        }
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar14[1] == uVar13) {
      if (*(uint *)(plVar14 + 2) == param_2) break;
    }
    else if ((plVar14[1] & uVar15 - 1) != uVar17) {
      return;
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_01899c20:
  if ((((plVar14[5] != 0) && (*(short *)(plVar14[5] + 0x1a) != 0)) &&
      (lVar11 = plVar14[5], lVar11 != 0)) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar16 = *(short *)(lVar11 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar16) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01899cc8;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01899cc8:
        bVar6 = false;
      }
      if (bVar6) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) {
          return;
        }
        local_60 = (undefined8 *)0x0;
        uStack_58 = 0;
        local_80 = *param_4;
        uStack_78 = param_4[1];
        local_70 = param_4[2];
        local_68 = (long *)param_4[3];
        local_4c = param_6;
        local_48 = param_5;
        uStack_44 = param_2;
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x18))();
        }
        if (*(code **)(param_3 + 0x10) == (code *)0x0) {
          local_a8 = (long *)0x0;
          local_a0 = 0;
          local_9c = 0;
          local_9a = 0;
          local_99 = 0;
        }
        else {
          (**(code **)(param_3 + 0x10))(&local_a8,param_3 + 0x30,&local_80);
        }
        FUN_00d0a34c(&local_60,&local_a8);
        plVar19 = local_a8;
        if (local_a8 != (long *)0x0) {
          plVar2 = local_a8 + 3;
          do {
            sVar16 = (short)*plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(short *)plVar2 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar16 == 1) {
            piVar3 = (int *)((long)local_a8 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_28 = *plVar19;
              FUN_00c44438(lVar10 + 0x8040,&local_28);
            }
          }
          else if (sVar16 == 0) goto LAB_01899eb8;
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        local_90 = (undefined8 *)0x0;
        uStack_88 = 0;
        FUN_00d0a71c(&local_90,&local_60);
        lVar10 = FUN_01180e7c(param_3,&local_90);
        puVar8 = local_90;
        if (local_90 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_90 + 3);
          do {
            sVar16 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar16 == 1) {
            piVar3 = (int *)((long)local_90 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_a8 = (long *)*puVar8;
              FUN_00c44438(lVar12 + 0x8040,&local_a8);
            }
          }
          else if (sVar16 == 0) goto LAB_01899eb8;
        }
        plVar19 = (long *)(lVar11 + -0x28);
        local_28 = lVar10;
        if (lVar10 != 0) {
          uStack_97 = 0;
          uStack_98 = 0x30;
          local_99 = 0x44;
          local_9a = 0x34;
          local_9c = 0x3634;
          local_a0 = 0x39314637;
          local_a8 = (long *)0x4137463032413853;
          FUN_0210f4a0(plVar19,&local_a8,plVar14 + 3,&uStack_44,param_4,&local_28,&local_48,
                       &local_4c);
        }
        puVar8 = local_60;
        if (local_60 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_60 + 3);
          do {
            sVar16 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar16 == 1) {
            piVar3 = (int *)((long)local_60 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_a8 = (long *)*puVar8;
              FUN_00c44438(lVar10 + 0x8040,&local_a8);
            }
          }
          else if (sVar16 == 0) {
LAB_01899eb8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        lVar11 = *(long *)(lVar11 + 8);
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar16 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar16 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar19 + 0x50))(plVar19);
          return;
        }
        if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar16 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


