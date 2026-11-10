/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040c900; name: FUN_0040c900
 */


undefined8 * FUN_0040c900(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_1 == (byte *)0x0) {
    FUN_004806c0(0x10,0x6c,0x6c,"external/openssl/crypto/ec/ec_lib.c",0x19);
    return (undefined8 *)0x0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    FUN_004806c0(0x10,0x6c,0x42,"external/openssl/crypto/ec/ec_lib.c",0x1d);
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_00452ce0(0xa8,"external/openssl/crypto/ec/ec_lib.c",0x21);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_004806c0(0x10,0x6c,0x41,"external/openssl/crypto/ec/ec_lib.c",0x23);
    return (undefined8 *)0x0;
  }
  *puVar2 = param_1;
  if ((*param_1 >> 1 & 1) == 0) {
    lVar3 = FUN_003eb5b0();
    puVar2[2] = lVar3;
    if (lVar3 == 0) goto LAB_0040c9f4;
    lVar3 = FUN_003eb5b0();
    puVar2[3] = lVar3;
    if (lVar3 == 0) goto LAB_0040c9f4;
  }
  *(undefined4 *)((long)puVar2 + 0x24) = 1;
  *(undefined4 *)((long)puVar2 + 0x2c) = 4;
  iVar1 = (**(code **)(param_1 + 8))(puVar2);
  if (iVar1 != 0) {
    return puVar2;
  }
LAB_0040c9f4:
  FUN_003eb520(puVar2[2]);
  FUN_003eb520(puVar2[3]);
  FUN_00452f80(puVar2,"external/openssl/crypto/ec/ec_lib.c",0x39);
  return (undefined8 *)0x0;
}


