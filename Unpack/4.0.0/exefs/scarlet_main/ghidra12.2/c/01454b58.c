/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01454b58; name: FUN_01454b58
 */


void FUN_01454b58(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 local_68;
  
  if (param_1[2] != 0) {
    lVar11 = *param_1;
    plVar4 = (long *)param_1[1];
    *(undefined8 *)(*plVar4 + 8) = *(undefined8 *)(lVar11 + 8);
    **(long **)(lVar11 + 8) = *plVar4;
    param_1[2] = 0;
    puVar8 = PTR_DAT_047d3918;
    puVar7 = PTR_DAT_047d3910;
    while (plVar4 != param_1) {
      plVar13 = (long *)plVar4[1];
      if ((long *)plVar4[0x24] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[0x24] + 0x20))();
      }
      puVar14 = (undefined8 *)plVar4[0x1f];
      if (puVar14 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar14 + 3);
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
          piVar2 = (int *)((long)puVar14 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)puVar7;
            *(long *)puVar8 = lVar11;
            local_68 = *puVar14;
            FUN_00c44438(lVar11 + 0x8040,&local_68);
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
      pcVar12 = (code *)plVar4[0xf];
      if (pcVar12 != (code *)0x0) {
        plVar4[0x10] = 0;
        plVar4[0x11] = 0;
        plVar4[0xe] = 0;
        plVar4[0xf] = 0;
        (*pcVar12)(plVar4 + 0x12);
      }
      if ((long *)plVar4[0xc] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[0xc] + 0x20))();
      }
      if ((long *)plVar4[8] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[8] + 0x20))();
      }
      plVar15 = (long *)param_1[3];
      uVar10 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,plVar4,0x160,0x10);
        plVar4 = plVar13;
      }
      else {
        FUN_00c48fe8(plVar15,plVar4,0x160,0x10);
        plVar4 = plVar13;
      }
    }
  }
  return;
}


