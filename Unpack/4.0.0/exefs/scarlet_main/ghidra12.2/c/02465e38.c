/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02465e38; name: FUN_02465e38
 */


ulong FUN_02465e38(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_02465bb0();
  if (uVar1 <= param_2) {
    return 0;
  }
  uVar1 = *(ulong *)(param_1 + 0x30);
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
  case 3:
    if (uVar1 != 0) {
      return (ulong)*(byte *)(uVar1 + (param_2 & 0xffffffff) + 4);
    }
    break;
  case 2:
    if (uVar1 != 0) {
      return (long)*(char *)(uVar1 + (param_2 & 0xffffffff) + 4);
    }
    break;
  case 4:
    if (uVar1 != 0) {
      return (long)*(short *)(uVar1 + (param_2 & 0xffffffff) * 2 + 4);
    }
    break;
  case 5:
    if (uVar1 != 0) {
      return (ulong)*(ushort *)(uVar1 + (param_2 & 0xffffffff) * 2 + 4);
    }
    break;
  case 6:
    if (uVar1 != 0) {
      return (long)*(int *)(uVar1 + (param_2 & 0xffffffff) * 4 + 4);
    }
    break;
  case 7:
    if (uVar1 != 0) {
      return (ulong)*(uint *)(uVar1 + (param_2 & 0xffffffff) * 4 + 4);
    }
    break;
  case 8:
  case 9:
    if (uVar1 != 0) {
      return *(ulong *)(uVar1 + (param_2 & 0xffffffff) * 8 + 4);
    }
    break;
  case 10:
    if (uVar1 != 0) {
      return (long)*(float *)(uVar1 + (param_2 & 0xffffffff) * 4 + 4);
    }
    break;
  case 0xb:
    if (uVar1 != 0) {
      uVar1 = (ulong)*(double *)(uVar1 + (param_2 & 0xffffffff) * 8 + 4);
    }
    break;
  default:
    return 0;
  }
  return uVar1;
}


