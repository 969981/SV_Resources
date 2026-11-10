/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a67348; name: FUN_00a67348
 */


void FUN_00a67348(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  short sVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  long *local_38;
  
  puVar7 = PTR_DAT_047d4568;
  if (((*PTR_DAT_047d4568 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar11 != 0)) {
    FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4568);
  }
  puVar9 = PTR_DAT_047d4578;
  puVar8 = PTR_DAT_047d4570;
  lVar14 = *(long *)PTR_DAT_047d4570;
  *(long *)PTR_DAT_047d4578 = lVar14;
  plVar15 = *(long **)(lVar14 + 0x50);
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 5;
    do {
      lVar14 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar14 == -1) {
LAB_00a6760c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar11 != 0)) {
      FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4568);
    }
    lVar14 = *(long *)puVar8;
    *(long *)puVar9 = lVar14;
    plVar16 = *(long **)(lVar14 + 0x28);
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 5;
      do {
        lVar14 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = (int)lVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar14 == -1) goto LAB_00a6760c;
      bVar4 = *(byte *)(plVar16 + 0x12);
      if (bVar4 != 0) {
        uVar17 = 0;
        do {
          plVar12 = (long *)(**(code **)(*plVar16 + 0x60))(plVar16,uVar17);
          if (plVar12 != (long *)0x0) {
            lVar14 = plVar12[0xe];
            if ((*(byte *)(*(long *)(lVar14 + 0x10) + 4) >> 2 & 1) == 0) {
              sVar10 = FUN_00cf44f4();
              if (sVar10 == 0) goto LAB_00a67498;
              lVar14 = plVar12[0xe];
            }
            uVar13 = FUN_00cf4cfc(lVar14);
            if (((uVar13 & 1) == 0) &&
               ((*(ushort *)(*(long *)(plVar12[0xe] + 0x10) + 4) >> 2 & 1) == 0)) {
              plVar3 = plVar12 + 5;
              do {
                lVar14 = *plVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *(int *)plVar3 = (int)lVar14 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              local_38 = plVar12;
              if ((int)lVar14 == -1) goto LAB_00a6760c;
              FUN_01edce74(plVar15,&local_38,0,0);
              if (local_38 != (long *)0x0) {
                plVar12 = local_38 + 5;
                do {
                  lVar14 = *plVar12;
                  iVar11 = (int)lVar14 + -1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                  if (bVar6) {
                    *(int *)plVar12 = iVar11;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar11 == 0) {
                  (**(code **)(*local_38 + 0x10))();
                }
                else if ((int)lVar14 == 0) goto LAB_00a675a0;
              }
            }
          }
LAB_00a67498:
          uVar17 = uVar17 + 1;
        } while (uVar17 != bVar4);
      }
      do {
        lVar14 = *plVar2;
        iVar11 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      else if ((int)lVar14 == 0) goto LAB_00a675a0;
    }
    do {
      lVar14 = *plVar1;
      iVar11 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    else if ((int)lVar14 == 0) {
LAB_00a675a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


