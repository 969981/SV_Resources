/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cae670; name: FUN_01cae670
 */


undefined8 FUN_01cae670(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  if (((DAT_04818228 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04818228), iVar1 != 0)) {
    DAT_0481b7e8 = 1;
    __cxa_guard_release(&DAT_04818228);
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_048181c8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048181c8);
      puVar4 = &DAT_048181b0;
      if (iVar1 != 0) {
        DAT_048181b0 = 0;
        DAT_048181b8 = 0;
        FUN_00100190(FUN_019badf4,&DAT_048181b0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048181c8);
      }
    }
    else {
      puVar4 = &DAT_048181b0;
    }
  }
  uVar3 = FUN_018fd1e0(param_1,2);
  FUN_01cae760(puVar4,uVar3);
  return 0;
}


