/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298311c; name: FUN_0298311c
 */


void FUN_0298311c(long param_1,undefined4 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_018ce3ac(param_4);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar2 = FUN_014813f4(param_1,param_2);
  if ((param_3 & 1) == 0) {
    FUN_0124b0ac(*(undefined8 *)(param_1 + 0x20),param_2,param_4);
    return;
  }
  FUN_0197495c(*(undefined8 *)(param_1 + 0x20),uVar2);
  FUN_0124b0ac(*(undefined8 *)(param_1 + 0x20),param_2,param_4);
  FUN_018521d8(*(undefined8 *)(param_1 + 0x20),uVar2);
  return;
}


