/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156b480; name: FUN_0156b480
 */


void FUN_0156b480(long param_1,int param_2,long *param_3)

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
    FUN_0156b4ec(uVar1,&local_8);
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 0x60))();
    }
  }
  return;
}


