/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00309ae0; name: FUN_00309ae0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00309ae0(ulong param_1,long param_2,int param_3,int param_4,ulong param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  bool bVar12;
  long lVar13;
  undefined1 auStack_78 [32];
  ulong local_58;
  
  if (*(char *)(param_2 + 0x1b1) == '\0') {
    if (param_3 == 0) {
      bVar12 = false;
      goto joined_r0x00309bac;
    }
    uVar7 = param_5;
    if (4 < param_5) {
      uVar7 = FUN_00350fb0(param_5);
    }
    bVar12 = true;
    uVar4 = true;
    *(ulong *)(param_2 + 0x1b8) = uVar7;
    *(undefined1 *)(param_2 + 0x1b1) = 1;
    if (param_4 != 0) goto LAB_00309bb0;
LAB_00309bb8:
    if (!bVar12) goto LAB_00309cac;
LAB_00309bbc:
    if (*(char *)(param_2 + 0x1b0) == '\0') goto LAB_00309cac;
    uVar7 = param_5;
    if (4 < param_5) {
      uVar7 = FUN_00350fb0(param_5);
    }
    uVar8 = FUN_0030a230(uVar7,param_2,"Stream removed");
    iVar2 = *(int *)(param_2 + 0xa0);
    if (iVar2 == 0) {
      uVar7 = FUN_00319430(param_1,param_2);
    }
    else {
      uVar7 = uVar8;
      if (4 < uVar8) {
        uVar7 = FUN_00350fb0(uVar8);
      }
      lVar6 = param_1 + 0xa0;
      local_58 = uVar7;
      lVar9 = FUN_00319880(lVar6,iVar2);
      if (*(long *)(param_1 + 0x1150) == lVar9) {
        *(undefined8 *)(param_1 + 0x1150) = 0;
        FUN_00317780(param_1);
        if (*(char *)(lVar9 + 0x788) == '\0') goto LAB_00309c38;
LAB_00309cd0:
        if (*(long *)(lVar9 + 0x780) == 0) {
          if (4 < *(ulong *)(lVar9 + 0x8e0)) {
            FUN_00350fd0();
          }
          if (4 < uVar7) {
            uVar7 = FUN_00350fb0(uVar7);
          }
          *(ulong *)(lVar9 + 0x8e0) = uVar7;
          lVar6 = FUN_00319950(lVar6);
        }
        else {
          plVar11 = *(long **)(lVar9 + 0x928);
          if (uVar7 == 0) {
            FUN_003673f0(auStack_78,"Truncated message");
            uVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                 ,0x802,auStack_78,0,0);
            local_58 = uVar7;
          }
          FUN_0030a8c8(plVar11,uVar7);
          plVar1 = plVar11 + 4;
          do {
            lVar13 = *plVar1;
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *plVar1 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar11 != (long *)0x0) && (lVar13 == 1)) {
            (**(code **)(*plVar11 + 8))(plVar11);
            FUN_0049e790(PTR_LAB_047cba48,plVar11);
          }
          *(undefined8 *)(lVar9 + 0x928) = 0;
          lVar6 = FUN_00319950(lVar6);
        }
      }
      else {
        if (*(char *)(lVar9 + 0x788) != '\0') goto LAB_00309cd0;
LAB_00309c38:
        lVar6 = FUN_00319950(lVar6);
      }
      if (lVar6 == 0) {
        if (*(char *)(param_1 + 0x11e0) == '\0') {
          *(char *)(param_1 + 0x11e0) = '\x01';
          plVar11 = (long *)(param_1 + 8);
          do {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar12) {
              *plVar11 = *plVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          *(undefined1 **)(param_1 + 0x11f0) = &LAB_0030c630;
          *(ulong *)(param_1 + 0x11f8) = param_1;
          *(undefined8 *)(param_1 + 0x1200) = 0;
          uVar10 = FUN_00350f70(*(undefined8 *)(param_1 + 0x10));
          FUN_00359df0(uVar10,0,param_1 + 0x11e8);
        }
        if (*(int *)(param_1 + 0xd88) == 2) {
          FUN_003673f0(auStack_78,"Last stream closed after sending GOAWAY");
          uVar10 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                ,0x812,auStack_78,&local_58,1);
          FUN_003087d0(param_1,uVar10);
        }
      }
      uVar7 = FUN_003192a0(param_1,lVar9);
      if ((uVar7 & 1) != 0) {
        plVar11 = *(long **)(lVar9 + 0x10);
        do {
          lVar6 = *plVar11;
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar12) {
            *plVar11 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 + -1 == 0) {
          FUN_0037af30();
        }
      }
      if (4 < local_58) {
        FUN_00350fd0();
      }
      uVar7 = FUN_0030bea0(param_1);
    }
    if (uVar8 != 0) {
      uVar7 = FUN_00309fb0(param_1,param_2,uVar8);
    }
    uVar5 = true;
  }
  else {
    if (*(char *)(param_2 + 0x1b0) != '\0') {
      lVar6 = FUN_0030a230(param_5,param_2,"Stream removed");
      if (lVar6 != 0) {
        FUN_00309fb0(param_1,param_2,lVar6);
      }
      FUN_00308da0(param_1,param_2);
      return;
    }
    bVar12 = true;
joined_r0x00309bac:
    uVar4 = false;
    uVar7 = param_1;
    if (param_4 == 0) goto LAB_00309bb8;
LAB_00309bb0:
    if (*(char *)(param_2 + 0x1b0) != '\0') goto LAB_00309bb8;
    if (param_5 < 5) {
      *(ulong *)(param_2 + 0x1c0) = param_5;
      *(undefined1 *)(param_2 + 0x1b0) = 1;
      uVar7 = param_5;
    }
    else {
      uVar10 = FUN_00350fb0(param_5);
      *(undefined8 *)(param_2 + 0x1c0) = uVar10;
      *(undefined1 *)(param_2 + 0x1b0) = 1;
      uVar7 = FUN_00350fb0(param_5);
    }
    uVar7 = FUN_0030a120(param_1,param_2,uVar7);
    if (*(char *)(param_2 + 0x1b1) != '\0') goto LAB_00309bbc;
LAB_00309cac:
    uVar5 = false;
  }
  if (!(bool)uVar4) goto joined_r0x00309cb4;
  if (*(int *)(param_2 + 0x1c8) == 0) {
    *(undefined4 *)(param_2 + 0x1c8) = 3;
    if (*(int *)(param_2 + 0x1cc) != 0) goto LAB_00309e94;
LAB_00309ebc:
    *(undefined4 *)(param_2 + 0x1cc) = 3;
    lVar6 = *(long *)(param_2 + 0x148);
  }
  else {
    if (*(int *)(param_2 + 0x1cc) == 0) goto LAB_00309ebc;
LAB_00309e94:
    lVar6 = *(long *)(param_2 + 0x148);
  }
  if (lVar6 == 0) {
    FUN_00308af0(uVar7,param_2);
  }
  else {
    if ((*(char *)(param_2 + 0x1b3) != '\0') &&
       (FUN_00368510(param_2 + 0x658), *(char *)(param_2 + 0x788) == '\0')) {
      FUN_00368510(param_2 + 0x798);
    }
    FUN_00316bf0(param_2 + 0x1d8,*(undefined8 *)(param_2 + 0x140));
    uVar10 = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(param_2 + 0x148) = 0;
    uVar10 = FUN_0035351c(auStack_78,uVar10,0);
    FUN_00308af0(uVar10,param_2);
  }
joined_r0x00309cb4:
  if ((bool)uVar5) {
    FUN_00308da0(param_1,param_2);
    plVar11 = *(long **)(param_2 + 0x10);
    do {
      lVar6 = *plVar11;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      FUN_0037af30();
    }
  }
  if (4 < param_5) {
    FUN_00350fd0(param_5);
  }
  return;
}


