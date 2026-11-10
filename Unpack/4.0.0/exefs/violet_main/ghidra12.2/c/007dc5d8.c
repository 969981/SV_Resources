/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dc5d8; name: FUN_007dc5d8
 */


undefined8 FUN_007dc5d8(long param_1)

{
  undefined8 uVar1;
  
  FUN_007cddf8(*(undefined8 *)PTR_DAT_047d0a08,0);
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d13a8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "CreateMeshJob::CompleteProcess";
  uVar1 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = 0x640004;
  }
  return uVar1;
}


