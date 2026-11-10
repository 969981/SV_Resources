/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c96b3c; name: FUN_01c96b3c
 */


void FUN_01c96b3c(undefined1 *param_1)

{
  undefined1 auStack_100 [112];
  undefined1 auStack_90 [112];
  
  FUN_01c8794c();
  FUN_01c98658(auStack_100);
  *param_1 = 1;
  memcpy(auStack_90,auStack_100,0x70);
  FUN_01c8ff3c(param_1 + 8,auStack_90);
  return;
}


