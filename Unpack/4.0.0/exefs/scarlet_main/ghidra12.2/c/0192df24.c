/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192df24; name: FUN_0192df24
 */


void FUN_0192df24(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  size_t __n;
  long lVar7;
  void *__src;
  long *plVar8;
  
  lVar3 = FUN_0192e0cc(param_1,(param_1[1] - *param_1 >> 2) + 1);
  __src = (void *)*param_1;
  lVar6 = param_1[1];
  lVar7 = lVar6 - (long)__src;
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = FUN_0192e0b0(lVar3);
    __src = (void *)*param_1;
    lVar6 = param_1[1];
  }
  puVar1 = (undefined4 *)(lVar4 + (lVar7 >> 2) * 4);
  __n = lVar6 - (long)__src;
  *puVar1 = *param_2;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar1 - __n),__src,__n);
  }
  *param_1 = (long)((long)puVar1 - __n);
  param_1[1] = (long)(puVar1 + 1);
  param_1[2] = lVar4 + lVar3 * 4;
  if (__src == (void *)0x0) {
    return;
  }
  lVar6 = tpidr_el0;
  plVar8 = *(long **)(lVar6 + 0x30);
  if (plVar8 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar8 = DAT_04859430;
    *(long **)(lVar6 + 0x30) = DAT_04859430;
  }
  uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00c4e600();
    if (0 < *(int *)(lVar6 + 0x12c8)) {
      FUN_00c48fe8(plVar8,__src,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0192e008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x18))(plVar8,__src,0,8);
  return;
}


