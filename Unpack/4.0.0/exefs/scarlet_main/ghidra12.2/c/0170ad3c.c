/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0170ad3c; name: FUN_0170ad3c
 */


bool FUN_0170ad3c(long param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_0170ad84(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),0);
  cVar2 = FUN_0170ad84(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),1);
  return cVar1 != cVar2;
}


