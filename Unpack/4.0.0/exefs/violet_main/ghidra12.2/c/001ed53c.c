/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ed53c; name: FUN_001ed53c
 */


void FUN_001ed53c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = nnsocketInetHtonl(param_2);
  *param_1 = uVar1;
  return;
}


