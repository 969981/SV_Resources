/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fd330; name: FUN_004fd330
 */


void FUN_004fd330(byte *param_1)

{
  byte *pbVar1;
  byte *local_8;
  
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
  thunk_FUN_00533960(pbVar1,&local_8);
  return;
}


