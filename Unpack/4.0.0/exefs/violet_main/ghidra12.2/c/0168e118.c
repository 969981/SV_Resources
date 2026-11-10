/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0168e118; name: FUN_0168e118
 */


void FUN_0168e118(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  code *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 auStack_80 [12];
  
  auStack_80[0] = *param_2;
  local_a0 = FUN_01db9a28;
  local_98 = FUN_00a2f368;
  local_90 = &LAB_00a2f36c;
  local_88 = &LAB_00a2f378;
  FUN_0168e18c(param_1,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (code *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


