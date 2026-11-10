/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b8114; name: FUN_028b8114
 */


bool FUN_028b8114(long *param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  lVar1 = *(long *)(*param_1 + 0x28) + *(long *)(*param_1 + 0x20);
  puVar7 = (uint *)(lVar1 - (ulong)*param_2);
  uVar3 = *puVar7;
  puVar8 = (uint *)(lVar1 - (ulong)*param_3);
  uVar4 = *puVar8;
  uVar2 = uVar4;
  if (uVar3 <= uVar4) {
    uVar2 = uVar3;
  }
  iVar6 = memcmp(puVar7 + 1,puVar8 + 1,(ulong)uVar2);
  bVar5 = uVar3 < uVar4;
  if (iVar6 != 0) {
    bVar5 = iVar6 < 0;
  }
  return bVar5;
}


