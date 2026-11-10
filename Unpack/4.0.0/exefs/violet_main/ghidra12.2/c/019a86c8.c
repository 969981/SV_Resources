/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a86c8; name: FUN_019a86c8
 */


bool FUN_019a86c8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_8;
  
  uVar5 = *(ulong *)(param_1 + 0x80);
  lVar3 = *(long *)(param_1 + 0x48);
  plVar1 = (long *)(lVar3 + (uVar5 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x50) == lVar3) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar1 + (uVar5 & 0x1ff) * 8;
  }
  uVar5 = *(long *)(param_1 + 0x88) + uVar5;
  plVar2 = (long *)(lVar3 + (uVar5 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x50) == lVar3) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar2 + (uVar5 & 0x1ff) * 8;
  }
  local_8 = param_2;
  lVar3 = FUN_019a8790(plVar1,lVar4,plVar2,lVar3,&local_8);
  if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) {
    lVar4 = 0;
  }
  else {
    uVar5 = *(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x88);
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + (uVar5 >> 6 & 0x3fffffffffffff8)) +
            (uVar5 & 0x1ff) * 8;
  }
  return lVar4 != lVar3;
}


