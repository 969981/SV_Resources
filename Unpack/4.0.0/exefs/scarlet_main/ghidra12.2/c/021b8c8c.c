/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b8c8c; name: FUN_021b8c8c
 */


bool FUN_021b8c8c(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    plVar3 = (long *)(*(code *)**(undefined8 **)(lVar6 + 8))((undefined8 *)(lVar6 + 8));
    if (((*PTR_DAT_047d9320 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9320), puVar1 = PTR_DAT_047d3988, iVar2 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar2 != 0)) {
        uVar5 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)PTR_DAT_047d9328 = puVar1;
      __cxa_guard_release(PTR_DAT_047d9320);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_047d9328) {
        uVar4 = (**(code **)(*(long *)*param_1 + 0xc0))();
        if ((uVar4 & 1) == 0) {
          return *(long *)(lVar6 + 0xd0) == *(long *)*param_2;
        }
        return false;
      }
    }
  }
  return false;
}


