/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045f430; name: FUN_0045f430
 */


long FUN_0045f430(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = 0;
  iVar1 = FUN_0045d490(&local_28,&local_30,0,param_2,param_3,param_5,param_6);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    local_18 = local_28;
    lVar2 = (*param_1)(param_4,&local_18,local_30);
    if (lVar2 == 0) {
      FUN_004806c0(9,0x67,0xd,"external/openssl/crypto/pem/pem_oth.c",0x21);
    }
    FUN_00452f80(local_28,"external/openssl/crypto/pem/pem_oth.c",0x22);
  }
  return lVar2;
}


