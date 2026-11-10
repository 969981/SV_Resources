/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0229a230; name: FUN_0229a230
 */


void FUN_0229a230(void *param_1,long param_2)

{
  undefined1 auStack_130 [272];
  
  if (*(long *)(param_2 + 0x48) == 0) {
    memset(param_1,0,0x120);
    FUN_0229a214(param_1);
    *(undefined1 *)((long)param_1 + 0x110) = 0;
  }
  else {
    FUN_029ffd28(auStack_130,*(long *)(param_2 + 0x48),0);
    FUN_029f8b14(param_1,auStack_130);
    FUN_0229a4a4(auStack_130);
  }
  return;
}


