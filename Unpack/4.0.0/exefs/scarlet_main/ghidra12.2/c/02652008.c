/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02652008; name: FUN_02652008
 */


void FUN_02652008(undefined8 param_1,undefined8 param_2,byte *param_3,byte param_4)

{
  short *psVar1;
  int *piVar2;
  undefined *puVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  byte local_7c [4];
  undefined1 *local_78;
  byte *pbStack_70;
  size_t local_68;
  long *local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  puVar3 = PTR_LAB_047e0390;
  if (DAT_04855988 == '\0') {
    puVar3 = (undefined *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_78 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_70 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_68 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_60 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x18))();
    }
  }
  else {
    local_68 = strlen((char *)param_3);
    bVar5 = *param_3;
    local_78 = &DAT_cbf29ce484222645;
    pbVar10 = param_3;
    while (bVar5 != 0) {
      pbVar10 = pbVar10 + 1;
      local_78 = (undefined1 *)(((ulong)local_78 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar10;
    }
    local_60 = (long *)0x0;
    pbStack_70 = param_3;
  }
  local_7c[0] = param_4 & 1;
  FUN_02652b68(local_58,param_2,puVar3,0,&local_78,local_7c);
  FUN_017cdd40(param_1,local_58);
  if (local_58[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58[0] + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_48 = *local_58[0];
        FUN_00c44438(lVar9 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


