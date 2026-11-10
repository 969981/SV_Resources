/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003faeb0; name: FUN_003faeb0
 */


long FUN_003faeb0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = thunk_FUN_003ffef0();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003e1880(0,param_2,param_3,&DAT_044a2e90);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_00400010(lVar1);
      lVar1 = 0;
    }
    else {
      if (param_1 != (long *)0x0) {
        FUN_00400010(*param_1);
        *param_1 = lVar1;
      }
      *(undefined8 *)(lVar1 + 8) = *puVar2;
      *(undefined8 *)(lVar1 + 0x40) = puVar2[1];
      *(undefined8 *)(lVar1 + 0x10) = puVar2[2];
      *(undefined8 *)(lVar1 + 0x48) = puVar2[3];
      puVar4 = (undefined8 *)puVar2[4];
      if (puVar4 != (undefined8 *)0x0) {
        puVar3 = (undefined4 *)*puVar4;
        *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(puVar3 + 2);
        *(undefined4 *)(lVar1 + 0x58) = *puVar3;
        *(undefined8 *)(lVar1 + 0x60) = puVar4[1];
        *(undefined8 *)(puVar3 + 2) = 0;
        thunk_FUN_003df2e0();
        FUN_00452f80(puVar2[4],"external/openssl/crypto/dh/dh_asn1.c",0x6e);
        puVar2[4] = 0;
      }
      FUN_00452f80(puVar2,"external/openssl/crypto/dh/dh_asn1.c",0x72);
    }
  }
  return lVar1;
}


