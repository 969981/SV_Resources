/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


