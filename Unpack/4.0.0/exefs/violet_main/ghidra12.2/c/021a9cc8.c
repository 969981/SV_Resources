/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021a9cc8; name: FUN_021a9cc8
 */


void FUN_021a9cc8(undefined4 param_1,undefined4 param_2,long param_3)

{
  code *pcVar1;
  undefined1 *local_1b0;
  code *local_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined4 local_190 [24];
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined4 local_110 [24];
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  
  local_1b0 = &LAB_021d3094;
  local_1a8 = FUN_02b607f0;
  local_1a0 = &LAB_02b607f4;
  puStack_198 = &LAB_02b60800;
  local_130 = &LAB_021d3144;
  local_128 = FUN_02b6080c;
  local_120 = &LAB_02b60810;
  puStack_118 = &LAB_02b6081c;
  local_b0 = &LAB_02b60828;
  local_a8 = FUN_02b6082c;
  local_a0 = &LAB_02b60830;
  puStack_98 = &LAB_02b6083c;
  local_190[0] = param_1;
  local_110[0] = param_2;
  local_90 = param_1;
  local_8c = param_2;
  FUN_021d14d4(param_3 + 0x138,&local_1b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(&local_90);
  }
  pcVar1 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (undefined1 *)0x0;
    puStack_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar1)(local_110);
  }
  pcVar1 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = (undefined1 *)0x0;
    puStack_198 = (undefined1 *)0x0;
    local_1b0 = (undefined1 *)0x0;
    local_1a8 = (code *)0x0;
    (*pcVar1)(local_190);
  }
  return;
}


