/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bad710; name: FUN_00bad710
 */


void FUN_00bad710(undefined8 *param_1,ulong param_2)

{
  void *__s;
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  size_t __n;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  pvVar2 = (void *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)pvVar2 >> 3)) {
    pvVar7 = pvVar2;
    if (param_2 != 0) {
      pvVar7 = (void *)((long)pvVar2 + param_2 * 8);
      memset(pvVar2,0,param_2 << 3);
    }
    param_1[1] = pvVar7;
    return;
  }
  pvVar7 = (void *)*param_1;
  __n = (long)pvVar2 - (long)pvVar7;
  uVar3 = param_2 + ((long)__n >> 3);
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - (long)pvVar7;
  uVar6 = lVar4 >> 2;
  if (uVar3 <= uVar6) {
    uVar3 = uVar6;
  }
  if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
    uVar3 = 0x1fffffffffffffff;
  }
  lVar4 = tpidr_el0;
  if (uVar3 == 0) {
    pvVar2 = (void *)0x0;
    goto LAB_00bad7e4;
  }
  if (uVar3 >> 0x3d == 0) {
    unaff_x23 = uVar3 << 3;
    plVar5 = *(long **)(lVar4 + 0x30);
    if (plVar5 == (long *)0x0) {
      unaff_x24 = &DAT_04859000;
      if ((DAT_04859438 & 1) == 0) goto LAB_00bad948;
      goto LAB_00bad8ec;
    }
  }
  else {
    FUN_01f6e360();
LAB_00bad948:
    iVar1 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar1 != 0) {
      unaff_x24[0x86] = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00bad8ec:
    plVar5 = (long *)unaff_x24[0x86];
    *(long **)(lVar4 + 0x30) = plVar5;
  }
  pvVar2 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,unaff_x23,8);
LAB_00bad7e4:
  __s = (void *)((long)pvVar2 + ((long)__n >> 3) * 8);
  memset(__s,0,param_2 << 3);
  if (0 < (long)__n) {
    memcpy(pvVar2,pvVar7,__n);
  }
  *param_1 = pvVar2;
  param_1[1] = (void *)((long)__s + param_2 * 8);
  param_1[2] = (void *)((long)pvVar2 + uVar3 * 8);
  if (pvVar7 == (void *)0x0) {
    return;
  }
  plVar5 = *(long **)(lVar4 + 0x30);
  if (plVar5 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar5 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00bad880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x18))(plVar5,pvVar7,0,8);
    return;
  }
  FUN_00c48fe8(plVar5,pvVar7,0,8);
  return;
}


