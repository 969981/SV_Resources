/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d6ec4; name: FUN_024d6ec4
 */


void FUN_024d6ec4(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  
  FUN_024da584(auStack_80,param_3,*param_2,param_2[1]);
  *param_1 = 1;
  memcpy(auStack_50,auStack_80,0x30);
  FUN_024d212c(param_1 + 8,auStack_50);
  return;
}


