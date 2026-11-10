/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a01f80; name: FUN_02a01f80
 */


void FUN_02a01f80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5,long param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar2 = FUN_02a021a8(param_3,param_2[-1],*param_1);
      if ((uVar2 & 1) != 0) {
        uVar3 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = uVar3;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (puVar8 = param_1 + 1, puVar8 != param_2)) {
        lVar9 = 0;
        do {
          uVar3 = *puVar8;
          if (puVar8 != param_1) {
            lVar10 = lVar9;
            do {
              uVar2 = FUN_02a021a8(param_3,uVar3,*(undefined8 *)((long)param_1 + lVar10));
              if ((uVar2 & 1) == 0) {
                puVar4 = (undefined8 *)((long)param_1 + lVar10 + 8);
                goto LAB_02a02048;
              }
              bVar1 = lVar10 != 0;
              ((undefined8 *)((long)param_1 + lVar10))[1] = *(undefined8 *)((long)param_1 + lVar10);
              lVar10 = lVar10 + -8;
            } while (bVar1);
          }
          puVar4 = param_1;
LAB_02a02048:
          puVar8 = puVar8 + 1;
          lVar9 = lVar9 + 8;
          *puVar4 = uVar3;
        } while (puVar8 != param_2);
      }
    }
    else {
      uVar2 = param_4 >> 1;
      puVar8 = param_1 + uVar2;
      if (param_6 < (long)param_4) {
        FUN_02a01f80();
        FUN_02a01f80(puVar8,param_2,param_3,param_4 - uVar2,param_5,param_6);
        FUN_02a02800(param_1,puVar8,param_2,param_3,uVar2,param_4 - uVar2,param_5,param_6);
        return;
      }
      FUN_02a025e0(param_1,puVar8,param_3,uVar2);
      puVar4 = param_5 + uVar2;
      FUN_02a025e0(puVar8,param_2,param_3,param_4 - uVar2,puVar4);
      puVar8 = param_5 + param_4;
      puVar6 = puVar4;
      do {
        if (puVar6 == puVar8) {
          if (param_5 == puVar4) {
            return;
          }
          lVar9 = 0;
          do {
            *(undefined8 *)((long)param_1 + lVar9) = *(undefined8 *)((long)param_5 + lVar9);
            lVar9 = lVar9 + 8;
          } while ((long)puVar4 - (long)param_5 != lVar9);
          return;
        }
        uVar2 = FUN_02a021a8(param_3,*puVar6,*param_5);
        if ((uVar2 & 1) == 0) {
          puVar7 = param_5 + 1;
          uVar3 = *param_5;
        }
        else {
          uVar3 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = param_5;
        }
        puVar5 = param_1 + 1;
        *param_1 = uVar3;
        param_1 = puVar5;
        param_5 = puVar7;
      } while (puVar7 != puVar4);
      if (puVar6 != puVar8) {
        lVar9 = 0;
        do {
          *(undefined8 *)((long)puVar5 + lVar9) = *(undefined8 *)((long)puVar6 + lVar9);
          lVar9 = lVar9 + 8;
        } while ((long)puVar8 - (long)puVar6 != lVar9);
      }
    }
  }
  return;
}


