/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017cb1a0; name: FUN_017cb1a0
 */


void FUN_017cb1a0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_2 == param_3) {
    return;
  }
  uVar1 = FUN_017cb270(param_3,*(undefined8 *)(param_1 + 8),param_2);
  FUN_017cb1e8(param_1,uVar1);
  return;
}


