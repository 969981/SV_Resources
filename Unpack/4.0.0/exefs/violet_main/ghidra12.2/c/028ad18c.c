/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ad18c; name: FUN_028ad18c
 */


void FUN_028ad18c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *__src;
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  void *__dest;
  size_t sVar5;
  undefined8 *__dest_00;
  long *plVar6;
  ulong uVar7;
  
  lVar4 = param_1[2];
  sVar5 = (long)param_3 - (long)param_2;
  uVar7 = (long)sVar5 >> 4;
  __dest_00 = (undefined8 *)*param_1;
  if (uVar7 <= (ulong)(lVar4 - (long)__dest_00 >> 4)) {
    uVar3 = param_1[1] - (long)__dest_00 >> 4;
    __src = (undefined8 *)((long)param_2 + (param_1[1] - (long)__dest_00));
    if (uVar7 <= uVar3) {
      __src = param_3;
    }
    for (; __src != param_2; param_2 = param_2 + 2) {
      *__dest_00 = *param_2;
      __dest_00[1] = param_2[1];
      __dest_00 = __dest_00 + 2;
    }
    if (uVar3 < uVar7) {
      __dest = (void *)param_1[1];
      sVar5 = (long)param_3 - (long)__src;
      if (0 < (long)sVar5) {
        memcpy(__dest,__src,sVar5);
        __dest = (void *)((long)__dest + sVar5);
      }
      param_1[1] = __dest;
      return;
    }
LAB_028ad2b4:
    param_1[1] = __dest_00;
    return;
  }
  lVar1 = tpidr_el0;
  if (__dest_00 != (undefined8 *)0x0) {
    param_1[1] = __dest_00;
    plVar6 = *(long **)(lVar1 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,__dest_00,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,__dest_00,0,8);
    }
    lVar4 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (uVar7 >> 0x3c == 0) {
    if (uVar7 <= (ulong)(lVar4 >> 3)) {
      uVar7 = lVar4 >> 3;
    }
    if (0x7fffffffffffffe < (ulong)(lVar4 >> 4)) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 >> 0x3c == 0) {
      plVar6 = *(long **)(lVar1 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
      }
      __dest_00 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar7 << 4,8);
      *param_1 = __dest_00;
      param_1[1] = __dest_00;
      param_1[2] = __dest_00 + uVar7 * 2;
      if (0 < (long)sVar5) {
        memcpy(__dest_00,param_2,sVar5);
        __dest_00 = (undefined8 *)((long)__dest_00 + sVar5);
      }
      goto LAB_028ad2b4;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}


