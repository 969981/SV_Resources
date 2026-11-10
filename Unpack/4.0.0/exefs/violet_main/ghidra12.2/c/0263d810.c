/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0263d810; name: FUN_0263d810
 */


undefined8 FUN_0263d810(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  uVar3 = FUN_0263d900(param_1,1);
  uVar4 = FUN_00c646d0(param_1,2,0);
  dVar5 = (double)FUN_00c41790(param_1,3,0);
  iVar1 = FUN_00c92df0(param_1,4,0);
  if ((DAT_048551c0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048551c0);
    if (iVar2 != 0) {
      DAT_04855958 = 1;
      __cxa_guard_release(&DAT_048551c0);
    }
  }
  uVar3 = FUN_0263d98c((double)(float)dVar5,uVar3,uVar4,(long)iVar1);
  FUN_00c5d960(param_1,uVar3);
  return 1;
}


