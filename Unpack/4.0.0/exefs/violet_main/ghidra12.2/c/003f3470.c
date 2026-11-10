/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f3470; name: FUN_003f3470
 */


void FUN_003f3470(undefined1 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = param_3 >> 1;
    if (uVar5 != 0) {
      puVar3 = param_1 + param_3;
      if (uVar5 != 1) {
        lVar6 = -(uVar5 & 0x7ffffffffffffffe);
        puVar2 = param_1;
        do {
          uVar1 = puVar3[-1];
          lVar6 = lVar6 + 2;
          puVar3[-1] = *puVar2;
          *puVar2 = uVar1;
          param_1 = puVar2 + 2;
          puVar3 = puVar3 + -2;
          uVar1 = *puVar3;
          *puVar3 = puVar2[1];
          puVar2[1] = uVar1;
          puVar2 = param_1;
        } while (lVar6 != 0);
      }
      if (((uint)param_3 >> 1 & 1) != 0) {
        uVar1 = puVar3[-1];
        puVar3[-1] = *param_1;
        *param_1 = uVar1;
        return;
      }
    }
  }
  else if (param_3 != 0) {
    puVar3 = param_1 + (param_3 - 1);
    if ((param_3 < 8) ||
       ((param_1 < (undefined1 *)((long)param_2 + param_3) && (param_2 < param_1 + param_3)))) {
      uVar5 = 0;
      puVar4 = param_2;
    }
    else {
      uVar5 = param_3 & 0xfffffffffffffff8;
      puVar3 = puVar3 + -uVar5;
      puVar4 = (undefined8 *)((long)param_2 + uVar5);
      uVar8 = uVar5;
      do {
        param_1 = param_1 + -8;
        uVar9 = NEON_rev64(*param_2,1);
        *(undefined8 *)(param_1 + param_3) = uVar9;
        uVar8 = uVar8 - 8;
        param_2 = param_2 + 1;
      } while (uVar8 != 0);
      if (uVar5 == param_3) {
        return;
      }
    }
    uVar7 = ~uVar5;
    for (uVar8 = param_3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar5 = uVar5 + 1;
      *puVar3 = *(undefined1 *)puVar4;
      puVar3 = puVar3 + -1;
      puVar4 = (undefined8 *)((long)puVar4 + 1);
    }
    if (2 < uVar7 + param_3) {
      lVar6 = param_3 - uVar5;
      do {
        *puVar3 = *(undefined1 *)puVar4;
        puVar3[-1] = *(undefined1 *)((long)puVar4 + 1);
        puVar3[-2] = *(undefined1 *)((long)puVar4 + 2);
        puVar2 = (undefined1 *)((long)puVar4 + 3);
        lVar6 = lVar6 + -4;
        puVar4 = (undefined8 *)((long)puVar4 + 4);
        puVar3[-3] = *puVar2;
        puVar3 = puVar3 + -4;
      } while (lVar6 != 0);
    }
  }
  return;
}


