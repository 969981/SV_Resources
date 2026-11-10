/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2e94c; name: FUN_01a2e94c
 */


void FUN_01a2e94c(undefined8 param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  short sVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 *local_30 [2];
  undefined8 local_8;
  
  puVar6 = (undefined8 *)FUN_0140f310();
  local_50 = *puVar6;
  uStack_48 = puVar6[1];
  local_40 = puVar6[2];
  local_38 = (long *)puVar6[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  FUN_0140f318(local_30,param_1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_30[0] != (undefined8 *)0x0) {
    puVar6 = local_30[0];
    if (*(short *)((long)local_30[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_30[0] + 0x1a);
      sVar10 = *(short *)((long)local_30[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01a2ea00;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a2ea00:
          bVar9 = false;
        }
        if (bVar9) {
          lVar8 = local_30[0][2];
          if (lVar8 == 0) goto LAB_01a2ea54;
          lVar7 = FUN_017d3d70(lVar8 + 0xe0,&local_8);
          if (lVar7 != 0) {
            FUN_01f7d034();
          }
          (**(code **)(*(long *)(lVar8 + -0x28) + 0x60))((long *)(lVar8 + -0x28));
          break;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
      puVar6 = local_30[0];
      if (local_30[0] == (undefined8 *)0x0) {
        return;
      }
    }
LAB_01a2ea54:
    psVar1 = (short *)(puVar6 + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)puVar6 + 0x1c);
      do {
        iVar5 = *piVar2;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_8 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_8);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


