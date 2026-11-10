/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02170e90; name: FUN_02170e90
 */


void FUN_02170e90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  
  if (param_1 != param_2) {
    FUN_0113987c(param_3,param_1);
    param_1 = param_1 + 0x3a;
    if (param_1 != param_2) {
      lVar9 = 0;
      puVar7 = param_3;
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
          puVar2 = param_3;
          if (puVar7 != param_3) {
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
              piVar4 = (int *)((undefined8 *)((long)param_3 + lVar8))[-0x3a];
              if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
                 (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar6 == 0)) {
                uVar5 = 0;
              }
              else {
                uVar5 = *(uint *)((long)piVar4 + uVar6);
              }
              puVar2 = (undefined8 *)((long)param_3 + lVar8);
              if (uVar5 <= uVar3) goto LAB_02170fe0;
              FUN_0113a684();
              lVar8 = lVar8 + -0x1d0;
            } while (lVar8 != 0);
            puVar2 = param_3;
          }
LAB_02170fe0:
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


