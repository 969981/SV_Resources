/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a2ee0; name: FUN_003a2ee0
 */


undefined8 FUN_003a2ee0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = FUN_00452c30(0x68,"external/openssl/ssl/record/rec_layer_d1.c",0x17);
  if (lVar1 == 0) {
    FUN_004806c0(0x14,0x27b,0x41,"external/openssl/ssl/record/rec_layer_d1.c",0x18);
    return 0;
  }
  *(long *)(param_1 + 0xfb0) = lVar1;
  uVar2 = FUN_003a2ce0();
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  uVar2 = FUN_003a2ce0();
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  lVar3 = FUN_003a2ce0();
  *(long *)(lVar1 + 0x50) = lVar3;
  if (((*(long *)(lVar1 + 0x30) == 0) || (lVar3 == 0)) || (*(long *)(lVar1 + 0x40) == 0)) {
    FUN_003a2d40();
    FUN_003a2d40(*(undefined8 *)(lVar1 + 0x40));
    FUN_003a2d40(*(undefined8 *)(lVar1 + 0x50));
    FUN_00452f80(lVar1,"external/openssl/ssl/record/rec_layer_d1.c",0x27);
    *(undefined8 *)(param_1 + 0xfb0) = 0;
    return 0;
  }
  return 1;
}


