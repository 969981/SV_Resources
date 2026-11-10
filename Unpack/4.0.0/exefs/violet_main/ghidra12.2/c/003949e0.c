/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003949e0; name: FUN_003949e0
 */


bool FUN_003949e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  if (param_2 == param_4) {
    iVar1 = FUN_00394a20(param_1,param_3,param_2);
    return iVar1 == 0;
  }
  return false;
}


