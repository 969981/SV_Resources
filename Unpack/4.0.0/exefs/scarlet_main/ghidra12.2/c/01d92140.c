/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d92140; name: FUN_01d92140
 */


undefined8 FUN_01d92140(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (puVar7 = (undefined1 *)*puVar5, puVar7 == (undefined1 *)0x0)
     ) {
    if ((DAT_04832cb8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04832cb8);
      puVar7 = &DAT_04832ca0;
      if (iVar2 != 0) {
        DAT_04832ca0 = 0;
        DAT_04832ca8 = 0;
        FUN_00100190(FUN_0149ac54,&DAT_04832ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04832cb8);
      }
    }
    else {
      puVar7 = &DAT_04832ca0;
    }
  }
  uVar1 = FUN_00c92df0(param_1,2,0);
  uVar6 = FUN_00c646d0(param_1,3,0);
  iVar2 = FUN_00cc4dc0(param_1,4);
  iVar3 = FUN_00c92df0(param_1,5,0);
  if (((DAT_04832cc0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04832cc0), iVar4 != 0)) {
    DAT_04832de8 = 1;
    __cxa_guard_release(&DAT_04832cc0);
  }
  FUN_01d9228c(puVar7,uVar1,uVar6,iVar2 != 0,(long)iVar3);
  return 0;
}


