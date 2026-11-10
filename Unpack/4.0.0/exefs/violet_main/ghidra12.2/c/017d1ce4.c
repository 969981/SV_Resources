/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d1ce4; name: FUN_017d1ce4
 */


void FUN_017d1ce4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return;
  }
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_1 + 0x50,param_1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  FUN_012e43f8(lVar1,"save process",0xffffffff,0x10);
  return;
}


