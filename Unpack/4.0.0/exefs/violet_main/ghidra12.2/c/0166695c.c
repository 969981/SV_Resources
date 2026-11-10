/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0166695c; name: FUN_0166695c
 */


long FUN_0166695c(long param_1,int *param_2)

{
  uint *puVar1;
  ulong uVar2;
  long *local_50 [4];
  long *local_30;
  long local_8;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    local_8 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    local_8 = 0;
    if (uVar2 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar2);
      local_8 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_00cf95c4(local_50,&local_8);
  FUN_01666a04(param_1,*(undefined8 *)(param_1 + 8),local_50);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50[0] != (long *)0x0) {
    (**(code **)(*local_50[0] + 0x20))();
  }
  return param_1;
}


