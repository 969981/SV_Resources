/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03045954; name: FUN_03045954
 */


void FUN_03045954(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x2f0))(param_2,param_3);
  if (((~*(uint *)(puVar1 + 1) & 0xffffff) == 0) || ((~*(uint *)(puVar1 + 3) & 0xffffff) == 0)) {
    return;
  }
  FUN_03046234(param_1,param_2,*puVar1,puVar1[2],0);
  return;
}


