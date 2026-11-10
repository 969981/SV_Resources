/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029dc63c; name: FUN_029dc63c
 */


void FUN_029dc63c(long param_1,long *param_2)

{
  long lVar1;
  
  if ((param_2 == (long *)0x0) || (param_2[1] - *param_2 == 0)) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178);
  FUN_029dc6b0(param_1 + 0x178,(lVar1 >> 3) + (param_2[1] - *param_2 >> 3));
  FUN_029dc6e0(*param_2,param_2[1],*(long *)(param_1 + 0x178) + lVar1);
  FUN_029dc790(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x180));
  return;
}


