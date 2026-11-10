/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e03a6c; name: FUN_00e03a6c
 */


void FUN_00e03a6c(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x390) = 0;
  uVar1 = FUN_00e03aa8();
  if ((uVar1 & 1) != 0) {
    FUN_00e04254(param_1);
    *(undefined2 *)(param_1 + 0x758) = 0;
    *(undefined1 *)(param_1 + 0x39c) = 0;
    *(undefined4 *)(param_1 + 0x754) = 0;
  }
  return;
}


