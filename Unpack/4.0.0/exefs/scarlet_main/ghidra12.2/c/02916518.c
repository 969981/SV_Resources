/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02916518; name: FUN_02916518
 */


int FUN_02916518(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x88))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  if ((uVar2 & 1) != 0) {
    return -0x14;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xb6);
  if (((((uVar2 & 1) == 0) &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xc5),
       (uVar2 & 1) == 0)) &&
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x24c),
      (uVar2 & 1) == 0)) &&
     (((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x254),
       (uVar2 & 1) == 0 &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x231),
       (uVar2 & 1) == 0)) &&
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1d5),
      (uVar2 & 1) == 0)))) {
    return 0;
  }
  if (*(char *)(param_1 + 0xb8) == '\a') {
    return 0;
  }
  if (*(char *)(param_1 + 0xb9) == '\a') {
    return 0;
  }
  if (*(char *)(param_1 + 0xc4) == '\a') {
    return 0;
  }
  if (*(char *)(param_1 + 0xc5) == '\a') {
    return 0;
  }
  if (*(short *)(param_1 + 0xb6) == 6) {
    return 0;
  }
  if (*(short *)(param_1 + 0xc2) == 6) {
    return 0;
  }
  if (*(short *)(param_1 + 0xaa) == 6) {
    return 0;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  uVar1 = uVar1 & 0xffff;
  if (uVar1 < 0x1f5) {
    if (((uVar1 != 0xb6) && (uVar1 != 0xc5)) && (uVar1 != 0x1d5)) goto LAB_029166e8;
  }
  else if (((0x23 < uVar1 - 0x231) || ((1L << ((ulong)(uVar1 - 0x231) & 0x3f) & 0x808000001U) == 0))
          && (uVar1 != 0x1f5)) {
LAB_029166e8:
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x26);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    return 3;
  }
  if ((*(char *)(param_1 + 0xac) == '\a') || (*(char *)(param_1 + 0xad) == '\a')) {
    return 0;
  }
  return -(uint)(*(short *)(param_1 + 0xaa) != 0x8c);
}


