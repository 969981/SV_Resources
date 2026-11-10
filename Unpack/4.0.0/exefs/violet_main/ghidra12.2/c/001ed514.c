/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ed514; name: FUN_001ed514
 */


void FUN_001ed514(undefined2 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = nnsocketInetHtons(param_2);
  *param_1 = uVar1;
  return;
}


