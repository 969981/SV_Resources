/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa74d4; name: FUN_01fa74d4
 */


void FUN_01fa74d4(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_68;
  
  if (param_1[2] != 0) {
    lVar14 = *param_1;
    plVar5 = (long *)param_1[1];
    *(undefined8 *)(*plVar5 + 8) = *(undefined8 *)(lVar14 + 8);
    **(long **)(lVar14 + 8) = *plVar5;
    param_1[2] = 0;
    puVar11 = PTR_DAT_047d3918;
    puVar10 = PTR_DAT_047d3910;
    puVar9 = PTR_DAT_047d3908;
    while (plVar5 != param_1) {
      plVar4 = (long *)plVar5[1];
      puVar6 = (undefined8 *)plVar5[2];
      if (puVar6 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar6 + 3);
        do {
          sVar3 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar3 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar6 + 0x1c);
          do {
            iVar12 = *piVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
              *piVar2 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar12 != -1) {
            if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar10,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar9);
            }
            lVar14 = *(long *)puVar10;
            *(long *)puVar11 = lVar14;
            local_68 = *puVar6;
            FUN_00c44438(lVar14 + 0x8040,&local_68);
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
      plVar15 = (long *)param_1[3];
      uVar13 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,plVar5,0xd0,0x10);
        plVar5 = plVar4;
      }
      else {
        FUN_00c48fe8(plVar15,plVar5,0xd0,0x10);
        plVar5 = plVar4;
      }
    }
  }
  return;
}


