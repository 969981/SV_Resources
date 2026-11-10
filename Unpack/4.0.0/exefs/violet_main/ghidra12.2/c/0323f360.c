/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0323f360; name: FUN_0323f360
 */


uint FUN_0323f360(long param_1,long param_2,undefined1 param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar7 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar4 = *(int *)(param_1 + 0x3c0);
  lVar6 = (long)iVar4;
  if ((int)(*(uint *)(param_1 + 0x3c4) & 0x7fffffff) <= iVar4) {
    FUN_02e80ee8(param_1 + 0x3b8,PTR_PTR_047d1a50,lVar6 + 1);
    iVar4 = *(int *)(param_1 + 0x3c0);
  }
  *(long *)(*(long *)(param_1 + 0x3b8) + (long)iVar4 * 8) = param_2;
  uVar1 = *(uint *)(param_1 + 0x20);
  *(int *)(param_1 + 0x3c0) = (int)(lVar6 + 1);
  uVar5 = uVar1;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= (int)uVar1) {
    FUN_0323ff70(param_1 + 0x18,PTR_PTR_047d1a50,(long)(int)uVar1 + 1);
    uVar5 = *(uint *)(param_1 + 0x20);
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x18) + (long)(int)uVar5 * 0x18);
  lVar6 = 0;
  if (param_2 != 0) {
    lVar6 = param_2 + 0x20;
  }
  *(int *)(param_1 + 0x20) = (int)((long)(int)uVar1 + 1);
  *plVar7 = lVar6;
  *(undefined2 *)(plVar7 + 1) = 1;
  *(undefined1 *)((long)plVar7 + 10) = param_3;
  plVar7[2] = 0;
  return uVar1 & 0xffff;
}


