/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e4afa0; name: FUN_00e4afa0
 */


void FUN_00e4afa0(long param_1,long param_2,long param_3,ulong param_4)

{
  short *psVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_60 [8];
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_28;
  
  plVar10 = *(long **)(param_1 + 8);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00c43ef0(&local_58,param_3);
  local_48 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*plVar10 + (ulong)*(uint *)(param_2 + 0x58));
  *puVar3 = 0;
  puVar3[1] = 0;
  FUN_00c43ef0(puVar3,&local_58);
  puVar7 = local_58;
  puVar3[2] = local_48;
  lVar9 = *(long *)(param_2 + 0x18);
  *(undefined *)(*plVar10 + (ulong)*(uint *)(lVar9 + 8)) = *PTR_DAT_047dafa8;
  *(undefined8 *)(*plVar10 + (ulong)*(uint *)(lVar9 + 0xc)) = 0;
  *(undefined1 *)(param_2 + 0x5c) = 1;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_28 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_28);
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
  if ((param_4 & 1) == 0) {
    FUN_00e503a0(auStack_60,param_2,param_1);
    FUN_00e5023c(auStack_60);
  }
  return;
}


