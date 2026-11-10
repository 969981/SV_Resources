/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011816bc; name: FUN_011816bc
 */


void FUN_011816bc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x500) == '\0') {
    if (((*PTR_DAT_047d94e8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d94e8);
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d94f0;
    *(undefined8 *)PTR_DAT_047d94f8 = uVar2;
    FUN_01181758(uVar2,param_1);
    *(undefined1 *)(param_1 + 0x500) = 1;
  }
  return;
}


