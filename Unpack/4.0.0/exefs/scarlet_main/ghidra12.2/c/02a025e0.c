/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a025e0; name: FUN_02a025e0
 */


void FUN_02a025e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      uVar1 = FUN_02a021a8(param_3,param_2[-1],*param_1);
      if ((uVar1 & 1) == 0) {
        *param_5 = *param_1;
        uVar2 = param_2[-1];
      }
      else {
        *param_5 = param_2[-1];
        uVar2 = *param_1;
      }
      param_5[1] = uVar2;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        puVar3 = param_1 + 1;
        uVar2 = *param_1;
        *param_5 = uVar2;
        if (puVar3 != param_2) {
          lVar5 = 0;
          puVar6 = param_5;
          do {
            puVar4 = puVar6 + 1;
            uVar1 = FUN_02a021a8(param_3,*puVar3,uVar2);
            if ((uVar1 & 1) == 0) {
              *puVar4 = *puVar3;
            }
            else {
              puVar6[1] = *puVar6;
              if (puVar6 != param_5) {
                lVar7 = 0;
                do {
                  puVar8 = (undefined8 *)((long)puVar6 + lVar7);
                  uVar1 = FUN_02a021a8(param_3,*puVar3,puVar8[-1]);
                  if ((uVar1 & 1) == 0) goto LAB_02a026d4;
                  lVar7 = lVar7 + -8;
                  *puVar8 = puVar8[-1];
                } while (lVar5 != lVar7);
              }
              puVar8 = param_5;
LAB_02a026d4:
              *puVar8 = *puVar3;
            }
            puVar3 = puVar3 + 1;
            if (puVar3 == param_2) {
              return;
            }
            uVar2 = *puVar4;
            lVar5 = lVar5 + -8;
            puVar6 = puVar4;
          } while( true );
        }
      }
    }
    else {
      uVar1 = param_4 >> 1;
      puVar3 = param_1 + uVar1;
      FUN_02a01f80(param_1,puVar3,param_3,uVar1,param_5,uVar1);
      lVar5 = param_4 - (param_4 >> 1);
      FUN_02a01f80(puVar3,param_2,param_3,lVar5,param_5 + uVar1,lVar5);
      puVar6 = puVar3;
      do {
        if (puVar6 == param_2) {
          if (param_1 == puVar3) {
            return;
          }
          lVar5 = 0;
          do {
            *(undefined8 *)((long)param_5 + lVar5) = *(undefined8 *)((long)param_1 + lVar5);
            lVar5 = lVar5 + 8;
          } while ((long)puVar3 - (long)param_1 != lVar5);
          return;
        }
        uVar1 = FUN_02a021a8(param_3,*puVar6,*param_1);
        if ((uVar1 & 1) == 0) {
          puVar4 = param_1 + 1;
          uVar2 = *param_1;
        }
        else {
          uVar2 = *puVar6;
          puVar4 = param_1;
          puVar6 = puVar6 + 1;
        }
        puVar8 = param_5 + 1;
        *param_5 = uVar2;
        param_5 = puVar8;
        param_1 = puVar4;
      } while (puVar4 != puVar3);
      if (puVar6 != param_2) {
        lVar5 = 0;
        do {
          *(undefined8 *)((long)puVar8 + lVar5) = *(undefined8 *)((long)puVar6 + lVar5);
          lVar5 = lVar5 + 8;
        } while ((long)param_2 - (long)puVar6 != lVar5);
      }
    }
  }
  return;
}


