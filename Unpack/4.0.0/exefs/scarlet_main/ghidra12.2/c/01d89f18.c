/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d89f18; name: FUN_01d89f18
 */


void FUN_01d89f18(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 auStack_80 [96];
  
  if (((DAT_048371d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048371d8), iVar1 != 0)) {
    FUN_00100190(&LAB_00a8a92c,&DAT_048371c8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048371d8);
  }
  DAT_048371e0 = DAT_048371c8;
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2 + 0x20,auStack_80);
    if (*(code **)(param_2 + 8) != (code *)0x0) {
      (**(code **)(param_2 + 8))(auStack_80);
    }
  }
  return;
}


