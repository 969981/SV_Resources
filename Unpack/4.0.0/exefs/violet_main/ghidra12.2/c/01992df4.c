/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01992df4; name: FUN_01992df4
 */


uint FUN_01992df4(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((*param_1 == 0) || (lVar2 = FUN_00e895f4(*(undefined8 *)(*param_1 + 0x170)), lVar2 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_01992e2c();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}


