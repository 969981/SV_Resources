/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ec070; name: FUN_001ec070
 */


undefined8 FUN_001ec070(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_001eb850(0);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*(long *)PTR_PTR_047cb968 + 0x68))(param_1,param_2,param_3);
    return uVar2;
  }
  return 2;
}


