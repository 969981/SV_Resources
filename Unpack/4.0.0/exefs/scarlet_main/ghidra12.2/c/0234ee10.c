/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0234ee10; name: FUN_0234ee10
 */


undefined8 FUN_0234ee10(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar9 = (undefined1 *)*puVar3, puVar9 == (undefined1 *)0x0)
     ) {
    if ((DAT_04848260 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04848260);
      puVar9 = &DAT_04848248;
      if (iVar1 != 0) {
        DAT_04848248 = 0;
        DAT_04848250 = 0;
        FUN_00100190(FUN_0234d140,&DAT_04848248,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04848260);
      }
    }
    else {
      puVar9 = &DAT_04848248;
    }
  }
  uVar4 = FUN_00c92df0(param_1,2,0);
  uVar5 = FUN_00c92df0(param_1,3,0);
  uVar6 = FUN_00c646d0(param_1,4,0);
  uVar7 = FUN_00c646d0(param_1,5,0);
  uVar8 = FUN_00c92df0(param_1,6,0);
  iVar1 = FUN_00cc4dc0(param_1,7);
  if (((DAT_048482a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048482a0), iVar2 != 0)) {
    DAT_048490f8 = 1;
    __cxa_guard_release(&DAT_048482a0);
  }
  FUN_0234ef94(puVar9,uVar4,uVar5,uVar6,uVar7,uVar8,iVar1 != 0);
  return 0;
}


