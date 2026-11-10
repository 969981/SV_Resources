/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012a8e10; name: FUN_012a8e10
 */


undefined8 FUN_012a8e10(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00c646d0(param_1,1,0);
  if ((DAT_04854aa0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04854aa0);
    if (iVar2 != 0) {
      __cxa_guard_release(&DAT_04854aa0);
    }
  }
  uVar1 = FUN_012a8e90(uVar3);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


