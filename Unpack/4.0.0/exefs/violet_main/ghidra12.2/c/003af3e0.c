/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003af3e0; name: FUN_003af3e0
 */


undefined8 FUN_003af3e0(long param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = 0x1d0;
  if (param_3 != 0) {
    lVar1 = 0x1c8;
  }
  FUN_00484650(*(undefined8 *)(param_1 + lVar1));
  *(long *)(param_1 + lVar1) = param_2;
  if ((param_2 != 0) && (param_4 != 0)) {
    FUN_004847f0(param_2);
  }
  return 1;
}


