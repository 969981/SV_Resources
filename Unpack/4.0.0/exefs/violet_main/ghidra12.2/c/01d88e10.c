/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d88e10; name: FUN_01d88e10
 */


undefined8 FUN_01d88e10(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00c646d0(param_1,1,0);
  if ((DAT_04832618 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04832618);
    if (iVar1 != 0) {
      __cxa_guard_release(&DAT_04832618);
    }
  }
  uVar2 = FUN_01d88e90(uVar2);
  FUN_00c85bd0(param_1,uVar2);
  return 1;
}


