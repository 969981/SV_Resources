/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216f710; name: FUN_0216f710
 */


void FUN_0216f710(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,long param_6,long param_7,long param_8)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined8 unaff_x25;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if (param_6 != 0) {
    while( true ) {
      if ((param_5 <= param_8) || (param_6 <= param_8)) {
        if (param_6 < param_5) {
          lVar10 = param_7;
          if (param_2 == param_3) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            puVar2 = param_2;
            do {
              FUN_0113987c(lVar10,puVar2);
              puVar2 = puVar2 + 0x3a;
              lVar11 = lVar11 + 1;
              lVar10 = lVar10 + 0x1d0;
            } while (param_3 != puVar2);
          }
          FUN_0216fe40(lVar10,lVar10,param_7,param_7,param_2,param_2,param_1,param_1,param_3,param_3
                       ,unaff_x29,unaff_x30,unaff_x25);
        }
        else {
          lVar10 = param_7;
          if (param_1 == param_2) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            puVar2 = param_1;
            do {
              FUN_0113987c(lVar10,puVar2);
              puVar2 = puVar2 + 0x3a;
              lVar11 = lVar11 + 1;
              lVar10 = lVar10 + 0x1d0;
            } while (param_2 != puVar2);
          }
          FUN_0216fd40(param_7,lVar10,param_2,param_3,param_1);
        }
        if (param_7 != 0) {
          for (; lVar11 != 0; lVar11 = lVar11 + -1) {
            FUN_01139754(param_7);
            param_7 = param_7 + 0x1d0;
          }
        }
        return;
      }
      if (param_5 == 0) break;
      piVar5 = (int *)*param_2;
      lVar10 = -param_5;
      while( true ) {
        if (*(ushort *)((long)piVar5 - (long)*piVar5) < 9) {
          uVar6 = 0;
        }
        else {
          uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4];
          uVar6 = 0;
          if (uVar7 != 0) {
            uVar6 = *(uint *)((long)piVar5 + uVar7);
          }
        }
        piVar9 = (int *)*param_1;
        if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 9) ||
           (uVar7 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[4], uVar7 == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)((long)piVar9 + uVar7);
        }
        if (uVar6 < uVar8) break;
        param_1 = param_1 + 0x3a;
        bVar1 = lVar10 == -1;
        lVar10 = lVar10 + 1;
        if (bVar1) {
          return;
        }
      }
      param_5 = -lVar10;
      if (param_5 < param_6) {
        lVar11 = param_6;
        if (param_6 < 0) {
          lVar11 = param_6 + 1;
        }
        lVar11 = lVar11 >> 1;
        puVar3 = param_2 + lVar11 * 0x3a;
        puVar2 = (undefined8 *)FUN_0216fb10(param_1,param_2,puVar3);
        param_5 = ((long)puVar2 - (long)param_1 >> 4) * 0x34f72c234f72c235;
      }
      else {
        if (lVar10 == -1) {
          FUN_0113a9e0(param_1,param_2);
          return;
        }
        if (param_5 < 0) {
          param_5 = param_5 + 1;
        }
        param_5 = param_5 >> 1;
        puVar2 = param_1 + param_5 * 0x3a;
        puVar3 = (undefined8 *)FUN_0216fbc0(param_2,param_3,puVar2);
        lVar11 = ((long)puVar3 - (long)param_2 >> 4) * 0x34f72c234f72c235;
      }
      if (puVar2 == param_2) {
        puVar4 = puVar3;
      }
      else if (param_2 == puVar3) {
        puVar4 = puVar2;
      }
      else {
        puVar4 = (undefined8 *)FUN_0216fc70(puVar2,param_2,puVar3);
      }
      if (param_5 + lVar11 < (param_6 - (param_5 + lVar11)) - lVar10) {
        FUN_0216f710(param_1,puVar2,puVar4,param_4,param_5,lVar11,param_7,param_8);
        lVar11 = param_6 - lVar11;
        param_1 = puVar4;
        param_5 = -(param_5 + lVar10);
        param_2 = puVar3;
      }
      else {
        FUN_0216f710(puVar4,puVar3,param_3,param_4,-(param_5 + lVar10),param_6 - lVar11,param_7,
                     param_8);
        param_3 = puVar4;
        param_2 = puVar2;
      }
      param_6 = lVar11;
      if (lVar11 == 0) {
        return;
      }
    }
  }
  return;
}


