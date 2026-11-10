/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024ab060; name: FUN_024ab060
 */


void FUN_024ab060(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_2;
  puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x40,8);
  if (puVar5 == (undefined8 *)0x0) {
    (**(code **)(*plVar6 + 0xe8))(plVar6);
  }
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  uVar2 = *param_2;
  uVar4 = param_2[1];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_LAB_045bc158;
  puVar5[3] = uVar2;
  puVar5[4] = uVar4;
  puVar5[5] = uVar1;
  puVar5[6] = uVar3;
  puVar5[7] = &PTR_LAB_045bc190;
  *param_1 = puVar5 + 7;
  param_1[1] = puVar5;
  return;
}


