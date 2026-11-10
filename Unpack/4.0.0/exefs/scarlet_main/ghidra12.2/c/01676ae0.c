/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01676ae0; name: FUN_01676ae0
 */


long * FUN_01676ae0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar4 = PTR_DAT_047d4ea0;
  puVar3 = PTR_DAT_047d4e98;
  puVar2 = PTR_DAT_047d3988;
  puVar1 = PTR_DAT_047d3980;
  if (param_1 != param_2) {
    do {
      if (*param_1 != 0) {
        plVar6 = (long *)(*(code *)**(undefined8 **)(*param_1 + 8))();
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar1), iVar5 != 0)) {
            uVar8 = FUN_01adab84();
            *(undefined8 *)puVar2 = uVar8;
            __cxa_guard_release(puVar1);
          }
          *(undefined **)puVar4 = puVar2;
          __cxa_guard_release(puVar3);
        }
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)puVar4) {
            uVar7 = (**(code **)(*(long *)*param_1 + 0xc0))();
            if ((uVar7 & 1) == 0) {
              return param_1;
            }
            break;
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
    param_1 = param_2;
  }
  return param_1;
}


