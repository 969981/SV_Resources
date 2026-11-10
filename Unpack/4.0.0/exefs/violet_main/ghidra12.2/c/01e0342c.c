/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0342c; name: FUN_01e0342c
 */


undefined4 FUN_01e0342c(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_18;
  
  if (((DAT_04837608 & 1) == 0) &&
     (local_18 = param_1, iVar7 = __cxa_guard_acquire(&DAT_04837608), param_1 = local_18, iVar7 != 0
     )) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
    param_1 = local_18;
  }
  DAT_04837610 = DAT_048375f8;
  lVar9 = *param_1;
  if (lVar9 == 0) {
    DAT_04837610 = DAT_048375f8;
    return 0;
  }
  if (*(short *)(lVar9 + 0x1a) == 0) {
    DAT_04837610 = DAT_048375f8;
    return 0;
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  sVar11 = *(short *)(lVar9 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e03520;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e03520:
      bVar5 = false;
    }
    puVar6 = PTR_DAT_047d6528;
    if (bVar5) {
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        return 0;
      }
      local_40 = (undefined8 *)0x0;
      uStack_38 = 0;
      if ((*param_1 == 0) ||
         (puVar12 = *(undefined8 **)(*param_1 + 8), puVar12 == (undefined8 *)0x0))
      goto LAB_01e0358c;
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(0,PTR_DAT_047d6520), iVar7 != 0)) {
        uVar8 = FUN_0151c130();
        *(undefined8 *)puVar6 = uVar8;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      break;
    }
    sVar11 = sVar3;
    if (sVar3 == 0) {
      return 0;
    }
  } while( true );
  while (puVar12 = (undefined8 *)*puVar12, puVar12 != (undefined8 *)0x0) {
    if (puVar12 == (undefined8 *)puVar6) {
      FUN_00d7c390(&local_40,param_1);
      break;
    }
  }
LAB_01e0358c:
  uVar13 = FUN_01c7aa84(&local_40);
  puVar12 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_18 = (long *)*puVar12;
        FUN_00c44438(lVar10 + 0x8040,&local_18);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
  return uVar13;
}


