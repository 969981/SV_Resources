/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019aa930; name: FUN_019aa930
 */


void FUN_019aa930(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *local_8;
  
  local_8 = (long *)*param_2;
  lVar2 = *param_1;
  uVar1 = (**(code **)(*local_8 + 0x178))(local_8);
  if ((uVar1 & 1) != 0) {
    FUN_019aa978(lVar2 + 0x48,&local_8);
  }
  return;
}


