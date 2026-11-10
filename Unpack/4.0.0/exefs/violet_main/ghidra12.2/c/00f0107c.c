/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f0107c; name: FUN_00f0107c
 */


void FUN_00f0107c(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 local_48;
  
  puVar9 = PTR_LAB_047d3de8;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  lVar15 = param_1[1];
  lVar14 = param_1[2];
  while (lVar14 != lVar15) {
    param_1[2] = lVar14 + -0x10;
    puVar13 = *(undefined8 **)(lVar14 + -0x10);
    if (puVar13 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar13 + 3);
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
        piVar2 = (int *)((long)puVar13 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100190(puVar9,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar6);
          }
          lVar14 = *(long *)puVar7;
          *(long *)puVar8 = lVar14;
          local_48 = *puVar13;
          FUN_00c44438(lVar14 + 0x8040,&local_48);
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
    lVar14 = param_1[2];
  }
  lVar15 = *param_1;
  if (lVar15 == 0) {
    return;
  }
  lVar14 = param_1[3];
  plVar16 = *(long **)param_1[4];
  uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
  if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00f011d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar15,lVar14 - lVar15,8);
    return;
  }
  FUN_00c48fe8(plVar16,lVar15,lVar14 - lVar15,8);
  return;
}


