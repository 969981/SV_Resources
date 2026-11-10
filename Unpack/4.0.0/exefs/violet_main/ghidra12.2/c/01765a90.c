/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01765a90; name: FUN_01765a90
 */


undefined8 FUN_01765a90(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3d48 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d3d48);
      puVar4 = PTR_DAT_047d3d50;
      if (iVar2 != 0) {
        *PTR_DAT_047d3d50 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_LAB_047d3f60,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3d48);
      }
    }
    else {
      puVar4 = PTR_DAT_047d3d50;
    }
  }
  if (((DAT_04833318 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04833318), iVar2 != 0)) {
    DAT_04833310 = PTR_LAB_047d8488;
    __cxa_guard_release(&DAT_04833318,puVar4);
  }
  uVar1 = FUN_01765b90(&DAT_04833310,puVar4);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


