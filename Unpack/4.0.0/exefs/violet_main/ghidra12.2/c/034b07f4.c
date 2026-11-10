/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b07f4; name: FUN_034b07f4
 */


void FUN_034b07f4(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  ulong *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  puVar3 = PTR_DAT_047e2fd0;
  puVar4 = *(ulong **)(param_1 + 0x90);
  plVar5 = (long *)*puVar4;
  uVar2 = (uint)puVar4[1];
  uVar6 = (ulong)uVar2;
  if ((uVar2 == 0) || (*plVar5 == param_2)) {
    plVar10 = plVar5;
  }
  else {
    lVar7 = uVar6 * 0x10;
    plVar8 = plVar5;
    do {
      lVar7 = lVar7 + -0x10;
      if (lVar7 == 0) {
        return;
      }
      plVar10 = plVar8 + 2;
      plVar1 = plVar8 + 2;
      plVar8 = plVar10;
    } while (*plVar1 != param_2);
  }
  if (plVar10 == plVar5 + (ulong)uVar2 * 2) {
    return;
  }
  puVar9 = (undefined8 *)plVar10[1];
  if (puVar9 != (undefined8 *)0x0) {
    if ((*(short *)(puVar9 + 0xe) != 0) || (*(short *)((long)puVar9 + 0x72) != 0))
    goto LAB_034b0974;
    if (puVar9[9] == 0) {
LAB_034b08b0:
      (**(code **)*puVar9)(puVar9);
      (**(code **)(puVar3 + 0x30))(0,puVar9);
    }
    else {
      *(undefined4 *)(puVar9 + 10) = 0;
      (**(code **)(puVar3 + 0x30))(0);
      puVar9[9] = 0;
      *(undefined4 *)((long)puVar9 + 0x54) = 0;
      puVar9 = (undefined8 *)plVar10[1];
      if (puVar9 != (undefined8 *)0x0) goto LAB_034b08b0;
    }
    plVar10[1] = 0;
    puVar4 = *(ulong **)(param_1 + 0x90);
    plVar5 = (long *)*puVar4;
    uVar6 = (ulong)(uint)puVar4[1];
  }
  plVar10 = plVar5 + uVar6 * 2;
  if (((int)uVar6 != 0) && (*plVar5 != param_2)) {
    lVar7 = uVar6 * 0x10;
    do {
      lVar7 = lVar7 + -0x10;
      if (lVar7 == 0) {
        plVar5 = plVar10;
        break;
      }
      plVar1 = plVar5 + 2;
      plVar8 = plVar5 + 2;
      plVar5 = plVar1;
    } while (*plVar8 != param_2);
  }
  if (plVar10 != plVar5) {
    if (plVar5 < plVar10 + -2) {
      do {
        plVar8 = plVar5 + 2;
        *plVar5 = *plVar8;
        plVar5[1] = plVar5[3];
        plVar5 = plVar8;
      } while (plVar8 < plVar10 + -2);
      uVar6 = (ulong)(uint)puVar4[1];
    }
    *(int *)(puVar4 + 1) = (int)uVar6 + -1;
  }
LAB_034b0974:
  FUN_034b02d8(param_1);
  return;
}


