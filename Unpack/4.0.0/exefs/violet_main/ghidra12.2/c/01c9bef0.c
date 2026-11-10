/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c9bef0; name: FUN_01c9bef0
 */


undefined8 FUN_01c9bef0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 auStack_38 [24];
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3b00 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3b00);
      puVar3 = PTR_DAT_047d3b08;
      if (iVar1 != 0) {
        *PTR_DAT_047d3b08 = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        FUN_00100190(PTR_LAB_047d44c0,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3b00);
      }
    }
    else {
      puVar3 = PTR_DAT_047d3b08;
    }
  }
  if (((DAT_04816f80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04816f80), iVar1 != 0)) {
    DAT_04816f78 = PTR_LAB_047d6590;
    __cxa_guard_release(&DAT_04816f80,puVar3);
  }
  FUN_01c9c004(auStack_38,&DAT_04816f78,puVar3);
  FUN_018b3220(param_1,auStack_38);
  FUN_018b303c(auStack_38);
  return 1;
}


