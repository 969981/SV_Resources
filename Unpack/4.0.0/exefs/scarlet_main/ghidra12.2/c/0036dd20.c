/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036dd20; name: FUN_0036dd20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0036dd20(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [32];
  
  plVar1 = param_1 + 0x1f;
  do {
    lVar8 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar8 + -1 != 0) {
    return;
  }
  lVar8 = *param_1;
  uVar9 = param_1[0x20];
  if (uVar9 < 5) {
    bVar2 = *(byte *)(param_1 + 3);
  }
  else {
    uVar9 = FUN_00350fb0(uVar9);
    bVar2 = *(byte *)(param_1 + 3);
  }
  if ((bVar2 & 1) != 0) {
    FUN_00377160(lVar8 + 400);
    bVar2 = *(byte *)(param_1 + 3);
  }
  if ((bVar2 >> 2 & 1) != 0) {
    if ((uVar9 == 0) && (*(char *)(param_1[2] + 0x30) != '\0')) {
      FUN_003673f0(auStack_80,"Attempt to send message after stream was closed.");
      uVar5 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x4a5,
                           auStack_80,0,0);
      uVar9 = FUN_00352130(0,uVar5);
    }
    *(undefined1 *)(lVar8 + 0xac) = 0;
    bVar2 = *(byte *)(param_1 + 3);
  }
  if ((bVar2 >> 1 & 1) != 0) {
    FUN_00377160(lVar8 + 0x278);
    bVar2 = *(byte *)(param_1 + 3);
  }
  if ((bVar2 >> 5 & 1) == 0) {
    if (((uVar9 != 0) && ((bVar2 >> 4 & 1) != 0)) && (**(long **)(lVar8 + 0x808) != 0)) {
      FUN_0036a810();
      **(undefined8 **)(lVar8 + 0x808) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar8 + 0xc0) = 1;
    lVar10 = *(long *)(lVar8 + 0x98);
    if (lVar10 != 0) {
      FUN_0038db40(lVar10);
      lVar12 = *(long *)(lVar10 + 0x20);
      if (lVar12 != 0) {
        do {
          lVar11 = *(long *)(*(long *)(lVar12 + 0xa0) + 8);
          if (*(char *)(lVar12 + 0xaa) != '\0') {
            plVar1 = (long *)(lVar12 + 0x910);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            plVar6 = (long *)(lVar12 + 0x8b8);
            do {
              if (*plVar6 != 0) {
                ClearExclusiveLocal();
                goto LAB_0036df24;
              }
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            FUN_003505cc(lVar12 + 0x10,4);
            plVar6 = (long *)FUN_0038c780(0x48);
            *plVar6 = lVar12;
            plVar6[6] = (long)&LAB_0036d000;
            plVar6[7] = (long)plVar6;
            plVar6[8] = 0;
            lVar7 = FUN_0037b8b0(plVar6 + 5);
            *(byte *)(lVar7 + 0x10) = *(byte *)(lVar7 + 0x10) | 0x40;
            *(undefined8 *)(*(long *)(lVar7 + 8) + 0x88) = 4;
            *(long *)(lVar7 + 0x18) = lVar12;
            plVar6[2] = (long)&LAB_0036d060;
            plVar6[3] = lVar7;
            plVar6[4] = 0;
            FUN_003504a8(lVar12 + 0x10,plVar6 + 1,0,"executing batch");
LAB_0036df24:
            do {
              lVar12 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 + -1 == 0) {
              FUN_0037af30(plVar1);
            }
          }
          lVar12 = lVar11;
        } while (lVar11 != *(long *)(lVar10 + 0x20));
      }
      FUN_0038db60(lVar10);
    }
    if (4 < uVar9) {
      FUN_00350fd0(uVar9);
    }
    uVar9 = 0;
  }
  if (4 < (ulong)param_1[0x20]) {
    FUN_00350fd0();
  }
  param_1[0x20] = 0;
  if ((char)param_1[10] == '\0') {
    FUN_00371820(*(undefined8 *)(*param_1 + 0x70),param_1[9],uVar9,&LAB_0036e8c0,param_1,param_1 + 9
                 ,0);
  }
  else {
    lVar10 = param_1[9];
    *param_1 = 0;
    if (lVar10 != 0) {
      (**(code **)(lVar10 + 8))(*(undefined8 *)(lVar10 + 0x10),uVar9);
    }
    if (4 < uVar9) {
      FUN_00350fd0(uVar9);
    }
    plVar1 = (long *)(lVar8 + 0x910);
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      FUN_0037af30();
    }
  }
  return;
}


