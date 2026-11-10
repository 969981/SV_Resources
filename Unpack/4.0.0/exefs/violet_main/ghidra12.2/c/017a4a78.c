/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a4a78; name: FUN_017a4a78
 */


void FUN_017a4a78(long *param_1)

{
  short *psVar1;
  undefined *puVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  
  *param_1 = (long)&DAT_045ac6a8;
  param_1[4] = (long)&PTR_LAB_045ac730;
  plVar8 = (long *)param_1[0x6c];
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar8 = (long *)param_1[0x6b];
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 5;
    do {
      lVar9 = *plVar3;
      iVar7 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_017a4c20;
  }
  plVar8 = (long *)param_1[0x6a];
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 5;
    do {
      lVar9 = *plVar3;
      iVar7 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_017a4c20;
  }
  plVar8 = (long *)param_1[0x69];
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 5;
    do {
      lVar9 = *plVar3;
      iVar7 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_017a4c20;
  }
  pcVar10 = (code *)param_1[0x59];
  if (pcVar10 != (code *)0x0) {
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    (*pcVar10)(param_1 + 0x5c);
  }
  if ((long *)param_1[0x55] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x55] + 0x20))();
  }
  param_1[0x40] = (long)(PTR_DAT_047ddcc0 + 0x10);
  if ((long *)param_1[0x48] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x48] + 0x20))();
  }
  FUN_00da7544(param_1 + 0x40);
  pcVar10 = (code *)param_1[0x31];
  if (pcVar10 != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*pcVar10)(param_1 + 0x34);
  }
  pcVar10 = (code *)param_1[0x21];
  if (pcVar10 != (code *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    (*pcVar10)(param_1 + 0x24);
  }
  plVar8 = (long *)param_1[10];
  puVar2 = PTR_DAT_047ddcd8 + 0x98;
  *param_1 = (long)(PTR_DAT_047ddcd8 + 0x10);
  param_1[4] = (long)puVar2;
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 5;
    do {
      lVar9 = *plVar3;
      iVar7 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
LAB_017a4c20:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar9 = param_1[6];
  param_1[6] = 0;
  if (lVar9 == 0) {
    return;
  }
  FUN_017a4ce4(param_1 + 7);
  return;
}


