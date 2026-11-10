/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a3020; name: FUN_003a3020
 */


void FUN_003a3020(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0xfb0);
  lVar1 = FUN_003a2e10(puVar5[6]);
  if (lVar1 != 0) {
    do {
      FUN_00452f80(*(undefined8 *)(*(long *)(lVar1 + 8) + 0x10),
                   "external/openssl/ssl/record/rec_layer_d1.c",0x49);
      FUN_00452f80(*(undefined8 *)(lVar1 + 8),"external/openssl/ssl/record/rec_layer_d1.c",0x4a);
      FUN_003a2cd0(lVar1);
      lVar1 = FUN_003a2e10(puVar5[6]);
    } while (lVar1 != 0);
  }
  lVar1 = FUN_003a2e10(puVar5[8]);
  if (lVar1 != 0) {
    do {
      FUN_00452f80(*(undefined8 *)(*(long *)(lVar1 + 8) + 0x10),
                   "external/openssl/ssl/record/rec_layer_d1.c",0x50);
      FUN_00452f80(*(undefined8 *)(lVar1 + 8),"external/openssl/ssl/record/rec_layer_d1.c",0x51);
      FUN_003a2cd0(lVar1);
      lVar1 = FUN_003a2e10(puVar5[8]);
    } while (lVar1 != 0);
  }
  lVar1 = FUN_003a2e10(puVar5[10]);
  if (lVar1 != 0) {
    do {
      FUN_00452f80(*(undefined8 *)(*(long *)(lVar1 + 8) + 0x10),
                   "external/openssl/ssl/record/rec_layer_d1.c",0x57);
      FUN_00452f80(*(undefined8 *)(lVar1 + 8),"external/openssl/ssl/record/rec_layer_d1.c",0x58);
      FUN_003a2cd0(lVar1);
      lVar1 = FUN_003a2e10(puVar5[10]);
    } while (lVar1 != 0);
  }
  uVar2 = puVar5[6];
  puVar5[0xc] = 0;
  uVar3 = puVar5[8];
  uVar4 = puVar5[10];
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[6] = uVar2;
  puVar5[8] = uVar3;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[10] = uVar4;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  return;
}


