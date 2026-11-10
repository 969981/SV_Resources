/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001020a0; name: FUN_001020a0
 */


long FUN_001020a0(long param_1,int param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x67c) != *(int *)(param_1 + 0xc)) {
    if (*(int *)(param_1 + 0x2d8) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      return 0;
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
      if (1 < *(int *)(param_1 + 0x640) + 1U) {
        *(int *)(param_1 + 0x668) =
             (param_2 - *(int *)(param_1 + 0x640)) + *(int *)(param_1 + 0x668);
        *(undefined4 *)(param_1 + 0x640) = 0;
      }
      if (*(int *)(param_1 + 0x688) != 0) {
        *(undefined4 *)(param_1 + 0x688) = 0;
        if (*(int *)(param_1 + 0x40) != 0) {
          FUN_00102180(param_1,0);
          FUN_00102180(param_1,1);
        }
        *(undefined4 *)(param_1 + 0x644) = 0;
        *(undefined4 *)(param_1 + 0x69c) = 0;
      }
      if (*(int *)(param_1 + 0x11c) != 0) {
        *(undefined4 *)(param_1 + 0x644) = 0;
        *(undefined4 *)(param_1 + 0x69c) = 0;
      }
      *(undefined4 *)(param_1 + 0x68c) = 0;
      FUN_00120180(param_1 + 0x130,*(undefined8 *)(param_1 + 0x6b0));
      *(undefined4 *)(param_1 + 0x2e0) = 1;
      *(undefined4 *)(param_1 + 0x6cc) = 0;
      return param_1;
    }
  }
  return 0;
}


