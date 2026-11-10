/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a50c0; name: FUN_015a50c0
 */


undefined8 FUN_015a50c0(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_0480b0a0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0480b0a0);
      puVar5 = &DAT_0480b088;
      if (iVar2 != 0) {
        DAT_0480b088 = 0;
        DAT_0480b090 = 0;
        FUN_00100190(FUN_00c937e0,&DAT_0480b088,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480b0a0);
      }
    }
    else {
      puVar5 = &DAT_0480b088;
    }
  }
  iVar2 = FUN_00cc4dc0(param_1,2);
  uVar1 = FUN_00c92df0(param_1,3,0);
  if (((DAT_0480b338 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0480b338), iVar3 != 0)) {
    DAT_0480be40 = 1;
    __cxa_guard_release(&DAT_0480b338);
  }
  FUN_015a51d4(puVar5,iVar2 != 0,uVar1);
  return 0;
}


