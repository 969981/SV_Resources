/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0113aea0; name: FUN_0113aea0
 */


void FUN_0113aea0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_4 == 2) {
    param_2 = param_2 + -0x3a;
    piVar4 = (int *)*param_2;
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
       (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar6 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)((long)piVar4 + uVar6);
    }
    piVar4 = (int *)*param_1;
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
       (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)((long)piVar4 + uVar6);
    }
    if (uVar3 < uVar5) {
      FUN_0113987c(param_5,param_2);
      param_5 = param_5 + 0x3a;
    }
    else {
      FUN_0113987c(param_5,param_1);
      param_5 = param_5 + 0x3a;
      param_1 = param_2;
    }
  }
  else if (param_4 != 1) {
    if (param_4 == 0) {
      return;
    }
    if (8 < (long)param_4) {
      uVar6 = param_4 >> 1;
      puVar7 = param_1 + uVar6 * 0x3a;
      FUN_01139f50(param_1,puVar7,param_3,uVar6,param_5,uVar6);
      lVar9 = param_4 - (param_4 >> 1);
      FUN_01139f50(puVar7,param_2,param_3,lVar9,param_5 + uVar6 * 0x3a,lVar9);
      FUN_0113b390(param_1,puVar7,puVar7,param_2,param_5);
      return;
    }
    if (param_1 != param_2) {
      FUN_0113987c(param_5,param_1);
      param_1 = param_1 + 0x3a;
      if (param_1 != param_2) {
        lVar9 = 0;
        puVar7 = param_5;
        do {
          piVar4 = (int *)*param_1;
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
             (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar6 == 0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(uint *)((long)piVar4 + uVar6);
          }
          piVar4 = (int *)*puVar7;
          puVar1 = puVar7 + 0x3a;
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
             (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar6 == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(uint *)((long)piVar4 + uVar6);
          }
          if (uVar3 < uVar5) {
            FUN_0113987c(puVar1,puVar7);
            puVar2 = param_5;
            if (puVar7 != param_5) {
              lVar8 = lVar9;
              do {
                piVar4 = (int *)*param_1;
                if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
                   (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar6 == 0)) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = *(uint *)((long)piVar4 + uVar6);
                }
                piVar4 = (int *)((undefined8 *)((long)param_5 + lVar8))[-0x3a];
                if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
                   (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar6 == 0)) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = *(uint *)((long)piVar4 + uVar6);
                }
                puVar2 = (undefined8 *)((long)param_5 + lVar8);
                if (uVar5 <= uVar3) goto LAB_0113b1a0;
                FUN_0113a684();
                lVar8 = lVar8 + -0x1d0;
              } while (lVar8 != 0);
              puVar2 = param_5;
            }
LAB_0113b1a0:
            FUN_0113a684(puVar2,param_1);
          }
          else {
            FUN_0113987c(puVar1,param_1);
          }
          param_1 = param_1 + 0x3a;
          lVar9 = lVar9 + 0x1d0;
          puVar7 = puVar1;
        } while (param_1 != param_2);
      }
    }
    return;
  }
  FUN_0113987c(param_5,param_1);
  return;
}


