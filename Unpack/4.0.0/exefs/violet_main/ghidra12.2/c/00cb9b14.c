/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb9b14; name: FUN_00cb9b14
 */


void FUN_00cb9b14(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 local_38;
  
  puVar6 = PTR_DAT_047d3918;
  puVar15 = (undefined8 *)*param_1;
  if (puVar15 == (undefined8 *)0x0) {
    return;
  }
  puVar11 = (undefined8 *)param_1[1];
  puVar14 = puVar15;
  if (puVar11 != puVar15) {
    plVar10 = (long *)PTR_DAT_047d3910;
    pbVar13 = PTR_DAT_047d3908;
    do {
      puVar11 = puVar11 + -2;
      puVar14 = (undefined8 *)*puVar11;
      if (puVar14 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar14 + 3);
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
          piVar2 = (int *)((long)puVar14 + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*pbVar13 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), plVar10 = (long *)PTR_DAT_047d3910,
               iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
              plVar10 = (long *)PTR_DAT_047d3910;
            }
            lVar12 = *plVar10;
            *(long *)puVar6 = lVar12;
            local_38 = *puVar14;
            FUN_00c44438(lVar12 + 0x8040,&local_38);
            pbVar13 = PTR_DAT_047d3908;
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
    } while (puVar11 != puVar15);
    puVar14 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar15;
  lVar12 = param_1[2];
  plVar10 = (long *)param_1[3];
  uVar8 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00cb9b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x18))(plVar10,puVar14,lVar12 - (long)puVar14,8);
    return;
  }
  FUN_00c48fe8(plVar10,puVar14,lVar12 - (long)puVar14,8);
  return;
}


