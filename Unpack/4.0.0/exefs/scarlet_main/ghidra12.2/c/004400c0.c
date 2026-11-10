/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004400c0; name: FUN_004400c0
 */


long * FUN_004400c0(int *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *local_138;
  int local_130 [64];
  
  local_130[0] = param_3;
  if (param_3 == -1) {
    if (param_1 == (int *)0x0) {
      return (long *)0x0;
    }
    local_130[0] = *param_1;
  }
  local_138 = local_130;
  if ((DAT_047f1850 == 0) || (iVar1 = FUN_0047e200(DAT_047f1850,local_130), iVar1 < 0)) {
    plVar3 = (long *)FUN_0045c970(&local_138,&PTR_DAT_044a8c08,0x12,8,&LAB_00440640);
    if (plVar3 == (long *)0x0) goto LAB_004401c8;
    lVar2 = *plVar3;
  }
  else {
    lVar2 = FUN_0047e450(DAT_047f1850,iVar1);
  }
  if (lVar2 != 0) {
    plVar3 = (long *)FUN_00452ce0(0x50,"external/openssl/crypto/evp/pmeth_lib.c",0x90);
    if (plVar3 == (long *)0x0) {
      FUN_004806c0(6,0x9d,0x41,"external/openssl/crypto/evp/pmeth_lib.c",0x95);
      return (long *)0x0;
    }
    *plVar3 = lVar2;
    plVar3[1] = param_2;
    *(undefined4 *)(plVar3 + 4) = 0;
    plVar3[2] = (long)param_1;
    if (param_1 != (int *)0x0) {
      FUN_0043dfc0(param_1);
    }
    if (*(code **)(lVar2 + 8) == (code *)0x0) {
      return plVar3;
    }
    iVar1 = (**(code **)(lVar2 + 8))(plVar3);
    if (iVar1 < 1) {
      *plVar3 = 0;
      FUN_0043e1f0(plVar3[2]);
      FUN_0043e1f0(plVar3[3]);
      FUN_00452f80(plVar3,"external/openssl/crypto/evp/pmeth_lib.c",0x16b);
      return (long *)0x0;
    }
    return plVar3;
  }
LAB_004401c8:
  FUN_004806c0(6,0x9d,0x9c,"external/openssl/crypto/evp/pmeth_lib.c",0x8c);
  return (long *)0x0;
}


