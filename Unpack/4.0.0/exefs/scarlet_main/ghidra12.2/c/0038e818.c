/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038e818; name: FUN_0038e818
 */


void FUN_0038e818(void)

{
  undefined *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  
  puVar1 = PTR_DAT_047cc330;
  if (*PTR_DAT_047ccfe8 == '\0') {
    bVar2 = FUN_0038ea94(&PTR_s_grpc_enable_fork_support_04497268);
    *puVar1 = bVar2 & 1;
    bVar2 = *puVar1;
  }
  else {
    bVar2 = *PTR_DAT_047cc330;
  }
  if ((bVar2 & 1) == 0) {
    return;
  }
  puVar3 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 1;
    FUN_0038db00(puVar3 + 8);
    FUN_0038db80(puVar3 + 0x28);
    *(undefined8 *)(puVar3 + 0x30) = 2;
  }
  *(undefined1 **)PTR_DAT_047ccff0 = puVar3;
  puVar4 = (undefined2 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 0x18) = 0;
    FUN_0038db00(puVar4 + 4);
    FUN_0038db80(puVar4 + 0x14);
  }
  *(undefined2 **)PTR_DAT_047ccff8 = puVar4;
  return;
}


