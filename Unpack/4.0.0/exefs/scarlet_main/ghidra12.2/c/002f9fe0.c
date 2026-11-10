/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f9fe0; name: FUN_002f9fe0
 */


undefined8 FUN_002f9fe0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_18;
  
  local_18 = 0;
  lVar1 = FUN_002f9d00(param_1,param_2,&local_18);
  if (local_18 != 0) {
    FUN_00352b40("Could not copy JSON property",local_18,
                 "external/com_google_grpc_base/src/core/lib/security/util/json_util.cc",0x44);
  }
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0038ccb0(lVar1);
  *param_3 = uVar2;
  return 1;
}


