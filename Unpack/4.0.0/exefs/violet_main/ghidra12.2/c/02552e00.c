/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02552e00; name: FUN_02552e00
 */


void FUN_02552e00(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  void *__src;
  undefined1 auStack_60 [64];
  
  pcVar1 = FUN_0255bde8;
  if (DAT_04850ad0 == '\0') {
    pcVar1 = (code *)0x0;
  }
  __src = (void *)FUN_0255bfc4(param_2);
  memcpy(auStack_60,__src,0x40);
  FUN_0255c064(param_1,pcVar1,0,auStack_60);
  return;
}


