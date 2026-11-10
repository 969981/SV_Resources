/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e8a30; name: FUN_003e8a30
 */


long * FUN_003e8a30(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_00452ce0(0x78,"external/openssl/crypto/bio/bio_lib.c",0x49);
  if (plVar3 == (long *)0x0) {
    FUN_004806c0(0x20,0x6c,0x41,"external/openssl/crypto/bio/bio_lib.c",0x4c);
    return (long *)0x0;
  }
  plVar1 = plVar3 + 0xd;
  *plVar3 = param_1;
  *(undefined4 *)((long)plVar3 + 0x24) = 1;
  *(undefined4 *)(plVar3 + 10) = 1;
  iVar2 = FUN_00444640(0xc,plVar3,plVar1);
  if (iVar2 != 0) {
    lVar4 = FUN_0047e540();
    plVar3[0xe] = lVar4;
    if (lVar4 != 0) {
      if (*(code **)(param_1 + 0x48) != (code *)0x0) {
        iVar2 = (**(code **)(param_1 + 0x48))(plVar3);
        if (iVar2 == 0) {
          FUN_004806c0(0x20,0x6c,0x46,"external/openssl/crypto/bio/bio_lib.c",0x5f);
          FUN_00444c10(0xc,plVar3,plVar1);
          FUN_0047e620(plVar3[0xe]);
          goto LAB_003e8b64;
        }
        if (*(long *)(param_1 + 0x48) != 0) {
          return plVar3;
        }
      }
      *(undefined4 *)(plVar3 + 4) = 1;
      return plVar3;
    }
    FUN_004806c0(0x20,0x6c,0x41,"external/openssl/crypto/bio/bio_lib.c",0x59);
    FUN_00444c10(0xc,plVar3,plVar1);
  }
LAB_003e8b64:
  FUN_00452f80(plVar3,"external/openssl/crypto/bio/bio_lib.c",0x6a);
  return (long *)0x0;
}


