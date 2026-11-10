/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b04be4; name: FUN_02b04be4
 */


undefined4 FUN_02b04be4(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0xbbc0;
  if (param_3 != 3) {
    lVar1 = 0;
  }
  lVar2 = param_1 + 0xbbd4;
  if (param_3 != 2) {
    lVar2 = lVar1;
  }
  lVar1 = param_1 + 0xbbe8;
  if (param_3 != 1) {
    lVar1 = lVar2;
  }
  return *(undefined4 *)(lVar1 + (param_2 & 0xff) * 4);
}


