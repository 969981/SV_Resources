/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048ad30; name: FUN_0048ad30
 */


bool FUN_0048ad30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long local_28;
  
  local_28 = 0;
  iVar2 = FUN_003e3920(param_3,&local_28,param_1);
  if (local_28 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_0042c130(local_28,(long)iVar2,param_4,param_5,param_2,0);
    bVar1 = iVar2 != 0;
    uVar3 = 0x3e;
    if (bVar1) {
      uVar3 = 0x41;
    }
    FUN_00452f80(local_28,"external/openssl/crypto/asn1/a_digest.c",uVar3);
  }
  return bVar1;
}


