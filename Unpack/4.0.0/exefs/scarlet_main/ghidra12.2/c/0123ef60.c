/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123ef60; name: FUN_0123ef60
 */


void FUN_0123ef60(void *param_1,void *param_2)

{
  undefined1 auStack_c0 [96];
  undefined1 auStack_60 [48];
  
  FUN_01246154(auStack_60);
  memcpy(auStack_c0,param_1,0x8c);
  memcpy(param_1,param_2,0x8c);
  memcpy(param_2,auStack_c0,0x8c);
  return;
}


