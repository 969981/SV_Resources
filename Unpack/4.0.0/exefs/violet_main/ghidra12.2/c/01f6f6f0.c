/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6f6f0; name: FUN_01f6f6f0
 */


undefined8 FUN_01f6f6f0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (((*(int *)(param_1 + 0x40) == 0) && (*(char *)(param_1 + 0x90) != '\0')) &&
     (*(char *)(param_1 + 0x98) != '\0')) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar2 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_01739910();
    if ((uVar3 & 1) == 0) {
      if (*(char *)(param_1 + 0xb0) == '\0') {
        *(undefined8 *)(param_1 + 0xb4) = 0;
        *(undefined1 *)(param_1 + 0xb0) = 1;
      }
      else {
        *(undefined8 *)(param_1 + 0xb4) = 0;
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      return 1;
    }
    uVar3 = FUN_01f6f7e4(param_1);
    if ((uVar3 & 1) != 0) {
      if (*(char *)(param_1 + 0xb0) != '\0') {
        *(undefined1 *)(param_1 + 0xb0) = 0;
      }
      *(undefined4 *)(param_1 + 0x40) = 1;
      return 1;
    }
  }
  return 0;
}


