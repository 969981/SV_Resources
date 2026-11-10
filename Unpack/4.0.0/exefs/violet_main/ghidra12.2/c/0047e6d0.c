/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047e6d0; name: FUN_0047e6d0
 */


long * FUN_0047e6d0(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_00452ce0(0x30,"external/openssl/crypto/ui/ui_lib.c",0x19);
  if (plVar2 == (long *)0x0) {
    FUN_004806c0(0x28,0x68,0x41,"external/openssl/crypto/ui/ui_lib.c",0x1c);
    return (long *)0x0;
  }
  lVar3 = FUN_0047e540();
  plVar2[5] = lVar3;
  if (lVar3 == 0) {
    FUN_004806c0(0x28,0x68,0x41,"external/openssl/crypto/ui/ui_lib.c",0x22);
    uVar4 = 0x23;
  }
  else {
    lVar3 = FUN_0047ef70();
    if (lVar3 == 0) {
      lVar3 = FUN_0047ef60();
    }
    *plVar2 = lVar3;
    iVar1 = FUN_00444640(0xb,plVar2,plVar2 + 3);
    if (iVar1 != 0) {
      return plVar2;
    }
    uVar4 = 0x2e;
  }
  FUN_00452f80(plVar2,"external/openssl/crypto/ui/ui_lib.c",uVar4);
  return (long *)0x0;
}


