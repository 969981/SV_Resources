/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f3450; name: FUN_001f3450
 */


int FUN_001f3450(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_001f45a0(param_1 + 0x890,0x98);
  if (lVar2 == 0) {
    iVar1 = -0x385;
  }
  else {
    FUN_001f9154();
    FUN_001f4838(lVar2,param_2,param_3,param_4);
    iVar1 = FUN_001ee7d8(param_1,lVar2);
    if (iVar1 != 0) {
      FUN_001f4860(lVar2);
      FUN_001f45b0(param_1 + 0x890,lVar2);
    }
  }
  return iVar1;
}


