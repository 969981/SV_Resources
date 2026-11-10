/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01632fe4; name: FUN_01632fe4
 */


void FUN_01632fe4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x260);
  uVar1 = FUN_0163391c(*(undefined8 *)(lVar2 + 0x38));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_01636f20(lVar2,param_2);
  return;
}


