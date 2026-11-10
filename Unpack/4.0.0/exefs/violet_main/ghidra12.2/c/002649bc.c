/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002649bc; name: FUN_002649bc
 */


void FUN_002649bc(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long extraout_x1;
  long lVar2;
  
  if (*(int *)PTR_DAT_047cc278 != 0) {
    FUN_0052b230(PTR_DAT_047cc278);
  }
  puVar1 = PTR_DAT_047cc280;
  FUN_004f9370(PTR_DAT_047cc280,0);
  lVar2 = *(long *)(*(long *)(puVar1 + 0x58) + 8);
  (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar2 == extraout_x1) {
    FUN_00264a48(param_1,param_2);
    return;
  }
  FUN_00505148(param_2,param_1);
  return;
}


