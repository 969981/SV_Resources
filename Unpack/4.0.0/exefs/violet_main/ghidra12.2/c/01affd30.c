/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01affd30; name: FUN_01affd30
 */


undefined8 FUN_01affd30(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04802668 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04802668), iVar2 != 0)) {
    DAT_0451b5d0 = 1;
    __cxa_guard_release(&DAT_04802668);
  }
  uVar3 = FUN_01affbc0(param_1,1);
  uVar1 = FUN_01affc4c(&DAT_0451b5d0,uVar3);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


