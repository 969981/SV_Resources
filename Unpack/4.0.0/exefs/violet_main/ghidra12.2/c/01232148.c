/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01232148; name: FUN_01232148
 */


uint FUN_01232148(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if (*param_1 != 0) {
    plVar5 = (long *)(*(code *)**(undefined8 **)(*param_1 + 8))();
    if (((*PTR_DAT_047dce08 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047dce08), puVar2 = PTR_DAT_047d8dd0, iVar4 != 0)) {
      if (((*PTR_DAT_047d8dc8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8dc8), puVar1 = PTR_DAT_047d3988, iVar4 != 0)) {
        if (((*PTR_DAT_047d3980 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar4 != 0)) {
          uVar6 = FUN_01adab84();
          *(undefined8 *)puVar1 = uVar6;
          __cxa_guard_release(PTR_DAT_047d3980);
        }
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(PTR_DAT_047d8dc8);
      }
      *(undefined **)PTR_DAT_047dce10 = puVar2;
      __cxa_guard_release(PTR_DAT_047dce08);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_047dce10) {
        uVar3 = (**(code **)(*(long *)*param_1 + 0xc0))();
        return ~uVar3 & 1;
      }
    }
  }
  return 0;
}


