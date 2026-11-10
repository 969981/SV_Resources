/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216dba0; name: FUN_0216dba0
 */


void FUN_0216dba0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN_02140df8(param_3 + 0x4e0,param_1);
  if (lVar1 == 0) {
    return;
  }
  FUN_02140390(param_3 + 0x40,lVar1 + 0x18);
  FUN_02140f04(param_3 + 0x4e0,lVar1);
  return;
}


