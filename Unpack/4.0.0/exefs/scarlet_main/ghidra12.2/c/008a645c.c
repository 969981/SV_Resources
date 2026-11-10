/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a645c; name: FUN_008a645c
 */


void FUN_008a645c(undefined8 param_1,float *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  
  param_2[0] = 1.0;
  puVar4 = PTR_DAT_047d20a0;
  puVar3 = PTR_DAT_047d2098;
  puVar2 = PTR_DAT_047d2090;
  puVar1 = PTR_DAT_047d2088;
  param_2[1] = 1.0;
  if (param_3 != (long *)0x0) {
    do {
      if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar1), iVar5 != 0)) {
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          *(undefined8 *)puVar4 = 0;
          __cxa_guard_release(puVar3);
        }
        *(undefined **)puVar2 = puVar4;
        __cxa_guard_release(puVar1);
      }
      for (plVar6 = (long *)(**(code **)(*param_3 + 0x10))(param_3); plVar6 != (long *)0x0;
          plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)puVar2) {
          return;
        }
      }
      *param_2 = *param_2 * *(float *)(param_3 + 9);
      param_2[1] = param_2[1] * *(float *)((long)param_3 + 0x4c);
      param_3 = (long *)param_3[3];
    } while (param_3 != (long *)0x0);
  }
  return;
}


