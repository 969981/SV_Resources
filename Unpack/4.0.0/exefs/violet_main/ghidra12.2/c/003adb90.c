/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003adb90; name: FUN_003adb90
 */


long * FUN_003adb90(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00452ce0(0x218,"external/openssl/ssl/ssl_cert.c",0x34);
  if (plVar1 == (long *)0x0) {
    FUN_004806c0(0x14,0xa2,0x41,"external/openssl/ssl/ssl_cert.c",0x37);
    return (long *)0x0;
  }
  *plVar1 = (long)(plVar1 + 4);
  *(undefined4 *)(plVar1 + 0x41) = 1;
  plVar1[0x3d] = (long)&LAB_003adc70;
  *(undefined4 *)(plVar1 + 0x3e) = 1;
  plVar1[0x3f] = 0;
  lVar2 = FUN_0047e540();
  plVar1[0x42] = lVar2;
  if (lVar2 == 0) {
    FUN_004806c0(0x14,0xa2,0x41,"external/openssl/ssl/ssl_cert.c",0x42);
    FUN_00452f80(plVar1,"external/openssl/ssl/ssl_cert.c",0x43);
    return (long *)0x0;
  }
  return plVar1;
}


