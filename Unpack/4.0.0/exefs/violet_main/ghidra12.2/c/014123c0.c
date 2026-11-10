/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014123c0; name: FUN_014123c0
 */


undefined8 FUN_014123c0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined1 *puVar4;
  char local_58 [8];
  undefined1 auStack_50 [32];
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_048542c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048542c0);
      puVar4 = &DAT_048542a8;
      if (iVar1 != 0) {
        DAT_048542a8 = 0;
        DAT_048542b0 = 0;
        FUN_00100190(FUN_0121a360,&DAT_048542a8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048542c0);
      }
    }
    else {
      puVar4 = &DAT_048542a8;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_048542f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048542f0), iVar1 != 0)) {
    DAT_048542e0 = PTR_LAB_047e01b8;
    DAT_048542e8 = 0;
    __cxa_guard_release(&DAT_048542f0,extraout_x1,uVar3);
  }
  FUN_01412508(local_58,&DAT_048542e0,puVar4,uVar3);
  FUN_00d5b560(param_1,local_58);
  if (local_58[0] == '\x01') {
    FUN_00d77ff8(auStack_50,0);
  }
  return 1;
}


