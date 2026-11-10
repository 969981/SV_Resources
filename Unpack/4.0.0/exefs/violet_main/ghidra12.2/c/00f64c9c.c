/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f64c9c; name: FUN_00f64c9c
 */


void FUN_00f64c9c(ulong *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [104];
  undefined8 local_38;
  
  puVar1 = PTR_DAT_047d1a08;
  local_38 = 0xa0;
  puVar2 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(puVar2,"GlobalSlot");
  }
  local_c0 = 0;
  local_b8 = (code *)0x0;
  local_b0 = (code *)0x0;
  local_a8 = 0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,auStack_a0);
    local_a8 = param_2[3];
    local_b8 = (code *)param_2[1];
    local_c0 = *param_2;
    local_b0 = (code *)param_2[2];
  }
  *puVar2 = &PTR_LAB_045ab518;
  puVar2[1] = *param_1 & 0xfffffffffffffffc;
  puVar2[2] = 0;
  *param_1 = *param_1 & 3 | (ulong)puVar2;
  *puVar2 = &PTR_LAB_045ab4c8;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  if (local_b0 != (code *)0x0) {
    (*local_b0)(auStack_a0,puVar2 + 8);
    puVar2[7] = local_a8;
    puVar2[4] = local_c0;
    puVar2[5] = local_b8;
    puVar2[6] = local_b0;
  }
  if (local_b8 != (code *)0x0) {
    (*local_b8)(auStack_a0);
  }
  return;
}


