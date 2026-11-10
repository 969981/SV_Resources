/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029828dc; name: FUN_029828dc
 */


void FUN_029828dc(long param_1,undefined4 param_2,byte param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 7) {
    uVar1 = 0x23f;
  }
  else {
    if (param_3 == 7) {
      return;
    }
    uVar1 = 0x23e;
  }
  FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,param_2,uVar1,0xffff0000);
  return;
}


