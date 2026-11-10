/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b196b0; name: FUN_01b196b0
 */


undefined8 FUN_01b196b0(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38b8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d38b8);
      puVar5 = PTR_DAT_047d38c0;
      if (iVar2 != 0) {
        *PTR_DAT_047d38c0 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_LAB_047d3fe8,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38b8);
      }
    }
    else {
      puVar5 = PTR_DAT_047d38c0;
    }
  }
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3d58 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d3d58);
      puVar6 = PTR_DAT_047d3d60;
      if (iVar2 != 0) {
        *PTR_DAT_047d3d60 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_LAB_047d3f68,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3d58);
      }
    }
    else {
      puVar6 = PTR_DAT_047d3d60;
    }
  }
  iVar2 = FUN_00c92df0(param_1,3,0);
  uVar1 = FUN_00c92df0(param_1,4,0);
  if (((DAT_04803710 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04803710), iVar3 != 0)) {
    DAT_04804368 = 1;
    __cxa_guard_release(&DAT_04803710);
  }
  FUN_01b19844(puVar5,puVar6,(long)iVar2,uVar1);
  return 0;
}


