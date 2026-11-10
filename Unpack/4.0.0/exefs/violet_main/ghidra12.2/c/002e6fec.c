/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e6fec; name: FUN_002e6fec
 */


void FUN_002e6fec(undefined1 *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar2 = (undefined1 *)FUN_0049e7b0(PTR_FUN_047cba38,(long)*(int *)(param_1 + 0x10) * 8 + 0x20);
  *(undefined1 **)(puVar2 + 8) = puVar2 + 0x18;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *puVar2 = *param_1;
  *(int *)(puVar2 + 4) = 0x110000 - *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    uVar4 = 0;
    iVar3 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 8);
    uVar4 = 0;
    iVar3 = 0;
    puVar7 = puVar6;
    do {
      if (*puVar6 != uVar4) {
        *(ulong *)(*(long *)(puVar2 + 8) + (long)iVar3 * 8) = CONCAT44(*puVar6 - 1,uVar4);
        puVar7 = *(uint **)(param_1 + 8);
        iVar5 = *(int *)(param_1 + 0x10);
        iVar3 = iVar3 + 1;
      }
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 2;
      uVar4 = *puVar1 + 1;
    } while (puVar6 != puVar7 + (long)iVar5 * 2);
    if (0x10fffe < (int)*puVar1) {
      *(int *)(puVar2 + 0x10) = iVar3;
      return;
    }
  }
  *(ulong *)(*(long *)(puVar2 + 8) + (long)iVar3 * 8) = (ulong)uVar4 | 0x10ffff00000000;
  *(int *)(puVar2 + 0x10) = iVar3 + 1;
  return;
}


