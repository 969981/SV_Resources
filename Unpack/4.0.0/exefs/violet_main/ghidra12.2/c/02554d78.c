/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02554d78; name: FUN_02554d78
 */


void FUN_02554d78(undefined1 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  
  pcVar1 = FUN_0255f818;
  if (DAT_04850b08 == '\0') {
    pcVar1 = (code *)0x0;
  }
  FUN_0255fa30(auStack_a0,param_2,pcVar1,0);
  *param_1 = 1;
  memcpy(auStack_60,auStack_a0,0x40);
  FUN_0255fab8(param_1 + 8,auStack_60);
  return;
}


