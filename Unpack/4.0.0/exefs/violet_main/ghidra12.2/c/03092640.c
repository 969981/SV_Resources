/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03092640; name: FUN_03092640
 */


void FUN_03092640(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  
  *(undefined4 *)(param_1 + 0x178) = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    plVar7 = (long *)(param_2 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = *plVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = param_2;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
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
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) < iVar2) {
    FUN_02e9b320(param_1 + 0x90,PTR_PTR_047d1a50,(long)iVar2);
  }
  uVar4 = *(uint *)(param_1 + 0x98);
  if ((int)uVar4 < iVar2) {
    *(int *)(param_1 + 0x98) = iVar2;
    memset((void *)(*(long *)(param_1 + 0x90) + (long)(int)uVar4 * 4),0xff,
           (ulong)(iVar2 + ~uVar4) * 4 + 4);
  }
  else if (iVar2 < (int)uVar4) {
    *(int *)(param_1 + 0x98) = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if ((int)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) < iVar2) {
    FUN_02e9b320(param_1 + 0x70,PTR_PTR_047d1a50,(long)iVar2);
  }
  uVar4 = *(uint *)(param_1 + 0x78);
  if ((int)uVar4 < iVar2) {
    *(int *)(param_1 + 0x78) = iVar2;
    memset((void *)(*(long *)(param_1 + 0x70) + (long)(int)uVar4 * 4),0xff,
           (ulong)(iVar2 + ~uVar4) * 4 + 4);
  }
  else if (iVar2 < (int)uVar4) {
    *(int *)(param_1 + 0x78) = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) < iVar2) {
    FUN_03095450(param_1 + 0x100,PTR_PTR_047d1a50,(long)iVar2);
  }
  uVar4 = *(uint *)(param_1 + 0x108);
  if ((int)uVar4 < iVar2) {
    *(int *)(param_1 + 0x108) = iVar2;
    memset((void *)(*(long *)(param_1 + 0x100) + (long)(int)uVar4),0,(ulong)(iVar2 + ~uVar4) + 1);
  }
  else if (iVar2 < (int)uVar4) {
    *(int *)(param_1 + 0x108) = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((int)(*(uint *)(param_1 + 0x174) & 0x7fffffff) < iVar2) {
    FUN_02e9b320(param_1 + 0x168,PTR_PTR_047d1a50,(long)iVar2);
  }
  uVar4 = *(uint *)(param_1 + 0x170);
  if ((int)uVar4 < iVar2) {
    *(int *)(param_1 + 0x170) = iVar2;
    memset((void *)(*(long *)(param_1 + 0x168) + (long)(int)uVar4 * 4),0xff,
           (ulong)(iVar2 + ~uVar4) * 4 + 4);
    return;
  }
  if (iVar2 < (int)uVar4) {
    *(int *)(param_1 + 0x170) = iVar2;
  }
  return;
}


