/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005233e4; name: FUN_005233e4
 */


void FUN_005233e4(long *param_1,int param_2,undefined1 param_3,long param_4,long param_5)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  
  if (param_5 == 0) {
    if (*(ushort *)(param_1 + 1) < 0x101) {
      piVar3 = (int *)param_1[2];
      uVar2 = (ulong)*(ushort *)((long)param_1 + 10);
      while (piVar1 = piVar3, uVar2 != 0) {
        uVar6 = uVar2 >> 1;
        piVar3 = piVar1 + uVar6 * 8 + 8;
        uVar2 = uVar2 + ~uVar6;
        if (param_2 <= piVar1[uVar6 * 8]) {
          piVar3 = piVar1;
          uVar2 = uVar6;
        }
      }
      if (piVar1 == (int *)param_1[2] + (ulong)*(ushort *)((long)param_1 + 10) * 8) {
        return;
      }
      if (*piVar1 == param_2) {
        FUN_005217b4(piVar1 + 2);
        return;
      }
      return;
    }
    plVar5 = (long *)(param_1[2] + 8);
    plVar7 = (long *)*plVar5;
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar4 = plVar5;
    do {
      if (param_2 <= (int)plVar7[4]) {
        plVar4 = plVar7;
      }
      plVar7 = (long *)plVar7[(int)plVar7[4] < param_2];
    } while (plVar7 != (long *)0x0);
    if (plVar4 == plVar5) {
      return;
    }
    if (param_2 < (int)plVar4[4]) {
      return;
    }
    FUN_005217b4(plVar4 + 5);
    return;
  }
  auVar9 = FUN_00524ad8(param_1);
  plVar5 = auVar9._0_8_;
  plVar5[2] = param_4;
  if ((auVar9._8_8_ & 0xff) == 0) {
    if ((*(byte *)((long)plVar5 + 10) >> 4 & 1) != 0) {
      (**(code **)(*(long *)*plVar5 + 0x30))((long *)*plVar5,param_5);
      goto LAB_00523434;
    }
    if ((*param_1 == 0) && (puVar8 = (undefined8 *)*plVar5, puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)(puVar8);
      FUN_0049e790(PTR_LAB_047cba48,puVar8);
    }
  }
  else {
    *(undefined1 *)(plVar5 + 1) = param_3;
    *(undefined1 *)((long)plVar5 + 9) = 0;
    *(byte *)((long)plVar5 + 10) = *(byte *)((long)plVar5 + 10) & 0xf;
  }
  *plVar5 = param_5;
LAB_00523434:
  *(byte *)((long)plVar5 + 10) = *(byte *)((long)plVar5 + 10) & 0xf0;
  return;
}


