/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00440230; name: FUN_00440230
 */


long * FUN_00440230(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((*param_1 != 0) && (*(long *)(*param_1 + 0x10) != 0)) {
    plVar2 = (long *)FUN_00452c30(0x50,"external/openssl/crypto/evp/pmeth_lib.c",0x109);
    if (plVar2 == (long *)0x0) {
      FUN_004806c0(6,0x9c,0x41,"external/openssl/crypto/evp/pmeth_lib.c",0x10b);
      return (long *)0x0;
    }
    *plVar2 = *param_1;
    lVar3 = 0;
    if (param_1[2] != 0) {
      FUN_0043dfc0();
      lVar3 = param_1[2];
    }
    plVar2[2] = lVar3;
    lVar3 = 0;
    if (param_1[3] != 0) {
      FUN_0043dfc0();
      lVar3 = param_1[3];
    }
    plVar2[3] = lVar3;
    plVar2[5] = 0;
    plVar2[6] = 0;
    *(int *)(plVar2 + 4) = (int)param_1[4];
    iVar1 = (**(code **)(*param_1 + 0x10))(plVar2,param_1);
    if (0 < iVar1) {
      return plVar2;
    }
    *plVar2 = 0;
    FUN_0043e1f0(plVar2[2]);
    FUN_0043e1f0(plVar2[3]);
    FUN_00452f80(plVar2,"external/openssl/crypto/evp/pmeth_lib.c",0x16b);
  }
  return (long *)0x0;
}


