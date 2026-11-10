/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e01160; name: FUN_01e01160
 */


undefined1  [16] FUN_01e01160(long param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if (param_2 != param_1) {
    do {
      auVar8 = FUN_01e01330(param_3,param_4);
      lVar3 = (auVar8._8_8_ - *auVar8._0_8_) + 0x30 >> 4;
      lVar4 = lVar3 * -0x5555555555555555;
      lVar7 = (param_2 - param_1 >> 4) * -0x5555555555555555;
      lVar3 = param_2 + lVar3 * -0x10;
      if (lVar7 <= lVar4) {
        lVar3 = param_1;
        lVar4 = lVar7;
      }
      if (param_2 != lVar3) {
        lVar7 = 0;
        do {
          lVar1 = param_2 + lVar7;
          puVar2 = (undefined8 *)(auVar8._8_8_ + lVar7);
          *puVar2 = *(undefined8 *)(lVar1 + -0x30);
          FUN_00d0a34c(puVar2 + 1,lVar1 + -0x28);
          uVar5 = *(undefined8 *)(lVar1 + -0x18);
          lVar7 = lVar7 + -0x30;
          *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(lVar1 + -0x10);
          puVar2[3] = uVar5;
          puVar2[5] = *(undefined8 *)(lVar1 + -8);
        } while (lVar3 - param_2 != lVar7);
      }
      if (lVar4 != 0) {
        uVar6 = (param_4 - *param_3 >> 4) * -0x5555555555555555 - lVar4;
        if ((long)uVar6 < 1) {
          lVar4 = 0x54 - uVar6;
          lVar7 = SUB168(SEXT816(lVar4) * SEXT816(-0x6060606060606061),8);
          param_3 = param_3 + ((lVar7 >> 5) - (lVar7 >> 0x3f));
          param_4 = *param_3 + ((lVar4 / 0x55) * 0x55 - lVar4) * 0x30 + 0xfc0;
        }
        else {
          param_3 = param_3 + uVar6 / 0x55;
          param_4 = *param_3 + (uVar6 % 0x55) * 0x30;
        }
      }
      param_2 = lVar3;
    } while (lVar3 != param_1);
  }
  auVar8._8_8_ = param_4;
  auVar8._0_8_ = param_3;
  return auVar8;
}


