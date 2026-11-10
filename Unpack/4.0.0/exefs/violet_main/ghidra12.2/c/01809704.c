/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01809704; name: FUN_01809704
 */


undefined8 * FUN_01809704(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 local_68;
  
  puVar13 = *(undefined8 **)(param_1 + 8);
  puVar14 = param_2 + 2;
  if (puVar14 == puVar13) {
    puVar12 = param_2;
  }
  else {
    puVar14 = param_2;
    do {
      puVar12 = puVar14 + 2;
      FUN_02273a98(puVar14,puVar12);
      puVar1 = puVar14 + 4;
      puVar14 = puVar12;
    } while (puVar1 != puVar13);
    puVar14 = *(undefined8 **)(param_1 + 8);
    if (puVar14 == puVar12) goto LAB_0180976c;
  }
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  pbVar11 = PTR_DAT_047d3908;
  do {
    puVar14 = puVar14 + -2;
    puVar13 = (undefined8 *)*puVar14;
    if (puVar13 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar13 + 3);
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
        piVar3 = (int *)((long)puVar13 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*pbVar11 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_68 = *puVar13;
          FUN_00c44438(lVar10 + 0x8040,&local_68);
          pbVar11 = PTR_DAT_047d3908;
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
  } while (puVar14 != puVar12);
LAB_0180976c:
  *(undefined8 **)(param_1 + 8) = puVar12;
  return param_2;
}


