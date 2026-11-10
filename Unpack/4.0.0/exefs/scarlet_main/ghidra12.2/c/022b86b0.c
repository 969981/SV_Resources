/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022b86b0; name: FUN_022b86b0
 */


undefined8 FUN_022b86b0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar3 = FUN_022b7a70(param_1,1);
  uVar1 = FUN_00c92df0(param_1,2,0);
  dVar4 = (double)FUN_00c41790(param_1,3,0);
  if ((DAT_04843f90 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04843f90);
    if (iVar2 != 0) {
      DAT_04843f80 = FUN_022b96a8;
      DAT_04843f88 = 0;
      __cxa_guard_release(&DAT_04843f90);
    }
  }
  FUN_022b8154((double)(float)dVar4,&DAT_04843f80,uVar3,uVar1);
  return 0;
}


