/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018532f0; name: FUN_018532f0
 */


undefined8 FUN_018532f0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_38 [24];
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d38e8);
      puVar4 = PTR_DAT_047d38f0;
      if (iVar1 != 0) {
        *PTR_DAT_047d38f0 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047d44a0,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38e8);
      }
    }
    else {
      puVar4 = PTR_DAT_047d38f0;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  if ((DAT_04857ba0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04857ba0);
    if (iVar1 != 0) {
      DAT_04859010 = &LAB_026cda9c;
      __cxa_guard_release(&DAT_04857ba0,uVar3);
    }
  }
  FUN_01853838(auStack_38,puVar4,uVar3);
  FUN_01853410(param_1,auStack_38);
  FUN_01853664(auStack_38);
  return 1;
}


