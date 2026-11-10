/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00de98c8; name: FUN_00de98c8
 */


void FUN_00de98c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00dea1e0(param_2 + 0xb0,*(undefined8 *)(param_1 + 8),param_2);
  lVar2 = *(long *)(param_1 + 8);
  if (((lVar2 != lVar1) && (FUN_01836250(lVar2 + -0xb0), lVar2 + -0xb0 != lVar1)) &&
     (FUN_01836250(lVar2 + -0x160), lVar2 + -0x160 != lVar1)) {
    do {
      FUN_01836250(lVar2 + -0x210);
      lVar2 = lVar2 + -0xb0;
    } while (lVar1 + 0x160 != lVar2);
  }
  *(long *)(param_1 + 8) = lVar1;
  return;
}


