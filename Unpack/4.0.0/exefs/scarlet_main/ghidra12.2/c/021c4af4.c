/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021c4af4; name: FUN_021c4af4
 */


/* WARNING: Removing unreachable block (ram,0x021c4b78) */
/* WARNING: Removing unreachable block (ram,0x021c4b7c) */
/* WARNING: Removing unreachable block (ram,0x021c4b84) */
/* WARNING: Removing unreachable block (ram,0x021c4b8c) */
/* WARNING: Removing unreachable block (ram,0x021c4c04) */
/* WARNING: Removing unreachable block (ram,0x021c4c0c) */
/* WARNING: Removing unreachable block (ram,0x021c4c10) */
/* WARNING: Removing unreachable block (ram,0x021c4c18) */
/* WARNING: Removing unreachable block (ram,0x021c4c20) */
/* WARNING: Removing unreachable block (ram,0x021c4cd0) */
/* WARNING: Removing unreachable block (ram,0x021c4ce0) */
/* WARNING: Removing unreachable block (ram,0x021c4c28) */
/* WARNING: Removing unreachable block (ram,0x021c4b94) */
/* WARNING: Removing unreachable block (ram,0x021c4b98) */

void FUN_021c4af4(long *param_1,long param_2)

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
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long local_48;
  undefined8 local_28;
  
  puVar6 = PTR_DAT_047d3908;
  lVar13 = *(long *)(param_2 + 8);
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  uVar10 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar10;
  FUN_00c44204(&local_48,uVar10,lVar13);
  if (local_48 == 0) {
    FUN_021c5a28(param_1);
  }
  else {
    puVar11 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar11 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar11 + 3);
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
        piVar2 = (int *)((long)puVar11 + 0x1c);
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
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_28 = *puVar11;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
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
    *param_1 = local_48;
    param_1[1] = lVar13;
  }
  return;
}


