/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019aa6ac; name: FUN_019aa6ac
 */


void FUN_019aa6ac(undefined8 param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  short sVar13;
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40 [2];
  long *local_18;
  
  puVar6 = (undefined8 *)FUN_0140f310();
  local_60 = *puVar6;
  uStack_58 = puVar6[1];
  local_50 = puVar6[2];
  local_48 = (long *)puVar6[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  FUN_0140f318(local_40,param_1,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_40[0] == (undefined8 *)0x0) {
    return;
  }
  puVar6 = local_40[0];
  if (*(short *)((long)local_40[0] + 0x1a) == 0) goto LAB_019aa81c;
  psVar1 = (short *)((long)local_40[0] + 0x1a);
  sVar13 = *(short *)((long)local_40[0] + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar13) {
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_019aa764;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_019aa764:
      bVar12 = false;
    }
    if (bVar12) {
      puVar9 = (undefined8 *)local_40[0][2];
      plVar11 = puVar9 + -5;
      if (puVar9 == (undefined8 *)0x0) goto LAB_019aa81c;
      plVar7 = (long *)(**(code **)*puVar9)(puVar9);
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar5 != 0)) {
        uVar8 = FUN_0151c130();
        *(undefined8 *)PTR_DAT_047d6528 = uVar8;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      goto joined_r0x019aa7b4;
    }
    sVar13 = sVar3;
  } while (sVar3 != 0);
  goto LAB_019aa818;
joined_r0x019aa7b4:
  if (plVar7 == (long *)0x0) goto LAB_019aa7d0;
  if (plVar7 == (long *)PTR_DAT_047d6528) {
    local_18 = plVar11;
    goto LAB_019aa7dc;
  }
  plVar7 = (long *)*plVar7;
  goto joined_r0x019aa7b4;
LAB_019aa7d0:
  local_18 = (long *)0x0;
LAB_019aa7dc:
  local_64[0] = 1;
  FUN_016a9420("main.tml.TimeLineCommand","CFunc_Tml_SetEyeBlink",&local_18,local_64);
  (**(code **)(*plVar11 + 0x60))(plVar11);
LAB_019aa818:
  puVar6 = local_40[0];
  if (local_40[0] == (undefined8 *)0x0) {
    return;
  }
LAB_019aa81c:
  psVar1 = (short *)(puVar6 + 3);
  do {
    sVar13 = *psVar1;
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar12) {
      *psVar1 = sVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar13 == 1) {
    piVar2 = (int *)((long)puVar6 + 0x1c);
    do {
      iVar5 = *piVar2;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
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
      lVar10 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar10;
      local_18 = (long *)*puVar6;
      FUN_00c44438(lVar10 + 0x8040,&local_18);
    }
  }
  else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}


