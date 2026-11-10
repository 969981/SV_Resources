/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0211d828; name: FUN_0211d828
 */


void FUN_0211d828(void)

{
  int iVar1;
  long in_x3;
  code *local_98;
  undefined1 auStack_80 [96];
  
  local_98 = (code *)0x0;
  if (*(code **)(in_x3 + 0x10) != (code *)0x0) {
    (**(code **)(in_x3 + 0x10))(in_x3 + 0x20,auStack_80);
    local_98 = *(code **)(in_x3 + 8);
  }
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  *(undefined8 *)PTR_DAT_047dcd80 = *(undefined8 *)PTR_DAT_047d3be8;
  if (local_98 != (code *)0x0) {
    (*local_98)(auStack_80);
  }
  return;
}


