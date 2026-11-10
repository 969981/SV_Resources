/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019cf498; name: FUN_019cf498
 */


void FUN_019cf498(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  long *plVar12;
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_18;
  
  local_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  local_50 = *(undefined8 *)(param_1 + 0x120);
  plVar12 = *(long **)(param_1 + 0x128);
  local_48 = plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_40,param_1 + 0x30,&local_60);
    plVar12 = local_48;
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (local_40 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_40 + 0x1a) == 0) goto LAB_019cf61c;
  psVar1 = (short *)((long)local_40 + 0x1a);
  sVar11 = *(short *)((long)local_40 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar11) {
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_019cf564;
      bVar10 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_019cf564:
      bVar10 = false;
    }
    if (bVar10) {
      puVar8 = (undefined8 *)local_40[2];
      plVar12 = puVar8 + -5;
      if (puVar8 == (undefined8 *)0x0) goto LAB_019cf61c;
      plVar6 = (long *)(**(code **)*puVar8)(puVar8);
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar5 != 0)) {
        uVar7 = FUN_0151c130();
        *(undefined8 *)PTR_DAT_047d6528 = uVar7;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      goto joined_r0x019cf5b4;
    }
    sVar11 = sVar3;
  } while (sVar3 != 0);
  goto LAB_019cf618;
joined_r0x019cf5b4:
  if (plVar6 == (long *)0x0) goto LAB_019cf5d0;
  if (plVar6 == (long *)PTR_DAT_047d6528) {
    local_18 = plVar12;
    goto LAB_019cf5dc;
  }
  plVar6 = (long *)*plVar6;
  goto joined_r0x019cf5b4;
LAB_019cf5d0:
  local_18 = (long *)0x0;
LAB_019cf5dc:
  local_64[0] = 1;
  FUN_016a9420("main.tml.TimeLineCommand","CFunc_Tml_IgnoreEnableFaceOverwrite",&local_18,local_64);
  (**(code **)(*plVar12 + 0x60))(plVar12);
LAB_019cf618:
  if (local_40 == (undefined8 *)0x0) {
    return;
  }
LAB_019cf61c:
  puVar8 = local_40;
  psVar1 = (short *)(local_40 + 3);
  do {
    sVar11 = *psVar1;
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar11 == 1) {
    piVar2 = (int *)((long)local_40 + 0x1c);
    do {
      iVar5 = *piVar2;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar10) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar9 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar9;
      local_18 = (long *)*puVar8;
      FUN_00c44438(lVar9 + 0x8040,&local_18);
    }
  }
  else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}


