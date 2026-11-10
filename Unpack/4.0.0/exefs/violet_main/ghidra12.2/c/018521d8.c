/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018521d8; name: FUN_018521d8
 */


void FUN_018521d8(long param_1,long *param_2)

{
  int iVar1;
  
  if ((param_2 == (long *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x98))(param_2), iVar1 == 0)) {
    return;
  }
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),200,iVar1);
  return;
}


