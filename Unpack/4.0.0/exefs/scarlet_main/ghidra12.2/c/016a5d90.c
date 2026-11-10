/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a5d90; name: FUN_016a5d90
 */


undefined8 FUN_016a5d90(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_0484ab78 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484ab78);
      puVar4 = &DAT_0484ab60;
      if (iVar1 != 0) {
        DAT_0484ab60 = 0;
        DAT_0484ab68 = 0;
        FUN_00100190(FUN_0175678c,&DAT_0484ab60,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484ab78);
      }
    }
    else {
      puVar4 = &DAT_0484ab60;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_0484ab58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0484ab58), iVar1 != 0)) {
    DAT_0484ab48 = PTR_LAB_047debe8;
    DAT_0484ab50 = 0;
    __cxa_guard_release(&DAT_0484ab58);
  }
  FUN_016a5e94(&DAT_0484ab48,puVar4,uVar3);
  return 0;
}


