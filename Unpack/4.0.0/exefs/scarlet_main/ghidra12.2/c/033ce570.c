/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033ce570; name: FUN_033ce570
 */


void FUN_033ce570(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,long *param_5
                 )

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  
  uVar2 = *(uint *)(param_5 + 5);
  plVar1 = param_5 + 3;
  if (param_4 != 0) {
    plVar1 = param_5 + 4;
  }
  puVar6 = (undefined8 *)*plVar1;
  puVar9 = (undefined8 *)*param_5;
  puVar7 = (undefined4 *)param_5[1];
  puVar8 = (undefined4 *)param_5[2];
  uVar5 = param_3;
  if ((uVar2 & 1) != 0) {
    uVar5 = param_2;
    param_2 = param_3;
  }
  uVar3 = *(uint *)((long)param_5 + 0x2c) >> ((int)param_5[6] == 1);
  if ((param_4 == 1) && ((int)param_5[6] == 1)) {
    uVar10 = (ulong)(uVar2 - 1);
    (*(code *)puVar6[uVar10])(uVar3,puVar7[uVar10],puVar8[uVar10],param_1,puVar9[uVar10],uVar5);
    if (uVar2 - 1 != 0) {
      do {
        uVar4 = param_2;
        (*(code *)*puVar6)(uVar3,*puVar7,*puVar8,uVar5,*puVar9,uVar4);
        uVar10 = uVar10 - 1;
        param_2 = uVar5;
        uVar5 = uVar4;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar10 != 0);
    }
  }
  else {
    (*(code *)*puVar6)(uVar3,*puVar7,*puVar8,param_1,*puVar9,uVar5);
    if (1 < uVar2) {
      lVar11 = (ulong)uVar2 - 1;
      do {
        uVar4 = param_2;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
        (*(code *)*puVar6)(uVar3,*puVar7,*puVar8,uVar5,*puVar9,uVar4);
        lVar11 = lVar11 + -1;
        param_2 = uVar5;
        uVar5 = uVar4;
      } while (lVar11 != 0);
    }
  }
  return;
}


