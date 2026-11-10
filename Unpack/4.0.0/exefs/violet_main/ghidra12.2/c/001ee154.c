/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ee154; name: FUN_001ee154
 */


void FUN_001ee154(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x88);
    FUN_001f9168(lVar1,param_2);
    FUN_001f45b0(param_2,lVar1);
    lVar1 = lVar2;
  }
  return;
}


