/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f9ee4; name: FUN_005f9ee4
 */


void FUN_005f9ee4(long param_1,undefined *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  byte *pbVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar5 = FUN_0021d48c(puVar1);
    }
    else {
      lVar5 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar3 = *(ulong *)(uVar9 + 0x10);
    lVar4 = *(long *)(uVar9 + 0x18);
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      lVar4 = uVar9 + 9;
      uVar3 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    FUN_0021d540(lVar5,lVar4,uVar3);
  }
  FUN_004e80a8(param_1 + 0x10,param_2 + 0x10);
  pbVar7 = *(byte **)(param_2 + 0x28);
  if ((*pbVar7 & 1) == 0) {
    if (*pbVar7 >> 1 == 0) goto joined_r0x005f9fa0;
  }
  else if (*(long *)(pbVar7 + 8) == 0) goto joined_r0x005f9fa0;
  puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  puVar8 = *(undefined **)(param_1 + 0x28);
  if (puVar8 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_1 + 0x28),puVar6);
  }
  else {
    FUN_001fcec0(puVar8,pbVar7);
  }
joined_r0x005f9fa0:
  if ((param_2 != PTR_DAT_047cebe0) &&
     (puVar8 = *(undefined **)(param_2 + 0x30), puVar8 != (undefined *)0x0)) {
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 == 0) {
      puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
      if ((*puVar1 & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      lVar5 = FUN_00615af4(puVar6);
      *(long *)(param_1 + 0x30) = lVar5;
      puVar8 = *(undefined **)(param_2 + 0x30);
    }
    puVar2 = PTR_DAT_047cebf8;
    if (puVar8 != (undefined *)0x0) {
      puVar2 = puVar8;
    }
    FUN_00608078(lVar5,puVar2);
  }
  if (param_2[0x38] != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return;
}


