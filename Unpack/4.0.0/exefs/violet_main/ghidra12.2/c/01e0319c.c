/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0319c; name: FUN_01e0319c
 */


uint FUN_01e0319c(long *param_1,undefined4 param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  undefined8 *puVar13;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  lVar10 = *param_1;
  if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) {
LAB_01e031b8:
    uVar7 = 0;
  }
  else {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar12 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e03210;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e03210:
        bVar5 = false;
      }
      puVar6 = PTR_DAT_047d6528;
      if (bVar5) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) goto LAB_01e031b8;
        local_40 = (undefined8 *)0x0;
        uStack_38 = 0;
        if ((*param_1 == 0) ||
           (puVar13 = *(undefined8 **)(*param_1 + 8), puVar13 == (undefined8 *)0x0))
        goto LAB_01e03280;
        if (((*PTR_DAT_047d6520 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar8 != 0)) {
          uVar9 = FUN_0151c130();
          *(undefined8 *)puVar6 = uVar9;
          __cxa_guard_release(PTR_DAT_047d6520);
        }
        goto LAB_01e03260;
      }
      uVar7 = 0;
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
  goto LAB_01e031bc;
  while (puVar13 = (undefined8 *)*puVar13, puVar13 != (undefined8 *)0x0) {
LAB_01e03260:
    if (puVar13 == (undefined8 *)puVar6) {
      FUN_00d7c390(&local_40,param_1);
      break;
    }
  }
LAB_01e03280:
  uVar7 = FUN_011c4db8(&local_40,param_2);
  puVar13 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar12 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_18 = *puVar13;
        FUN_00c44438(lVar11 + 0x8040,&local_18);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))();
LAB_01e031bc:
  return uVar7 & 1;
}


