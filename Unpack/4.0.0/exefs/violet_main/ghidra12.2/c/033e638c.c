/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e638c; name: FUN_033e638c
 */


undefined8 FUN_033e638c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    uVar1 = FUN_033e73a8(*(undefined4 *)(param_1 + 0x88),param_1 + 0x18,
                         *(undefined8 *)(param_1 + 0x10),*(char *)(param_1 + 0xb8),
                         *(undefined4 *)(param_1 + 0xc0));
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    if (*(float *)(param_1 + 0x78) == 1.0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (*(int *)(param_1 + 0x2c) != 0) {
        uVar2 = 0;
        do {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + uVar2 * 4) = 0;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x2c));
      }
    }
    else {
      *(float *)(param_1 + 0x28) = 1.0 - *(float *)(param_1 + 0x78);
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      uVar1 = FUN_033d3528(param_1 + 0x38,*(undefined8 *)(param_1 + 0x10),
                           *(undefined1 *)(param_1 + 0xb8),1);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      uVar3 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xc0));
      FUN_033d3c04(uVar3,*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x6c),
                   *(undefined4 *)(param_1 + 0x74),param_1 + 0x48,*(int *)(param_1 + 0x68) + -1);
    }
  }
  return 1;
}


