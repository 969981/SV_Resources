/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0069b1bc; name: FUN_0069b1bc
 */


void FUN_0069b1bc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  ulong uVar8;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar4 = FUN_0021d48c();
    }
    else {
      lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar8 + 0x10);
    lVar2 = *(long *)(uVar8 + 0x18);
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      lVar2 = uVar8 + 9;
      uVar1 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    FUN_0021d540(lVar4,lVar2,uVar1);
  }
  pbVar6 = *(byte **)(param_2 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    if (*pbVar6 >> 1 != 0) goto LAB_0069b230;
  }
  else if (*(long *)(pbVar6 + 8) != 0) {
LAB_0069b230:
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    puVar7 = *(undefined **)(param_1 + 0x10);
    if (puVar7 == PTR_DAT_047cba80) {
      FUN_001fcdc8((undefined8 *)(param_1 + 0x10),puVar5);
      iVar3 = *(int *)(param_2 + 0x24);
      goto joined_r0x0069b2cc;
    }
    FUN_001fcec0(puVar7,pbVar6);
  }
  iVar3 = *(int *)(param_2 + 0x24);
joined_r0x0069b2cc:
  if (iVar3 - 2U < 4) {
                    /* WARNING: Could not recover jumptable at 0x0069b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_0069b288 + (ulong)(byte)(&DAT_03d0a6cf)[iVar3 - 2U] * 4))();
    return;
  }
  return;
}


