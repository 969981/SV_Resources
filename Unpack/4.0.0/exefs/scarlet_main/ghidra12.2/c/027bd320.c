/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bd320; name: FUN_027bd320
 */


void FUN_027bd320(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0x50,8);
  uVar5 = *param_2;
  *puVar3 = &PTR_LAB_045e1790;
  puVar3[1] = 0;
  puVar2 = PTR_DAT_047e20f0;
  puVar3[2] = 0;
  puVar3[3] = uVar5;
  puVar3[5] = 0;
  puVar3[6] = 0;
  plVar4 = puVar3 + 4;
  *plVar4 = (long)(puVar2 + 0x10);
  uVar5 = param_3[1];
  uVar1 = param_3[2];
  puVar3[7] = *param_3;
  puVar3[8] = uVar5;
  puVar3[9] = uVar1;
  *plVar4 = (long)&PTR_LAB_045e17c8;
  *param_1 = plVar4;
  param_1[1] = puVar3;
  FUN_027be0fc(param_1);
  return;
}


