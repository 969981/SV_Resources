/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c7d650; name: FUN_02c7d650
 */


void FUN_02c7d650(long param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x60);
  if (uVar2 < 0x40) {
    lVar1 = 2;
    if (1 < uVar2) {
      lVar1 = uVar2 + 1;
    }
    *(long *)(param_1 + 0x60) = lVar1;
    *(undefined1 *)(lVar1 + param_1 + 0x1d) = param_2;
  }
  return;
}


