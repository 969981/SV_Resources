/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0244f998; name: FUN_0244f998
 */


void FUN_0244f998(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  undefined1 auStack_18 [8];
  
  if ((param_2 < *(ulong *)(param_1 + 400)) &&
     ((*(ulong *)(param_1 + 0x128) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x120) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    lVar1 = *(long *)(param_1 + 0xe8);
    switch(*(undefined8 *)(lVar1 + param_2 * 0x10)) {
    case 0:
      if (*(long *)(param_1 + 0x198) == 0) {
        return;
      }
      FUN_0244fab0(*(long *)(param_1 + 0x198) + 8,*(undefined8 *)(lVar1 + param_2 * 0x10 + 8),
                   auStack_18);
      break;
    case 1:
      if (*(long *)(param_1 + 0x1b8) == 0) {
        return;
      }
      FUN_0244fb4c(*(long *)(param_1 + 0x1b8) + 8,*(undefined8 *)(lVar1 + param_2 * 0x10 + 8),
                   auStack_38);
      break;
    case 2:
      if (*(long *)(param_1 + 0x1d8) == 0) {
        return;
      }
      FUN_0244fbe8(*(long *)(param_1 + 0x1d8),*(undefined8 *)(lVar1 + param_2 * 0x10 + 8));
      break;
    case 3:
      if (*(long *)(param_1 + 0x1f8) == 0) {
        return;
      }
      FUN_0244fcb8(*(long *)(param_1 + 0x1f8),*(undefined8 *)(lVar1 + param_2 * 0x10 + 8));
      break;
    default:
      goto switchD_0244fa10_default;
    }
    if (param_2 < (ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4)) {
      FUN_00d7640c((long *)(param_1 + 0xe8),param_2);
    }
  }
switchD_0244fa10_default:
  return;
}


