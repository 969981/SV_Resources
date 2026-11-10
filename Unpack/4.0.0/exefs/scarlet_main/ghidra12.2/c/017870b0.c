/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017870b0; name: FUN_017870b0
 */


undefined8 FUN_017870b0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar2, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_04855bd8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04855bd8);
      puVar6 = &DAT_04855bc0;
      if (iVar1 != 0) {
        DAT_04855bc0 = 0;
        DAT_04855bc8 = 0;
        FUN_00100190(FUN_0158dc80,&DAT_04855bc0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04855bd8);
      }
    }
    else {
      puVar6 = &DAT_04855bc0;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  uVar4 = FUN_00c646d0(param_1,3,0);
  uVar5 = FUN_00c646d0(param_1,4,0);
  if (((DAT_04855bb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04855bb8), iVar1 != 0)) {
    DAT_04855d50 = 1;
    __cxa_guard_release(&DAT_04855bb8);
  }
  FUN_017871dc(puVar6,uVar3,uVar4,uVar5);
  return 0;
}


