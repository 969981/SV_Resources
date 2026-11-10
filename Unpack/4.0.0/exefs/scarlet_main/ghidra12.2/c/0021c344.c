/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0021c344; name: FUN_0021c344
 */


void FUN_0021c344(long param_1)

{
  ulong uVar1;
  
  FUN_0021c298();
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar1 + 8) & 1) != 0) {
      **(undefined1 **)(uVar1 + 0x18) = 0;
      *(undefined8 *)(uVar1 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar1 + 8) = 0;
  }
  return;
}


