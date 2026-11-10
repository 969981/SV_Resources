/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02296704; name: FUN_02296704
 */


undefined4 FUN_02296704(void)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 *local_30 [2];
  undefined8 local_8;
  
  FUN_01193548(local_30);
  if (local_30[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_30[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_30[0] + 0x1a);
      sVar8 = *(short *)((long)local_30[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02296780;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02296780:
          bVar5 = false;
        }
        if (bVar5) {
          plVar9 = (long *)0x0;
          if (local_30[0][2] != 0) {
            plVar9 = (long *)(local_30[0][2] + -0x28);
          }
          goto LAB_022967ac;
        }
        sVar8 = sVar3;
      } while (sVar3 != 0);
    }
    plVar9 = (long *)0x0;
LAB_022967ac:
    psVar1 = (short *)(local_30[0] + 3);
    do {
      sVar8 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar8 == 1) {
      piVar2 = (int *)((long)local_30[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_8 = *local_30[0];
        FUN_00c44438(lVar7 + 0x8040,&local_8);
      }
    }
    else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar9 != (long *)0x0) {
      uVar12 = (undefined4)plVar9[10];
      uVar10 = *(undefined4 *)((long)plVar9 + 0x54);
      uVar13 = *(uint *)(plVar9 + 0xb);
      uVar11 = *(uint *)((long)plVar9 + 0x5c);
      lVar7 = plVar9[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar8 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
        return uVar12;
      }
      if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.",uVar12,uVar10,(ulong)uVar13,(ulong)uVar11);
      }
      return uVar12;
    }
  }
  return 0;
}


