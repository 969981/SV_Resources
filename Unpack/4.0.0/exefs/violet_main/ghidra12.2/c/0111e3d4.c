/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111e3d4; name: FUN_0111e3d4
 */


void FUN_0111e3d4(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_50;
  undefined8 local_48;
  
  plVar1 = (long *)(param_1 + 0xf0);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0111e414;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0111e414;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0111e414:
  local_50 = 0;
  local_48 = 0;
  FUN_0111e634(param_1,param_2,&local_48,&local_50);
  if (0 < local_50._4_4_) {
    param_3 = param_3 & 1;
    iVar5 = local_48._4_4_;
    do {
      if (0 < (int)local_50) {
        lVar4 = *(long *)(param_1 + 0x4a8);
        if (*(int *)(lVar4 + 0x1c) == 0) {
          iVar9 = *(int *)(lVar4 + 0xc);
          iVar7 = *(int *)(lVar4 + 0x10);
          uVar6 = (int)local_48 + iVar9 * iVar5;
        }
        else {
          iVar9 = *(int *)(lVar4 + 0xc);
          iVar7 = *(int *)(lVar4 + 0x10);
          uVar6 = iVar5 + iVar7 * (int)local_48;
        }
        if (((int)uVar6 < iVar9 * iVar7) &&
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x40) + 0x20),
           **(char **)(lVar4 + (ulong)uVar6 * 0x28 + 8) != '\0')) {
          lVar4 = lVar4 + (ulong)uVar6 * 0x28;
          *(ulong *)(lVar4 + 0x20) = *(ulong *)(lVar4 + 0x20) & 0xfffffffffffffffe | param_3;
        }
        iVar9 = (int)local_48 + 1;
        if (iVar9 < (int)local_50 + (int)local_48) {
          lVar4 = *(long *)(param_1 + 0x4a8);
          if (*(int *)(lVar4 + 0x1c) == 0) {
            iVar7 = *(int *)(lVar4 + 0xc);
            iVar8 = *(int *)(lVar4 + 0x10);
            uVar6 = iVar9 + iVar7 * iVar5;
          }
          else {
            iVar7 = *(int *)(lVar4 + 0xc);
            iVar8 = *(int *)(lVar4 + 0x10);
            uVar6 = iVar5 + iVar8 * iVar9;
          }
          if (((int)uVar6 < iVar7 * iVar8) &&
             (lVar4 = *(long *)(*(long *)(lVar4 + 0x40) + 0x20),
             **(char **)(lVar4 + (ulong)uVar6 * 0x28 + 8) != '\0')) {
            lVar4 = lVar4 + (ulong)uVar6 * 0x28;
            *(ulong *)(lVar4 + 0x20) = *(ulong *)(lVar4 + 0x20) & 0xfffffffffffffffe | param_3;
          }
          for (iVar9 = (int)local_48 + 2; iVar9 < (int)local_50 + (int)local_48; iVar9 = iVar9 + 1)
          {
            lVar4 = *(long *)(param_1 + 0x4a8);
            if (*(int *)(lVar4 + 0x1c) == 0) {
              iVar7 = *(int *)(lVar4 + 0xc);
              iVar8 = *(int *)(lVar4 + 0x10);
              uVar6 = iVar9 + iVar5 * iVar7;
            }
            else {
              iVar7 = *(int *)(lVar4 + 0xc);
              iVar8 = *(int *)(lVar4 + 0x10);
              uVar6 = iVar5 + iVar8 * iVar9;
            }
            if (((int)uVar6 < iVar7 * iVar8) &&
               (lVar4 = *(long *)(*(long *)(lVar4 + 0x40) + 0x20),
               **(char **)(lVar4 + (ulong)uVar6 * 0x28 + 8) != '\0')) {
              lVar4 = lVar4 + (ulong)uVar6 * 0x28;
              *(ulong *)(lVar4 + 0x20) = *(ulong *)(lVar4 + 0x20) & 0xfffffffffffffffe | param_3;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_48._4_4_ + local_50._4_4_);
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf8));
  return;
}


