/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02780860; name: FUN_02780860
 */


void FUN_02780860(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  iVar2 = *(int *)(param_1 + 0x130);
  if (iVar2 == 1) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x138) + 0x38);
    if (lVar3 == 0) {
      return;
    }
    if ((*(byte *)(lVar3 + 0x1e8) & 1) != 0) {
      FUN_00ebbbd4(*(undefined8 *)(param_1 + 0x138),DAT_0485a0d8 + 0x40);
      *(undefined4 *)(param_1 + 0x130) = 2;
      goto LAB_02780880;
    }
    iVar2 = *(int *)(param_1 + 0x130);
  }
  if (iVar2 != 2) {
    return;
  }
LAB_02780880:
  if (((*(long *)(param_1 + 0x138) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x138) + 0x38), lVar3 != 0)) &&
     ((*(byte *)(lVar3 + 0x1e8) & 1) != 0)) {
    plVar4 = *(long **)(*(long *)(param_1 + 0xe8) + 0x48);
    lVar3 = *(long *)(*(long *)(param_1 + 0x138) + 0x70);
    puVar1 = (undefined8 *)(**(code **)(*plVar4 + 0x68))(plVar4);
    uVar6 = puVar1[1];
    uVar5 = *puVar1;
    uVar8 = puVar1[3];
    uVar7 = puVar1[2];
    uVar10 = puVar1[5];
    uVar9 = puVar1[4];
    uVar11 = puVar1[6];
    *(undefined8 *)(lVar3 + 0x418) = puVar1[7];
    *(undefined8 *)(lVar3 + 0x410) = uVar11;
    *(undefined8 *)(lVar3 + 1000) = uVar6;
    *(undefined8 *)(lVar3 + 0x3e0) = uVar5;
    *(undefined8 *)(lVar3 + 0x3f8) = uVar8;
    *(undefined8 *)(lVar3 + 0x3f0) = uVar7;
    *(undefined8 *)(lVar3 + 0x408) = uVar10;
    *(undefined8 *)(lVar3 + 0x400) = uVar9;
  }
  return;
}


