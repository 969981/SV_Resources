/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e96dc; name: FUN_001e96dc
 */


undefined8 FUN_001e96dc(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = getenv(param_1);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    return 0;
  }
  uVar2 = FUN_001ec328();
  return uVar2;
}


