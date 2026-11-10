/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bb83cc; name: FUN_00bb83cc
 */


void FUN_00bb83cc(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_0455a5c0;
  puVar3 = (uint *)param_1[5];
  if ((puVar3 != (uint *)0x0) && (param_1[3] == 0)) {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      puVar3 = (uint *)param_1[5];
      if (puVar3 == (uint *)0x0) goto LAB_00bb8438;
    }
    operator_delete__(puVar3);
  }
LAB_00bb8438:
  param_1[5] = 0;
  if ((((param_1[1] & 1) != 0) &&
      (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), plVar1 != (long *)0x0)) &&
     (plVar1[1] == 0)) {
    if (*plVar1 != 0) {
      FUN_00bfee44(plVar1);
    }
    lVar4 = tpidr_el0;
    plVar6 = *(long **)(lVar4 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,plVar1,0,8);
    }
  }
  param_1[1] = 0;
  return;
}


