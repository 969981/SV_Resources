/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019628d0; name: FUN_019628d0
 */


undefined1  [16]
FUN_019628d0(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  
  if (param_1 != param_2) {
    do {
      lVar5 = (*param_3 - (long)param_4) + 0xff0;
      lVar7 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
      lVar6 = (lVar5 >> 4) * -0x5555555555555555;
      puVar2 = (undefined8 *)((long)param_1 + lVar5);
      if (lVar7 <= lVar6) {
        lVar6 = lVar7;
        puVar2 = param_2;
      }
      if (param_1 != puVar2) {
        puVar8 = param_4;
        do {
          *puVar8 = *param_1;
          FUN_00d0a34c(puVar8 + 1,param_1 + 1);
          uVar3 = param_1[3];
          *(undefined1 *)(puVar8 + 4) = *(undefined1 *)(param_1 + 4);
          puVar8[3] = uVar3;
          puVar1 = param_1 + 5;
          param_1 = param_1 + 6;
          puVar8[5] = *puVar1;
          puVar8 = puVar8 + 6;
        } while (param_1 != puVar2);
      }
      if (lVar6 != 0) {
        uVar4 = lVar6 + ((long)param_4 - *param_3 >> 4) * -0x5555555555555555;
        if ((long)uVar4 < 1) {
          lVar5 = 0x54 - uVar4;
          lVar6 = SUB168(SEXT816(lVar5) * SEXT816(-0x6060606060606061),8);
          param_3 = param_3 + ((lVar6 >> 5) - (lVar6 >> 0x3f));
          param_4 = (undefined8 *)(*param_3 + ((lVar5 / 0x55) * 0x55 - lVar5) * 0x30 + 0xfc0);
        }
        else {
          param_3 = param_3 + uVar4 / 0x55;
          param_4 = (undefined8 *)(*param_3 + (uVar4 % 0x55) * 0x30);
        }
      }
      param_1 = puVar2;
    } while (puVar2 != param_2);
  }
  auVar9._8_8_ = param_4;
  auVar9._0_8_ = param_3;
  return auVar9;
}


