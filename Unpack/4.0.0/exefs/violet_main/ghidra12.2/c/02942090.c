/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02942090; name: FUN_02942090
 */


undefined2 FUN_02942090(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 local_8 [4];
  
  uVar1 = FUN_029420c4(*(undefined8 *)(param_1 + 0x28));
  FUN_029420cc(uVar1,local_8,param_2);
  return local_8[0];
}


