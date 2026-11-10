/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f6918; name: FUN_014f6918
 */


void FUN_014f6918(uint param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  short sVar16;
  long *plVar17;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38 [3];
  
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = (ulong)param_1;
  lVar8 = *(long *)PTR_DAT_047d8920;
  *(long *)PTR_DAT_047d8928 = lVar8;
  nn::os::LockMutex((MutexType *)(lVar8 + 0x148));
  uVar12 = *(ulong *)(lVar8 + 0xe8);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = (ulong)((int)uVar12 - 1U & param_1);
    }
    else {
      uVar14 = uVar9;
      if (uVar12 <= uVar9) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar9 / uVar12;
        }
        uVar14 = uVar9 - uVar14 * uVar12;
      }
    }
    plVar17 = *(long **)(*(long *)(lVar8 + 0xe0) + uVar14 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar17[1] == uVar9) {
            if (*(uint *)(plVar17 + 2) == param_1) goto LAB_014f6a6c;
          }
          else if ((plVar17[1] & uVar12 - 1) != uVar14) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar17[1];
          if (uVar13 == uVar9) {
            if (*(uint *)(plVar17 + 2) == param_1) goto LAB_014f6a6c;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar5 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  goto LAB_014f6a80;
LAB_014f6a6c:
  FUN_00f53cf4(&local_48,plVar17[3]);
  if (local_48 != (undefined8 *)0x0) {
    if (*(short *)((long)local_48 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48 + 0x1a);
      sVar16 = *(short *)((long)local_48 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar16) {
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar15) {
            *psVar1 = sVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_014f6afc;
          bVar15 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_014f6afc:
          bVar15 = false;
        }
        if (bVar15) {
          lVar11 = local_48[2];
          if (lVar11 != 0) {
            FUN_01561c6c(*(undefined8 *)(lVar11 + 0x18),param_2);
            lVar10 = *(long *)(lVar11 + 8);
            psVar1 = (short *)(lVar10 + 0x1a);
            do {
              sVar16 = *psVar1;
              cVar4 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar15) {
                *psVar1 = sVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar16 == 1) {
              *(undefined8 *)(lVar10 + 0x10) = 0;
              (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
            }
            else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar16 = sVar3;
      } while (sVar3 != 0);
    }
    puVar6 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48 + 3);
      do {
        sVar16 = *psVar1;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 1) {
        piVar2 = (int *)((long)local_48 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
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
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38[0] = *puVar6;
          FUN_00c44438(lVar11 + 0x8040,local_38);
        }
      }
      else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_014f6a80:
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x148));
  return;
}


