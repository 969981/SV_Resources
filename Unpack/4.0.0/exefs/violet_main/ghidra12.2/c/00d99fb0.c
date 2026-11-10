/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d99fb0; name: FUN_00d99fb0
 */


void FUN_00d99fb0(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  FUN_00d5f508(local_38,*param_1);
  if (local_38[0] == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_38[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_38[0] + 0x1a);
    sVar10 = *(short *)((long)local_38[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00d9a020;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d9a020:
        bVar6 = false;
      }
      if (bVar6) {
        lVar8 = local_38[0][2];
        if (lVar8 != 0) {
          if (*(char *)(lVar8 + 0x41) == '\0') {
            bVar6 = *(char *)(lVar8 + 0x42) != '\0';
          }
          else {
            bVar6 = true;
          }
          lVar9 = param_1[1];
          if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) goto LAB_00d9a064;
          psVar1 = (short *)(lVar9 + 0x1a);
          sVar10 = *(short *)(lVar9 + 0x1a);
          goto LAB_00d9a160;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  goto LAB_00d9a088;
  while (sVar10 = sVar3, sVar3 != 0) {
LAB_00d9a160:
    sVar3 = *psVar1;
    if (sVar3 == sVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00d9a184;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d9a184:
      bVar5 = false;
    }
    if (bVar5) {
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 != 0) {
        if (*(long *)(lVar9 + 0xf8) != 0) {
          *(char *)(*(long *)(lVar9 + 0xf8) + 0x211) = bVar6 & *(char *)(lVar9 + 0x30a) != '\0';
        }
        (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
      }
      break;
    }
  }
LAB_00d9a064:
  lVar9 = *(long *)(lVar8 + 8);
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar10 = *psVar1;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar10 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
  }
  else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00d9a088:
  if (local_38[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_38[0] + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_38[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_28 = *local_38[0];
        FUN_00c44438(lVar8 + 0x8040,&local_28);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


