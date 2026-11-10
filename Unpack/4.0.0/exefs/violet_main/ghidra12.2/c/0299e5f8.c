/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299e5f8; name: FUN_0299e5f8
 */


bool FUN_0299e5f8(long param_1,long param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
    return false;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x128))();
  return iVar1 == 1;
}


