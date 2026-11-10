/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015c528; name: FUN_0015c528
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0015c528(undefined8 *param_1,ulong param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  param_1[2] = param_2;
  *param_1 = param_3;
  param_1[1] = 0;
  if (param_3 == (long *)0x0) {
LAB_0015c578:
    lVar4 = (**(code **)PTR_PTR_047cb890)(param_2,0x10);
    if (lVar4 != 0) {
      param_1[1] = lVar4;
      goto joined_r0x0015c598;
    }
    FUN_0015ed40(param_2);
LAB_0015c5c8:
    param_1[1] = 0;
  }
  else {
    param_2 = param_2 + 0xf & 0xfffffffffffffff0;
    lVar4 = param_3[1];
    uVar1 = lVar4 + param_2;
    if ((ulong)(param_3[3] + *param_3) < uVar1) {
      if ((int)param_3[4] != 0) goto LAB_0015c578;
      goto LAB_0015c5c8;
    }
    param_3[1] = uVar1;
    uVar2 = param_3[2];
    if ((ulong)param_3[2] <= uVar1) {
      uVar2 = uVar1;
    }
    param_3[2] = uVar2;
    param_1[1] = lVar4;
    if (lVar4 != 0) goto joined_r0x0015c598;
  }
  iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/rrarenaallocator.h",0xf6,"rrScopeArenaAlloc",
                       "m_ptr != NULL");
  if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
joined_r0x0015c598:
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = param_1[1];
  }
  return;
}


