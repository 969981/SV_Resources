/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c90bc; name: FUN_001c90bc
 */


long FUN_001c90bc(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0xe8) != 0) {
    FUN_001dc298(lVar2,3,2);
  }
  lVar1 = FUN_001c9140(param_1,param_2,param_3);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
  }
  if (*(long *)(lVar2 + 0xe8) != 0) {
    FUN_001dc2d8(lVar2,3);
  }
  return lVar1;
}


