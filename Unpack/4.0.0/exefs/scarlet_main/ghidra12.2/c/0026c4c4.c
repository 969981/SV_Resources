/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026c4c4; name: FUN_0026c4c4
 */


void FUN_0026c4c4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 == param_2) {
    return;
  }
  uVar3 = *(ulong *)(param_2 + 8);
  puVar5 = (ulong *)(uVar3 & 0xfffffffffffffffe);
  if ((uVar3 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    puVar4 = (ulong *)(uVar7 & 0xfffffffffffffffe);
    if ((uVar7 & 1) != 0) goto LAB_0026c52c;
LAB_0026c4f8:
    uVar6 = (uint)uVar7;
    if (puVar5 != puVar4) goto LAB_0026c504;
  }
  else {
    puVar5 = (ulong *)*puVar5;
    uVar7 = *(ulong *)(param_1 + 8);
    puVar4 = (ulong *)(uVar7 & 0xfffffffffffffffe);
    if ((uVar7 & 1) == 0) goto LAB_0026c4f8;
LAB_0026c52c:
    uVar6 = (uint)uVar7;
    if (puVar5 != (ulong *)*puVar4) {
LAB_0026c504:
      FUN_0052b0e0(param_2,param_1);
      return;
    }
  }
  if (((uVar6 | (uint)uVar3) & 1) == 0) goto LAB_0026c584;
  if ((uVar6 & 1) == 0) {
    puVar4 = (ulong *)FUN_0021d48c(param_1 + 8);
    uVar3 = *(ulong *)(param_2 + 8);
    if ((uVar3 & 1) != 0) goto LAB_0026c54c;
LAB_0026c5d4:
    puVar5 = (ulong *)FUN_0021d48c();
  }
  else {
    puVar4 = puVar4 + 1;
    if ((uVar3 & 1) == 0) goto LAB_0026c5d4;
LAB_0026c54c:
    puVar5 = (ulong *)((uVar3 & 0xfffffffffffffffe) + 8);
  }
  uVar9 = puVar5[1];
  uVar7 = *puVar5;
  uVar3 = puVar5[2];
  uVar10 = puVar4[1];
  uVar8 = *puVar4;
  puVar5[2] = puVar4[2];
  puVar5[1] = uVar10;
  *puVar5 = uVar8;
  puVar4[2] = uVar3;
  puVar4[1] = uVar9;
  *puVar4 = uVar7;
LAB_0026c584:
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}


