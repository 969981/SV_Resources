/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005fb730; name: FUN_005fb730
 */


void FUN_005fb730(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong *puVar6;
  long lVar7;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    do {
      while (pbVar5 = (byte *)*puVar3, (*pbVar5 & 1) != 0) {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) goto LAB_005fb788;
      }
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
LAB_005fb788:
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  puVar1 = PTR_DAT_047cba80;
  pbVar5 = *(byte **)(param_1 + 0x28);
  if (pbVar5 == PTR_DAT_047cba80) {
LAB_005fb7ac:
    pbVar5 = *(byte **)(param_1 + 0x30);
  }
  else {
    if ((*pbVar5 & 1) == 0) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      goto LAB_005fb7ac;
    }
    **(undefined1 **)(pbVar5 + 0x10) = 0;
    pbVar5[8] = 0;
    pbVar5[9] = 0;
    pbVar5[10] = 0;
    pbVar5[0xb] = 0;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    pbVar5 = *(byte **)(param_1 + 0x30);
  }
  if (pbVar5 != puVar1) {
    if ((*pbVar5 & 1) != 0) {
      **(undefined1 **)(pbVar5 + 0x10) = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5 = *(byte **)(param_1 + 0x38);
      goto joined_r0x005fb804;
    }
    pbVar5[0] = 0;
    pbVar5[1] = 0;
  }
  pbVar5 = *(byte **)(param_1 + 0x38);
joined_r0x005fb804:
  if (pbVar5 != puVar1) {
    if ((*pbVar5 & 1) == 0) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar5 + 0x10) = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
    }
  }
  uVar2 = *(ulong *)(param_1 + 8);
  uVar4 = uVar2 & 1;
  puVar6 = (ulong *)(uVar2 & 0xfffffffffffffffe);
  if ((uVar2 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if ((puVar6 == (ulong *)0x0) && (lVar7 = *(long *)(param_1 + 0x40), lVar7 != 0)) {
    FUN_0026a1cc(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar4 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
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


