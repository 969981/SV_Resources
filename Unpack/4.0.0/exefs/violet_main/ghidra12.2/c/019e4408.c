/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e4408; name: FUN_019e4408
 */


void FUN_019e4408(void)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar2 = FUN_01910b0c();
  *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(lVar2 + 0x88);
  *(undefined4 *)(lVar2 + 0x5c) = *(undefined4 *)(lVar2 + 0x8c);
  uVar3 = *(uint *)(lVar2 + 0x90);
  if (0x78 < uVar3 >> 9) {
    uVar3 = 0xf200;
  }
  *(uint *)(lVar2 + 0x60) = uVar3;
  memcpy(*(void **)(lVar2 + 0x68),*(void **)(lVar2 + 0x98),(ulong)uVar3);
  return;
}


