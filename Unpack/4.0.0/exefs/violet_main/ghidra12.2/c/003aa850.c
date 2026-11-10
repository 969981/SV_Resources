/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003aa850; name: FUN_003aa850
 */


void FUN_003aa850(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0xa8) != 0)) {
    FUN_003acda0(param_1);
    FUN_0043e1f0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x408));
    lVar1 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(lVar1 + 0x408) = 0;
    FUN_0043e1f0(*(undefined8 *)(lVar1 + 0x240));
    lVar1 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(lVar1 + 0x240) = 0;
    FUN_00452f80(*(undefined8 *)(lVar1 + 0x250),"external/openssl/ssl/s3_lib.c",0xd03);
    FUN_0047e3b0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x260),PTR_FUN_047cca78);
    FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2a8),"external/openssl/ssl/s3_lib.c",
                 0xd05);
    FUN_00453260(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2b8),
                 *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2c0),"external/openssl/ssl/s3_lib.c",
                 0xd06);
    FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2e8),"external/openssl/ssl/s3_lib.c",
                 0xd07);
    FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2f0),"external/openssl/ssl/s3_lib.c",
                 0xd08);
    FUN_003ace80(param_1);
    FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x3e0),"external/openssl/ssl/s3_lib.c",
                 0xd0a);
    FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x3f0),"external/openssl/ssl/s3_lib.c",
                 0xd0b);
    FUN_003da730(param_1);
    FUN_00453260(*(undefined8 *)(param_1 + 0xa8),0x410,"external/openssl/ssl/s3_lib.c",0xd10);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}


