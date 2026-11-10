/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013d8d9c; name: FUN_013d8d9c
 */


/* WARNING: Removing unreachable block (ram,0x013d8ef8) */
/* WARNING: Removing unreachable block (ram,0x013d8efc) */
/* WARNING: Removing unreachable block (ram,0x013d8f04) */
/* WARNING: Removing unreachable block (ram,0x013d8f0c) */
/* WARNING: Removing unreachable block (ram,0x013d8ff4) */
/* WARNING: Removing unreachable block (ram,0x013d8ffc) */
/* WARNING: Removing unreachable block (ram,0x013d9000) */
/* WARNING: Removing unreachable block (ram,0x013d9008) */
/* WARNING: Removing unreachable block (ram,0x013d9010) */
/* WARNING: Removing unreachable block (ram,0x013d91a4) */
/* WARNING: Removing unreachable block (ram,0x013d91b4) */
/* WARNING: Removing unreachable block (ram,0x013d9018) */
/* WARNING: Removing unreachable block (ram,0x013d8f14) */
/* WARNING: Removing unreachable block (ram,0x013d8f18) */

void FUN_013d8d9c(long *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  
  (**(code **)(*param_2 + 0x20))(&local_70);
  *param_1 = 0;
  param_1[1] = 0;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  if (local_70 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)local_70[1];
    if (puVar17 != (undefined8 *)0x0) {
      puVar14 = (undefined8 *)PTR_DAT_047db140;
      if (((*PTR_DAT_047db138 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047db138), puVar11 = PTR_DAT_047d3ab0,
         puVar14 = (undefined8 *)PTR_DAT_047db140, iVar12 != 0)) {
        if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar9 = PTR_DAT_047d39b8, iVar12 != 0))
        {
          if (((*PTR_DAT_047d39b0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar10 = PTR_DAT_047d39c8,
             iVar12 != 0)) {
            if (((*PTR_DAT_047d39c0 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar12 != 0)) {
              *(undefined8 *)puVar10 = 0;
              __cxa_guard_release(PTR_DAT_047d39c0);
            }
            *(undefined **)puVar9 = puVar10;
            __cxa_guard_release(PTR_DAT_047d39b0);
          }
          *(undefined **)puVar11 = puVar9;
          __cxa_guard_release(PTR_DAT_047d3aa8);
        }
        puVar14 = (undefined8 *)PTR_DAT_047db140;
        *(undefined **)PTR_DAT_047db140 = puVar11;
        __cxa_guard_release(PTR_DAT_047db138);
      }
LAB_013d8e10:
      if (puVar17 != puVar14) goto code_r0x013d8e18;
      do {
        lVar15 = local_68;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(&local_68,0x10);
        if (bVar5) {
          local_68 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar13 = *(undefined8 *)puVar7;
      *(undefined8 *)puVar8 = uVar13;
      FUN_00c44204(&local_60,uVar13,lVar15);
      puVar17 = local_70;
      local_70 = (undefined8 *)0x0;
      if (puVar17 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar17 + 3);
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
          piVar2 = (int *)((long)puVar17 + 0x1c);
          do {
            iVar12 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 != -1) {
            if (((*puVar6 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)puVar7;
            *(long *)puVar8 = lVar16;
            local_58 = *puVar17;
            FUN_00c44438(lVar16 + 0x8040,&local_58);
          }
        }
        else if (sVar3 == 0) goto LAB_013d8f3c;
      }
      if (local_60 == 0) {
        FUN_013dcfd4(param_1);
      }
      else {
        puVar17 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (puVar17 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar17 + 3);
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
            piVar2 = (int *)((long)puVar17 + 0x1c);
            do {
              iVar12 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 != -1) {
              if (((*puVar6 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar16 = *(long *)puVar7;
              *(long *)puVar8 = lVar16;
              local_58 = *puVar17;
              FUN_00c44438(lVar16 + 0x8040,&local_58);
            }
          }
          else if (sVar3 == 0) goto LAB_013d8f3c;
        }
        lVar16 = local_60;
        local_60 = 0;
        *param_1 = lVar16;
        param_1[1] = lVar15;
      }
    }
LAB_013d8e8c:
    puVar17 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
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
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)puVar7;
          *(long *)puVar8 = lVar15;
          local_58 = *puVar17;
          FUN_00c44438(lVar15 + 0x8040,&local_58);
        }
      }
      else if (sVar3 == 0) {
LAB_013d8f3c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x013d8e18:
  puVar17 = (undefined8 *)*puVar17;
  if (puVar17 == (undefined8 *)0x0) goto LAB_013d8e8c;
  goto LAB_013d8e10;
}


