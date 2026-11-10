/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8b118; name: FUN_01f8b118
 */


undefined8 FUN_01f8b118(long param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  short sVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  lVar9 = FUN_00da75d8();
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_00cbb698(&local_50,param_1 + 0x120);
  puVar7 = local_50;
  if (local_50 == (undefined8 *)0x0) {
LAB_01f8b158:
    uVar14 = 0;
  }
  else {
    if (*(short *)((long)local_50 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50 + 0x1a);
      sVar13 = *(short *)((long)local_50 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01f8b1ac;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01f8b1ac:
          bVar6 = false;
        }
        if (bVar6) {
          plVar15 = (long *)0x0;
          if (local_50[2] != 0) {
            plVar15 = (long *)(local_50[2] + -0x28);
          }
          goto LAB_01f8b1d4;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
    }
    plVar15 = (long *)0x0;
LAB_01f8b1d4:
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (lVar9 == 0) {
      uVar14 = 0;
      if (plVar15 == (long *)0x0) {
        return 0;
      }
    }
    else {
      if (plVar15 == (long *)0x0) goto LAB_01f8b158;
      uVar10 = FUN_01f8b404(plVar15,param_2);
      if ((uVar10 & 1) == 0) {
        uVar14 = 0;
      }
      else {
        FUN_01f8b508(lVar9 + 0x2f0,param_2);
        *(undefined4 *)(lVar9 + 0x390) = *(undefined4 *)(param_2 + 0xa0);
        *(undefined8 *)(lVar9 + 0x3b8) = *(undefined8 *)(param_2 + 200);
        *(undefined8 *)(lVar9 + 0x3b0) = *(undefined8 *)(param_2 + 0xc0);
        FUN_00d0a71c(lVar9 + 0x3c8,param_2 + 0xd8);
        *(undefined8 *)(lVar9 + 1000) = *(undefined8 *)(param_2 + 0xf8);
        *(undefined8 *)(lVar9 + 0x3e0) = *(undefined8 *)(param_2 + 0xf0);
        FUN_00d0a71c(lVar9 + 0x3f8,param_2 + 0x108);
        FUN_00c6c994(lVar9 + 0x408,param_2 + 0x118);
        plVar16 = *(long **)(param_2 + 0x128);
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
        plVar11 = *(long **)(lVar9 + 0x418);
        *(long **)(lVar9 + 0x418) = plVar16;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))();
        }
        memcpy((void *)(lVar9 + 0x420),(void *)(param_2 + 0x130),0x25);
        uVar3 = *(undefined4 *)(param_2 + 0x168);
        uVar14 = 1;
        *(undefined8 *)(lVar9 + 0x450) = *(undefined8 *)(param_2 + 0x160);
        *(undefined4 *)(lVar9 + 0x458) = uVar3;
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(undefined4 *)(param_1 + 0x150) = 1;
      }
    }
    lVar9 = plVar15[0x13];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return uVar14;
}


