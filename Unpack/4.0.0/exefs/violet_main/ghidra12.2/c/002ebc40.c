/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ebc40; name: FUN_002ebc40
 */


void FUN_002ebc40(long param_1,undefined8 param_2,void *param_3,size_t param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  void *__dest;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == *(long *)(param_1 + 0x20)) {
    uVar1 = lVar5 + 8U;
    if (lVar5 + 8U <= (ulong)(lVar5 * 2)) {
      uVar1 = lVar5 * 2;
    }
    *(ulong *)(param_1 + 0x20) = uVar1;
    lVar2 = FUN_0038c7f0(*(undefined8 *)(param_1 + 0x10),uVar1 * 0x18);
    lVar5 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x10) = lVar2;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x18) = lVar5 + 1;
  uVar3 = FUN_0038ccb0(param_2);
  puVar4 = (undefined8 *)(lVar2 + lVar5 * 0x18);
  *puVar4 = uVar3;
  __dest = (void *)FUN_0038c780(param_4 + 1);
  puVar4[1] = __dest;
  memcpy(__dest,param_3,param_4);
  *(undefined1 *)(puVar4[1] + param_4) = 0;
  puVar4[2] = param_4;
  return;
}


