/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0153daec; name: FUN_0153daec
 */


undefined * FUN_0153daec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047e12d0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047e12d0), puVar2 = PTR_DAT_047e12d8,
     puVar1 = PTR_DAT_047d93b8, iVar3 != 0)) {
    if (((*PTR_DAT_047d93b0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d93b0), iVar3 != 0)) {
      uVar4 = FUN_01df5d9c();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047d93b0);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_047e12d0);
  }
  return PTR_DAT_047e12d8;
}


