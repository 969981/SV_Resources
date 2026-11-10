/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00441af0; name: FUN_00441af0
 */


long FUN_00441af0(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  switch(param_1) {
  case 0x466:
    lVar2 = thunk_FUN_003ffef0();
    puVar1 = PTR_PTR_047cd3a0;
    if (lVar2 != 0) {
      *(undefined **)(lVar2 + 8) = PTR_PTR_047cd398;
      *(undefined **)(lVar2 + 0x10) = puVar1;
      *(undefined4 *)(lVar2 + 0x18) = 0xe1;
      return lVar2;
    }
    break;
  case 0x467:
    lVar2 = thunk_FUN_003ffef0();
    puVar1 = PTR_PTR_047cd3a0;
    if (lVar2 != 0) {
      *(undefined **)(lVar2 + 8) = PTR_PTR_047cd3a8;
      *(undefined **)(lVar2 + 0x10) = puVar1;
      *(undefined4 *)(lVar2 + 0x18) = 0x113;
      return lVar2;
    }
    break;
  case 0x468:
    lVar2 = thunk_FUN_003ffef0();
    puVar1 = PTR_PTR_047cd3a0;
    if (lVar2 != 0) {
      *(undefined **)(lVar2 + 8) = PTR_PTR_047cd3b0;
      *(undefined **)(lVar2 + 0x10) = puVar1;
      *(undefined4 *)(lVar2 + 0x18) = 0x145;
      return lVar2;
    }
    break;
  case 0x469:
    lVar2 = thunk_FUN_003ffef0();
    puVar1 = PTR_PTR_047cd3a0;
    if (lVar2 != 0) {
      *(undefined **)(lVar2 + 8) = PTR_PTR_047cd3b8;
      *(undefined **)(lVar2 + 0x10) = puVar1;
      *(undefined4 *)(lVar2 + 0x18) = 0x177;
      return lVar2;
    }
    break;
  case 0x46a:
    lVar2 = thunk_FUN_003ffef0();
    puVar1 = PTR_PTR_047cd3a0;
    if (lVar2 != 0) {
      *(undefined **)(lVar2 + 8) = PTR_PTR_047cd3c0;
      *(undefined **)(lVar2 + 0x10) = puVar1;
      *(undefined4 *)(lVar2 + 0x18) = 400;
      return lVar2;
    }
    break;
  default:
    FUN_004806c0(5,0x68,0x72,"external/openssl/crypto/dh/dh_rfc7919.c",0x2a);
  }
  return 0;
}


