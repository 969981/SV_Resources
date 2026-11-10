/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c8373c; name: FUN_00c8373c
 */


undefined4 FUN_00c8373c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined4 *local_80 [12];
  undefined4 local_4;
  
  local_80[0] = &local_4;
  local_a0 = &LAB_02e65aa0;
  local_98 = FUN_02e65ae0;
  local_4 = 0;
  local_90 = &LAB_02e65ae4;
  puStack_88 = &LAB_02e65af0;
  FUN_00c837c0(param_1,param_1 + 0xb8,param_2,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(local_80);
  }
  return local_4;
}


