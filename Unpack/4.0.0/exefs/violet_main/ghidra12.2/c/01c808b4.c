/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c808b4; name: FUN_01c808b4
 */


void FUN_01c808b4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = (uint)DAT_04815bb0;
  FUN_01c450f0(auStack_38,param_2);
  FUN_01c80d98(param_1,-((ulong)~uVar1 & 1),auStack_38);
  FUN_00d8e444(auStack_38);
  return;
}


