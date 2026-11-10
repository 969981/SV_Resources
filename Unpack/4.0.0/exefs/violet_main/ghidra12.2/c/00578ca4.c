/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00578ca4; name: FUN_00578ca4
 */


void FUN_00578ca4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  byte *pbVar5;
  undefined *puVar6;
  ulong uVar7;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar3 = FUN_0021d48c();
    }
    else {
      lVar3 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar7 + 0x10);
    lVar2 = *(long *)(uVar7 + 0x18);
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      lVar2 = uVar7 + 9;
      uVar1 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
    }
    FUN_0021d540(lVar3,lVar2,uVar1);
  }
  pbVar5 = *(byte **)(param_2 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    if (*pbVar5 >> 1 != 0) goto LAB_00578d24;
  }
  else if (*(long *)(pbVar5 + 8) != 0) {
LAB_00578d24:
    puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    puVar6 = *(undefined **)(param_1 + 0x10);
    if (puVar6 == PTR_DAT_047cba80) {
      FUN_001fcdc8((undefined8 *)(param_1 + 0x10),puVar4);
      return;
    }
    FUN_001fcec0(puVar6,pbVar5);
    return;
  }
  return;
}


