/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b45a80; name: FUN_01b45a80
 */


undefined8 FUN_01b45a80(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((DAT_04806b68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04806b68), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04806b68);
  }
  uVar1 = FUN_01b45ae0();
  FUN_00c5d960(param_1,uVar1);
  return 1;
}


