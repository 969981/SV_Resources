/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b7bb0; name: FUN_003b7bb0
 */


undefined4 FUN_003b7bb0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_003ea5c0();
  lVar3 = FUN_003e8a30();
  if (lVar3 == 0) {
    uVar6 = 0xf3;
    uVar5 = 7;
  }
  else {
    iVar1 = FUN_003e9560(lVar3,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar5 = 2;
      uVar6 = 0xf8;
    }
    else {
      if (param_3 == 2) {
        lVar4 = FUN_0048ad10(lVar3,0);
        uVar5 = 0xd;
      }
      else {
        if (param_3 != 1) {
          uVar6 = 0x104;
          uVar5 = 0x7c;
          goto LAB_003b7cc0;
        }
        lVar4 = FUN_0045f4e0(lVar3,0,*(undefined8 *)(param_1 + 0x1900),
                             *(undefined8 *)(param_1 + 0x1908));
        uVar5 = 9;
      }
      if (lVar4 != 0) {
        uVar2 = FUN_003b7a40(*(undefined8 *)(param_1 + 0x550),lVar4);
        FUN_0043e1f0(lVar4);
        goto LAB_003b7cc8;
      }
      uVar6 = 0x108;
    }
  }
LAB_003b7cc0:
  FUN_004806c0(0x14,0xcb,uVar5,"external/openssl/ssl/ssl_rsa.c",uVar6);
  uVar2 = 0;
LAB_003b7cc8:
  FUN_003e8b90(lVar3);
  return uVar2;
}


