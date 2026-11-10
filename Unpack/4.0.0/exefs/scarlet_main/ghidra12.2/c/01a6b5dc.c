/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a6b5dc; name: FUN_01a6b5dc
 */


/* WARNING: Removing unreachable block (ram,0x01a6b68c) */
/* WARNING: Removing unreachable block (ram,0x01a6b690) */
/* WARNING: Removing unreachable block (ram,0x01a6b698) */
/* WARNING: Removing unreachable block (ram,0x01a6b6a0) */
/* WARNING: Removing unreachable block (ram,0x01a6b6f8) */
/* WARNING: Removing unreachable block (ram,0x01a6b700) */
/* WARNING: Removing unreachable block (ram,0x01a6b704) */
/* WARNING: Removing unreachable block (ram,0x01a6b70c) */
/* WARNING: Removing unreachable block (ram,0x01a6b714) */
/* WARNING: Removing unreachable block (ram,0x01a6b7c4) */
/* WARNING: Removing unreachable block (ram,0x01a6b7d4) */
/* WARNING: Removing unreachable block (ram,0x01a6b71c) */
/* WARNING: Removing unreachable block (ram,0x01a6b6a8) */
/* WARNING: Removing unreachable block (ram,0x01a6b6ac) */

void FUN_01a6b5dc(long param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long local_48;
  undefined8 local_28;
  
  puVar7 = PTR_DAT_047d3908;
  plVar1 = (long *)(param_1 + 0x48);
  uVar14 = *(undefined8 *)(param_2 + 8);
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  uVar11 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar11;
  FUN_00c44204(&local_48,uVar11,uVar14);
  if (local_48 == 0) {
    FUN_026f5b10(plVar1);
  }
  else {
    puVar12 = (undefined8 *)*plVar1;
    *plVar1 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar12 + 3);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)puVar12 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar8;
          *(long *)puVar9 = lVar13;
          local_28 = *puVar12;
          FUN_00c44438(lVar13 + 0x8040,&local_28);
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
    *plVar1 = local_48;
    *(undefined8 *)(param_1 + 0x50) = uVar14;
  }
  return;
}


