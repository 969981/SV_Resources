/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01762980; name: FUN_01762980
 */


undefined8 FUN_01762980(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 extraout_x1;
  undefined *puVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_0480fa68 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480fa68);
      puVar4 = &DAT_0480fa58;
      if (iVar1 != 0) {
        DAT_0480fa58 = 0;
        DAT_0480fa60 = 0;
        FUN_00100190(&LAB_0095f894,&DAT_0480fa58,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480fa68);
      }
    }
    else {
      puVar4 = &DAT_0480fa58;
    }
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d38e8);
      puVar3 = PTR_DAT_047d38f0;
      if (iVar1 != 0) {
        *PTR_DAT_047d38f0 = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        FUN_00100190(PTR_FUN_047d44a0,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38e8);
      }
    }
    else {
      puVar3 = PTR_DAT_047d38f0;
    }
  }
  if (((DAT_04810228 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04810228), iVar1 != 0)) {
    DAT_04810218 = PTR_LAB_047d5858;
    DAT_04810220 = 0;
    __cxa_guard_release(&DAT_04810228,extraout_x1,puVar3);
  }
  FUN_01762af8(&DAT_04810218,puVar4,puVar3);
  return 0;
}


