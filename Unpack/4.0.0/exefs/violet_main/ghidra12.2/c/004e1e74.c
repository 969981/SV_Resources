/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e1e74; name: FUN_004e1e74
 */


void FUN_004e1e74(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar5 = *(ulong *)(param_2 + 8);
  if ((uVar5 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar2 = FUN_00264e54();
    }
    else {
      lVar2 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar2,(uVar5 & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      puVar6 = *(undefined **)(param_1 + 0x18);
      if (puVar6 == PTR_DAT_047cba80) {
        FUN_001fcdc8((undefined8 *)(param_1 + 0x18),puVar3);
      }
      else {
        FUN_001fcec0(puVar6,uVar4);
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  return;
}


