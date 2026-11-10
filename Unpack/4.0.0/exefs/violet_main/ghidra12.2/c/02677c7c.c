/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02677c7c; name: FUN_02677c7c
 */


/* WARNING: Removing unreachable block (ram,0x02677d50) */
/* WARNING: Removing unreachable block (ram,0x02677d54) */
/* WARNING: Removing unreachable block (ram,0x02677d5c) */
/* WARNING: Removing unreachable block (ram,0x02677d64) */
/* WARNING: Removing unreachable block (ram,0x02677ddc) */
/* WARNING: Removing unreachable block (ram,0x02677de4) */
/* WARNING: Removing unreachable block (ram,0x02677de8) */
/* WARNING: Removing unreachable block (ram,0x02677df0) */
/* WARNING: Removing unreachable block (ram,0x02677df8) */
/* WARNING: Removing unreachable block (ram,0x02677ea8) */
/* WARNING: Removing unreachable block (ram,0x02677eb8) */
/* WARNING: Removing unreachable block (ram,0x02677e00) */
/* WARNING: Removing unreachable block (ram,0x02677d6c) */
/* WARNING: Removing unreachable block (ram,0x02677d70) */

void FUN_02677c7c(long *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long local_48 [3];
  undefined8 local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (((*param_2 == 0) || (*(long *)(*param_2 + 8) == 0)) ||
     (uVar10 = FUN_018c987c(), puVar6 = PTR_DAT_047d3908, (uVar10 & 1) == 0)) {
    return;
  }
  lVar14 = param_2[1];
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  uVar11 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar11;
  FUN_00c44204(local_48,uVar11,lVar14);
  if (local_48[0] == 0) {
    FUN_0184e344(param_1);
  }
  else {
    puVar12 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar12 + 3);
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
        piVar2 = (int *)((long)puVar12 + 0x1c);
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
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_28 = *puVar12;
          FUN_00c44438(lVar13 + 0x8040,&local_28);
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
    *param_1 = local_48[0];
    param_1[1] = lVar14;
  }
  return;
}


