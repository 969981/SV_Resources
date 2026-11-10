/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022e17b4; name: FUN_022e17b4
 */


void FUN_022e17b4(long param_1,ulong param_2)

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
      FUN_022e1bf4(*(long *)(param_1 + 0x198) + 8,*(undefined8 *)(lVar1 + param_2 * 0x10 + 8),
                   auStack_18);
      break;
    case 1:
      if (*(long *)(param_1 + 0x1b8) == 0) {
        return;
      }
      FUN_022e1c94(*(long *)(param_1 + 0x1b8) + 8,*(undefined8 *)(lVar1 + param_2 * 0x10 + 8),
                   auStack_38);
      break;
    case 2:
      if (*(long *)(param_1 + 0x1d8) == 0) {
        return;
      }
      FUN_022e1d34(*(long *)(param_1 + 0x1d8),*(undefined8 *)(lVar1 + param_2 * 0x10 + 8));
      break;
    case 3:
      if (*(long *)(param_1 + 0x1f8) == 0) {
        return;
      }
      FUN_022e1e04(*(long *)(param_1 + 0x1f8),*(undefined8 *)(lVar1 + param_2 * 0x10 + 8));
      break;
    default:
      goto switchD_022e182c_default;
    }
    if (param_2 < (ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4)) {
      FUN_00d7640c((long *)(param_1 + 0xe8),param_2);
    }
  }
switchD_022e182c_default:
  return;
}


