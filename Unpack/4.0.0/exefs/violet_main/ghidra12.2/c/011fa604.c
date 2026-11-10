/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011fa604; name: FUN_011fa604
 */


void FUN_011fa604(undefined8 param_1)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [96];
  
  local_a0 = &LAB_0158dafc;
  local_98 = FUN_02bce5fc;
  local_90 = &LAB_02bce600;
  puStack_88 = &LAB_02bce604;
  FUN_011fa670(param_1,&local_a0);
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


