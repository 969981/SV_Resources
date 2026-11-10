/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00100470; name: FUN_00100470
 */


void FUN_00100470(long param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_001209d0(param_1 + 0x3a0);
    if (*(int *)(param_1 + 0x48) != 0) {
      (**(code **)(param_1 + 0x218))
                (param_1 + 0x210,*(undefined4 *)(param_1 + 0x20c),*(undefined8 *)(param_1 + 0xe8),
                 *(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x124));
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(ulong *)(param_1 + 0x110) = *(long *)(param_1 + 0xe8) + (ulong)*(uint *)(param_1 + 0x124);
      if (*(int *)(param_1 + 0x2d8) != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
    }
    FUN_00120750(param_1 + 0x3a0);
    if (DAT_047ec42c != 0) {
      FUN_00120bc0(&DAT_047ec430,1);
      return;
    }
  }
  return;
}


