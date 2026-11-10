/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f6644; name: FUN_026f6644
 */


void FUN_026f6644(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 auStack_80 [12];
  
  auStack_80[0] = *param_2;
  uVar1 = FUN_00ccbb30(param_1,0);
  FUN_026f66d8(auStack_80,uVar1);
  FUN_00ccbb18(param_1,0);
  FUN_02baac60(auStack_80);
  return;
}


