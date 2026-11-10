/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0214ec68; name: FUN_0214ec68
 */


void FUN_0214ec68(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  if (*(char *)(param_1 + 0x7a8) == '\0') {
    (**(code **)(**(long **)(param_1 + 200) + 0x68))
              (*(long **)(param_1 + 200),param_1 + 0x778,local_30,local_40);
    *param_2 = local_30[0];
    *param_3 = local_40[0];
    return;
  }
  FUN_02158e70(param_1 + 0x798,param_1 + 0x7a0,param_2,param_3);
  return;
}


