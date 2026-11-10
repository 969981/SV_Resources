/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029837bc; name: FUN_029837bc
 */


void FUN_029837bc(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  
  uVar7 = FUN_01243584();
  puVar1 = param_3 + 2;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar5 = FUN_0124b1e4(puVar1);
  uVar6 = FUN_0124b1d4(puVar1);
  puVar8 = (undefined4 *)FUN_0124b1dc(puVar1);
  uVar4 = *puVar8;
  lVar9 = FUN_0124b1dc(puVar1);
  FUN_02982b74(uVar7,uVar2,uVar3,uVar5,uVar6,uVar4,*(undefined4 *)(lVar9 + 4));
  return;
}


