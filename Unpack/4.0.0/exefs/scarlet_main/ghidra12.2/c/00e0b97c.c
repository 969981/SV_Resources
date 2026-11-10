/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0b97c; name: FUN_00e0b97c
 */


void FUN_00e0b97c(ulong *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_047d1a08;
  local_48 = 0x28;
  plVar2 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar2,"MemberSlot");
  }
  *plVar2 = (long)(PTR_DAT_047e3338 + 0x10);
  plVar2[1] = *param_1 & 0xfffffffffffffffc;
  plVar2[2] = param_2;
  *param_1 = *param_1 & 3 | (ulong)plVar2;
  *plVar2 = (long)&PTR_LAB_0460cda8;
  plVar2[3] = param_3;
  plVar2[4] = param_4;
  return;
}


