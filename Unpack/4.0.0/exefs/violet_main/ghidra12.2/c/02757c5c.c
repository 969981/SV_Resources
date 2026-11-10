/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02757c5c; name: FUN_02757c5c
 */


void FUN_02757c5c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x10);
  uVar1 = FUN_02757ccc();
  FUN_02757e8c(param_1,param_2,uVar1);
  return;
}


