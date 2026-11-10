/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bce40; name: FUN_027bce40
 */


void FUN_027bce40(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar2 = *(long **)(param_2 + 0x18);
  puVar1 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x30,8);
  *puVar1 = &PTR_LAB_045e17f0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = plVar2;
  FUN_027bd414(puVar1 + 4,param_2);
  *param_1 = (long)(puVar1 + 4);
  param_1[1] = (long)puVar1;
  local_50 = 0;
  uStack_48 = 0;
  FUN_027bd4b8(&local_50);
  return;
}


