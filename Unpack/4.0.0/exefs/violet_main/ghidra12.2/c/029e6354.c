/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e6354; name: FUN_029e6354
 */


undefined8 FUN_029e6354(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 *local_80 [12];
  undefined8 local_8;
  
  local_80[0] = &local_8;
  local_a0 = &LAB_02e65f2c;
  local_98 = FUN_02e65f6c;
  local_8 = 0;
  local_90 = &LAB_02e65f70;
  puStack_88 = &LAB_02e65f7c;
  FUN_00c837c0(param_1,param_1 + 0x80,param_2,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(local_80);
  }
  return local_8;
}


