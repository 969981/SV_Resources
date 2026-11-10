/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d33288; name: FUN_01d33288
 */


char FUN_01d33288(long param_1)

{
  char cVar1;
  char cVar2;
  
  cVar2 = FUN_01400ba8(*(undefined8 *)(param_1 + 0x70));
  cVar1 = '\x1b';
  if ((byte)(cVar2 - 1U) < 0x1a) {
    cVar1 = cVar2;
  }
  return cVar1;
}


