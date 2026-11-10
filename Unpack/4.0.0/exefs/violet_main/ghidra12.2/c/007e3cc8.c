/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e3cc8; name: FUN_007e3cc8
 */


undefined8 FUN_007e3cc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [32];
  
  FUN_007e5304(auStack_50,param_2);
  FUN_00796868(auStack_30,auStack_50);
  uVar1 = FUN_007e3c0c(param_1,auStack_30);
  FUN_0284e3d4(auStack_30);
  return uVar1;
}


