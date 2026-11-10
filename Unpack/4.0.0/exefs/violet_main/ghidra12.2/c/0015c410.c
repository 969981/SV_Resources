/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015c410; name: FUN_0015c410
 */


void FUN_0015c410(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if ((long)param_3 < 0x10) {
    if (param_3 != 0) {
      uVar4 = param_3 - 1;
      for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        param_3 = param_3 - 1;
        *(undefined1 *)param_1 = *(undefined1 *)((long)param_1 + -param_2);
        param_1 = (undefined8 *)((long)param_1 + 1);
      }
      if (2 < uVar4) {
        puVar5 = (undefined1 *)((long)param_1 + 3);
        do {
          puVar1 = puVar5 + -param_2;
          puVar5[-3] = puVar1[-3];
          puVar5[-2] = puVar1[-2];
          puVar5[-1] = puVar1[-1];
          param_3 = param_3 - 4;
          *puVar5 = *puVar1;
          puVar5 = puVar5 + 4;
        } while (param_3 != 0);
      }
    }
  }
  else {
    puVar9 = (undefined8 *)((long)param_1 - param_2);
    if (param_2 < 8) {
      *(undefined1 *)param_1 = *(undefined1 *)puVar9;
      *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)puVar9 + 1);
      *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)puVar9 + 2);
      iVar3 = *(int *)(&DAT_03cb6d20 + param_2 * 4);
      *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar9 + 3);
      *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)puVar9 + (long)iVar3);
      puVar9 = (undefined8 *)
               (((long)puVar9 + (long)iVar3) - (long)*(int *)(&DAT_03cb6d40 + param_2 * 4));
    }
    else {
      *param_1 = *puVar9;
    }
    lVar8 = param_3 - 8;
    puVar6 = param_1 + 1;
    do {
      puVar9 = puVar9 + 1;
      lVar8 = lVar8 + -8;
      puVar7 = puVar6 + 1;
      *puVar6 = *puVar9;
      puVar6 = puVar7;
    } while (puVar7 < (undefined8 *)((long)((long)param_1 + param_3) - 7U));
    if (puVar7 < (undefined8 *)((long)param_1 + param_3)) {
      do {
        lVar8 = lVar8 + -1;
        *(undefined1 *)puVar7 = *(undefined1 *)((long)puVar7 - param_2);
        puVar7 = (undefined8 *)((long)puVar7 + 1);
      } while (lVar8 != 0);
    }
  }
  return;
}


