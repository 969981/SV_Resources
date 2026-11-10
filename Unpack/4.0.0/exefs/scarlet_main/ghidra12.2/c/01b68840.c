/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b68840; name: FUN_01b68840
 */


undefined8 FUN_01b68840(undefined8 param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 local_18 [4];
  undefined2 local_14 [2];
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar5, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_04808630 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04808630);
      puVar6 = &DAT_04808618;
      if (iVar3 != 0) {
        DAT_04808618 = 0;
        DAT_04808620 = 0;
        FUN_00100190(&LAB_01b69a4c,&DAT_04808618,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04808630);
      }
    }
    else {
      puVar6 = &DAT_04808618;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  iVar3 = FUN_00cc4dc0(param_1,3);
  if (((DAT_04808658 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04808658), iVar4 != 0)) {
    DAT_04809b50 = '\x01';
    __cxa_guard_release(&DAT_04808658);
  }
  local_18[0] = iVar3 != 0;
  puVar1 = PTR_LAB_047d4b38;
  if (DAT_04809b50 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_14[0] = uVar2;
  FUN_01683460(puVar6,puVar1,0,local_14,local_18);
  return 0;
}


