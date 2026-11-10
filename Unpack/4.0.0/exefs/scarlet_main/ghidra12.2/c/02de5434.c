/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02de5434; name: FUN_02de5434
 */


void FUN_02de5434(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = &PTR_FUN_045ea868;
  param_1[4] = &PTR_LAB_045ea898;
  FUN_028c8f50(param_1 + 300);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x12a));
  FUN_028c8ff0(param_1 + 0x121);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x11f));
  FUN_028c9090(param_1 + 0x115);
  lVar8 = param_1[0x10d];
  if (lVar8 != 0) {
    lVar7 = param_1[0x10f];
    param_1[0x10e] = lVar8;
    plVar10 = (long *)param_1[0x110];
    uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar7 - lVar8,8);
    }
  }
  lVar8 = param_1[0x106];
  if (lVar8 != 0) {
    lVar7 = param_1[0x108];
    plVar10 = (long *)param_1[0x109];
    uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 << 3,1);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar7 << 3,1);
    }
  }
  FUN_028c9130(param_1 + 0xff);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xfd));
  FUN_028c9234(param_1 + 0xf4);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xf2));
  FUN_028c8ff0(param_1 + 0xe9);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xe7));
  FUN_028c8ff0(param_1 + 0xde);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xdc));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xd5));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xd2));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xcf));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xcc));
  lVar8 = param_1[199];
  param_1[199] = 0;
  if (lVar8 != 0) {
    FUN_028c0014(param_1 + 200);
  }
  lVar8 = param_1[0xc3];
  param_1[0xc3] = 0;
  if (lVar8 != 0) {
    FUN_028c0014(param_1 + 0xc4);
  }
  lVar8 = param_1[0xbf];
  param_1[0xbf] = 0;
  if (lVar8 != 0) {
    FUN_028c0014(param_1 + 0xc0);
  }
  lVar8 = param_1[0xbb];
  param_1[0xbb] = 0;
  if (lVar8 != 0) {
    FUN_028c0014(param_1 + 0xbc);
  }
  lVar8 = param_1[0xb7];
  param_1[0xb7] = 0;
  if (lVar8 != 0) {
    FUN_028c0014(param_1 + 0xb8);
  }
  lVar8 = param_1[0xb3];
  param_1[0xb3] = 0;
  if (lVar8 != 0) {
    FUN_028c0014(param_1 + 0xb4);
  }
  lVar8 = param_1[0xaf];
  param_1[0xaf] = 0;
  if (lVar8 != 0) {
    FUN_028c0014(param_1 + 0xb0);
  }
  lVar8 = param_1[0xab];
  param_1[0xab] = 0;
  if (lVar8 != 0) {
    FUN_028c0014(param_1 + 0xac);
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xa8));
  plVar10 = (long *)param_1[0x9d];
  while (plVar10 != (long *)0x0) {
    plVar11 = (long *)*plVar10;
    if ((long *)plVar10[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar10[5] + 0x20))();
    }
    plVar9 = (long *)param_1[0x9e];
    uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar5 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar10,0x30,8);
      plVar10 = plVar11;
    }
    else {
      FUN_00c48fe8(plVar9,plVar10,0x30,8);
      plVar10 = plVar11;
    }
  }
  lVar8 = param_1[0x97];
  param_1[0x97] = 0;
  if (lVar8 != 0) {
    FUN_028c92d4(param_1 + 0x98);
  }
  FUN_01304a8c(param_1 + 0x95);
  lVar8 = param_1[0x8d];
  if (lVar8 != 0) {
    lVar7 = param_1[0x8f];
    param_1[0x8e] = lVar8;
    plVar10 = (long *)param_1[0x90];
    uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar7 - lVar8,8);
    }
  }
  lVar8 = param_1[0x86];
  if (lVar8 != 0) {
    lVar7 = param_1[0x88];
    plVar10 = (long *)param_1[0x89];
    uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 << 3,1);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar7 << 3,1);
    }
  }
  FUN_028c935c(param_1 + 0x7f);
  lVar8 = param_1[0x77];
  if (lVar8 != 0) {
    lVar7 = param_1[0x79];
    param_1[0x78] = lVar8;
    plVar10 = (long *)param_1[0x7a];
    uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar7 - lVar8,8);
    }
  }
  lVar8 = param_1[0x70];
  if (lVar8 != 0) {
    lVar7 = param_1[0x72];
    plVar10 = (long *)param_1[0x73];
    uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 << 3,1);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar7 << 3,1);
    }
  }
  FUN_028c9404(param_1 + 0x69);
  FUN_028c94d0(param_1 + 0x61);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x5f));
  FUN_028c95a4(param_1 + 0x56);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x54));
  FUN_028c9644(param_1 + 0x40);
  plVar10 = (long *)param_1[0x3c];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02de5b98;
  }
  plVar10 = (long *)param_1[0x3b];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02de5b98;
  }
  plVar10 = (long *)param_1[0x3a];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02de5b98;
  }
  lVar8 = param_1[0x32];
  if (lVar8 != 0) {
    lVar7 = param_1[0x34];
    plVar10 = (long *)param_1[0x35];
    param_1[0x33] = lVar8;
    uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar7 - lVar8,8);
    }
  }
  lVar8 = param_1[0x2b];
  if (lVar8 != 0) {
    lVar7 = param_1[0x2d];
    plVar10 = (long *)param_1[0x2e];
    uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 << 3,1);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar7 << 3,1);
    }
  }
  FUN_028c96e4(param_1 + 0x24);
  plVar10 = (long *)param_1[0x23];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02de5b98;
  }
  plVar10 = (long *)param_1[0x22];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02de5b98;
  }
  plVar10 = (long *)param_1[0x21];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02de5b98;
  }
  plVar10 = (long *)param_1[0x20];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02de5b98;
  }
  plVar10 = (long *)param_1[0x1f];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02de5b98;
  }
  plVar10 = (long *)param_1[0x1e];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02de5b98;
  }
  plVar10 = (long *)param_1[0x1d];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02de5b98;
  }
  plVar10 = (long *)param_1[0x1c];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02de5b98;
  }
  plVar10 = (long *)param_1[0x1b];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02de5b98;
  }
  plVar10 = (long *)param_1[0x1a];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_02de5b98:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x18));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x13));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x10));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xd));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 6));
  return;
}


