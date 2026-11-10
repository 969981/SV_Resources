/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a32d0; name: FUN_007a32d0
 */


undefined8 FUN_007a32d0(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int local_30 [4];
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  uVar1 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x18);
  (**(code **)(*param_2 + 0x18))
            (local_30,param_2,*(long *)(param_1 + 8) + (ulong)uVar1,*(int *)(param_1 + 0x10) - uVar1
            );
  if (local_30[0] == 0) {
    iVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar2;
    return 1;
  }
  return 0;
}


