/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0d554; name: FUN_00e0d554
 */


void FUN_00e0d554(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
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
  iVar2 = *(int *)(param_2 + 0x30);
  if ((int)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) < iVar2) {
    FUN_02e9b320(param_1 + 0x70,PTR_PTR_047d1a50,(long)iVar2);
  }
  uVar3 = *(uint *)(param_1 + 0x78);
  if ((int)uVar3 < iVar2) {
    *(int *)(param_1 + 0x78) = iVar2;
    memset((void *)(*(long *)(param_1 + 0x70) + (long)(int)uVar3 * 4),0xff,
           (ulong)(iVar2 + ~uVar3) * 4 + 4);
  }
  else if (iVar2 < (int)uVar3) {
    *(int *)(param_1 + 0x78) = iVar2;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x6c);
  return;
}


