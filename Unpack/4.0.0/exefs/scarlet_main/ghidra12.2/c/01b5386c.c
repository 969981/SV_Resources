/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b5386c; name: FUN_01b5386c
 */


void FUN_01b5386c(undefined8 param_1,undefined1 param_2,byte *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 local_4 [4];
  
  cVar2 = DAT_04809bd8;
  local_4[0] = param_2;
  if ((1 < *param_3) || (puVar4 = *(undefined8 **)(param_3 + 8), puVar4 == (undefined8 *)0x0)) {
    if ((DAT_04807cc0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04807cc0);
      if (iVar3 != 0) {
        DAT_04807c40 = 0;
        DAT_04807c78 = 0;
        DAT_04807cb0 = 0;
        FUN_00100190(FUN_0093274c,&DAT_04807c40,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04807cc0);
      }
      puVar4 = &DAT_04807c40;
    }
    else {
      puVar4 = &DAT_04807c40;
    }
  }
  puVar1 = PTR_LAB_047d4a10;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01b53ffc(param_1,puVar1,0,local_4,puVar4);
  return;
}


