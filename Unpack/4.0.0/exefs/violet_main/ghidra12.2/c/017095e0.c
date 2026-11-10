/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017095e0; name: FUN_017095e0
 */


undefined8 FUN_017095e0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04800db8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04800db8);
      puVar5 = &DAT_04800da8;
      if (iVar1 != 0) {
        DAT_04800da8 = 0;
        DAT_04800db0 = 0;
        FUN_00100190(FUN_01784638,&DAT_04800da8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04800db8);
      }
    }
    else {
      puVar5 = &DAT_04800da8;
    }
  }
  iVar1 = FUN_00cc4dc0(param_1,2);
  iVar2 = FUN_00cc4dc0(param_1,3);
  if (((DAT_048010d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_048010d0), iVar3 != 0)) {
    DAT_04802138 = 1;
    __cxa_guard_release(&DAT_048010d0);
  }
  FUN_017096f4(puVar5,iVar1 != 0,iVar2 != 0);
  return 0;
}


