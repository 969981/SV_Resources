/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025c44a0; name: FUN_025c44a0
 */


undefined8 FUN_025c44a0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  char local_48 [8];
  undefined1 auStack_40 [32];
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04852c68 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04852c68);
      if (iVar1 != 0) {
        DAT_04852c58 = 0;
        DAT_04852c60 = 0;
        FUN_00100190(&LAB_02ba0eb8,&DAT_04852c58,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04852c68);
      }
      puVar3 = &DAT_04852c58;
    }
    else {
      puVar3 = &DAT_04852c58;
    }
  }
  if (((DAT_04852ce0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04852ce0), iVar1 != 0)) {
    DAT_04852cd0 = FUN_025cdfc0;
    DAT_04852cd8 = 0;
    __cxa_guard_release(&DAT_04852ce0,puVar3);
  }
  FUN_025c45cc(local_48,&DAT_04852cd0,puVar3);
  FUN_00d31580(param_1,local_48);
  if (local_48[0] == '\x01') {
    FUN_025c4610(auStack_40,0);
  }
  return 1;
}


