/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021bde98; name: FUN_021bde98
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_021bde98(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    plVar4 = (long *)(*(code *)**(undefined8 **)(lVar7 + 8))((undefined8 *)(lVar7 + 8));
    if (((*PTR_DAT_047dced8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047dced8), puVar2 = PTR_DAT_047d8dd0, iVar3 != 0)) {
      if (((*PTR_DAT_047d8dc8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8dc8), puVar1 = PTR_DAT_047d3988, iVar3 != 0)) {
        if (((*PTR_DAT_047d3980 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar3 != 0)) {
          uVar6 = FUN_01adab84();
          *(undefined8 *)puVar1 = uVar6;
          __cxa_guard_release(PTR_DAT_047d3980);
        }
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(PTR_DAT_047d8dc8);
      }
      *(undefined **)PTR_DAT_047dcee0 = puVar2;
      __cxa_guard_release(PTR_DAT_047dced8);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_047dcee0) {
        uVar5 = (**(code **)(*(long *)*param_1 + 0xc0))();
        if ((uVar5 & 1) == 0) {
          return *(long *)(lVar7 + 0xd0) == *(long *)*param_2;
        }
        return false;
      }
    }
  }
  return false;
}


