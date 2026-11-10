/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d1e888; name: FUN_00d1e888
 */


void FUN_00d1e888(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *local_28;
  
  if (**(char **)(param_2 + 0x110) == '\0') {
    lVar4 = *(long *)(param_2 + 0xf0);
    *param_1 = *(long *)(param_2 + 0xe8);
    param_1[1] = lVar4;
    plVar2 = *(long **)(param_2 + 0x100);
    param_1[2] = *(long *)(param_2 + 0xf8);
    param_1[3] = (long)plVar2;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d1e948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  else {
    FUN_00d1e980(&local_28,param_2 + 0x108,&DAT_03c9c9c5,param_2 + 0xe8);
    plVar3 = local_28;
    plVar2 = (long *)PTR_DAT_047d8b70;
    if (local_28 != (long *)0x0) {
      plVar2 = local_28 + 6;
    }
    plVar1 = (long *)PTR_PTR_047d4508;
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 7;
    }
    lVar4 = *plVar1;
    if (local_28 == (long *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = local_28[8];
    }
    *param_1 = *plVar2;
    param_1[1] = lVar4;
    param_1[2] = lVar5;
    param_1[3] = 0;
    if (local_28 == (long *)0x0) {
      param_1[3] = 0;
    }
    else {
      (**(code **)(*local_28 + 0x18))(local_28);
      param_1[3] = (long)plVar3;
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


