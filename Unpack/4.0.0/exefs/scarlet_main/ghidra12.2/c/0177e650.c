/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0177e650; name: FUN_0177e650
 */


undefined8 FUN_0177e650(double param_1,undefined8 param_2,byte *param_3)

{
  ulong *puVar1;
  int *piVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  float local_64;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  ulong *local_40 [2];
  
  uVar8 = DAT_048462b0;
  FUN_00efb870(local_40);
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_48 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)param_3);
    bVar4 = *param_3;
    local_60 = &DAT_cbf29ce484222645;
    pbVar10 = param_3;
    while (bVar4 != 0) {
      pbVar10 = pbVar10 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar10;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_3;
  }
  local_64 = (float)param_1;
  uVar8 = FUN_0177e890(uVar8,local_40,&local_60,&local_64);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_40[0] != (ulong *)0x0) {
    puVar1 = local_40[0] + 3;
    do {
      sVar3 = (short)*puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *(short *)puVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_40[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_60 = (undefined1 *)*local_40[0];
        FUN_00c44438(lVar9 + 0x8040,&local_60);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return uVar8;
}


