/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eeb410; name: FUN_00eeb410
 */


undefined8 FUN_00eeb410(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  undefined *puVar9;
  long *local_18;
  
  if (((DAT_04800bb0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04800bb0), iVar5 != 0)) {
    DAT_048018b0 = '\x01';
    __cxa_guard_release(&DAT_04800bb0);
  }
  puVar6 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar6 == (undefined8 *)0x0) || (pcVar8 = (char *)*puVar6, pcVar8 == (char *)0x0)) {
    if ((DAT_04800b48 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_04800b48);
      pcVar8 = &DAT_04800b20;
      if (iVar5 != 0) {
        DAT_04800b20 = 0;
        DAT_04800b28 = 0;
        FUN_00100190(&LAB_01ada5d0,&DAT_04800b20,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04800b48);
      }
    }
    else {
      pcVar8 = &DAT_04800b20;
    }
  }
  puVar6 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar6 == (undefined8 *)0x0) ||
     (puVar9 = (undefined *)*puVar6, (undefined *)*puVar6 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38e8 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_047d38e8);
      puVar9 = PTR_DAT_047d38f0;
      if (iVar5 != 0) {
        *PTR_DAT_047d38f0 = 0;
        *(undefined8 *)(puVar9 + 8) = 0;
        FUN_00100190(FUN_00cecfd8,puVar9,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38e8);
      }
    }
    else {
      puVar9 = PTR_DAT_047d38f0;
    }
  }
  lVar7 = 0x20;
  if (DAT_048018b0 == '\0') {
    lVar7 = -1;
  }
  FUN_00e43628(&local_18,puVar9);
  if (((*pcVar8 == '\0') || (*pcVar8 == '\x01')) && (*(long *)(pcVar8 + 8) != 0)) {
    FUN_00eeb618(*(long *)(pcVar8 + 8) + lVar7,&local_18);
  }
  if (local_18 != (long *)0x0) {
    lVar7 = local_18[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_18 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return 0;
}


