/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5f3b4; name: FUN_00e5f3b4
 */


undefined1 FUN_00e5f3b4(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar3 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar3;
  if (((lVar3 != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) &&
     (lVar3 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xb8), lVar3 != 0)) {
    puVar4 = *(undefined1 **)(param_1 + 0x170);
    puVar1 = *(undefined1 **)(param_1 + 0x178);
    if (puVar4 != puVar1) {
      while (*(long *)(puVar4 + 8) != lVar3) {
        puVar4 = puVar4 + 0x10;
        if (puVar1 == puVar4) {
          return 0xfd;
        }
      }
    }
    if (puVar4 != puVar1) {
      return *puVar4;
    }
  }
  return 0xfd;
}


