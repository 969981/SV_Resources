/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a3a938; name: FUN_02a3a938
 */


void FUN_02a3a938(undefined8 *param_1)

{
  code *pcVar1;
  code *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  
  local_80 = param_1 + 2;
  puStack_78 = param_1 + 4;
  local_70 = param_1 + 6;
  puStack_68 = param_1 + 8;
  local_a0 = FUN_02a3a9c4;
  local_98 = FUN_02a3ac2c;
  local_90 = &LAB_02a3ac30;
  puStack_88 = &LAB_02a3ac44;
  FUN_014911dc(*param_1,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (code *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(&local_80);
  }
  return;
}


