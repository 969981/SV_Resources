/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026c2080; name: FUN_026c2080
 */


undefined8 FUN_026c2080(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar3, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_048578c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048578c0);
      puVar5 = &DAT_048578a8;
      if (iVar1 != 0) {
        DAT_048578a8 = 0;
        DAT_048578b0 = 0;
        FUN_00100190(FUN_01736fdc,&DAT_048578a8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048578c0);
      }
    }
    else {
      puVar5 = &DAT_048578a8;
    }
  }
  uVar4 = FUN_00c646d0(param_1,2,0);
  iVar1 = FUN_00cc4dc0(param_1,3);
  if (((DAT_048578a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048578a0), iVar2 != 0)) {
    DAT_04857890 = PTR_FUN_047e0678;
    DAT_04857898 = 0;
    __cxa_guard_release(&DAT_048578a0);
  }
  FUN_026c21a4(&DAT_04857890,puVar5,uVar4,iVar1 != 0);
  return 0;
}


