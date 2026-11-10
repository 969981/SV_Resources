/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012e3a40; name: FUN_012e3a40
 */


void FUN_012e3a40(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong local_38;
  
  nn::fs::QueryMountRomCacheSize(&local_38);
  uVar1 = local_38;
  pvVar2 = (void *)(**(code **)(*param_2 + 0x10))(param_2,local_38,8);
  *param_1 = pvVar2;
  param_1[1] = param_2;
  param_1[2] = uVar1;
  param_1[3] = 8;
  nn::fs::MountRom("data",pvVar2,local_38);
  return;
}


