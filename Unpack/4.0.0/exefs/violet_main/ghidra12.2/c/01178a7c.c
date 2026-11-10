/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01178a7c; name: FUN_01178a7c
 */


void FUN_01178a7c(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  short sVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *local_68 [2];
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x148));
  uVar10 = *(ulong *)(param_1 + 0xe8);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar16 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar11 = (ulong)param_2;
    if (uVar16 < 2) {
      uVar12 = (ulong)((int)uVar10 - 1U & param_2);
    }
    else {
      uVar12 = uVar11;
      if (uVar10 <= uVar11) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar11 / uVar10;
        }
        uVar12 = uVar11 - uVar12 * uVar10;
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0xe0) + uVar12 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar15[1] == uVar11) {
            if (*(uint *)(plVar15 + 2) == param_2) goto LAB_01178b3c;
          }
          else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar15[1];
          if (uVar16 == uVar11) {
            if (*(uint *)(plVar15 + 2) == param_2) goto LAB_01178b3c;
          }
          else {
            if (uVar10 <= uVar16) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar16 / uVar10;
              }
              uVar16 = uVar16 - uVar5 * uVar10;
            }
            if (uVar16 != uVar12) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  goto LAB_01178b50;
code_r0x01178bd8:
  sVar14 = sVar3;
  if (sVar3 == 0) goto LAB_01178be0;
  goto LAB_01178bac;
LAB_01178b3c:
  FUN_00f53cf4(&local_58,plVar15[3]);
  if (local_58 != (undefined8 *)0x0) {
    if (*(short *)((long)local_58 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_58 + 0x1a);
      sVar14 = *(short *)((long)local_58 + 0x1a);
LAB_01178bac:
      sVar3 = *psVar1;
      if (sVar3 == sVar14) {
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01178bd0;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01178bd0:
        bVar13 = false;
      }
      if (!bVar13) goto code_r0x01178bd8;
      lVar9 = local_58[2];
      if (lVar9 != 0) {
        if (*(code **)(param_1 + 0x60) == (code *)0x0) {
          lVar8 = *(long *)(lVar9 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar14 = *psVar1;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar13) {
              *psVar1 = sVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        else {
          uVar17 = *(undefined8 *)(lVar9 + 0x18);
          (**(code **)(param_1 + 0x60))(local_68,param_1 + 0x80,param_4);
          FUN_014292b8(uVar17,param_3,local_68);
          if (local_68[0] != (undefined8 *)0x0) {
            psVar1 = (short *)(local_68[0] + 3);
            do {
              sVar14 = *psVar1;
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar13) {
                *psVar1 = sVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar14 == 1) {
              piVar2 = (int *)((long)local_68[0] + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar13) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar8 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar8;
                local_48 = *local_68[0];
                FUN_00c44438(lVar8 + 0x8040,&local_48);
              }
            }
            else if (sVar14 == 0) goto LAB_01178c08;
          }
          lVar8 = *(long *)(lVar9 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar14 = *psVar1;
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar13) {
              *psVar1 = sVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (sVar14 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
        }
        else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
LAB_01178be0:
    puVar6 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar14 = *psVar1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_48 = *puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_48);
        }
      }
      else if (sVar14 == 0) {
LAB_01178c08:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_01178b50:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  return;
}


