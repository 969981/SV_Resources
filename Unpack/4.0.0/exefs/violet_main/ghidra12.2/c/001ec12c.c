/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ec12c; name: FUN_001ec12c
 */


void FUN_001ec12c(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_001eb850(0);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001ec178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)PTR_PTR_047cb968 + 0x78))(param_1,param_2);
    return;
  }
  return;
}


