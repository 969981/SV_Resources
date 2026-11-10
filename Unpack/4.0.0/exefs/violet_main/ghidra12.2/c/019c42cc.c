/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c42cc; name: FUN_019c42cc
 */


undefined8 FUN_019c42cc(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_019c4328(*(undefined8 *)(param_1 + 0x48),param_3);
  if ((uVar1 & 1) == 0) {
    return 1;
  }
  uVar2 = FUN_019c4400(param_1,param_2,param_4);
  return uVar2;
}


