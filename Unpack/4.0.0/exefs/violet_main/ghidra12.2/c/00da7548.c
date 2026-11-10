/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da7548; name: FUN_00da7548
 */


void FUN_00da7548(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00da75d8();
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x470);
    if (iVar1 == 1) {
      FUN_00da77d0(param_1,param_2,0);
      return;
    }
    if (iVar1 == 4) {
      FUN_00da87d4(param_1,param_2,0);
      return;
    }
    if (iVar1 - 2U < 2) {
      FUN_00dab564(param_1,param_2,0);
      return;
    }
  }
  return;
}


