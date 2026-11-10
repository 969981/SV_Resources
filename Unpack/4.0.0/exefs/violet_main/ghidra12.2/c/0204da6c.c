/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0204da6c; name: FUN_0204da6c
 */


void FUN_0204da6c(long *param_1,int param_2,long *param_3)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  short sVar10;
  long lVar11;
  bool bVar12;
  
  lVar2 = *param_1;
  if (*(int *)(param_1[1] + (ulong)*(uint *)(lVar2 + 0xe8)) != 4) {
    if ((((*param_3 == 0) || (*(short *)(*param_3 + 0x1a) == 0)) || (*param_3 == 0)) ||
       (*(short *)(*param_3 + 0x1a) == 0)) {
      param_2 = 0;
    }
    lVar9 = *param_3;
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar10 = *(short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0204db3c;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0204db3c:
          bVar12 = false;
        }
        if (bVar12) {
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 != 0) {
            plVar6 = (long *)(lVar9 + 0xe8);
            lVar11 = *plVar6;
            lVar5 = nn::os::GetCurrentThread();
            if (lVar5 != lVar11) {
              lVar5 = nn::os::GetCurrentThread();
              goto LAB_0204db88;
            }
            bVar12 = true;
            goto LAB_0204db9c;
          }
          break;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
    *(undefined4 *)(param_1[1] + (ulong)*(uint *)(lVar2 + 0xe8)) = 3;
  }
  return;
LAB_0204db88:
  if (*plVar6 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
          while (*plVar6 == 0) {
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar12) {
              *plVar6 = lVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_0204db98;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar12) {
        *plVar6 = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_0204db98:
    bVar12 = false;
LAB_0204db9c:
    plVar6 = (long *)FUN_0204d820(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
    if ((*(long **)(lVar9 + 0x108) == plVar6) || (*plVar6 == 0)) {
      plVar6 = (long *)FUN_0204d820(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
      if (*(long **)(lVar9 + 0x140) == plVar6) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if (*plVar6 != 0) {
          lVar5 = *plVar6 + -0x20;
        }
      }
    }
    else {
      lVar5 = *plVar6 + -0x20;
    }
    if (!bVar12) {
      *(undefined8 *)(lVar9 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
    }
    lVar11 = FUN_0204d328(lVar2,param_1[1]);
    if ((((*(long *)(lVar11 + 0xd8) == 0) || (*(short *)(*(long *)(lVar11 + 0xd8) + 0x1a) == 0)) &&
        (uVar7 = FUN_01473a8c(lVar11 + 0xc0), (uVar7 & 1) == 0)) || (*(long *)(lVar11 + 0xd0) == 0))
    {
      uVar8 = 4;
    }
    else {
      lVar11 = param_1[1];
      uVar8 = 3;
      if ((param_2 != 1) || (lVar5 == 0)) goto LAB_0204dccc;
      FUN_01dfaf44(lVar5,*(undefined4 *)(lVar11 + (ulong)*(uint *)(lVar2 + 0xf0)),0);
      FUN_0204dd04(lVar5,0);
      uVar8 = 2;
    }
    lVar11 = param_1[1];
LAB_0204dccc:
    *(undefined4 *)(lVar11 + (ulong)*(uint *)(lVar2 + 0xe8)) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x0204dcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))((long *)(lVar9 + -0x28));
    return;
  }
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar12) {
    *plVar6 = lVar5;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_0204db98;
  goto LAB_0204db88;
}


