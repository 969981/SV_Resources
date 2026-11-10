/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014de418; name: FUN_014de418
 */


void FUN_014de418(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 uVar6;
  
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = &PTR_LAB_045a8130;
  param_1[1] = &PTR_LAB_045a8248;
  param_1[2] = 0;
  plVar5 = param_3 + 1;
  plVar3 = (long *)(**(code **)*plVar5)(plVar5);
  if (((*PTR_DAT_047d8a88 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8a88), puVar1 = PTR_DAT_047d39c8, iVar2 != 0)) {
    if (((*PTR_DAT_047d39c0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_047d39c0);
    }
    *(undefined **)PTR_DAT_047d8a90 = puVar1;
    __cxa_guard_release(PTR_DAT_047d8a88);
  }
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (plVar3 == (long *)PTR_DAT_047d8a90) {
      plVar3 = param_3;
      goto LAB_014de49c;
    }
  }
  plVar3 = (long *)0x0;
LAB_014de49c:
  param_1[4] = plVar3;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar4 = (**(code **)(*param_3 + 0xb8))(param_3);
  if ((uVar4 & 1) == 0) {
    plVar3 = (long *)(**(code **)*plVar5)(plVar5);
    plVar5 = (long *)FUN_015128a0();
    if (plVar3 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      do {
        if (plVar3 == plVar5) goto LAB_014de4c4;
        plVar3 = (long *)*plVar3;
        uVar6 = 0;
      } while (plVar3 != (long *)0x0);
    }
  }
  else {
LAB_014de4c4:
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 10) = uVar6;
  return;
}


