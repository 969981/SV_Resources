/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01520da8; name: FUN_01520da8
 */


undefined8 FUN_01520da8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047dd050 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd050), puVar1 = PTR_DAT_047d9008, iVar3 != 0)) {
    if (((*PTR_DAT_047d9000 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9000), puVar2 = PTR_DAT_047d9018, iVar3 != 0)) {
      if (((*PTR_DAT_047d9010 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9010), iVar3 != 0)) {
        uVar4 = FUN_00ea2d24();
        *(undefined8 *)puVar2 = uVar4;
        __cxa_guard_release(PTR_DAT_047d9010);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_047d9000);
    }
    *(undefined **)PTR_DAT_047dd058 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd050);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047dd058) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


