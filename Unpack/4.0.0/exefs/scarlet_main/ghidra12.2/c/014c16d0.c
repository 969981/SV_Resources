/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c16d0; name: thunk_FUN_014c16d4
 */


void thunk_FUN_014c16d4(long param_1)

{
  if ((ulong)((*(long *)(param_1 + 0x278) - *(long *)(param_1 + 0x270) >> 3) * -0x3333333333333333)
      < 2) {
    (**(code **)(**(long **)(param_1 + 200) + 0x70))(*(long **)(param_1 + 200),param_1 + 0x128,0);
    (**(code **)(**(long **)(param_1 + 200) + 0x70))(*(long **)(param_1 + 200),param_1 + 0x148,0);
    *(undefined1 *)(param_1 + 0x2ec) = 0;
  }
  return;
}


