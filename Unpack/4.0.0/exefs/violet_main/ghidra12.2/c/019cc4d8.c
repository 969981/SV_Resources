/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019cc4d8; name: FUN_019cc4d8
 */


void FUN_019cc4d8(long param_1,ulong param_2,ulong *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  void *__dest;
  char *__s1;
  MutexType *pMVar8;
  long *plVar9;
  char *pcVar10;
  ulong *puVar11;
  long lVar12;
  ulong local_a0;
  long *local_98;
  undefined1 auStack_90 [4];
  uint local_8c;
  char local_88;
  ushort local_82;
  float local_78;
  char local_70;
  ushort local_6c;
  
  pMVar8 = *(MutexType **)(param_1 + 0x40);
  nn::os::LockMutex(pMVar8);
  local_a0 = 0;
  local_98 = (long *)0x0;
  pcVar10 = (char *)(*param_3 & 0xfffffffffffffffe);
  if (pcVar10 == (char *)0x0) {
    pcVar10 = (char *)0x0;
  }
  else {
    sVar7 = strlen(pcVar10);
    sVar7 = (size_t)((int)sVar7 + 1);
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar7);
    memcpy(__dest,pcVar10,sVar7);
    local_a0 = (ulong)__dest | 1;
    pcVar10 = (char *)((ulong)__dest & 0xfffffffffffffffe);
  }
  param_2 = param_2 & 0xffff;
  plVar9 = (long *)param_3[1];
  if (plVar9 != (long *)0x0) {
    if (plVar9[1] != 0) {
      plVar9 = plVar9 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar9 = (long *)param_3[1];
    }
    local_98 = plVar9;
  }
  memcpy(auStack_90,param_3 + 2,0x40);
  bVar5 = (local_82 & 0x7fff) != 0;
  uVar3 = (uint)bVar5 << 0x10;
  if (local_88 != '\0') {
    uVar3 = (uint)bVar5 << 0x10 | 0x20000;
  }
  uVar2 = uVar3 | 0x40000;
  if (3.40282e+38 <= local_78) {
    uVar2 = uVar3;
  }
  if ((local_8c & 0x80000) != 0 || local_70 == '\x02') {
    uVar2 = uVar2 | 0x80000;
  }
  uVar3 = uVar2 | 0x100000;
  if ((float)((uint)local_6c << 0x10) == 0.0) {
    uVar3 = uVar2;
  }
  if (plVar9 != (long *)0x0) {
    uVar3 = uVar3 | 0x200000;
  }
  local_8c = local_8c & 0xffc00000 | local_8c & 0xffff | uVar3;
  lVar12 = *(long *)(param_1 + 0x48);
  puVar11 = (ulong *)(lVar12 + param_2 * 0x50);
  __s1 = (char *)(*puVar11 & 0xfffffffffffffffe);
  if ((pcVar10 == (char *)0x0) || (__s1 == (char *)0x0)) {
    iVar6 = -(uint)(pcVar10 != (char *)0x0);
    if (__s1 == (char *)0x0) goto LAB_019cc670;
  }
  else {
    iVar6 = strcmp(__s1,pcVar10);
LAB_019cc670:
    if (((iVar6 == 0) && (*(long **)(lVar12 + param_2 * 0x50 + 8) == plVar9)) &&
       (iVar6 = memcmp((void *)(lVar12 + param_2 * 0x50 + 0x10),auStack_90,0x40), iVar6 == 0))
    goto LAB_019cc6c4;
  }
  FUN_02f1bf34(puVar11,&local_a0);
  FUN_02f1c9e8(param_1 + 0x28,param_1,param_2);
  plVar9 = local_98;
LAB_019cc6c4:
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar1 = plVar9 + 2;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_a0 - 1,0);
  }
  nn::os::UnlockMutex(pMVar8);
  return;
}


