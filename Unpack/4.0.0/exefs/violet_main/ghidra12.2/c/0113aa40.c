/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0113aa40; name: FUN_0113aa40
 */


void FUN_0113aa40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  if (param_4 == 2) {
    param_2 = param_2 + -0x3a;
    piVar3 = (int *)*param_2;
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
      FUN_0113987c(param_5,param_2);
      param_5 = param_5 + 0x3a;
    }
    else {
      FUN_0113987c(param_5,param_1);
      param_5 = param_5 + 0x3a;
      param_1 = param_2;
    }
  }
  else {
    if (param_4 == 0) {
      return;
    }
    if (param_4 != 1) {
      if (8 < (long)param_4) {
        uVar5 = param_4 >> 1;
        puVar1 = param_1 + uVar5 * 0x3a;
        FUN_0113a310(param_1,puVar1,param_3,uVar5,param_5,uVar5);
        lVar11 = param_4 - (param_4 >> 1);
        FUN_0113a310(puVar1,param_2,param_3,lVar11,param_5 + uVar5 * 0x3a,lVar11);
        puVar10 = puVar1;
        puVar8 = param_1;
        do {
          puVar7 = param_5;
          if (puVar10 == param_2) {
            if (puVar8 == puVar1) {
              return;
            }
            FUN_0113987c(puVar7,puVar8);
            if (puVar8 + 0x3a == puVar1) {
              return;
            }
            FUN_0113987c(puVar7 + 0x3a);
            if (puVar8 + 0x74 == puVar1) {
              return;
            }
            FUN_0113987c(puVar7 + 0x74);
            if (puVar8 + 0xae == puVar1) {
              return;
            }
            FUN_0113987c(puVar7 + 0xae);
            if (puVar8 + 0xe8 == puVar1) {
              return;
            }
            lVar11 = 0x740;
            do {
              FUN_0113987c((long)puVar7 + lVar11,(long)puVar8 + lVar11);
              lVar11 = lVar11 + 0x1d0;
            } while ((long)param_1 + (uVar5 * 0x1d0 - (long)puVar8) != lVar11);
            return;
          }
          piVar3 = (int *)*puVar10;
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
             (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar6 == 0)) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(uint *)((long)piVar3 + uVar6);
          }
          piVar3 = (int *)*puVar8;
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
             (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar6 == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)((long)piVar3 + uVar6);
          }
          if (uVar2 < uVar4) {
            FUN_0113987c(puVar7,puVar10);
            puVar10 = puVar10 + 0x3a;
          }
          else {
            FUN_0113987c(puVar7,puVar8);
            puVar8 = puVar8 + 0x3a;
          }
          param_5 = puVar7 + 0x3a;
        } while (puVar8 != puVar1);
        if (puVar10 == param_2) {
          return;
        }
        FUN_0113987c(param_5,puVar10);
        if (puVar10 + 0x3a == param_2) {
          return;
        }
        FUN_0113987c(puVar7 + 0x74);
        if (puVar10 + 0x74 == param_2) {
          return;
        }
        FUN_0113987c(puVar7 + 0xae);
        if (puVar10 + 0xae == param_2) {
          return;
        }
        FUN_0113987c(puVar7 + 0xe8);
        if (puVar10 + 0xe8 == param_2) {
          return;
        }
        FUN_0113987c(puVar7 + 0x122);
        if (puVar10 + 0x122 == param_2) {
          return;
        }
        lVar11 = 0x910;
        do {
          FUN_0113987c((long)param_5 + lVar11,(long)puVar10 + lVar11);
          lVar11 = lVar11 + 0x1d0;
        } while ((long)param_2 - (long)puVar10 != lVar11);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      FUN_0113987c(param_5,param_1);
      param_1 = param_1 + 0x3a;
      if (param_1 == param_2) {
        return;
      }
      lVar11 = 0;
      puVar8 = param_5;
      do {
        piVar3 = (int *)*param_1;
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
           (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar5 == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(uint *)((long)piVar3 + uVar5);
        }
        piVar3 = (int *)*puVar8;
        puVar10 = puVar8 + 0x3a;
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
           (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar5 == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)((long)piVar3 + uVar5);
        }
        if (uVar2 < uVar4) {
          FUN_0113987c(puVar10,puVar8);
          puVar1 = param_5;
          if (puVar8 != param_5) {
            lVar9 = lVar11;
            do {
              piVar3 = (int *)*param_1;
              if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar5 == 0)) {
                uVar2 = 0;
              }
              else {
                uVar2 = *(uint *)((long)piVar3 + uVar5);
              }
              piVar3 = (int *)((undefined8 *)((long)param_5 + lVar9))[-0x3a];
              if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
                 (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar5 == 0)) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(uint *)((long)piVar3 + uVar5);
              }
              puVar1 = (undefined8 *)((long)param_5 + lVar9);
              if (uVar4 <= uVar2) goto LAB_0113ac74;
              FUN_0113a684();
              lVar9 = lVar9 + -0x1d0;
            } while (lVar9 != 0);
            puVar1 = param_5;
          }
LAB_0113ac74:
          FUN_0113a684(puVar1,param_1);
        }
        else {
          FUN_0113987c(puVar10,param_1);
        }
        param_1 = param_1 + 0x3a;
        lVar11 = lVar11 + 0x1d0;
        puVar8 = puVar10;
        if (param_1 == param_2) {
          return;
        }
      } while( true );
    }
  }
  FUN_0113987c(param_5,param_1);
  return;
}


