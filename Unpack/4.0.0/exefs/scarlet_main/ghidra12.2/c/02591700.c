/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02591700; name: FUN_02591700
 */


void FUN_02591700(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char local_40 [32];
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04850f78 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04850f78);
      puVar4 = &DAT_04850f50;
      if (iVar1 != 0) {
        DAT_04850f50 = 0;
        DAT_04850f58 = 0;
        FUN_00100190(&LAB_011d261c,&DAT_04850f50,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04850f78);
      }
    }
    else {
      puVar4 = &DAT_04850f50;
    }
  }
  uVar3 = FUN_00c92df0(param_1,2,0);
  if (((DAT_04850ff0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04850ff0), iVar1 != 0)) {
    DAT_04851f88 = 1;
    __cxa_guard_release(&DAT_04850ff0,uVar3);
  }
  FUN_0259181c(local_40,puVar4,uVar3);
  FUN_02591890(param_1,local_40);
  return;
}


