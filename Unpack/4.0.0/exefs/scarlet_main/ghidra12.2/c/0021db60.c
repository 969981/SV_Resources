/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0021db60; name: FUN_0021db60
 */


void FUN_0021db60(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_047cba80;
  pbVar4 = *(byte **)(param_1 + 0x10);
  if (pbVar4 != PTR_DAT_047cba80) {
    if ((*pbVar4 & 1) != 0) {
      **(undefined1 **)(pbVar4 + 0x10) = 0;
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
      pbVar4 = *(byte **)(param_1 + 0x18);
      goto joined_r0x0021db94;
    }
    pbVar4[0] = 0;
    pbVar4[1] = 0;
  }
  pbVar4 = *(byte **)(param_1 + 0x18);
joined_r0x0021db94:
  if (pbVar4 != puVar2) {
    if ((*pbVar4 & 1) == 0) {
      pbVar4[0] = 0;
      pbVar4[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar4 + 0x10) = 0;
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
    }
  }
  uVar3 = *(ulong *)(param_1 + 8);
  plVar5 = (long *)(uVar3 & 0xfffffffffffffffe);
  plVar1 = plVar5;
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)*plVar5;
  }
  if ((plVar1 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x20), lVar7 != 0)) {
    FUN_00513c68(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar3 = *(ulong *)(param_1 + 8);
    plVar5 = (long *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar6 = uVar3 & 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((uVar3 & 1) != 0) {
    plVar5 = (long *)*plVar5;
  }
  if ((plVar5 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x28), lVar7 != 0)) {
    FUN_00513c68(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar3 = *(ulong *)(param_1 + 8);
    uVar6 = uVar3 & 1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (uVar6 != 0) {
    uVar3 = uVar3 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar3 + 8) & 1) != 0) {
      **(undefined1 **)(uVar3 + 0x18) = 0;
      *(undefined8 *)(uVar3 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar3 + 8) = 0;
  }
  return;
}


