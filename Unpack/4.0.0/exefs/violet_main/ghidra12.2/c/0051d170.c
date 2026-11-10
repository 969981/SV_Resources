/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0051d170; name: FUN_0051d170
 */


ulong FUN_0051d170(long param_1,ulong *param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long local_40;
  undefined *puStack_38;
  undefined **local_30;
  undefined1 *puStack_28;
  undefined ***local_18;
  
  puStack_28 = (undefined1 *)&local_40;
  puVar1 = *(ulong **)(param_1 + 0x30);
  if ((puVar1 != (ulong *)0x0) && (puStack_38 = PTR_LAB_047cd728, *puVar1 != 0xffffffffffffffff)) {
    local_30 = &puStack_38;
    local_18 = &local_30;
    local_40 = param_1;
    std::__call_once(puVar1,&local_18,(_func_void_void_ptr *)&LAB_0051d550);
  }
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 3:
  case 4:
    uVar3 = *param_2;
    goto LAB_0051d2dc;
  case 5:
    uVar2 = (uint)*param_2;
    if ((int)uVar2 < 0) {
      return 10;
    }
    break;
  case 6:
  case 0x10:
    return 8;
  case 7:
  case 0xf:
    return 4;
  case 8:
    return 1;
  case 9:
    uVar3 = (ulong)(byte)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar3 = param_2[1];
    }
    return uVar3 + (((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
  default:
    return 0;
  case 0xd:
    uVar2 = (uint)*param_2;
    break;
  case 0x11:
    uVar2 = (uint)*param_2 << 1 ^ (int)(uint)*param_2 >> 0x1f;
    break;
  case 0x12:
    uVar3 = *param_2 << 1 ^ (long)*param_2 >> 0x3f;
LAB_0051d2dc:
    return (LZCOUNT(uVar3 | 1) ^ 0x3fU) * 9 + 0x49 >> 6;
  }
  return (ulong)(((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
}


