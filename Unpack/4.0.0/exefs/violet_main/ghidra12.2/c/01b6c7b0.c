/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b6c7b0; name: FUN_01b6c7b0
 */


undefined8 FUN_01b6c7b0(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (((DAT_04808858 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04808858), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04808858);
  }
  uVar1 = FUN_01b6c810();
  FUN_00c5d960(param_1,uVar1);
  return 1;
}


