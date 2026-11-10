/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b825c; name: FUN_011b825c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011b825c(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_28 [8];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  plVar10 = *(long **)(lVar11 + 0x1c8);
  plVar5 = *(long **)(lVar11 + 0x1c0);
  do {
    if (plVar5 == plVar10) {
      lVar11 = 0;
      break;
    }
    lVar11 = *plVar5;
    uVar9 = FUN_011b8548(lVar11 + 0x28);
    plVar5 = plVar5 + 1;
  } while ((uVar9 & 1) == 0);
  plVar10 = (long *)FUN_00f124d8(auStack_28,*(undefined8 *)(param_1 + 8),PTR_DAT_047dadc0);
  if (plVar10 == (long *)0x0) {
    if (DAT_00000054 != '\0') {
      _DAT_00000052 = FUN_011b8d00(_DAT_00000030,lVar11 + 0x50,_DAT_00000050);
    }
  }
  else {
    plVar5 = plVar10 + 5;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) {
LAB_011b8520:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    if (*(char *)((long)plVar10 + 0x54) != '\0') {
      uVar7 = FUN_011b8d00(plVar10[6],lVar11 + 0x50,(short)plVar10[10]);
      *(undefined2 *)((long)plVar10 + 0x52) = uVar7;
    }
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) goto LAB_011b8520;
  }
  uVar4 = *(byte *)(lVar11 + 0x47) - 1;
  if (uVar4 < 10) {
    uVar1 = *(undefined4 *)(&DAT_03d5ef58 + (long)(char)uVar4 * 4);
  }
  else {
    uVar1 = 0;
  }
  if (*(char *)(lVar11 + 0x45) == '\0') {
    lVar11 = 0;
  }
  else if (*(char *)(lVar11 + 0x45) == '\x01') {
    lVar11 = 1;
  }
  else {
    if (((*PTR_DAT_047d8c98 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000,uVar1);
      __cxa_guard_release(PTR_DAT_047d8c98);
    }
    lVar11 = *(long *)PTR_DAT_047d8ca0;
    *(long *)PTR_DAT_047d8ca8 = lVar11;
    lVar11 = (ulong)(*(int *)(lVar11 + 0x2b0) == 5) << 1;
  }
  FUN_011b87e8(param_1,param_2,plVar10,uVar1,lVar11,0);
  plVar5 = plVar10 + 5;
  do {
    lVar11 = *plVar5;
    iVar8 = (int)lVar11 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *(int *)plVar5 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  else if ((int)lVar11 == 0) goto LAB_011b84f8;
  do {
    lVar11 = *plVar5;
    iVar8 = (int)lVar11 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *(int *)plVar5 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  else if ((int)lVar11 == 0) {
LAB_011b84f8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


