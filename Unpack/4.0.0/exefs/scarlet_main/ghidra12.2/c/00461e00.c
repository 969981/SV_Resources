/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00461e00; name: FUN_00461e00
 */


void FUN_00461e00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0049e5d0(&DAT_047f1a78);
  FUN_0049e5f0(&DAT_047f1a78,0);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[0x2a] != 0) {
      (**(code **)(puVar1[0x2a] + 0x18))(puVar1);
    }
    FUN_00464890(puVar1[5]);
    FUN_0047e620(*puVar1);
    FUN_00444c10(0xf,puVar1,puVar1 + 0x14);
    if (*(int *)(puVar1 + 2) == 0) {
      FUN_00453260(puVar1,0x178,"external/openssl/crypto/rand/drbg_lib.c",0x115);
    }
    else {
      FUN_00453360(puVar1,0x178,"external/openssl/crypto/rand/drbg_lib.c",0x113);
    }
  }
  puVar1 = (undefined8 *)FUN_0049e5d0(&DAT_047f1a70);
  FUN_0049e5f0(&DAT_047f1a70,0);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  if (puVar1[0x2a] != 0) {
    (**(code **)(puVar1[0x2a] + 0x18))(puVar1);
  }
  FUN_00464890(puVar1[5]);
  FUN_0047e620(*puVar1);
  FUN_00444c10(0xf,puVar1,puVar1 + 0x14);
  if (*(int *)(puVar1 + 2) == 0) {
    FUN_00453260(puVar1,0x178,"external/openssl/crypto/rand/drbg_lib.c",0x115);
    return;
  }
  FUN_00453360(puVar1,0x178,"external/openssl/crypto/rand/drbg_lib.c",0x113);
  return;
}


