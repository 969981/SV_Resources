/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1cb68; name: FUN_02f1cb68
 */


void FUN_02f1cb68(long param_1,ulong param_2)

{
  uint *puVar1;
  int *piVar2;
  long *plVar3;
  void *__s;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  MutexType *pMVar11;
  uint uVar12;
  long lVar13;
  undefined4 local_44;
  
  pMVar11 = *(MutexType **)(param_1 + 0x40);
  nn::os::LockMutex(pMVar11);
  param_2 = param_2 & 0xffff;
  FUN_02f1c9e8(param_1 + 0x30,param_1,param_2);
  uVar12 = (uint)param_2;
  if ((*(int *)(param_1 + 0x50) <= (int)uVar12) ||
     (lVar13 = *(long *)(param_1 + 0x48), *(float *)(lVar13 + param_2 * 0x50 + 0x28) < 0.0))
  goto LAB_02f1cd34;
  plVar7 = *(long **)(lVar13 + param_2 * 0x50 + 8);
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar3 = plVar7 + 2;
    do {
      lVar10 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  uVar8 = *(ulong *)(lVar13 + param_2 * 0x50);
  if ((uVar8 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
  }
  __s = (void *)(*(long *)(param_1 + 0x48) + param_2 * 0x50);
  memset(__s,0,0x50);
  local_44 = 0;
  FUN_00cb06cc((long)__s + 0x19,&local_44);
  *(undefined4 *)((long)__s + 0x1a) = 0x3f003f00;
  *(undefined2 *)((long)__s + 0x20) = 0x201;
  *(undefined4 *)((long)__s + 0x2c) = 0x3f800000;
  *(undefined8 *)((long)__s + 0x24) = 0xbf8000003d4ccccd;
  *(undefined2 *)((long)__s + 0x32) = 0x3f80;
  *(undefined1 *)((long)__s + 0x30) = 0;
  *(undefined2 *)((long)__s + 0x3a) = 0x40a0;
  uVar4 = *(uint *)(param_1 + 100);
  uVar9 = uVar4 & 0xffffff;
  if (uVar9 == 0xffffff) {
    uVar9 = 0xffffffff;
  }
  puVar1 = (uint *)(param_1 + 100);
  *(uint *)(*(long *)(param_1 + 0x48) + param_2 * 0x50 + 0x10) = uVar9;
  uVar9 = *puVar1;
  if (uVar9 == uVar4) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar4 & 0xff000000 | uVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_02f1ccd4;
  }
  else {
    ClearExclusiveLocal();
LAB_02f1ccd4:
    do {
      uVar4 = uVar9 & 0xffffff;
      if (uVar4 == 0xffffff) {
        uVar4 = 0xffffffff;
      }
      *(uint *)(*(long *)(param_1 + 0x48) + param_2 * 0x50 + 0x10) = uVar4;
      uVar4 = *puVar1;
      if (uVar4 == uVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar9 & 0xff000000 | uVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02f1cd14;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02f1cd14:
        bVar6 = false;
      }
      uVar9 = uVar4;
    } while (!bVar6);
  }
  piVar2 = (int *)(param_1 + 0x68);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = *piVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02f1cd34:
  nn::os::UnlockMutex(pMVar11);
  return;
}


