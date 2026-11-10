/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0265c9dc; name: FUN_0265c9dc
 */


void FUN_0265c9dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_0265debc;
  if (DAT_048559b8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0265e248(auStack_30,param_2,puVar1,0);
  FUN_0265e2c0(param_1,auStack_30);
  FUN_0265cca0(auStack_30);
  return;
}


