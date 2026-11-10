/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021cf678; name: FUN_021cf678
 */


void FUN_021cf678(long *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_51;
  undefined8 local_48;
  undefined4 local_39;
  
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  if ((*param_1 != 0) && (puVar10 = *(undefined8 **)(*param_1 + 8), puVar10 != (undefined8 *)0x0)) {
    puVar13 = (undefined8 *)PTR_DAT_047d6c50;
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c48), puVar13 = (undefined8 *)PTR_DAT_047d6c50,
       iVar7 != 0)) {
      uVar8 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar8;
      __cxa_guard_release(PTR_DAT_047d6c48);
      puVar13 = (undefined8 *)PTR_DAT_047d6c50;
    }
    do {
      if (puVar10 == puVar13) {
        FUN_00d9f120(&local_80,param_1);
        break;
      }
      puVar10 = (undefined8 *)*puVar10;
    } while (puVar10 != (undefined8 *)0x0);
  }
  pbVar11 = (byte *)param_1[3];
  puVar9 = &DAT_cbf29ce484222645;
  bVar4 = *pbVar11;
  while (bVar4 != 0) {
    pbVar11 = pbVar11 + 1;
    puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar4) * 0x100000001b3);
    bVar4 = *pbVar11;
  }
  FUN_00d9ec44(&local_48,2,puVar9);
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_00d9ee10(&local_70,&local_80);
  local_60 = local_48;
  local_51 = local_39;
  FUN_021cbb2c(&local_70,param_1[6],param_1[6],param_2 & 1,param_3,param_4);
  puVar10 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
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
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_48 = *puVar10;
        FUN_00c44438(lVar12 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_021cf7c8;
  }
  puVar10 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80 + 3);
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
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_48 = *puVar10;
        FUN_00c44438(lVar12 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) {
LAB_021cf7c8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


