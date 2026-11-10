/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018cec38; name: FUN_018cec38
 */


void FUN_018cec38(long *param_1)

{
  int *piVar1;
  short *psVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  short sVar13;
  undefined8 *puVar14;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  lVar10 = *param_1;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar10 + 0x1a);
    sVar13 = *(short *)(lVar10 + 0x1a);
    do {
      sVar5 = *psVar2;
      if (sVar5 == sVar13) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_018cede4;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018cede4:
        bVar7 = false;
      }
      if (bVar7) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = 0;
          local_b8 = (code *)0x0;
          pcVar11 = *(code **)(lVar10 + 0x450);
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar10 + 0x458) = 0;
            *(undefined8 *)(lVar10 + 0x460) = 0;
            *(undefined8 *)(lVar10 + 0x448) = 0;
            *(undefined8 *)(lVar10 + 0x450) = 0;
            (*pcVar11)(lVar10 + 0x468);
          }
          puVar8 = PTR_DAT_047db010;
          if (*(code **)(PTR_DAT_047db010 + 0x10) != (code *)0x0) {
            (**(code **)(PTR_DAT_047db010 + 0x10))(PTR_DAT_047db010 + 0x20,lVar10 + 0x468);
            pcVar11 = local_b8;
            uVar3 = *(undefined8 *)(puVar8 + 0x10);
            *(undefined8 *)(lVar10 + 0x460) = *(undefined8 *)(puVar8 + 0x18);
            uVar4 = *(undefined8 *)(puVar8 + 8);
            *(undefined8 *)(lVar10 + 0x448) = *(undefined8 *)puVar8;
            *(undefined8 *)(lVar10 + 0x450) = uVar4;
            *(undefined8 *)(lVar10 + 0x458) = uVar3;
            if (local_b8 != (code *)0x0) {
              local_b0 = 0;
              uStack_a8 = 0;
              local_c0 = 0;
              local_b8 = (code *)0x0;
              (*pcVar11)(auStack_a0);
            }
          }
          lVar12 = *(long *)(lVar10 + 8);
          psVar2 = (short *)(lVar12 + 0x1a);
          do {
            sVar13 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
          }
          else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar13 = sVar5;
    } while (sVar5 != 0);
  }
  puVar14 = (undefined8 *)param_1[3];
  if (puVar14 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar14 + 3);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar1 = (int *)((long)puVar14 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_c0 = *puVar14;
        FUN_00c44438(lVar10 + 0x8040,&local_c0);
      }
    }
    else if (sVar13 == 0) goto LAB_018cecc8;
  }
  puVar14 = (undefined8 *)*param_1;
  if (puVar14 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar14 + 3);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar1 = (int *)((long)puVar14 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_c0 = *puVar14;
        FUN_00c44438(lVar10 + 0x8040,&local_c0);
      }
    }
    else if (sVar13 == 0) {
LAB_018cecc8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


