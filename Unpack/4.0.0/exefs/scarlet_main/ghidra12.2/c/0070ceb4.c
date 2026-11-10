/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0070ceb4; name: FUN_0070ceb4
 */


void FUN_0070ceb4(undefined *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar2 = *(byte **)(param_1 + 0x88);
  if (pbVar2 == PTR_DAT_047cba80 || pbVar2 == (byte *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x90);
    if (pbVar2 != PTR_DAT_047cba80 && pbVar2 != (byte *)0x0) {
LAB_0070cf30:
      if ((*pbVar2 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar2);
      pbVar2 = *(byte **)(param_1 + 0x98);
      goto joined_r0x0070cef0;
    }
  }
  else {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
    pbVar2 = *(byte **)(param_1 + 0x90);
    if (pbVar2 != puVar1 && pbVar2 != (byte *)0x0) goto LAB_0070cf30;
  }
  pbVar2 = *(byte **)(param_1 + 0x98);
joined_r0x0070cef0:
  if ((pbVar2 != puVar1) && (pbVar2 != (byte *)0x0)) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0xa0);
  if ((pbVar2 != puVar1) && (pbVar2 != (byte *)0x0)) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0xa8);
  if ((pbVar2 != puVar1) && (pbVar2 != (byte *)0x0)) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0xb0);
  if ((pbVar2 != puVar1) && (pbVar2 != (byte *)0x0)) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  if (param_1 != PTR_DAT_047cfc00) {
    lVar3 = *(long *)(param_1 + 0xb8);
    if (lVar3 != 0) {
      FUN_0026a1cc(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
    }
    lVar3 = *(long *)(param_1 + 0xc0);
    if (lVar3 != 0) {
      FUN_00513c68(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
    }
    lVar3 = *(long *)(param_1 + 200);
    if (lVar3 != 0) {
      FUN_00513c68(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
    }
    lVar3 = *(long *)(param_1 + 0xd0);
    if (lVar3 != 0) {
      FUN_00513c68(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
    }
    lVar3 = *(long *)(param_1 + 0xd8);
    if (lVar3 != 0) {
      FUN_00513c68(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
    }
    lVar3 = *(long *)(param_1 + 0xe0);
    if (lVar3 != 0) {
      FUN_00513c68(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
    }
    lVar3 = *(long *)(param_1 + 0xe8);
    if (lVar3 != 0) {
      FUN_00513c68(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
    }
    lVar3 = *(long *)(param_1 + 0xf0);
    if (lVar3 != 0) {
      FUN_00513c68(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
    }
    lVar3 = *(long *)(param_1 + 0xf8);
    if (lVar3 != 0) {
      FUN_00513c68(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
      return;
    }
  }
  return;
}


