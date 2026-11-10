/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271ab30; name: FUN_0271ab30
 */


void FUN_0271ab30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar1 + 0x30) == *(long *)(lVar1 + 0x20)) {
    FUN_00e5c07c();
    *(undefined8 *)(lVar1 + 0x30) = 0;
    return;
  }
  *(undefined8 *)(lVar1 + 0x30) = 0;
  return;
}


