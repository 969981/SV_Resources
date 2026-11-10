/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c78750; name: FUN_01c78750
 */


void FUN_01c78750(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = 8;
  if (DAT_04815b70 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  FUN_01c450f0(auStack_38,param_2);
  FUN_01c78fdc(param_1,uVar1,auStack_38);
  FUN_00d8e444(auStack_38);
  return;
}


