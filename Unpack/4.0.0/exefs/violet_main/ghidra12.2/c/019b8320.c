/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b8320; name: FUN_019b8320
 */


void FUN_019b8320(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 local_50 [16];
  undefined8 uStack_40;
  undefined8 local_30;
  
  puVar1 = &LAB_02ba0130;
  if (DAT_048520f0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_50 = FUN_019b8380(param_5,puVar1,0);
  *param_1 = 1;
  uStack_40 = param_3;
  local_30 = param_4;
  FUN_019b8824(param_1 + 8,local_50);
  return;
}


