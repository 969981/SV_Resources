/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d38414; name: FUN_00d38414
 */


undefined8 * FUN_00d38414(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 local_68;
  
  if (param_2 != param_3) {
    puVar13 = *(undefined8 **)(param_1 + 8);
    puVar12 = (undefined8 *)((long)param_2 + ((long)param_3 - (long)param_2));
    if (puVar12 == puVar13) {
      puVar11 = param_2;
    }
    else {
      FUN_00d0a34c(param_2,puVar12);
      puVar11 = param_2 + 2;
      if (puVar12 + 2 != puVar13) {
        FUN_00d0a34c(puVar11,puVar12 + 2);
        puVar11 = param_2 + 4;
        if (puVar12 + 4 != puVar13) {
          lVar9 = (long)param_3 - (long)param_2 >> 4;
          do {
            FUN_00d0a34c(puVar11,puVar11 + lVar9 * 2);
            puVar11 = puVar11 + 2;
          } while (puVar13 + lVar9 * -2 != puVar11);
        }
      }
      puVar12 = *(undefined8 **)(param_1 + 8);
    }
    puVar7 = PTR_DAT_047d3918;
    puVar6 = PTR_DAT_047d3910;
    if (puVar12 != puVar11) {
      pbVar10 = PTR_DAT_047d3908;
      do {
        puVar12 = puVar12 + -2;
        puVar13 = (undefined8 *)*puVar12;
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
              iVar8 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 != -1) {
              if (((*pbVar10 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar9 = *(long *)puVar6;
              *(long *)puVar7 = lVar9;
              local_68 = *puVar13;
              FUN_00c44438(lVar9 + 0x8040,&local_68);
              pbVar10 = PTR_DAT_047d3908;
            }
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      } while (puVar12 != puVar11);
    }
    *(undefined8 **)(param_1 + 8) = puVar11;
  }
  return param_2;
}


