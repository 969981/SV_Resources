/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe53bc; name: FUN_00fe53bc
 */


bool FUN_00fe53bc(long param_1,uint param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  short sVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x148));
  uVar12 = *(ulong *)(param_1 + 0xe8);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar17 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar13 = (ulong)param_2;
    if (uVar17 < 2) {
      uVar14 = (ulong)((int)uVar12 - 1U & param_2);
    }
    else {
      uVar14 = uVar13;
      if (uVar12 <= uVar13) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar13 / uVar12;
        }
        uVar14 = uVar13 - uVar14 * uVar12;
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0xe0) + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar16[1] == uVar13) {
            if (*(uint *)(plVar16 + 2) == param_2) goto LAB_00fe5470;
          }
          else if ((plVar16[1] & uVar12 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar16[1];
          if (uVar17 == uVar13) {
            if (*(uint *)(plVar16 + 2) == param_2) goto LAB_00fe5470;
          }
          else {
            if (uVar12 <= uVar17) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar17 / uVar12;
              }
              uVar17 = uVar17 - uVar6 * uVar12;
            }
            if (uVar17 != uVar14) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  bVar8 = true;
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  goto LAB_00fe5488;
code_r0x00fe5510:
  sVar15 = sVar3;
  if (sVar3 == 0) goto LAB_00fe5518;
  goto LAB_00fe54e4;
LAB_00fe5470:
  FUN_00f53cf4(&local_40,plVar16[3]);
  if (local_40 == (undefined8 *)0x0) {
    bVar8 = true;
  }
  else {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40 + 0x1a);
      sVar15 = *(short *)((long)local_40 + 0x1a);
LAB_00fe54e4:
      sVar3 = *psVar1;
      if (sVar3 == sVar15) {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00fe5508;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00fe5508:
        bVar8 = false;
      }
      if (!bVar8) goto code_r0x00fe5510;
      lVar11 = local_40[2];
      if (lVar11 != 0) {
        iVar9 = FUN_0221dfac(*(undefined8 *)(lVar11 + 0x18));
        lVar10 = *(long *)(lVar11 + 8);
        bVar8 = iVar9 == 0;
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
        }
        else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        goto LAB_00fe551c;
      }
    }
LAB_00fe5518:
    bVar8 = true;
LAB_00fe551c:
    puVar7 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40 + 3);
      do {
        sVar15 = *psVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_40 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_18 = *puVar7;
          FUN_00c44438(lVar11 + 0x8040,&local_18);
        }
      }
      else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_00fe5488:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  return bVar8;
}


