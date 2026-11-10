/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033f498c; name: FUN_033f498c
 */


undefined8 FUN_033f498c(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x108) != '\0') {
    uVar1 = FUN_033f5f50(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10),
                         *(undefined1 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x198),
                         *(undefined4 *)(param_1 + 0x134),param_2,0);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    if ((*(int *)(param_1 + 0xf0) != 0) && (*(char *)(param_1 + 400) != '\0')) {
      uVar1 = FUN_033d3528(param_1 + 0xa8,*(undefined8 *)(param_1 + 0x10),*(char *)(param_1 + 400),1
                          );
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x198));
      FUN_033d3c04(uVar2,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xf4),
                   *(undefined4 *)(param_1 + 0xfc),param_1 + 0xb8,*(int *)(param_1 + 0xf0) + -1);
    }
  }
  if (*(char *)(param_1 + 0x124) != '\0') {
    uVar1 = FUN_033f5f50(param_1 + 0x60,*(undefined8 *)(param_1 + 0x10),
                         *(undefined1 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x198),
                         *(undefined4 *)(param_1 + 0x134),param_2,0);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    if ((*(int *)(param_1 + 0x10c) != 0) && (*(char *)(param_1 + 400) != '\0')) {
      uVar1 = FUN_033d3528(param_1 + 200,*(undefined8 *)(param_1 + 0x10),*(char *)(param_1 + 400),1)
      ;
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x198));
      FUN_033d3c04(uVar2,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x110),
                   *(undefined4 *)(param_1 + 0x118),param_1 + 0xd8,*(int *)(param_1 + 0x10c) + -1);
    }
  }
  return 1;
}


