/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003aa970; name: FUN_003aa970
 */


undefined8 FUN_003aa970(undefined4 *param_1)

{
  undefined8 uVar1;
  
  FUN_003acda0();
  FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x250),"external/openssl/ssl/s3_lib.c",
               0xd17);
  FUN_0047e3b0(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x260),PTR_FUN_047cca78);
  FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2a8),"external/openssl/ssl/s3_lib.c",
               0xd19);
  FUN_00453260(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2b8),
               *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2c0),"external/openssl/ssl/s3_lib.c",
               0xd1a);
  FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2e8),"external/openssl/ssl/s3_lib.c",
               0xd1b);
  FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2f0),"external/openssl/ssl/s3_lib.c",
               0xd1c);
  FUN_0043e1f0(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x240));
  FUN_0043e1f0(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x408));
  FUN_003ace80(param_1);
  FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x3e0),"external/openssl/ssl/s3_lib.c",
               0xd25);
  FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x3f0),"external/openssl/ssl/s3_lib.c",
               0xd26);
  memset(*(void **)(param_1 + 0x2a),0,0x410);
  uVar1 = FUN_003b32e0(param_1);
  if ((int)uVar1 != 0) {
    *param_1 = 0x300;
    FUN_00452f80(*(undefined8 *)(param_1 + 0x1f0),"external/openssl/ssl/s3_lib.c",0xd31);
    uVar1 = 1;
    *(undefined8 *)(param_1 + 0x1f2) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  return uVar1;
}


