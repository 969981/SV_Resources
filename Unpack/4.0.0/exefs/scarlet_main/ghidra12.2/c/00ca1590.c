/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca1590; name: FUN_00ca1590
 */


undefined8 FUN_00ca1590(undefined8 param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long lVar9;
  char *pcVar10;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar7 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar7 == (undefined8 *)0x0) || (pcVar10 = (char *)*puVar7, pcVar10 == (char *)0x0)) {
    if ((DAT_04805550 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_04805550);
      pcVar10 = &DAT_04805538;
      if (iVar6 != 0) {
        DAT_04805538 = 0;
        DAT_04805540 = 0;
        FUN_00100190(&LAB_01b225b8,&DAT_04805538,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04805550);
      }
    }
    else {
      pcVar10 = &DAT_04805538;
    }
  }
  if (((DAT_04805598 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04805598), iVar6 != 0)) {
    DAT_04805ef8 = '\x01';
    DAT_04805f00 = '\x01';
    __cxa_guard_release(&DAT_04805598);
  }
  cVar4 = *pcVar10;
  pcVar8 = (code *)&DAT_00000090;
  if (DAT_04805ef8 == '\0') {
    pcVar8 = (code *)0x0;
  }
  if (cVar4 == '\x01') {
LAB_00ca15f0:
    if (*(long **)(pcVar10 + 8) == (long *)0x0) {
LAB_00ca17b0:
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
    }
    else {
      if (DAT_04805f00 != '\0') {
        pcVar8 = *(code **)(pcVar8 + **(long **)(pcVar10 + 8));
      }
      (*pcVar8)(&local_48);
    }
  }
  else if (cVar4 == '\x03') {
    FUN_00ca22a4(&local_48,pcVar10 + 8);
  }
  else {
    if (cVar4 != '\x02') {
      if (cVar4 == '\0') goto LAB_00ca15f0;
      goto LAB_00ca17b0;
    }
    FUN_00ca2274(&local_48,pcVar10 + 8);
  }
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00ca1a48(&local_38,&local_48);
  local_60[0] = 2;
  local_58 = 0;
  uStack_50 = 0;
  FUN_00ca1ea4(&local_58,&local_38);
  puVar7 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_38 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_38 + 0x1c);
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_28 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_00ca16b4;
  }
  puVar7 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = (undefined8 *)*puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
LAB_00ca16b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_00ca1900(param_1,local_60);
  FUN_00cecfd8(local_60);
  return 1;
}


