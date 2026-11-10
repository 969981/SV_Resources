/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043be00; name: FUN_0043be00
 */


long FUN_0043be00(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_70 [80];
  undefined8 local_18;
  
  iVar1 = FUN_003e0570(&local_18,0,0,0,param_1);
  if (iVar1 != 0) {
    lVar3 = FUN_0043def0();
    if (lVar3 == 0) {
      FUN_004806c0(6,0x6f,0x41,"external/openssl/crypto/evp/evp_pkey.c",0x1f);
      return 0;
    }
    uVar2 = FUN_0045bea0(local_18);
    iVar1 = FUN_0043dd30(lVar3,uVar2);
    if (iVar1 == 0) {
      FUN_004806c0(6,0x6f,0x76,"external/openssl/crypto/evp/evp_pkey.c",0x24);
      FUN_003dfa20(auStack_70,0x50,local_18);
      FUN_00481380(2,"TYPE=",auStack_70);
    }
    else {
      pcVar6 = *(code **)(*(long *)(lVar3 + 0x10) + 0x40);
      if (pcVar6 == (code *)0x0) {
        uVar4 = 0x90;
        uVar5 = 0x30;
      }
      else {
        iVar1 = (*pcVar6)(lVar3,param_1);
        if (iVar1 != 0) {
          return lVar3;
        }
        uVar4 = 0x91;
        uVar5 = 0x2c;
      }
      FUN_004806c0(6,0x6f,uVar4,"external/openssl/crypto/evp/evp_pkey.c",uVar5);
    }
    FUN_0043e1f0(lVar3);
  }
  return 0;
}


