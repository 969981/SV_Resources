/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bf3c4; name: FUN_019bf3c4
 */


void FUN_019bf3c4(long param_1,ulong param_2)

{
  long lVar1;
  
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
      FUN_01f56850(*(long *)(param_1 + 0x198) + 8,*(undefined8 *)(lVar1 + param_2 * 0x10 + 8));
      break;
    case 1:
      if (*(long *)(param_1 + 0x1b8) == 0) {
        return;
      }
      FUN_01f568f0(*(long *)(param_1 + 0x1b8) + 8,*(undefined8 *)(lVar1 + param_2 * 0x10 + 8));
      break;
    case 2:
      if (*(long *)(param_1 + 0x1d8) == 0) {
        return;
      }
      FUN_01f56990(*(long *)(param_1 + 0x1d8),*(undefined8 *)(lVar1 + param_2 * 0x10 + 8));
      break;
    case 3:
      if (*(long *)(param_1 + 0x1f8) == 0) {
        return;
      }
      FUN_01f56a68(*(long *)(param_1 + 0x1f8),*(undefined8 *)(lVar1 + param_2 * 0x10 + 8));
      break;
    default:
      goto switchD_019bf448_default;
    }
    if (param_2 < (ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4)) {
      FUN_00d7640c((long *)(param_1 + 0xe8),param_2);
      return;
    }
  }
switchD_019bf448_default:
  return;
}


