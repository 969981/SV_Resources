/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c96f4c; name: FUN_00c96f4c
 */


undefined4 FUN_00c96f4c(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  plVar3 = (long *)*param_2;
  plVar4 = (long *)param_2[1];
  uVar6 = param_3;
  do {
    if (plVar3 == plVar4) {
      return uVar6;
    }
    lVar11 = *plVar3;
    plVar1 = (long *)(lVar11 + 0x70);
    lVar7 = nn::os::GetCurrentThread();
    do {
      lVar10 = *plVar1;
      lVar8 = *(long *)(lVar11 + 0x78);
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar10;
        *(long *)(lVar11 + 0x78) = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00c96fa0:
    while ((lVar10 != 0 && (lVar7 != lVar10))) {
      nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x80));
      do {
        lVar10 = *plVar1;
        lVar8 = *(long *)(lVar11 + 0x78);
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar10;
          *(long *)(lVar11 + 0x78) = lVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar10 || *(long *)(lVar11 + 0x78) != lVar8) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto LAB_00c96fd0;
      }
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar10;
        *(long *)(lVar11 + 0x74) = lVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar9 = true;
LAB_00c96fd0:
    if (!bVar9) {
      lVar10 = lVar2;
      lVar8 = *(long *)(lVar11 + 0x78);
      goto LAB_00c96fa0;
    }
    if ((int)((ulong)(*(long *)(lVar11 + 0x38) - *(long *)(lVar11 + 0x30)) >> 3) != 0) {
      uVar6 = FUN_00c97190(param_1,*(long *)(lVar11 + 0x30),param_3);
      if ((*(long *)(lVar11 + 0x38) - *(long *)(lVar11 + 0x30) & 0x7fffffff0U) != 0) {
        uVar6 = FUN_00c97190(param_1,*(long *)(lVar11 + 0x30) + 8,param_3);
        if (0x10 < (*(long *)(lVar11 + 0x38) - *(long *)(lVar11 + 0x30) & 0x7fffffff8U)) {
          uVar6 = FUN_00c97190(param_1,*(long *)(lVar11 + 0x30) + 0x10,param_3);
          if ((*(long *)(lVar11 + 0x38) - *(long *)(lVar11 + 0x30) & 0x7ffffffe0U) != 0) {
            uVar6 = FUN_00c97190(param_1,*(long *)(lVar11 + 0x30) + 0x18,param_3);
            lVar7 = *(long *)(lVar11 + 0x30);
            if (0x20 < (*(long *)(lVar11 + 0x38) - lVar7 & 0x7fffffff8U)) {
              lVar10 = 0x20;
              uVar12 = 4;
              do {
                uVar6 = FUN_00c97190(param_1,lVar7 + lVar10,param_3);
                lVar7 = *(long *)(lVar11 + 0x30);
                uVar12 = uVar12 + 1;
                lVar10 = lVar10 + 8;
              } while (uVar12 < ((ulong)(*(long *)(lVar11 + 0x38) - lVar7) >> 3 & 0xffffffff));
            }
          }
        }
      }
    }
    do {
      lVar7 = *plVar1;
      lVar10 = *(long *)(lVar11 + 0x78);
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7;
        *(long *)(lVar11 + 0x78) = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar8 = *plVar1;
      lVar2 = *(long *)(lVar11 + 0x78);
      if (lVar8 != lVar7 || lVar2 != lVar10) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c970c4;
      }
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7;
        *(long *)(lVar11 + 0x74) = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar9 = true;
joined_r0x00c970c4:
    if (!bVar9) {
      do {
        lVar7 = *plVar1;
        lVar10 = *(long *)(lVar11 + 0x78);
        if (lVar7 != lVar8 || lVar10 != lVar2) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar8 = lVar7;
          lVar2 = lVar10;
          goto joined_r0x00c970c4;
        }
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar8;
          *(long *)(lVar11 + 0x74) = lVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar9 = true;
      lVar8 = lVar7;
      lVar2 = lVar10;
      goto joined_r0x00c970c4;
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x80));
    plVar3 = plVar3 + 1;
  } while( true );
}


