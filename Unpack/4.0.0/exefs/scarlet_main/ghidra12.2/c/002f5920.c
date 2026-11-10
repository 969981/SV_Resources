/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f5920; name: FUN_002f5920
 */


undefined8 FUN_002f5920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_0038ee90(param_2,param_3,&local_20,&local_30);
  if (local_18 == 0) {
    return 0;
  }
  lVar1 = FUN_00395e38(&local_20,0x25,0);
  if (lVar1 != -1) {
    local_18 = lVar1;
  }
  uVar2 = FUN_002ff320(param_1,local_20,local_18);
  return uVar2;
}


