/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053eea8; name: FUN_0053eea8
 */


void FUN_0053eea8(long *param_1,char *param_2)

{
  long *plVar1;
  undefined *puVar2;
  size_t sVar3;
  ulong *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (lVar5 != 0) {
                    /* try { // try from 0053eedc to 0053eee7 has its CatchHandler @ 0053ef80 */
      FUN_0057f7dc(lVar5,0);
    }
    *param_1 = lVar5;
  }
  puVar2 = PTR_DAT_047cba80;
  if (*(int *)(lVar5 + 0x24) != 6) {
                    /* try { // try from 0053ef00 to 0053ef5b has its CatchHandler @ 0053ef84 */
    FUN_0057f700(lVar5);
    *(undefined4 *)(lVar5 + 0x24) = 6;
    *(undefined **)(lVar5 + 0x18) = puVar2;
  }
  plVar1 = (long *)(lVar5 + 0x18);
  puVar4 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar5 + 8) & 1) == 0) {
    puVar6 = (undefined *)*plVar1;
  }
  else {
    puVar4 = (ulong *)*puVar4;
    puVar6 = (undefined *)*plVar1;
  }
  if (puVar6 == puVar2) {
    FUN_001fcdc8(plVar1,puVar4,PTR_DAT_047cba80);
    puVar6 = (undefined *)*plVar1;
  }
  sVar3 = strlen(param_2);
  FUN_0026c6b8(puVar6,param_2,sVar3);
  return;
}


