/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00538020; name: FUN_00538020
 */


void FUN_00538020(long param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar4 = *(ulong *)(param_2 + 8);
  if ((uVar4 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar1 = FUN_00264e54();
    }
    else {
      lVar1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar1,(uVar4 & 0xfffffffffffffffe) + 8);
  }
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    if (*pbVar3 >> 1 != 0) {
LAB_00538084:
      puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      puVar5 = *(undefined **)(param_1 + 0x10);
      if (puVar5 == PTR_DAT_047cba80) {
        FUN_001fcdc8((undefined8 *)(param_1 + 0x10),puVar2);
        return;
      }
      FUN_001fcec0(puVar5,pbVar3);
      return;
    }
  }
  else if (*(long *)(pbVar3 + 8) != 0) goto LAB_00538084;
  return;
}


