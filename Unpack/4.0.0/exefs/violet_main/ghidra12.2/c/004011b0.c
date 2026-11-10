/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004011b0; name: FUN_004011b0
 */


undefined4
FUN_004011b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,int param_5,
            undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  void *local_50;
  void *local_48;
  undefined8 *local_38;
  
  local_50 = (void *)0x0;
  local_48 = param_4;
  local_38 = (undefined8 *)FUN_00452ce0(0x10,"external/openssl/crypto/dsa/dsa_asn1.c",0x1a);
  if (local_38 == (undefined8 *)0x0) {
    FUN_004806c0(10,0x66,0x41,"external/openssl/crypto/dsa/dsa_asn1.c",0x1c);
    uVar4 = 0xffffffff;
  }
  else {
    lVar5 = FUN_003e1880(&local_38,&local_48,(long)param_5,&DAT_044a36d0);
    if (lVar5 == 0) {
      iVar2 = -1;
      uVar4 = 0xffffffff;
    }
    else {
      iVar2 = FUN_003e3920(local_38,&local_50,&DAT_044a36d0);
      if (iVar2 == param_5) {
        iVar3 = memcmp(param_4,local_50,(long)param_5);
        iVar2 = param_5;
        if (iVar3 == 0) {
          uVar4 = FUN_00402810(param_2,param_3,local_38,param_6);
        }
        else {
          uVar4 = 0xffffffff;
        }
      }
      else {
        uVar4 = 0xffffffff;
      }
    }
    FUN_00453260(local_50,(long)iVar2,"external/openssl/crypto/dsa/dsa_asn1.c",0x98);
    puVar1 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      FUN_003eb490(*local_38);
      FUN_003eb490(puVar1[1]);
      FUN_00452f80(puVar1,"external/openssl/crypto/dsa/dsa_asn1.c",0x26);
    }
  }
  return uVar4;
}


