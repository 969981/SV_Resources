/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0303ec94; name: FUN_0303ec94
 */


void FUN_0303ec94(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char *__s;
  char cVar2;
  bool bVar3;
  size_t sVar4;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  
  *param_1 = 0;
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar4 = strlen(__s);
    sVar4 = (size_t)((int)sVar4 + 1);
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar4);
    memcpy(__dest,__s,sVar4);
    *param_1 = (ulong)__dest | 1;
  }
  memcpy(param_1 + 1,param_2 + 1,0x50);
  uVar5 = param_2[0xb];
  param_1[0xb] = uVar5;
  if ((uVar5 != 0) && (*(long *)(uVar5 + 8) != 0)) {
    plVar1 = (long *)(uVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = param_2[0xc];
  param_1[0xc] = uVar5;
  if ((uVar5 != 0) && (*(long *)(uVar5 + 8) != 0)) {
    plVar1 = (long *)(uVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = param_2[0xd];
  param_1[0xd] = uVar5;
  if ((uVar5 != 0) && (*(long *)(uVar5 + 8) != 0)) {
    plVar1 = (long *)(uVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  memcpy(param_1 + 0xe,param_2 + 0xe,0x26);
  uVar5 = param_2[0x13];
  param_1[0x13] = uVar5;
  if ((uVar5 != 0) && (*(long *)(uVar5 + 8) != 0)) {
    plVar1 = (long *)(uVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = param_2[0x14];
  param_1[0x14] = uVar5;
  if ((uVar5 != 0) && (*(long *)(uVar5 + 8) != 0)) {
    plVar1 = (long *)(uVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  memcpy(param_1 + 0x15,param_2 + 0x15,0x28);
  uVar5 = param_2[0x1a];
  param_1[0x1a] = uVar5;
  if ((uVar5 != 0) && (*(long *)(uVar5 + 8) != 0)) {
    plVar1 = (long *)(uVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = param_2[0x1b];
  param_1[0x1b] = uVar5;
  if ((uVar5 != 0) && (*(long *)(uVar5 + 8) != 0)) {
    plVar1 = (long *)(uVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = param_2[0x1c];
  param_1[0x1c] = uVar5;
  if ((uVar5 != 0) && (*(long *)(uVar5 + 8) != 0)) {
    plVar1 = (long *)(uVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  memcpy(param_1 + 0x1d,param_2 + 0x1d,0x38);
  uVar5 = param_2[0x24];
  param_1[0x24] = uVar5;
  if ((uVar5 != 0) && (*(long *)(uVar5 + 8) != 0)) {
    plVar1 = (long *)(uVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = param_2[0x25];
  uVar6 = param_2[0x27];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar6;
  param_1[0x25] = uVar5;
  return;
}


