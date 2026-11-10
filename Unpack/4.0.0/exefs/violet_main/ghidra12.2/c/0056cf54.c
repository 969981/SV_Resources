/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056cf54; name: FUN_0056cf54
 */


void FUN_0056cf54(undefined8 *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar5 = PTR_DAT_047cbe60;
  puVar2 = PTR_DAT_047cbe60;
  if (*(undefined **)(param_3 + 0x28) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_3 + 0x28);
  }
  uVar6 = FUN_0025da00(puVar2);
  *param_1 = uVar6;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar6 = FUN_01cf7e20();
  param_1[4] = uVar6;
  puVar8 = (undefined8 *)0x0;
  if (*(long *)(param_3 + 0x20) != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_3 + 0x20) + 8);
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    puVar1 = puVar8 + *(int *)(param_3 + 0x18);
    lVar9 = 0;
LAB_0056cff4:
    do {
      lVar4 = param_2[1];
      uVar6 = *puVar8;
      for (lVar3 = *param_2; lVar3 != lVar4; lVar3 = lVar3 + 0x48) {
        lVar7 = FUN_005612c0(lVar3);
        if (lVar7 == lVar9) {
          FUN_0056d324(param_1[2] + -0x28,lVar3,uVar6);
          puVar8 = puVar8 + 1;
          lVar9 = lVar9 + 1;
          if (puVar8 == puVar1) {
            return;
          }
          goto LAB_0056cff4;
        }
      }
      puVar2 = puVar5;
      if (*(undefined **)(param_3 + 0x28) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_3 + 0x28);
      }
                    /* try { // try from 0056cfd8 to 0056cfe3 has its CatchHandler @ 0056d064 */
      FUN_0056d080(param_1 + 1,uVar6,puVar2);
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (puVar8 != puVar1);
  }
  return;
}


