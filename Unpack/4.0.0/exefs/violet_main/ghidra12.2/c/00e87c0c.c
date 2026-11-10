/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e87c0c; name: FUN_00e87c0c
 */


undefined8 FUN_00e87c0c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047de138 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047de138), puVar2 = PTR_DAT_047d9258, iVar3 != 0)) {
    if (((*PTR_DAT_047d9250 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9250), puVar1 = PTR_DAT_047d8b80, iVar3 != 0)) {
      if (((*PTR_DAT_047d8b78 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8b78), iVar3 != 0)) {
        uVar4 = FUN_01df5d9c();
        *(undefined8 *)puVar1 = uVar4;
        __cxa_guard_release(PTR_DAT_047d8b78);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d9250);
    }
    *(undefined **)PTR_DAT_047de140 = puVar2;
    __cxa_guard_release(PTR_DAT_047de138);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047de140) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


