/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008edbf8; name: FUN_008edbf8
 */


void FUN_008edbf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_008d42e0();
  FUN_008ee5b8(param_1 + 0x38,param_2,uVar1);
  uVar1 = FUN_008d42e0();
  FUN_008ee5b8(param_1 + 0x1e8,param_2,uVar1);
  if (*(int *)(param_1 + 4) == 3) {
    uVar1 = FUN_008d42e0();
    FUN_008ee5b8(param_1 + 0x398,param_2,uVar1);
    return;
  }
  return;
}


