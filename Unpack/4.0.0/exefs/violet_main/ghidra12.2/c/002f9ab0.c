/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f9ab0; name: FUN_002f9ab0
 */


undefined8 FUN_002f9ab0(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)FUN_00343a90(param_1,"grpc.target_authority_table");
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 2) {
      return 0;
    }
    uVar2 = *(undefined8 *)(piVar1 + 4);
  }
  return uVar2;
}


