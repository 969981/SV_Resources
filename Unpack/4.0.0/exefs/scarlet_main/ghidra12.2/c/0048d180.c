/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048d180; name: FUN_0048d180
 */


void FUN_0048d180(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_0047db00(param_1[3]);
  FUN_0047e3b0(param_1[4],&LAB_0048d240);
  puVar1 = PTR_FUN_047cd5e0;
  if (0 < *(int *)(param_1 + 1)) {
    puVar3 = (undefined8 *)*param_1;
    iVar2 = 0;
    do {
      FUN_0048c830(*puVar3);
      FUN_0047e3b0(puVar3[1],puVar1);
      FUN_0048dfc0(puVar3[2]);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 1));
  }
  FUN_0047e3b0(param_1[2],PTR_FUN_047cd5c0);
  FUN_00452f80(*param_1,"external/openssl/crypto/x509v3/pcy_tree.c",0x271);
  FUN_00452f80(param_1,"external/openssl/crypto/x509v3/pcy_tree.c",0x272);
  return;
}


