/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c7e758; name: FUN_00c7e758
 */


void FUN_00c7e758(long *param_1)

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
  code *pcVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 local_68;
  
  if (param_1[2] != 0) {
    lVar13 = *param_1;
    plVar4 = (long *)param_1[1];
    *(undefined8 *)(*plVar4 + 8) = *(undefined8 *)(lVar13 + 8);
    **(long **)(lVar13 + 8) = *plVar4;
    param_1[2] = 0;
    puVar9 = PTR_DAT_047d3918;
    puVar8 = PTR_DAT_047d3910;
    puVar7 = PTR_DAT_047d3908;
    while (plVar4 != param_1) {
      plVar14 = (long *)plVar4[1];
      puVar15 = (undefined8 *)plVar4[0x27];
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
            if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar7);
            }
            lVar13 = *(long *)puVar8;
            *(long *)puVar9 = lVar13;
            local_68 = *puVar15;
            FUN_00c44438(lVar13 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) goto LAB_00c7e9bc;
      }
      pcVar12 = (code *)plVar4[0x17];
      if (pcVar12 != (code *)0x0) {
        plVar4[0x18] = 0;
        plVar4[0x19] = 0;
        plVar4[0x16] = 0;
        plVar4[0x17] = 0;
        (*pcVar12)(plVar4 + 0x1a);
      }
      pcVar12 = (code *)plVar4[7];
      if (pcVar12 != (code *)0x0) {
        plVar4[8] = 0;
        plVar4[9] = 0;
        plVar4[6] = 0;
        plVar4[7] = 0;
        (*pcVar12)(plVar4 + 10);
      }
      puVar15 = (undefined8 *)plVar4[4];
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
            if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar7);
            }
            lVar13 = *(long *)puVar8;
            *(long *)puVar9 = lVar13;
            local_68 = *puVar15;
            FUN_00c44438(lVar13 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) {
LAB_00c7e9bc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      plVar16 = (long *)param_1[3];
      uVar11 = FUN_00c4e564(plVar16);
      if ((uVar11 & 1) == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16,plVar4,0x150,0x10);
        plVar4 = plVar14;
      }
      else {
        FUN_00c48fe8(plVar16,plVar4,0x150,0x10);
        plVar4 = plVar14;
      }
    }
  }
  return;
}


