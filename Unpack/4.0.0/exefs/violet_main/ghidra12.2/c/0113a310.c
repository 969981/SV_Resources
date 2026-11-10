/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0113a310; name: FUN_0113a310
 */


void FUN_0113a310(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,long param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if ((undefined8 *)0x1 < param_4) {
    if (param_4 == (undefined8 *)0x2) {
      piVar3 = *(int **)(param_2 + -0x1d0);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
         (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar5 == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)((long)piVar3 + uVar5);
      }
      piVar3 = (int *)*param_1;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
         (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar5 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)((long)piVar3 + uVar5);
      }
      if (uVar2 < uVar4) {
        FUN_0113a9e0(param_1);
        return;
      }
    }
    else {
      if ((long)param_4 < 1) {
        FUN_0216f5f0(param_1,param_2);
        return;
      }
      uVar5 = (ulong)param_4 >> 1;
      puVar10 = param_1 + uVar5 * 0x3a;
      if (param_6 < (long)param_4) {
        FUN_0113a310(param_1,puVar10,param_3,uVar5,param_5,param_6);
        FUN_0113a310(puVar10,param_2,param_3,(long)param_4 - uVar5,param_5,param_6);
        FUN_0216f710(param_1,puVar10,param_2,param_3,uVar5,(long)param_4 - uVar5,param_5,param_6);
        return;
      }
      FUN_0113aa40();
      puVar11 = param_5 + uVar5 * 0x3a;
      FUN_0113aa40(puVar10,param_2,param_3,(long)param_4 - uVar5,puVar11);
      puVar12 = param_5 + (long)param_4 * 0x3a;
      puVar9 = puVar11;
      puVar10 = param_5;
      do {
        puVar7 = param_1;
        puVar1 = param_5;
        if (puVar9 == puVar12) {
          if ((((puVar10 != puVar11) && (FUN_0113a684(puVar7,puVar10), puVar10 + 0x3a != puVar11))
              && (FUN_0113a684(puVar7 + 0x3a), puVar10 + 0x74 != puVar11)) &&
             (FUN_0113a684(puVar7 + 0x74), puVar10 + 0xae != puVar11)) {
            lVar8 = 0x570;
            do {
              FUN_0113a684((long)puVar7 + lVar8,(long)puVar10 + lVar8);
              lVar8 = lVar8 + 0x1d0;
            } while ((long)param_5 + (uVar5 * 0x1d0 - (long)puVar10) != lVar8);
          }
          goto joined_r0x0113a5b4;
        }
        piVar3 = (int *)*puVar9;
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar6 == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(uint *)((long)piVar3 + uVar6);
        }
        piVar3 = (int *)*puVar10;
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar6 == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)((long)piVar3 + uVar6);
        }
        if (uVar2 < uVar4) {
          FUN_0113a684(puVar7,puVar9);
          puVar9 = puVar9 + 0x3a;
        }
        else {
          FUN_0113a684(puVar7,puVar10);
          puVar10 = puVar10 + 0x3a;
        }
        param_1 = puVar7 + 0x3a;
      } while (puVar10 != puVar11);
      if ((((puVar9 != puVar12) && (FUN_0113a684(param_1,puVar9), puVar9 + 0x3a != puVar12)) &&
          (FUN_0113a684(puVar7 + 0x74), puVar9 + 0x74 != puVar12)) &&
         ((FUN_0113a684(puVar7 + 0xae), puVar9 + 0xae != puVar12 &&
          (FUN_0113a684(puVar7 + 0xe8), puVar9 + 0xe8 != puVar12)))) {
        lVar8 = 0x740;
        do {
          FUN_0113a684((long)param_1 + lVar8,(long)puVar9 + lVar8);
          lVar8 = lVar8 + 0x1d0;
        } while ((long)param_5 + ((long)param_4 * 0x1d0 - (long)puVar9) != lVar8);
      }
joined_r0x0113a5b4:
      while (puVar1 != (undefined8 *)0x0) {
        FUN_01139754(param_5);
        param_5 = param_5 + 0x3a;
        param_4 = (undefined8 *)((long)param_4 + -1);
        puVar1 = param_4;
      }
    }
  }
  return;
}


