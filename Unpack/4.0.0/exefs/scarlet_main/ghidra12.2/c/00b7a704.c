/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b7a704; name: FUN_00b7a704
 */


long FUN_00b7a704(long param_1,int param_2)

{
  int iVar1;
  void *__dest;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  void *__src;
  size_t __n;
  
  if (param_2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (long)param_2;
    lVar3 = tpidr_el0;
    plVar4 = *(long **)(lVar3 + 0x30);
    if (plVar4 == (long *)0x0) {
      if ((DAT_04859438 & 1) == 0) goto LAB_00b7a96c;
      goto LAB_00b7a8dc;
    }
    while( true ) {
      lVar7 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar7,8);
      plVar4 = *(long **)(param_1 + 0xe0);
      if (plVar4 != *(long **)(param_1 + 0xe8)) break;
      __src = *(void **)(param_1 + 0xd8);
      __n = (long)plVar4 - (long)__src;
      uVar2 = ((long)__n >> 3) + 1;
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar5 = (long)*(long **)(param_1 + 0xe8) - (long)__src;
      uVar6 = lVar5 >> 2;
      if (uVar2 <= uVar6) {
        uVar2 = uVar6;
      }
      if (0xffffffffffffffe < (ulong)(lVar5 >> 3)) {
        uVar2 = 0x1fffffffffffffff;
      }
      if (uVar2 == 0) {
        __dest = (void *)0x0;
LAB_00b7a80c:
        plVar4 = (long *)((long)__dest + ((long)__n >> 3) * 8);
        *plVar4 = lVar7;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)(param_1 + 0xd8) = __dest;
        *(long **)(param_1 + 0xe0) = plVar4 + 1;
        *(void **)(param_1 + 0xe8) = (void *)((long)__dest + uVar2 * 8);
        if (__src == (void *)0x0) {
          return lVar7;
        }
        plVar4 = *(long **)(lVar3 + 0x30);
        if (plVar4 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar4 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar4 + 0x18))(plVar4,__src,0,8);
          return lVar7;
        }
        FUN_00c48fe8(plVar4,__src,0,8);
        return lVar7;
      }
      if (uVar2 >> 0x3d == 0) {
        plVar4 = *(long **)(lVar3 + 0x30);
        if (plVar4 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar4 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar2 << 3,8);
        goto LAB_00b7a80c;
      }
      FUN_01f6e360();
LAB_00b7a96c:
      iVar1 = __cxa_guard_acquire(&DAT_04859438);
      if (iVar1 != 0) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
LAB_00b7a8dc:
      plVar4 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    *plVar4 = lVar7;
    *(long **)(param_1 + 0xe0) = plVar4 + 1;
  }
  return lVar7;
}


