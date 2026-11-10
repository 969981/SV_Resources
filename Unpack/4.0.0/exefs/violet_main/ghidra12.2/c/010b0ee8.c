/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b0ee8; name: FUN_010b0ee8
 */


void FUN_010b0ee8(undefined8 *param_1,long param_2)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long local_50;
  long *local_48;
  long local_40;
  long *local_38;
  
  plVar9 = *(long **)(param_1[0xc] + 0x130);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[6];
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_010b1174;
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar7;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_010b0fe8;
    lVar8 = plVar9[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar4 == 0) goto LAB_010b1034;
  }
  local_38 = plVar9;
  local_40 = FUN_02998890(*param_1,param_1 + 9,param_1 + 0xb,&local_38);
  if (local_40 == 0) {
    lVar8 = 0;
  }
  else {
    piVar1 = (int *)(local_40 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == -1) goto LAB_010b114c;
    lVar8 = local_40;
  }
  local_48 = *(long **)(param_1[0xc] + 0x138);
  if (local_48 != (long *)0x0) {
    lVar10 = local_48[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_010b1174:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
LAB_010b0fe8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  FUN_02991404(lVar8,&local_48);
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_010b1034:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  uVar7 = *(undefined8 *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24) * 8 + 8);
  local_50 = local_40;
  if (local_40 != 0) {
    piVar1 = (int *)(local_40 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == -1) {
LAB_010b114c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_0298fd24(uVar7,&local_50);
  FUN_0185d10c(&local_50);
  FUN_0185d10c(&local_40);
  return;
}


