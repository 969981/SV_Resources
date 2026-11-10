/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026817b0; name: FUN_026817b0
 */


undefined8 FUN_026817b0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 local_24 [4];
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04856680 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04856680);
      puVar5 = &DAT_04856668;
      if (iVar2 != 0) {
        DAT_04856668 = 0;
        DAT_04856670 = 0;
        FUN_00100190(FUN_016a0834,&DAT_04856668,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04856680);
      }
    }
    else {
      puVar5 = &DAT_04856668;
    }
  }
  iVar2 = FUN_00cc4dc0(param_1,2);
  if (((DAT_04856660 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04856660), iVar3 != 0)) {
    DAT_048581c0 = '\x01';
    __cxa_guard_release(&DAT_04856660);
  }
  local_24[0] = iVar2 != 0;
  puVar1 = PTR_FUN_047e0660;
  if (DAT_048581c0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_015e2104(puVar5,puVar1,0,local_24);
  return 0;
}


