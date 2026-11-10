/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02465c50; name: FUN_02465c50
 */


ulong FUN_02465c50(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = FUN_02465bb0();
  if (uVar2 <= param_2) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 + 0x30);
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
  case 3:
    if (uVar2 != 0) {
      return (ulong)*(byte *)(uVar2 + (param_2 & 0xffffffff) + 4);
    }
    break;
  case 2:
    if (uVar2 != 0) {
      return (long)*(char *)(uVar2 + (param_2 & 0xffffffff) + 4);
    }
    break;
  case 4:
  case 5:
    if (uVar2 != 0) {
      return (ulong)*(ushort *)(uVar2 + (param_2 & 0xffffffff) * 2 + 4);
    }
    break;
  case 6:
  case 7:
    if (uVar2 != 0) {
      lVar1 = (param_2 & 0xffffffff) * 4;
LAB_02465cf0:
      return (ulong)*(uint *)(uVar2 + lVar1 + 4);
    }
    break;
  case 8:
  case 9:
    if (uVar2 != 0) {
      lVar1 = (param_2 & 0xffffffff) * 8;
      goto LAB_02465cf0;
    }
    break;
  case 10:
    if (uVar2 != 0) {
      return (ulong)(uint)(int)*(float *)(uVar2 + (param_2 & 0xffffffff) * 4 + 4);
    }
    break;
  case 0xb:
    if (uVar2 != 0) {
      uVar2 = (ulong)(uint)(int)*(double *)(uVar2 + (param_2 & 0xffffffff) * 8 + 4);
    }
    break;
  default:
    return 0;
  }
  return uVar2;
}


