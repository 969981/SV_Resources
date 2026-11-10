/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027fbeb8; name: FUN_027fbeb8
 */


void FUN_027fbeb8(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_5c;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  long *local_18;
  
  local_18 = (long *)*param_2;
  if (local_18 != (long *)0x0) {
    lVar6 = local_18[6];
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_027fc2a4;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar5;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_027fc2a4;
  }
  local_48 = (long *)*param_1;
  if (local_48 != (long *)0x0) {
    lVar6 = local_48[6];
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_027fc2a4;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar5;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_027fc2a4;
  }
  local_40 = (long *)param_1[1];
  if (local_40 != (long *)0x0) {
    lVar6 = local_40[6];
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_027fc2a4;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar5;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_027fc2a4;
  }
  local_38 = (long *)*param_2;
  if (local_38 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else {
    lVar6 = local_38[6];
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_027fc2a4;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar5;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_027fc2a4;
    local_50 = (long *)*param_2;
    if (local_50 != (long *)0x0) {
      lVar6 = local_50[6];
      if (*(long *)(lVar6 + 0x10) == 0) goto LAB_027fc2a4;
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
        *(undefined8 *)(lVar6 + 8) = uVar5;
        *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_027fc2a4;
    }
  }
  local_5c = 1;
  FUN_027fc2bc(&local_58,*(undefined8 *)(*param_1 + 8),&local_5c,&local_18,&local_48,&local_50);
  lVar6 = *param_1;
  FUN_01932260(lVar6 + 0xf0,&local_58);
  if (*(int *)(lVar6 + 0x48) - 1U < 3) {
    FUN_0174a3b8(lVar6);
  }
  if (local_58 != (long *)0x0) {
    lVar6 = local_58[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_58 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027fc2a4;
  }
  if (local_50 != (long *)0x0) {
    lVar6 = local_50[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027fc2a4;
  }
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027fc2a4;
  }
  if (local_40 != (long *)0x0) {
    lVar6 = local_40[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_40 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027fc2a4;
  }
  if (local_48 != (long *)0x0) {
    lVar6 = local_48[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027fc2a4;
  }
  if (local_18 != (long *)0x0) {
    lVar6 = local_18[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_18 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_027fc2a4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


