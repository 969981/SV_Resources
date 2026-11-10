/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c2b564; name: FUN_01c2b564
 */


void FUN_01c2b564(undefined8 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_28 [8];
  
  if ((1 < *param_2) ||
     (puVar2 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d42e0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d42e0);
      puVar2 = PTR_DAT_047d42e8;
      if (iVar1 != 0) {
        *(undefined8 *)PTR_DAT_047d42e8 = 0;
        __cxa_guard_release(PTR_DAT_047d42e0);
      }
    }
    else {
      puVar2 = PTR_DAT_047d42e8;
    }
  }
  if ((1 < *param_3) ||
     (puVar3 = *(undefined **)(param_3 + 8), *(undefined **)(param_3 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d42e0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d42e0);
      puVar3 = PTR_DAT_047d42e8;
      if (iVar1 != 0) {
        *(undefined8 *)PTR_DAT_047d42e8 = 0;
        __cxa_guard_release(PTR_DAT_047d42e0);
      }
    }
    else {
      puVar3 = PTR_DAT_047d42e8;
    }
  }
  FUN_01c2d658(auStack_28,puVar2,puVar3);
  FUN_01c2dac0(param_1,auStack_28);
  FUN_01c2bd24(auStack_28);
  return;
}


