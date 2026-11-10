/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003acde0; name: FUN_003acde0
 */


undefined8 FUN_003acde0(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_003eaa20();
  lVar1 = FUN_003e8a30();
  if (lVar1 == 0) {
    FUN_003c3950(param_1,0x50,0x18d,0x41,"external/openssl/ssl/s3_enc.c",0x146);
    return 0;
  }
  FUN_003e8b90(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0));
  lVar2 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  FUN_0042bbe0(*(undefined8 *)(lVar2 + 0xe8));
  lVar2 = *(long *)(param_1 + 0xa8);
  *(long *)(lVar2 + 0xe0) = lVar1;
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  FUN_003e9560(lVar1,9,1,0);
  return 1;
}


