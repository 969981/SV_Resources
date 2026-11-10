/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021388e0; name: FUN_021388e0
 */


undefined * FUN_021388e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((*PTR_DAT_047dced8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047dced8), puVar3 = PTR_DAT_047dcee0,
     puVar2 = PTR_DAT_047d8dd0, iVar4 != 0)) {
    if (((*PTR_DAT_047d8dc8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8dc8), puVar1 = PTR_DAT_047d3988, iVar4 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar4 != 0)) {
        uVar5 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d8dc8);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_047dced8);
  }
  return PTR_DAT_047dcee0;
}


