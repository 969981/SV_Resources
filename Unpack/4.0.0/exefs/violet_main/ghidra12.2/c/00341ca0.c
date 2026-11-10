/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00341ca0; name: FUN_00341ca0
 */


void FUN_00341ca0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00343a90(param_1,"grpc.enable_deadline_checking");
  uVar1 = FUN_00344190(param_1);
  FUN_003440e0(uVar2,~uVar1 & 1);
  return;
}


