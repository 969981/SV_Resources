/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018b30b0; name: FUN_018b30b0
 */


void FUN_018b30b0(undefined1 *param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  FUN_018b398c(&local_30,param_2);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_018b3668(param_1 + 8,&local_30);
  FUN_018b3108(&local_30);
  return;
}


