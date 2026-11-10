/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e00654; name: FUN_01e00654
 */


void FUN_01e00654(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 local_68;
  
  *param_1 = (long)&DAT_04543a58;
  param_1[4] = (long)&PTR_LAB_04543ad0;
  param_1[5] = (long)&PTR_LAB_04543b20;
  puVar9 = PTR_LAB_047d3de8;
  puVar2 = PTR_DAT_047d3918;
  puVar1 = PTR_DAT_047d3910;
  lVar12 = param_1[0x12];
  if (lVar12 != 0) {
    lVar13 = param_1[0x13];
    lVar15 = lVar12;
    if (lVar13 != lVar12) {
      do {
        puVar14 = *(undefined8 **)(lVar13 + -0x28);
        if (puVar14 != (undefined8 *)0x0) {
          psVar3 = (short *)(puVar14 + 3);
          do {
            sVar5 = *psVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar8) {
              *psVar3 = sVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar5 == 1) {
            piVar4 = (int *)((long)puVar14 + 0x1c);
            do {
              iVar10 = *piVar4;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar8) {
                *piVar4 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(puVar9,puVar1,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar15 = *(long *)puVar1;
              *(long *)puVar2 = lVar15;
              local_68 = *puVar14;
              FUN_00c44438(lVar15 + 0x8040,&local_68);
            }
          }
          else if (sVar5 == 0) goto LAB_01e00758;
        }
        lVar13 = lVar13 + -0x30;
      } while (lVar13 != lVar12);
      lVar15 = param_1[0x12];
    }
    param_1[0x13] = lVar12;
    lVar12 = param_1[0x14];
    plVar6 = (long *)param_1[0x15];
    uVar11 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar15,lVar12 - lVar15,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar15,lVar12 - lVar15,8);
    }
  }
  FUN_01e00948(param_1 + 0xb);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 9));
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar14 = (undefined8 *)param_1[6];
  if (puVar14 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar14 + 3);
    do {
      sVar5 = *psVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar8) {
        *psVar3 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar14 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_68 = *puVar14;
        FUN_00c44438(lVar12 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) {
LAB_01e00758:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


