/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cd75ac; name: FUN_01cd75ac
 */


void FUN_01cd75ac(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  
  plVar6 = param_1 + 3;
  lVar1 = FUN_01cd5814(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar9 = *param_1;
  lVar4 = param_1[1];
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar1 << 7,0x10);
    if (lVar2 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xe8))();
    }
  }
  lVar4 = lVar2 + (lVar4 - lVar9 >> 7) * 0x80;
  FUN_01cd74ac(plVar6,lVar4,param_2);
  puVar8 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  lVar9 = lVar4 + 0x80;
  if (puVar10 == puVar8) {
    puVar10 = puVar8;
  }
  else {
    lVar4 = lVar4 + -0x80;
    FUN_0158fe50(plVar6,lVar4,puVar10 + -0x10);
    if (puVar10 + -0x10 != puVar8) {
      do {
        lVar4 = lVar4 + -0x80;
        FUN_0158fe50(plVar6,lVar4,puVar10 + -0x20);
        puVar10 = puVar10 + -0x10;
      } while (puVar8 + 0x10 != puVar10);
    }
    puVar8 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
  }
  *param_1 = lVar4;
  param_1[1] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = lVar2 + lVar1 * 0x80;
  if (puVar10 != puVar8) {
    pcVar5 = (code *)puVar10[-0xf];
    puVar7 = puVar10 + -0x10;
    if (pcVar5 != (code *)0x0) {
      puVar10[-0xe] = 0;
      puVar10[-0xd] = 0;
      *puVar7 = 0;
      puVar10[-0xf] = 0;
      (*pcVar5)(puVar10 + -0xc);
    }
    while (puVar10 = puVar7, puVar10 != puVar8) {
      pcVar5 = (code *)puVar10[-0xf];
      puVar7 = puVar10 + -0x10;
      if (pcVar5 != (code *)0x0) {
        puVar10[-0xe] = 0;
        puVar10[-0xd] = 0;
        puVar10[-0x10] = 0;
        puVar10[-0xf] = 0;
        (*pcVar5)(puVar10 + -0xc);
      }
    }
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  plVar6 = (long *)*plVar6;
  uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01cd771c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,puVar8,lVar9 - (long)puVar8,0x10);
    return;
  }
  FUN_00c48fe8(plVar6,puVar8,lVar9 - (long)puVar8,0x10);
  return;
}


