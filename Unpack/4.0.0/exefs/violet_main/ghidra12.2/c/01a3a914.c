/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a3a914; name: FUN_01a3a914
 */


void FUN_01a3a914(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined4 *local_90;
  undefined4 *puStack_88;
  undefined4 *local_80;
  undefined4 local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_90 = &uStack_4;
  puStack_88 = &local_8;
  local_80 = &local_24;
  local_b0 = &LAB_01960e4c;
  local_a8 = FUN_00a8ac68;
  local_a0 = &LAB_00a8ac6c;
  puStack_98 = &LAB_00a8ac80;
  local_24 = param_3;
  local_8 = param_2;
  uStack_4 = param_1;
  FUN_014911dc(*param_4,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(&local_90);
  }
  return;
}


