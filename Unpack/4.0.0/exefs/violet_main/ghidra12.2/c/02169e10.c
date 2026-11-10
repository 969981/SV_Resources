/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02169e10; name: FUN_02169e10
 */


void FUN_02169e10(long param_1,int param_2,long *param_3)

{
  undefined8 uVar1;
  long *local_8;
  
  if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8) >> 3))
  {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x2d8) + (long)param_2 * 8);
    local_8 = (long *)*param_3;
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 0x58))();
    }
    FUN_02169e7c(uVar1,&local_8);
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 0x60))();
    }
  }
  return;
}


