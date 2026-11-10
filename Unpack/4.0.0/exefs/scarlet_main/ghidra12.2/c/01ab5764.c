/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ab5764; name: FUN_01ab5764
 */


/* WARNING: Removing unreachable block (ram,0x01ab5940) */
/* WARNING: Removing unreachable block (ram,0x01ab5944) */
/* WARNING: Removing unreachable block (ram,0x01ab594c) */
/* WARNING: Removing unreachable block (ram,0x01ab5954) */
/* WARNING: Removing unreachable block (ram,0x01ab5a64) */
/* WARNING: Removing unreachable block (ram,0x01ab5a6c) */
/* WARNING: Removing unreachable block (ram,0x01ab5a70) */
/* WARNING: Removing unreachable block (ram,0x01ab5a78) */
/* WARNING: Removing unreachable block (ram,0x01ab5a80) */
/* WARNING: Removing unreachable block (ram,0x01ab5c10) */
/* WARNING: Removing unreachable block (ram,0x01ab5c20) */
/* WARNING: Removing unreachable block (ram,0x01ab5a88) */
/* WARNING: Removing unreachable block (ram,0x01ab595c) */
/* WARNING: Removing unreachable block (ram,0x01ab5960) */

void FUN_01ab5764(long *param_1,long param_2,uint param_3)

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
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  uint local_64;
  undefined8 *local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  uVar14 = *(ulong *)(param_2 + 0x7ff8);
  if (uVar14 != 0) {
    uVar17 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar13 = (ulong)param_3;
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = (ulong)((int)uVar14 - 1U & param_3);
    }
    else {
      uVar18 = uVar13;
      if (uVar14 <= uVar13) {
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar13 / uVar14;
        }
        uVar18 = uVar13 - uVar18 * uVar14;
      }
    }
    plVar19 = *(long **)(*(long *)(param_2 + 0x7ff0) + uVar18 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar19[1] == uVar13) {
            if (*(uint *)(plVar19 + 2) == param_3) goto LAB_01ab5818;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar18) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar19[1];
          if (uVar17 == uVar13) {
            if (*(uint *)(plVar19 + 2) == param_3) goto LAB_01ab5818;
          }
          else {
            if (uVar14 <= uVar17) {
              uVar6 = 0;
              if (uVar14 != 0) {
                uVar6 = uVar17 / uVar14;
              }
              uVar17 = uVar17 - uVar6 * uVar14;
            }
            if (uVar17 != uVar18) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_01ab5818:
  local_64 = param_3;
  puVar11 = (undefined8 *)FUN_011ec970((long *)(param_2 + 0x7ff0),&local_64);
  plVar20 = (long *)*puVar11;
  (**(code **)(*plVar20 + 0x18))(&local_60,plVar20);
  *param_1 = 0;
  param_1[1] = 0;
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  puVar7 = PTR_DAT_047d3908;
  plVar19 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar19 = plVar20 + 5;
  }
  if ((long *)local_60[2] == plVar19) {
    do {
      lVar15 = local_58;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(&local_58,0x10);
      if (bVar5) {
        local_58 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    uVar12 = *(undefined8 *)puVar8;
    *(undefined8 *)puVar9 = uVar12;
    FUN_00c44204(&local_50,uVar12,lVar15);
    puVar11 = local_60;
    local_60 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar11 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar11 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)puVar8;
          *(long *)puVar9 = lVar16;
          local_48 = *puVar11;
          FUN_00c44438(lVar16 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_01ab5984;
    }
    if (local_50 == 0) {
      FUN_01ab5c94(param_1);
    }
    else {
      puVar11 = (undefined8 *)*param_1;
      *param_1 = 0;
      if (puVar11 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar11 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar11 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*puVar7 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)puVar8;
            *(long *)puVar9 = lVar16;
            local_48 = *puVar11;
            FUN_00c44438(lVar16 + 0x8040,&local_48);
          }
        }
        else if (sVar3 == 0) goto LAB_01ab5984;
      }
      lVar16 = local_50;
      local_50 = 0;
      *param_1 = lVar16;
      param_1[1] = lVar15;
    }
  }
  puVar11 = local_60;
  if (local_60 == (undefined8 *)0x0) {
    return;
  }
  psVar1 = (short *)(local_60 + 3);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 1) {
    piVar2 = (int *)((long)local_60 + 0x1c);
    do {
      iVar10 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == -1) {
      return;
    }
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar15 = *(long *)puVar8;
    *(long *)puVar9 = lVar15;
    local_48 = *puVar11;
    FUN_00c44438(lVar15 + 0x8040,&local_48);
    return;
  }
  if (sVar3 != 0) {
    return;
  }
LAB_01ab5984:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
}


