/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ca408; name: FUN_007ca408
 */


void FUN_007ca408(long param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask(*(ThreadType **)(param_1 + 0xd0),-1,(ulong)uVar1);
  return;
}


