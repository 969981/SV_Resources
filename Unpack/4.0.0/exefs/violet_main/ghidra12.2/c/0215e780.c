/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215e780; name: FUN_0215e780
 */


undefined * FUN_0215e780(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((*PTR_DAT_047dd050 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047dd050), puVar3 = PTR_DAT_047dd058,
     puVar1 = PTR_DAT_047d9008, iVar4 != 0)) {
    if (((*PTR_DAT_047d9000 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d9000), puVar2 = PTR_DAT_047d9018, iVar4 != 0)) {
      if (((*PTR_DAT_047d9010 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d9010), iVar4 != 0)) {
        uVar5 = FUN_00ea2d24();
        *(undefined8 *)puVar2 = uVar5;
        __cxa_guard_release(PTR_DAT_047d9010);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_047d9000);
    }
    *(undefined **)puVar3 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd050);
  }
  return PTR_DAT_047dd058;
}


