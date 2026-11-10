/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eaf224; name: FUN_01eaf224
 */


undefined4 FUN_01eaf224(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00dc05e0(param_1 + 0x38);
  if (*(long *)(param_1 + 0xb8) == lVar1) {
    uVar2 = 0;
  }
  else if (*(long *)(param_1 + 0xc0) == lVar1) {
    uVar2 = 1;
  }
  else if (*(long *)(param_1 + 200) == lVar1) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
    if (*(long *)(param_1 + 0xd0) != lVar1) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}


