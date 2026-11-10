/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278139c; name: FUN_0278139c
 */


undefined * FUN_0278139c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((*PTR_DAT_047dd748 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047dd748), puVar3 = PTR_DAT_047dd750,
     puVar2 = PTR_DAT_047d8d38, iVar4 != 0)) {
    if (((*PTR_DAT_047d8d30 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8d30), puVar1 = PTR_DAT_047d3988, iVar4 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar4 != 0)) {
        uVar5 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d8d30);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_047dd748);
  }
  return PTR_DAT_047dd750;
}


