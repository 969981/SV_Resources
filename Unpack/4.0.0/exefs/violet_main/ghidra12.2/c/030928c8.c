/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030928c8; name: FUN_030928c8
 */


void FUN_030928c8(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x178) = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    plVar6 = (long *)(param_2 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = param_2;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x20);
  *(int *)(param_1 + 0x20) = iVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x160) = 0;
  uVar3 = *(uint *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0x28);
  *(uint *)(param_1 + 200) = uVar3;
  *(uint *)(param_1 + 0xcc) = uVar3 | 0x80000000;
  uVar3 = *(uint *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0x18);
  *(uint *)(param_1 + 0xb8) = uVar3;
  *(uint *)(param_1 + 0xbc) = uVar3 | 0x80000000;
  uVar3 = *(uint *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x68);
  *(uint *)(param_1 + 0x138) = uVar3;
  *(uint *)(param_1 + 0x13c) = uVar3 | 0x80000000;
  uVar3 = *(uint *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x58);
  *(uint *)(param_1 + 0x128) = uVar3;
  *(uint *)(param_1 + 300) = uVar3 | 0x80000000;
  if ((int)(*(uint *)(param_1 + 0x174) & 0x7fffffff) < iVar2) {
    FUN_02e9b320(param_1 + 0x168,PTR_PTR_047d1a50,(long)iVar2);
  }
  uVar3 = *(uint *)(param_1 + 0x170);
  if ((int)uVar3 < iVar2) {
    *(int *)(param_1 + 0x170) = iVar2;
    memset((void *)(*(long *)(param_1 + 0x168) + (long)(int)uVar3 * 4),0xff,
           (ulong)(iVar2 + ~uVar3) * 4 + 4);
    return;
  }
  if (iVar2 < (int)uVar3) {
    *(int *)(param_1 + 0x170) = iVar2;
  }
  return;
}


