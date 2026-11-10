/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0263823c; name: FUN_0263823c
 */


void FUN_0263823c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_8 [8];
  
  puVar1 = PTR_LAB_047e0310;
  if (DAT_04855940 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_02639a18(auStack_8,param_2,puVar1,0);
  FUN_02639a90(param_1,auStack_8);
  FUN_02635d94(auStack_8);
  return;
}


