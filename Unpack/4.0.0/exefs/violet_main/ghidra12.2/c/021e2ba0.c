/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e2ba0; name: FUN_021e2ba0
 */


undefined8 * FUN_021e2ba0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04841d60 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_04841d60), puVar1 = PTR_DAT_047d6528, iVar2 != 0)) {
    if (((*PTR_DAT_047d6520 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar2 != 0)) {
      uVar3 = FUN_0151c130();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_047d6520);
    }
    DAT_04841d58 = puVar1;
    __cxa_guard_release(&DAT_04841d60);
  }
  return &DAT_04841d58;
}


