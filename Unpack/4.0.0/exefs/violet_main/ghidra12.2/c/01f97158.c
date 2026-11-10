/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f97158; name: FUN_01f97158
 */


undefined * FUN_01f97158(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((*PTR_DAT_047d5670 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047d5670), puVar3 = PTR_DAT_047d5678,
     puVar2 = PTR_DAT_047d5420, iVar4 != 0)) {
    if (((*PTR_DAT_047d5418 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d5418), puVar1 = PTR_DAT_047d3988, iVar4 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar4 != 0)) {
        uVar5 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d5418);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_047d5670);
  }
  return PTR_DAT_047d5678;
}


