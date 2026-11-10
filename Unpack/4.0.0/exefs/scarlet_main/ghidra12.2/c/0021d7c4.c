/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0021d7c4; name: FUN_0021d7c4
 */


void FUN_0021d7c4(long *param_1,undefined *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  
  puVar7 = (ulong *)(param_1 + 1);
  *puVar7 = 0;
  puVar3 = PTR_DAT_047cbe50;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    uVar4 = FUN_0021d48c(puVar7);
    uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    lVar8 = uVar9 + 9;
    if ((*(byte *)(uVar9 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(uVar9 + 0x10);
      lVar8 = *(long *)(uVar9 + 0x18);
    }
    FUN_0021d540(uVar4,lVar8,uVar1);
  }
  puVar3 = PTR_DAT_047cba80;
  param_1[2] = (long)PTR_DAT_047cba80;
  bVar2 = **(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0021d858:
      puVar6 = (ulong *)(*puVar7 & 0xfffffffffffffffe);
      if ((*puVar7 & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_001fcdc8(param_1 + 2,puVar6);
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x10) + 8) != 0) goto LAB_0021d858;
  param_1[3] = (long)puVar3;
  bVar2 = **(byte **)(param_2 + 0x18);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto joined_r0x0021d890;
  }
  else if (*(long *)(*(byte **)(param_2 + 0x18) + 8) == 0) goto joined_r0x0021d890;
  puVar6 = (ulong *)(*puVar7 & 0xfffffffffffffffe);
  if ((*puVar7 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  FUN_001fcdc8(param_1 + 3,puVar6);
joined_r0x0021d890:
  if (param_2 == PTR_DAT_047cbd28) {
    param_1[4] = 0;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x20);
    if (lVar8 == 0) {
      param_1[4] = 0;
      lVar8 = *(long *)(param_2 + 0x28);
    }
    else {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar8);
      }
      param_1[4] = lVar5;
      lVar8 = *(long *)(param_2 + 0x28);
    }
    if (lVar8 != 0) {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar8);
      }
      param_1[5] = lVar5;
      return;
    }
  }
  param_1[5] = 0;
  return;
}


