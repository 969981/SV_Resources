/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c00b88; name: FUN_00c00b88
 */


undefined8 * FUN_00c00b88(undefined8 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  size_t __n;
  
  lVar5 = tpidr_el0;
  plVar6 = *(long **)(lVar5 + 0x30);
  if (plVar6 == (long *)0x0) {
    if ((DAT_04859438 & 1) == 0) goto LAB_00c00e7c;
    goto LAB_00c00db8;
  }
  while( true ) {
    puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x18,8);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar9 = (undefined8 *)*param_1;
    if (puVar9 == (undefined8 *)0x0) {
      plVar6 = *(long **)(lVar5 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x18,8);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *param_1 = puVar9;
    }
    puVar1 = (undefined4 *)puVar9[1];
    if (puVar1 != (undefined4 *)puVar9[2]) {
      *puVar1 = param_2;
      puVar1[1] = 3;
      *(undefined8 **)(puVar1 + 2) = puVar3;
      puVar9[1] = puVar1 + 4;
      return puVar3;
    }
    param_1 = (undefined8 *)*puVar9;
    __n = (long)puVar1 - (long)param_1;
    uVar4 = ((long)__n >> 4) + 1;
    if (uVar4 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = (long)puVar9[2] - (long)param_1;
    uVar8 = lVar7 >> 3;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    if (0x7fffffffffffffe < (ulong)(lVar7 >> 4)) {
      uVar4 = 0xfffffffffffffff;
    }
    if (uVar4 == 0) break;
    if (uVar4 >> 0x3c == 0) {
      plVar6 = *(long **)(lVar5 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      __dest = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar4 << 4,8);
LAB_00c00cdc:
      puVar1 = (undefined4 *)((long)__dest + ((long)__n >> 4) * 0x10);
      *puVar1 = param_2;
      puVar1[1] = 3;
      *(undefined8 **)(puVar1 + 2) = puVar3;
      if (0 < (long)__n) {
        memcpy(__dest,param_1,__n);
      }
      *puVar9 = __dest;
      puVar9[1] = puVar1 + 4;
      puVar9[2] = (void *)((long)__dest + uVar4 * 0x10);
      if (param_1 != (undefined8 *)0x0) {
        plVar6 = *(long **)(lVar5 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar4 & 1) != 0) && (lVar5 = FUN_00c4e600(), 0 < *(int *)(lVar5 + 0x12c8))) {
          FUN_00c48fe8(plVar6,param_1,0,8);
          return puVar3;
        }
        (**(code **)(*plVar6 + 0x18))(plVar6,param_1,0,8);
      }
      return puVar3;
    }
    FUN_00c017d0();
LAB_00c00e7c:
    iVar2 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar2 != 0) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00c00db8:
    plVar6 = DAT_04859430;
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  __dest = (void *)0x0;
  goto LAB_00c00cdc;
}


