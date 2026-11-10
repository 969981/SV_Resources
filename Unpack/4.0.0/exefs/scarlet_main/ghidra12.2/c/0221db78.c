/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0221db78; name: FUN_0221db78
 */


void FUN_0221db78(long param_1,uint param_2,undefined8 param_3)

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
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
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
            if (*(uint *)(plVar15 + 2) == param_2) goto LAB_0221dc30;
          }
          else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar15[1];
          if (uVar16 == uVar11) {
            if (*(uint *)(plVar15 + 2) == param_2) goto LAB_0221dc30;
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
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  goto LAB_0221dc44;
LAB_0221dc30:
  FUN_00f53cf4(&local_48,plVar15[3]);
  if (local_48 != (undefined8 *)0x0) {
    if (*(short *)((long)local_48 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48 + 0x1a);
      sVar14 = *(short *)((long)local_48 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar14) {
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0221dcc0;
          bVar13 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0221dcc0:
          bVar13 = false;
        }
        if (bVar13) {
          lVar9 = local_48[2];
          if (lVar9 != 0) {
            FUN_0216e83c(*(undefined8 *)(lVar9 + 0x18),param_3);
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
          break;
        }
        sVar14 = sVar3;
      } while (sVar3 != 0);
    }
    puVar6 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48 + 3);
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
        piVar2 = (int *)((long)local_48 + 0x1c);
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
          local_38 = *puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_0221dc44:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  return;
}


