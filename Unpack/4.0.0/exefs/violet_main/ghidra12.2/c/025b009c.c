/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025b009c; name: FUN_025b009c
 */


void FUN_025b009c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_025b1ac4;
  if (DAT_04852288 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_025b1e50(auStack_30,param_2,puVar1,0);
  FUN_025b1ed0(param_1,auStack_30);
  FUN_025b0358(auStack_30);
  return;
}


