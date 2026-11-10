/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299e570; name: FUN_0299e570
 */


bool FUN_0299e570(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_3 + 8);
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x100))
                    (*(long **)(param_1 + 0x60),param_2,&local_18,1);
  return iVar1 == 1;
}


