/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0056f80c; name: FUN_0056f80c
 */


void FUN_0056f80c(long param_1,undefined *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined *puVar7;
  ulong uVar8;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar5 = FUN_0021d48c(puVar1);
    }
    else {
      lVar5 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar3 = *(ulong *)(uVar8 + 0x10);
    lVar4 = *(long *)(uVar8 + 0x18);
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      lVar4 = uVar8 + 9;
      uVar3 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    FUN_0021d540(lVar5,lVar4,uVar3);
  }
  if ((param_2 == PTR_DAT_047ce120) ||
     (puVar7 = *(undefined **)(param_2 + 0x10), puVar7 == (undefined *)0x0)) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    lVar5 = FUN_005863b0(puVar6);
    *(long *)(param_1 + 0x10) = lVar5;
    puVar7 = *(undefined **)(param_2 + 0x10);
  }
  puVar2 = PTR_DAT_047ce030;
  if (puVar7 != (undefined *)0x0) {
    puVar2 = puVar7;
  }
  FUN_0058518c(lVar5,puVar2);
  return;
}


