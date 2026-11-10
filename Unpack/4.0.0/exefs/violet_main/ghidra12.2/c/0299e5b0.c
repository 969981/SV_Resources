/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299e5b0; name: FUN_0299e5b0
 */


bool FUN_0299e5b0(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 == -1) {
    return false;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x80))
                    (*(long **)(param_1 + 0x60),param_4,param_2,param_3);
  return iVar1 == 1;
}


