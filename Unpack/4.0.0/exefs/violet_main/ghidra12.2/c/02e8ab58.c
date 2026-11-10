/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e8ab58; name: FUN_02e8ab58
 */


void FUN_02e8ab58(ulong *param_1,long param_2,long param_3,long param_4,undefined2 param_5)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_047d1a08;
  local_38 = 0x30;
  plVar2 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar2,"MemberSlotWithData");
  }
  *plVar2 = (long)(PTR_DAT_047e3338 + 0x10);
  plVar2[1] = *param_1 & 0xfffffffffffffffc;
  plVar2[2] = param_2;
  *param_1 = *param_1 & 3 | (ulong)plVar2;
  *(undefined2 *)(plVar2 + 5) = param_5;
  plVar2[3] = param_3;
  plVar2[4] = param_4;
  *plVar2 = (long)&PTR_LAB_0460d638;
  return;
}


