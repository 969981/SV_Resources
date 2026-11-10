/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034ef60; name: FUN_0034ef60
 */


void FUN_0034ef60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 *param_9)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)FUN_0038c780(0x1380);
  memset(puVar2 + 4,0,0x1360);
  uVar7 = *param_9;
  uVar6 = param_9[3];
  uVar3 = param_9[2];
  puVar2[1] = param_9[1];
  *puVar2 = uVar7;
  puVar2[3] = uVar6;
  puVar2[2] = uVar3;
  FUN_0034f840(puVar2 + 4,0,param_7);
  puVar2[0x212] = param_6;
  puVar2[0x20f] = param_5;
  puVar1 = PTR_PTR_047ccc20;
  puVar5 = (undefined *)param_4[9];
  puVar2[0x213] = param_1;
  if (puVar5 != (undefined *)0x0) {
    puVar1 = puVar5;
  }
  puVar2[0x211] = puVar1;
  puVar2[0x214] = param_2;
  puVar2[0x26e] = 0;
  uVar3 = FUN_003590f0(param_3);
  puVar2[0x263] = &LAB_0034f250;
  puVar2[0x26f] = uVar3;
  puVar2[0x264] = puVar2;
  puVar2[0x265] = 0;
  puVar2[0x267] = &LAB_0034f370;
  puVar2[0x268] = puVar2;
  puVar2[0x269] = 0;
  FUN_00368450(puVar2 + 0x218);
  FUN_00368450(puVar2 + 0x23d);
  FUN_003546f0(puVar2 + 0x215,param_8);
  uVar3 = FUN_0038ccb0(*param_4);
  puVar2[0x20d] = uVar3;
  uVar3 = FUN_0038ccb0(param_4[1]);
  puVar2[0x20e] = uVar3;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_00358050(puVar2[0x214],*(undefined8 *)puVar2[0x213]);
  uVar6 = *(undefined8 *)puVar2[0x211];
  uVar3 = *param_4;
  uVar7 = *(undefined8 *)puVar2[0x213];
  puVar4 = (undefined8 *)FUN_0038c780(0x30);
  puVar4[3] = PTR_FUN_047cc978;
  *puVar4 = &LAB_0034f3c0;
  puVar4[1] = puVar2;
  puVar4[4] = puVar4;
  puVar4[5] = 0;
  FUN_003582b0(uVar3,uVar6,uVar7,puVar4 + 2,puVar2 + 0x20a);
  return;
}


