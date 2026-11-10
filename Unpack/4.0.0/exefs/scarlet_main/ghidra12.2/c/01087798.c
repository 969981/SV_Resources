/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01087798; name: FUN_01087798
 */


void FUN_01087798(long param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  long local_38;
  undefined1 auStack_18 [8];
  
  if (((*(long *)(param_2 + 8) != 0) && ((*(byte *)(*(long *)(param_2 + 8) + 0x1e8) & 1) != 0)) &&
     ((*(byte *)(*(long *)(param_2 + 8) + 0x1e8) & 1) != 0)) {
    puVar9 = *(uint **)(*(long *)(param_2 + 8) + 0x1f0);
    local_38 = 0;
    if (puVar9 == (uint *)0x0) goto LAB_01087814;
    piVar2 = (int *)((long)puVar9 + (ulong)*puVar9);
    if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar10 != 0)) {
      puVar9 = (uint *)((long)piVar2 + uVar10);
      local_38 = (long)puVar9 + (ulong)*puVar9;
      goto LAB_01087814;
    }
  }
  local_38 = 0;
LAB_01087814:
  lVar6 = FUN_0108790c(auStack_18,*(undefined8 *)(param_1 + 8),&local_38);
  if (lVar6 != 0) {
    lVar11 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar8;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar7 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  lVar11 = 0;
  if (lVar6 != 0) {
    lVar11 = lVar6 + 0x20;
  }
  *(long *)(param_1 + 0x40) = lVar11;
  return;
}


