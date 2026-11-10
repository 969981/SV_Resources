/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0051d310; name: FUN_0051d310
 */


ulong FUN_0051d310(long param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long local_40;
  undefined *puStack_38;
  undefined **local_30;
  undefined1 *puStack_28;
  undefined ***local_18;
  
  puVar2 = *(ulong **)(param_1 + 0x30);
  if ((puVar2 != (ulong *)0x0) &&
     (puStack_38 = PTR_LAB_047cd728, local_40 = param_1, *puVar2 != 0xffffffffffffffff)) {
    local_30 = &puStack_38;
    local_18 = &local_30;
    puStack_28 = (undefined1 *)&local_40;
    std::__call_once(puVar2,&local_18,(_func_void_void_ptr *)&LAB_0051d550);
  }
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
  case 0x10:
    return 8;
  case 2:
  case 7:
  case 0xf:
    return 4;
  case 3:
  case 4:
    uVar5 = *(ulong *)*param_2;
    goto LAB_0051d4e4;
  case 5:
  case 0xe:
    uVar4 = *(uint *)*param_2;
    if ((int)uVar4 < 0) {
      return 10;
    }
    break;
  case 6:
    return 8;
  case 8:
    return 1;
  case 9:
  case 0xc:
    bVar1 = *(byte *)*param_2;
    uVar5 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar5 = *(ulong *)((byte *)*param_2 + 8);
    }
    return uVar5 + (((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
  default:
    return 0;
  case 0xb:
    lVar3 = (**(code **)(*(long *)*param_2 + 0x48))();
    return lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
  case 0xd:
    uVar4 = *(uint *)*param_2;
    break;
  case 0x11:
    uVar4 = *(int *)*param_2 << 1 ^ *(int *)*param_2 >> 0x1f;
    break;
  case 0x12:
    uVar5 = *(long *)*param_2 << 1 ^ *(long *)*param_2 >> 0x3f;
LAB_0051d4e4:
    return (LZCOUNT(uVar5 | 1) ^ 0x3fU) * 9 + 0x49 >> 6;
  }
  return (ulong)(((uint)LZCOUNT(uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
}


