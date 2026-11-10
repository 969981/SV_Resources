/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3f94c; name: FUN_02a3f94c
 */


void FUN_02a3f94c(long param_1)

{
  long *plVar1;
  int *piVar2;
  short sVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  puVar8 = PTR_LAB_047d3de8;
  puVar7 = PTR_DAT_047d3910;
  puVar4 = *(undefined8 **)(param_1 + 0x130);
  puVar12 = *(undefined8 **)(param_1 + 0x138);
  if (puVar12 == puVar4) {
    puVar12 = puVar4;
  }
  else {
    do {
      FUN_00cb786c(puVar12 + -7);
      puVar12 = puVar12 + -9;
      plVar13 = (long *)*puVar12;
      if (plVar13 != (long *)0x0) {
        plVar1 = plVar13 + 3;
        do {
          sVar3 = (short)*plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(short *)plVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)plVar13 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(puVar8,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)puVar7;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_88 = *plVar13;
            FUN_00c44438(lVar11 + 0x8040,&local_88);
          }
        }
        else if (sVar3 == 0) goto LAB_02a3fc08;
      }
    } while (puVar12 != puVar4);
    puVar12 = *(undefined8 **)(param_1 + 0x130);
  }
  lVar11 = (long)puVar4 - (long)puVar12;
  *(undefined8 **)(param_1 + 0x138) = puVar4;
  if ((ulong)((lVar11 >> 3) * -0x71c71c71c71c71c7) <
      (ulong)((*(long *)(param_1 + 0x140) - (long)puVar12 >> 3) * -0x71c71c71c71c71c7)) {
    puVar4 = (undefined8 *)(param_1 + 0x148);
    local_70 = 0;
    puStack_68 = puVar4;
    if (lVar11 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,lVar11,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar4 + 0xe8))();
      }
    }
    lStack_80 = lVar10 + (lVar11 >> 3) * 8;
    local_88 = lVar10;
    local_78 = lStack_80;
    local_70 = lStack_80;
    FUN_02a41700((long *)(param_1 + 0x130),&local_88);
    FUN_02a41898(&local_88);
  }
  puVar8 = PTR_LAB_047d3de8;
  puVar4 = *(undefined8 **)(param_1 + 0x168);
  puVar12 = *(undefined8 **)(param_1 + 0x170);
  do {
    while( true ) {
      do {
        if (puVar12 == puVar4) {
          *(undefined8 **)(param_1 + 0x170) = puVar4;
          FUN_02a41a9c(param_1 + 0x168);
          return;
        }
        puVar12 = puVar12 + -2;
        plVar13 = (long *)*puVar12;
      } while (plVar13 == (long *)0x0);
      plVar1 = plVar13 + 3;
      do {
        sVar3 = (short)*plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(short *)plVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 != 1) break;
      piVar2 = (int *)((long)plVar13 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(puVar8,puVar7,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)puVar7;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_88 = *plVar13;
        FUN_00c44438(lVar11 + 0x8040,&local_88);
      }
    }
  } while (sVar3 != 0);
LAB_02a3fc08:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
}


