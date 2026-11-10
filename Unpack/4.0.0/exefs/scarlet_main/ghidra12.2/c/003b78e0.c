/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b78e0; name: FUN_003b78e0
 */


undefined8 FUN_003b78e0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_28;
  
  lVar2 = FUN_00483c90(param_2);
  if (lVar2 == 0) {
    uVar4 = 0x10c;
    uVar5 = 0x13a;
  }
  else {
    lVar3 = FUN_003af5b0(lVar2,&local_28);
    if (lVar3 != 0) {
      if (local_28 == 3) {
        FUN_0043e6b0(lVar2);
        iVar1 = FUN_0040c6a0();
        if (iVar1 == 0) {
          uVar4 = 0x13e;
          uVar5 = 0x144;
          goto LAB_003b7a24;
        }
      }
      if (param_1[local_28 * 5 + 5] != 0) {
        FUN_0043dc10(lVar2);
        FUN_004808e0();
        iVar1 = FUN_00483ca0(param_2,param_1[local_28 * 5 + 5]);
        if (iVar1 == 0) {
          FUN_0043e1f0(param_1[local_28 * 5 + 5]);
          param_1[local_28 * 5 + 5] = 0;
          FUN_004808e0();
        }
      }
      FUN_0048c830(param_1[local_28 * 5 + 4]);
      FUN_00485cf0(param_2);
      param_1[local_28 * 5 + 4] = param_2;
      *param_1 = param_1 + local_28 * 5 + 4;
      return 1;
    }
    uVar4 = 0xf7;
    uVar5 = 0x13f;
  }
LAB_003b7a24:
  FUN_004806c0(0x14,0xbf,uVar4,"external/openssl/ssl/ssl_rsa.c",uVar5);
  return 0;
}


