/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00721504; name: FUN_00721504
 */


void FUN_00721504(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (pbVar3 != PTR_DAT_047cba80) {
    if ((*pbVar3 & 1) != 0) {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3 = *(byte **)(param_1 + 0x18);
      goto joined_r0x00721538;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  pbVar3 = *(byte **)(param_1 + 0x18);
joined_r0x00721538:
  if (pbVar3 != puVar1) {
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
    }
  }
  uVar2 = *(ulong *)(param_1 + 8);
  uVar4 = uVar2 & 1;
  puVar5 = (ulong *)(uVar2 & 0xfffffffffffffffe);
  if ((uVar2 & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  if ((puVar5 == (ulong *)0x0) && (lVar6 = *(long *)(param_1 + 0x20), lVar6 != 0)) {
    FUN_0071b8ec(lVar6);
    FUN_0049e790(PTR_LAB_047cba48,lVar6);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar4 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (uVar4 != 0) {
    uVar2 = uVar2 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar2 + 8) & 1) != 0) {
      **(undefined1 **)(uVar2 + 0x18) = 0;
      *(undefined8 *)(uVar2 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar2 + 8) = 0;
  }
  return;
}


