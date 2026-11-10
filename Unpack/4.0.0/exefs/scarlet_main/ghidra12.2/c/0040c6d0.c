/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040c6d0; name: FUN_0040c6d0
 */


long * FUN_0040c6d0(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_00452ce0(0x50,"external/openssl/crypto/ec/ec_kmeth.c",0x4b);
  if (plVar3 == (long *)0x0) {
    FUN_004806c0(0x10,0xf5,0x41,"external/openssl/crypto/ec/ec_kmeth.c",0x4e);
    return (long *)0x0;
  }
  *(undefined4 *)(plVar3 + 7) = 1;
  lVar4 = FUN_0047e540();
  plVar3[9] = lVar4;
  puVar1 = PTR_PTR_044a5120;
  if (lVar4 == 0) {
    FUN_004806c0(0x10,0xf5,0x41,"external/openssl/crypto/ec/ec_kmeth.c",0x55);
    FUN_00452f80(plVar3,"external/openssl/crypto/ec/ec_kmeth.c",0x56);
  }
  else {
    *(undefined4 *)(plVar3 + 2) = 1;
    *plVar3 = (long)puVar1;
    *(undefined4 *)((long)plVar3 + 0x34) = 4;
    iVar2 = FUN_00444640(8,plVar3,plVar3 + 8);
    if (iVar2 != 0) {
      if ((*(code **)(*plVar3 + 0x10) == (code *)0x0) ||
         (iVar2 = (**(code **)(*plVar3 + 0x10))(plVar3), iVar2 != 0)) {
        return plVar3;
      }
      FUN_004806c0(0x10,0xf5,0x46,"external/openssl/crypto/ec/ec_kmeth.c",0x75);
    }
    FUN_0040bae0(plVar3);
  }
  return (long *)0x0;
}


