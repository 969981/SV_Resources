/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297bbf4; name: FUN_0297bbf4
 */


undefined4 FUN_0297bbf4(long param_1,undefined4 param_2,short param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  lVar2 = FUN_019f8534(param_1 + 8,&local_4);
  uVar1 = 0;
  if (lVar2 != 0) {
    if (*(short *)(lVar2 + 0x18) == param_3) {
      uVar1 = *(undefined4 *)(lVar2 + 0x14);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


