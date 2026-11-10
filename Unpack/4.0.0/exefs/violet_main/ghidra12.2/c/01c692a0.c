/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c692a0; name: FUN_01c692a0
 */


undefined8 FUN_01c692a0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 auStack_38 [24];
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38c8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d38c8);
      puVar3 = PTR_DAT_047d38d0;
      if (iVar1 != 0) {
        *PTR_DAT_047d38d0 = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        FUN_00100190(PTR_FUN_047d6020,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38c8);
      }
    }
    else {
      puVar3 = PTR_DAT_047d38d0;
    }
  }
  if (((DAT_04814028 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04814028), iVar1 != 0)) {
    DAT_04814020 = PTR_LAB_047d62d0;
    __cxa_guard_release(&DAT_04814028,puVar3);
  }
  FUN_01c69254(auStack_38,&DAT_04814020,puVar3);
  FUN_01c5bba0(param_1,auStack_38);
  FUN_01c5bc78(auStack_38);
  return 1;
}


