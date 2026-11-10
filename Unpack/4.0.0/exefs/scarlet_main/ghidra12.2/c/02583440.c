/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02583440; name: FUN_02583440
 */


undefined8 FUN_02583440(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  uVar3 = FUN_02583530(param_1,1);
  uVar4 = FUN_00c646d0(param_1,2,0);
  dVar5 = (double)FUN_00c41790(param_1,3,0);
  iVar1 = FUN_00c92df0(param_1,4,0);
  if ((DAT_04850e30 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04850e30);
    if (iVar2 != 0) {
      DAT_04851f30 = 1;
      __cxa_guard_release(&DAT_04850e30);
    }
  }
  uVar3 = FUN_025835bc((double)(float)dVar5,uVar3,uVar4,(long)iVar1);
  FUN_00c5d960(param_1,uVar3);
  return 1;
}


