/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024c2e28; name: FUN_024c2e28
 */


void FUN_024c2e28(long *param_1)

{
  undefined *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  puVar1 = PTR_DAT_047dedd8 + 0x40;
  *param_1 = (long)(PTR_DAT_047dedd8 + 0x10);
  param_1[4] = (long)puVar1;
  FUN_024c3334(param_1 + 0xcd);
  FUN_024c341c(param_1 + 0xc6);
  FUN_0148f470(param_1 + 0xb6);
  plVar7 = (long *)param_1[0xaf];
  while (plVar7 != (long *)0x0) {
    plVar13 = (long *)*plVar7;
    if ((long *)plVar7[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar7[5] + 0x20))();
    }
    plVar12 = (long *)param_1[0xb0];
    uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar7,0x30,8);
      plVar7 = plVar13;
    }
    else {
      FUN_00c48fe8(plVar12,plVar7,0x30,8);
      plVar7 = plVar13;
    }
  }
  lVar9 = param_1[0xa9];
  param_1[0xa9] = 0;
  if (lVar9 != 0) {
    FUN_024c34bc(param_1 + 0xaa);
  }
  FUN_024c3544(param_1 + 0x9c);
  FUN_00db239c(param_1 + 0x94);
  if ((long *)param_1[0x93] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x93] + 0x20))();
  }
  if ((long *)param_1[0x91] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x91] + 0x20))();
  }
  if ((long *)param_1[0x8d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8d] + 0x20))();
  }
  plVar7 = (long *)param_1[0x8c];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_024c321c;
  }
  pcVar10 = (code *)param_1[0x7d];
  if (pcVar10 != (code *)0x0) {
    param_1[0x7f] = 0;
    param_1[0x7e] = 0;
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    (*pcVar10)(param_1 + 0x80);
  }
  lVar9 = param_1[0x75];
  param_1[0x75] = 0;
  if (lVar9 != 0) {
    FUN_024c372c(param_1 + 0x76);
  }
  lVar9 = param_1[0x6f];
  param_1[0x6f] = 0;
  if (lVar9 != 0) {
    FUN_024c372c(param_1 + 0x70);
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x6c));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x67));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 100));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x61));
  FUN_021d2550(param_1 + 0x53);
  FUN_024c1634(param_1 + 0x4b);
  lVar9 = param_1[0x44];
  if (lVar9 != 0) {
    lVar11 = param_1[0x46];
    plVar7 = (long *)param_1[0x47];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar11 << 3,1);
    }
    else {
      FUN_00c48fe8(plVar7,lVar9,lVar11 << 3,1);
    }
  }
  FUN_024c37e0(param_1 + 0x3d);
  plVar7 = (long *)param_1[0x3c];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_024c321c;
  }
  plVar7 = (long *)param_1[0x3b];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_024c321c;
  }
  plVar7 = (long *)param_1[0x3a];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_024c321c;
  }
  plVar7 = (long *)param_1[0x39];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_024c321c;
  }
  plVar7 = (long *)param_1[0x38];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_024c321c;
  }
  plVar7 = (long *)param_1[0x37];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_024c321c;
  }
  plVar7 = (long *)param_1[0x36];
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_024c321c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_024c3880(param_1 + 0x2f);
  FUN_024c3920(param_1 + 0x22);
  FUN_024c1634(param_1 + 0x1a);
  lVar9 = param_1[0x13];
  if (lVar9 != 0) {
    lVar11 = param_1[0x15];
    plVar7 = (long *)param_1[0x16];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar11 << 3,1);
    }
    else {
      FUN_00c48fe8(plVar7,lVar9,lVar11 << 3,1);
    }
  }
  FUN_024c3334(param_1 + 0xc);
  FUN_024c3a98(param_1 + 5);
  return;
}


