/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f53cf4; name: FUN_00f53cf4
 */


/* WARNING: Removing unreachable block (ram,0x00f53e6c) */
/* WARNING: Removing unreachable block (ram,0x00f53e70) */
/* WARNING: Removing unreachable block (ram,0x00f53e78) */
/* WARNING: Removing unreachable block (ram,0x00f53e80) */
/* WARNING: Removing unreachable block (ram,0x00f53fb0) */
/* WARNING: Removing unreachable block (ram,0x00f53fb8) */
/* WARNING: Removing unreachable block (ram,0x00f53fbc) */
/* WARNING: Removing unreachable block (ram,0x00f53fc4) */
/* WARNING: Removing unreachable block (ram,0x00f53fcc) */
/* WARNING: Removing unreachable block (ram,0x00f54154) */
/* WARNING: Removing unreachable block (ram,0x00f54164) */
/* WARNING: Removing unreachable block (ram,0x00f53fd4) */
/* WARNING: Removing unreachable block (ram,0x00f53e88) */
/* WARNING: Removing unreachable block (ram,0x00f53e8c) */

void FUN_00f53cf4(long *param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *local_60;
  long local_58;
  long *local_50;
  undefined8 uStack_48;
  long local_28;
  
  local_50 = (long *)0x0;
  uStack_48 = 0;
  FUN_00c43ef0(&local_50,param_2 + 0x30);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_00c96b7c(&local_60,&local_50);
  plVar10 = local_50;
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  puVar7 = PTR_DAT_047d3908;
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 3;
    do {
      sVar4 = (short)*plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(short *)plVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_50 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)puVar8;
        *(long *)puVar9 = lVar13;
        local_28 = *plVar10;
        FUN_00c44438(lVar13 + 0x8040,&local_28);
      }
    }
    else if (sVar4 == 0) goto LAB_00f53eb0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (local_60 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)local_60[1];
    if (puVar15 != (undefined8 *)0x0) {
      FUN_00f541d8();
LAB_00f53d70:
      if (puVar15 != &DAT_048426b0) goto LAB_00f54040;
      do {
        lVar13 = local_58;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(&local_58,0x10);
        if (bVar6) {
          local_58 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar12 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar12;
      FUN_00c44204(&local_28,uVar12,lVar13);
      puVar15 = local_60;
      local_60 = (undefined8 *)0x0;
      if (puVar15 != (undefined8 *)0x0) {
        psVar2 = (short *)(puVar15 + 3);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)puVar15 + 0x1c);
          do {
            iVar11 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 != -1) {
            if (((*puVar7 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)puVar8;
            *(long *)puVar9 = lVar14;
            local_50 = (long *)*puVar15;
            FUN_00c44438(lVar14 + 0x8040,&local_50);
          }
        }
        else if (sVar4 == 0) goto LAB_00f53eb0;
      }
      if (local_28 == 0) {
        FUN_00f542e8(param_1);
      }
      else {
        puVar15 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (puVar15 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar15 + 3);
          do {
            sVar4 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)puVar15 + 0x1c);
            do {
              iVar11 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != -1) {
              if (((*puVar7 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)puVar8;
              *(long *)puVar9 = lVar14;
              local_50 = (long *)*puVar15;
              FUN_00c44438(lVar14 + 0x8040,&local_50);
            }
          }
          else if (sVar4 == 0) goto LAB_00f53eb0;
        }
        lVar14 = local_28;
        local_28 = 0;
        *param_1 = lVar14;
        param_1[1] = lVar13;
      }
    }
LAB_00f53de0:
    puVar15 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_60 + 3);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_60 + 0x1c);
        do {
          iVar11 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 != -1) {
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar8;
          *(long *)puVar9 = lVar13;
          local_50 = (long *)*puVar15;
          FUN_00c44438(lVar13 + 0x8040,&local_50);
        }
      }
      else if (sVar4 == 0) {
LAB_00f53eb0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
LAB_00f54040:
  puVar15 = (undefined8 *)*puVar15;
  if (puVar15 == (undefined8 *)0x0) goto LAB_00f53de0;
  goto LAB_00f53d70;
}


