/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00394c40; name: FUN_00394c40
 */


long FUN_00394c40(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  
  puVar3 = PTR_DAT_047cd030;
  if (param_1 >> 0x20 == 0) {
    lVar4 = FUN_00394a70();
    return lVar4;
  }
  iVar7 = (int)(param_1 / 1000000000);
  uVar1 = (int)param_1 + iVar7 * -1000000000;
  if (param_1 < 0x3b9aca0000000000) {
    puVar5 = (undefined2 *)FUN_00394a70(param_1 / 1000000000 & 0xffffffff);
  }
  else {
    puVar6 = (undefined2 *)FUN_00394a70();
    puVar5 = puVar6 + 1;
    *puVar6 = *(undefined2 *)
               (puVar3 + (ulong)(uint)(iVar7 + (int)(param_1 / 100000000000) * -100) * 2);
  }
  uVar2 = uVar1 % 10000000;
  *puVar5 = *(undefined2 *)(puVar3 + ((ulong)uVar1 / 10000000) * 2);
  uVar1 = uVar2 >> 5;
  uVar2 = uVar2 + (uVar1 / 0xc35) * -100000;
  puVar5[1] = *(undefined2 *)(puVar3 + ((ulong)uVar1 / 0xc35) * 2);
  uVar1 = uVar2 % 1000;
  puVar5[2] = *(undefined2 *)(puVar3 + ((ulong)uVar2 / 1000) * 2);
  puVar5[3] = *(undefined2 *)(puVar3 + ((ulong)uVar1 / 10) * 2);
  puVar5[4] = *(undefined2 *)(&DAT_03cdbb08 + (ulong)(uVar1 % 10) * 2);
  return (long)puVar5 + 9;
}


