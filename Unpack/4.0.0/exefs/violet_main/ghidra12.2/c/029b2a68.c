/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b2a68; name: FUN_029b2a68
 */


undefined * FUN_029b2a68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047de340 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047de340), puVar2 = PTR_DAT_047de348,
     puVar1 = PTR_DAT_047d9278, iVar3 != 0)) {
    if (((*PTR_DAT_047d9270 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar3 != 0)) {
      uVar4 = FUN_01e19d1c();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047d9270);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_047de340);
  }
  return PTR_DAT_047de348;
}


