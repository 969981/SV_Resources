/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fedec8; name: FUN_01fedec8
 */


void FUN_01fedec8(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 local_68;
  
  puVar9 = PTR_LAB_047d3de8;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  puVar16 = (undefined8 *)*param_1;
  if (puVar16 == (undefined8 *)0x0) {
    return;
  }
  puVar17 = (undefined8 *)param_1[1];
  if (puVar17 == puVar16) {
    puVar17 = puVar16;
  }
  else {
    pbVar14 = PTR_DAT_047d3908;
    do {
      puVar17 = puVar17 + -2;
      puVar15 = (undefined8 *)*puVar17;
      if (puVar15 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar15 + 3);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar15 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*pbVar14 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(puVar9,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)puVar7;
            *(long *)puVar8 = lVar13;
            local_68 = *puVar15;
            FUN_00c44438(lVar13 + 0x8040,&local_68);
            pbVar14 = PTR_DAT_047d3908;
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
    } while (puVar17 != puVar16);
    puVar17 = (undefined8 *)*param_1;
  }
  lVar13 = param_1[2];
  plVar4 = (long *)param_1[3];
  param_1[1] = puVar16;
  uVar11 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar11 & 1) != 0) {
    lVar12 = FUN_00c4e600();
    if (0 < *(int *)(lVar12 + 0x12c8)) {
      FUN_00c48fe8(plVar4,puVar17,lVar13 - (long)puVar17,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01fee004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar17,lVar13 - (long)puVar17,8);
  return;
}


