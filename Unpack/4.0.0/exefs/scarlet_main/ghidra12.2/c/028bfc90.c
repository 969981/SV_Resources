/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bfc90; name: FUN_028bfc90
 */


void FUN_028bfc90(long param_1,undefined8 param_2)

{
  long local_38;
  undefined **ppuStack_30;
  undefined8 local_28;
  undefined *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_20 = PTR_FUN_047e24e0;
  ppuStack_30 = &local_20;
  local_38 = param_1;
  local_28 = param_2;
  FUN_028bfce0(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 3,&local_38);
  return;
}


