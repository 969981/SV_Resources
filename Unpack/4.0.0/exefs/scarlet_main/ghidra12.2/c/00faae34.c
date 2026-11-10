/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00faae34; name: FUN_00faae34
 */


void FUN_00faae34(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *local_58;
  long local_38;
  
  FUN_00ddaef8(param_1,param_2 + 0xb0,0);
  puVar4 = PTR_DAT_047d20a0;
  puVar3 = PTR_DAT_047d2098;
  puVar2 = PTR_DAT_047d2090;
  puVar1 = PTR_DAT_047d2088;
  plVar7 = *(long **)(param_2 + 0x18);
  do {
    if (plVar7 == (long *)0x0) {
      return;
    }
    if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar1), iVar5 != 0)) {
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        *(undefined8 *)puVar4 = 0;
        __cxa_guard_release(puVar3);
      }
      *(undefined **)puVar2 = puVar4;
      __cxa_guard_release(puVar1);
    }
    for (plVar6 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7); plVar6 != (long *)0x0;
        plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar2) {
        local_58 = plVar7 + 0x16;
        FUN_00faaf70(&local_38,&local_58,&DAT_03bdfb3b,param_1);
        plVar6 = (long *)*param_1;
        *param_1 = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
        *param_1 = local_38;
        break;
      }
    }
    plVar7 = (long *)plVar7[3];
  } while( true );
}


