/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c5ba70; name: FUN_01c5ba70
 */


uint FUN_01c5ba70(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_016c7db0();
  if ((lVar2 == 0) || (*(long **)(lVar2 + 0x28) == (long *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(lVar2 + 0x28) + 0x68))();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}


