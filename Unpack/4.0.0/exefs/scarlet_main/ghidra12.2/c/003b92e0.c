/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b92e0; name: FUN_003b92e0
 */


undefined8 FUN_003b92e0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = (undefined4 *)FUN_003b8af0();
  if (puVar2 == (undefined4 *)0x0) {
    FUN_003c3950(param_1,0x50,0xb5,0x41,"external/openssl/ssl/ssl_sess.c",0x172);
    return 0;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x21e) + 0x50);
  if (lVar3 == 0) {
    lVar3 = FUN_003b3910(param_1);
  }
  *(long *)(puVar2 + 0x76) = lVar3;
  FUN_003b8e30(*(undefined8 *)(param_1 + 0x174));
  *(undefined8 *)(param_1 + 0x174) = 0;
  if (param_2 == 0) {
LAB_003b9348:
    *(undefined8 *)(puVar2 + 0x54) = 0;
  }
  else {
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) {
      iVar1 = **(int **)(param_1 + 2);
      if ((0x303 < iVar1) && (iVar1 != 0x10000)) goto LAB_003b9348;
    }
    iVar1 = FUN_003b8f50(param_1,puVar2);
    if (iVar1 == 0) goto LAB_003b93bc;
  }
  if (*(ulong *)(param_1 + 0x16a) < 0x21) {
    memcpy(puVar2 + 0x60,param_1 + 0x16c,*(ulong *)(param_1 + 0x16a));
    *(undefined8 *)(puVar2 + 0x5e) = *(undefined8 *)(param_1 + 0x16a);
    *(undefined4 **)(param_1 + 0x174) = puVar2;
    *puVar2 = *param_1;
    *(undefined8 *)(puVar2 + 0x72) = 0;
    if ((*(byte *)(*(long *)(param_1 + 0x2a) + 1) >> 1 & 1) != 0) {
      puVar2[0x9c] = puVar2[0x9c] | 1;
    }
    return 1;
  }
  FUN_003c3950(param_1,0x50,0xb5,0x44,"external/openssl/ssl/ssl_sess.c",0x192);
LAB_003b93bc:
  FUN_003b8e30(puVar2);
  return 0;
}


