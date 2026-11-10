/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02804b44; name: FUN_02804b44
 */


void FUN_02804b44(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_7c;
  long *local_78;
  long *local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  long *local_18;
  
  local_18 = (long *)*param_2;
  if (local_18 != (long *)0x0) {
    lVar6 = local_18[6];
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_02804ef4;
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
    else if (sVar2 == -1) goto LAB_02804ef4;
  }
  local_68 = *param_1;
  if (local_68 != 0) {
    lVar6 = *(long *)(local_68 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_02804ef4;
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
    else if (sVar2 == -1) goto LAB_02804ef4;
  }
  local_60 = param_1[1];
  if (local_60 != 0) {
    lVar6 = *(long *)(local_60 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_02804ef4;
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
    else if (sVar2 == -1) goto LAB_02804ef4;
  }
  local_58 = param_1[2];
  if (local_58 != 0) {
    lVar6 = *(long *)(local_58 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_02804ef4;
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
    else if (sVar2 == -1) goto LAB_02804ef4;
  }
  local_50 = (undefined1)param_1[3];
  local_48 = 0;
  uStack_40 = 0;
  FUN_02790ba0(&local_48,param_1 + 4);
  local_38 = *param_2;
  if (local_38 == 0) {
    local_70 = (long *)0x0;
  }
  else {
    lVar6 = *(long *)(local_38 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_02804ef4;
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
    else if (sVar2 == -1) goto LAB_02804ef4;
    local_70 = (long *)*param_2;
    if (local_70 != (long *)0x0) {
      lVar6 = local_70[6];
      if (*(long *)(lVar6 + 0x10) == 0) goto LAB_02804ef4;
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
      else if (sVar2 == -1) goto LAB_02804ef4;
    }
  }
  local_7c = 1;
  FUN_0280500c(&local_78,*(undefined8 *)(*param_1 + 8),&local_7c,&local_18,&local_68,&local_70);
  lVar6 = *param_1;
  FUN_01932260(lVar6 + 0xf0,&local_78);
  if (*(int *)(lVar6 + 0x48) - 1U < 3) {
    FUN_0174a3b8(lVar6);
  }
  if (local_78 != (long *)0x0) {
    lVar6 = local_78[6];
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
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02804ef4;
  }
  if (local_70 != (long *)0x0) {
    lVar6 = local_70[6];
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
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_02804ef4;
  }
  FUN_028050b4(&local_68);
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
LAB_02804ef4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


