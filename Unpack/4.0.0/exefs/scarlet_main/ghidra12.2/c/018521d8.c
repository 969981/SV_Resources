/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


