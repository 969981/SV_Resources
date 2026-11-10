/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299e644; name: FUN_0299e644
 */


bool FUN_0299e644(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0xb8))
                    (*(long **)(param_1 + 0x60),*(undefined8 *)(param_2 + 8));
  return iVar1 == 1;
}


