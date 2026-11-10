/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8ba58; name: FUN_01f8ba58
 */


void FUN_01f8ba58(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  short *psVar5;
  int *piVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 local_8;
  
  puVar1 = PTR_DAT_047daf00 + 0x10;
  puVar2 = PTR_DAT_047daf00 + 0x170;
  puVar3 = PTR_DAT_047daf00 + 0x298;
  puVar4 = PTR_DAT_047daf00 + 0x318;
  param_1[6] = (long)(PTR_DAT_047daf00 + 0x2f0);
  param_1[7] = (long)puVar4;
  puVar11 = (undefined8 *)param_1[0x24];
  *param_1 = (long)puVar1;
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  if (puVar11 != (undefined8 *)0x0) {
    psVar5 = (short *)(puVar11 + 3);
    do {
      sVar7 = *psVar5;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar5,0x10);
      if (bVar9) {
        *psVar5 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      piVar6 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar10 = *piVar6;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar9) {
          *piVar6 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar10 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_8 = *puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_8);
      }
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


