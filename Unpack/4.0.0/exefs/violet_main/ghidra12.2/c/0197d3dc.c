/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0197d3dc; name: FUN_0197d3dc
 */


void FUN_0197d3dc(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 local_40 [16];
  undefined8 uStack_30;
  
  puVar1 = PTR_LAB_047d79e0;
  if (DAT_04831088 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_40 = FUN_0197d438(param_4,puVar1,0);
  *param_1 = 1;
  uStack_30 = param_3;
  FUN_0197d674(param_1 + 8,local_40);
  return;
}


