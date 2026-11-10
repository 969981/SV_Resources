/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccba54; name: FUN_00ccba54
 */


void FUN_00ccba54(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [96];
  
  local_a0 = &LAB_02baea58;
  local_98 = FUN_02baea68;
  local_90 = &LAB_02baea6c;
  puStack_88 = &LAB_02baea70;
  FUN_00ccbac4(param_1,&local_a0,param_2);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


