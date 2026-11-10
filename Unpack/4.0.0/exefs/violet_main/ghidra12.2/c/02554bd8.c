/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02554bd8; name: FUN_02554bd8
 */


void FUN_02554bd8(undefined1 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [96];
  
  pcVar1 = FUN_0255f11c;
  if (DAT_04850b00 == '\0') {
    pcVar1 = (code *)0x0;
  }
  FUN_0255f348(auStack_e0,param_2,pcVar1,0);
  *param_1 = 1;
  memcpy(auStack_80,auStack_e0,0x60);
  FUN_0255f3bc(param_1 + 8,auStack_80);
  return;
}


