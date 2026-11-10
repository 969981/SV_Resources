/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027be340; name: FUN_027be340
 */


void FUN_027be340(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0x990,0x10);
  uVar3 = *param_2;
  puVar1 = puVar2 + 6;
  *puVar2 = &PTR_LAB_045e1828;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[4] = uVar3;
  FUN_027be474(puVar1,param_3);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  FUN_027bea80(param_1,puVar1,puVar1);
  return;
}


