/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f34298; name: FUN_01f34298
 */


long FUN_01f34298(byte *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (((DAT_0483a128 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483a128), iVar1 != 0)) {
    FUN_00100190(&LAB_00b52dc4,&DAT_0483a118,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483a128);
  }
  DAT_0483a110 = DAT_0483a118;
  if ((((DAT_0483a118 == 0) || (lVar2 = *(long *)(DAT_0483a118 + 0x48), lVar2 == 0)) ||
      (uVar3 = (ulong)*param_1, 3 < uVar3)) ||
     ((*(char *)(lVar2 + uVar3 * 0x30 + 0xd8) == '\0' ||
      (lVar2 = *(long *)(lVar2 + uVar3 * 0x30 + 0xb0), lVar2 == 0)))) {
    lVar2 = 0;
  }
  return lVar2;
}


