/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00719450; name: FUN_00719450
 */


void FUN_00719450(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (pbVar3 == PTR_DAT_047cba80) {
LAB_0071947c:
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 == puVar1) goto LAB_007194b0;
LAB_007194a4:
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_007194b0;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = *(byte **)(param_1 + 0x20);
    if (pbVar3 != puVar1) goto LAB_007194d8;
LAB_007194e4:
    pbVar3 = *(byte **)(param_1 + 0x28);
    if (pbVar3 == puVar1) goto LAB_00719518;
LAB_0071950c:
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_00719518;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = *(byte **)(param_1 + 0x30);
    if (pbVar3 != puVar1) goto LAB_00719540;
LAB_0071954c:
    pbVar3 = *(byte **)(param_1 + 0x38);
    if (pbVar3 == puVar1) goto LAB_00719580;
LAB_00719574:
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_00719580;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = *(byte **)(param_1 + 0x40);
    if (pbVar3 != puVar1) goto LAB_007195a8;
LAB_007195b4:
    pbVar3 = *(byte **)(param_1 + 0x48);
    if (pbVar3 == puVar1) goto LAB_007195e8;
LAB_007195dc:
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_007195e8;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = *(byte **)(param_1 + 0x50);
    if (pbVar3 != puVar1) goto LAB_00719610;
LAB_0071961c:
    pbVar3 = *(byte **)(param_1 + 0x58);
  }
  else {
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_0071947c;
    }
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
    if (pbVar3 != puVar1) goto LAB_007194a4;
LAB_007194b0:
    pbVar3 = *(byte **)(param_1 + 0x20);
    if (pbVar3 == puVar1) goto LAB_007194e4;
LAB_007194d8:
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_007194e4;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = *(byte **)(param_1 + 0x28);
    if (pbVar3 != puVar1) goto LAB_0071950c;
LAB_00719518:
    pbVar3 = *(byte **)(param_1 + 0x30);
    if (pbVar3 == puVar1) goto LAB_0071954c;
LAB_00719540:
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_0071954c;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = *(byte **)(param_1 + 0x38);
    if (pbVar3 != puVar1) goto LAB_00719574;
LAB_00719580:
    pbVar3 = *(byte **)(param_1 + 0x40);
    if (pbVar3 == puVar1) goto LAB_007195b4;
LAB_007195a8:
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_007195b4;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = *(byte **)(param_1 + 0x48);
    if (pbVar3 != puVar1) goto LAB_007195dc;
LAB_007195e8:
    pbVar3 = *(byte **)(param_1 + 0x50);
    if (pbVar3 == puVar1) goto LAB_0071961c;
LAB_00719610:
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_0071961c;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = *(byte **)(param_1 + 0x58);
  }
  if (pbVar3 != puVar1) {
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
      pbVar3 = *(byte **)(param_1 + 0x60);
      goto joined_r0x00719674;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  pbVar3 = *(byte **)(param_1 + 0x60);
joined_r0x00719674:
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
  plVar4 = (long *)(uVar2 & 0xfffffffffffffffe);
  plVar6 = plVar4;
  if ((uVar2 & 1) != 0) {
    plVar6 = (long *)*plVar4;
  }
  if ((plVar6 == (long *)0x0) && (plVar6 = *(long **)(param_1 + 0x68), plVar6 != (long *)0x0)) {
    *plVar6 = (long)(PTR_DAT_047d02c8 + 0x10);
    if (((plVar6[1] & 1U) != 0) &&
       ((plVar4 = (long *)(plVar6[1] & 0xfffffffffffffffe), *plVar4 == 0 && (plVar4 != (long *)0x0))
       )) {
      if ((*(byte *)(plVar4 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar4[3]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar4);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar6);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar4 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar5 = uVar2 & 1;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if ((uVar2 & 1) != 0) {
    plVar4 = (long *)*plVar4;
  }
  if ((plVar4 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x70), lVar7 != 0)) {
    FUN_00513c68(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar5 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (uVar5 != 0) {
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


