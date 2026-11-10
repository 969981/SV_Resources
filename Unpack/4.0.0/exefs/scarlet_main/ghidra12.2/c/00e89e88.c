/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e89e88; name: FUN_00e89e88
 */


long * FUN_00e89e88(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *local_38;
  long local_30;
  undefined8 local_28;
  
  lVar5 = *(long *)(param_2 + 0xe8);
  if (*(code **)(param_1 + 0x530) == (code *)0x0) {
    plVar3 = *(long **)(lVar5 + 0x18);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,param_3,1);
  }
  else {
    local_30 = param_1;
    local_28 = param_3;
    (**(code **)(param_1 + 0x530))(&local_38,param_1 + 0x550,&local_28,&local_30);
    plVar4 = *(long **)(lVar5 + 0x18);
    plVar3 = (long *)PTR_PTR_047d4508;
    if (local_38 != (long *)0x0) {
      plVar3 = local_38 + 7;
    }
    plVar3 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,*plVar3,1);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (plVar3 != (long *)0x0) {
    if (((*PTR_DAT_047d2088 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d2088), puVar1 = PTR_DAT_047d20a0, iVar2 != 0)) {
      if (((*PTR_DAT_047d2098 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar2 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_047d2098);
      }
      *(undefined **)PTR_DAT_047d2090 = puVar1;
      __cxa_guard_release(PTR_DAT_047d2088);
    }
    for (plVar4 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3); plVar4 != (long *)0x0;
        plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_047d2090) {
        return plVar3;
      }
    }
  }
  return (long *)0x0;
}


