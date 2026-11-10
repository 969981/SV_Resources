/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a1940; name: FUN_003a1940
 */


long FUN_003a1940(void)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_003b35e0();
  uVar2 = FUN_003e9560(uVar1,0x31,0,0);
  return 0x100 - (uVar2 & 0xffffffff);
}


