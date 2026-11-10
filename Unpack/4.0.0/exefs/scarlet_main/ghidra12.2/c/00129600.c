/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00129600; name: FUN_00129600
 */


void FUN_00129600(undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_00129fd0(param_1,0x26,(long)(param_2 * 0x10 + 0x20));
  *(char *)(lVar1 + 10) = (char)param_2;
  return;
}


