/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045f710; name: FUN_0045f710
 */


long FUN_0045f710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char *local_18;
  
  local_18 = (char *)0x0;
  local_30 = 0;
  local_28 = 0;
  iVar1 = FUN_0045d490(&local_30,&local_38,&local_18,"DH PARAMETERS",param_1,param_3,param_4);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    local_28 = local_30;
    iVar1 = strcmp(local_18,"X9.42 DH PARAMETERS");
    if (iVar1 == 0) {
      lVar2 = FUN_003faeb0(param_2,&local_28,local_38);
    }
    else {
      lVar2 = FUN_003fae90(param_2);
    }
    if (lVar2 == 0) {
      FUN_004806c0(9,0x8d,0xd,"external/openssl/crypto/pem/pem_pkey.c",0xe4);
    }
    FUN_00452f80(local_18,"external/openssl/crypto/pem/pem_pkey.c",0xe5);
    FUN_00452f80(local_30,"external/openssl/crypto/pem/pem_pkey.c",0xe6);
  }
  return lVar2;
}


