/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a403b0; name: FUN_02a403b0
 */


void FUN_02a403b0(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  puVar7 = PTR_DAT_047d3908;
  plVar13 = *(long **)(param_1 + 0x168);
  plVar4 = *(long **)(param_1 + 0x170);
  if (plVar13 != plVar4) {
    do {
      if ((*plVar13 != 0) && (*(short *)(*plVar13 + 0x1a) != 0)) {
        local_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        FUN_00dddfdc(&local_88,plVar13);
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_00dddfdc(&local_78,&local_88);
        (*(code *)*param_2)(param_2 + 4,&local_78);
        puVar10 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar11 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != -1) {
              if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar7);
              }
              lVar12 = *(long *)puVar8;
              *(long *)puVar9 = lVar12;
              local_68 = *puVar10;
              FUN_00c44438(lVar12 + 0x8040,&local_68);
            }
          }
          else if (sVar3 == 0) goto LAB_02a405ac;
        }
        puVar10 = local_88;
        if (local_88 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_88 + 3);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_88 + 0x1c);
            do {
              iVar11 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != -1) {
              if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar7);
              }
              lVar12 = *(long *)puVar8;
              *(long *)puVar9 = lVar12;
              local_78 = (undefined8 *)*puVar10;
              FUN_00c44438(lVar12 + 0x8040,&local_78);
            }
          }
          else if (sVar3 == 0) {
LAB_02a405ac:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar4);
  }
  return;
}


