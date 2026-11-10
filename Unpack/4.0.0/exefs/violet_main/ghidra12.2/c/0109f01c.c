/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0109f01c; name: FUN_0109f01c
 */


void FUN_0109f01c(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_00d0a71c(&local_40);
  *param_1 = (long)&PTR_LAB_04561b68;
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_00d0a71c(param_1 + 1,&local_40);
  puVar8 = local_40;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (local_40 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_40 + 3);
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
      piVar2 = (int *)((long)local_40 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_18 = *puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_18);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  puVar7 = PTR_DAT_047daed8;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar6 = tpidr_el0;
    lVar10 = *(long *)(lVar6 + 0x30);
    if (lVar10 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar10 = DAT_04859430;
      *(long *)(lVar6 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[9] = lVar10;
  param_1[10] = 0x666666666666666;
  param_1[0xb] = 0;
  return;
}


