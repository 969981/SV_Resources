/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021884c0; name: FUN_021884c0
 */


undefined8 FUN_021884c0(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar7;
  long *plVar6;
  long lVar8;
  
  lVar8 = *param_1;
  if (lVar8 != 0) {
    puVar3 = (undefined8 *)(*(code *)**(undefined8 **)(lVar8 + 8))((undefined8 *)(lVar8 + 8));
    if (((*PTR_DAT_047d3980 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar2 != 0)) {
      uVar5 = FUN_01adab84();
      *(undefined8 *)PTR_DAT_047d3988 = uVar5;
      __cxa_guard_release(PTR_DAT_047d3980);
    }
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    while (puVar3 != (undefined8 *)PTR_DAT_047d3988) {
      puVar3 = (undefined8 *)*puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
    }
    uVar4 = (**(code **)(*(long *)*param_1 + 0xc0))();
    if ((uVar4 & 1) == 0) {
      plVar6 = *(long **)(*param_2 + 0x140);
      plVar1 = *(long **)(*param_2 + 0x148);
      if (plVar6 != plVar1) {
        do {
          plVar7 = plVar6 + 1;
          if (*plVar6 == lVar8 + -0x20) {
            return 1;
          }
          plVar6 = plVar7;
        } while (plVar1 != plVar7);
      }
    }
  }
  return 0;
}


