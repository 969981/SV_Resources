/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bff208; name: FUN_00bff208
 */


void FUN_00bff208(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  void *__dest;
  string *this;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  void *__src;
  size_t __n;
  long lVar13;
  long lVar14;
  
  plVar8 = (long *)*param_2;
  if ((plVar8 == (long *)0x0) || (uVar11 = (ulong)(plVar8[1] - *plVar8) >> 4, (int)uVar11 < 1)) {
    return;
  }
  lVar5 = tpidr_el0;
  plVar8 = *(long **)(lVar5 + 0x30);
  if (plVar8 == (long *)0x0) {
    if ((DAT_04859438 & 1) == 0) goto LAB_00bff6a8;
    goto LAB_00bff678;
  }
LAB_00bff26c:
  puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x18,8);
  lVar14 = -(uVar11 & 0xffffffff);
  lVar13 = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *param_1 = (long)puVar7;
  do {
    lVar14 = lVar14 + 1;
    lVar12 = *(long *)*param_2;
    puVar3 = (undefined8 *)puVar7[1];
    if (puVar3 == (undefined8 *)puVar7[2]) {
      __src = (void *)*puVar7;
      __n = (long)puVar3 - (long)__src;
      uVar11 = (long)__n >> 4;
      uVar1 = uVar11 + 1;
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar9 = (long)puVar7[2] - (long)__src;
      uVar10 = lVar9 >> 3;
      if (uVar1 <= uVar10) {
        uVar1 = uVar10;
      }
      if (0x7fffffffffffffe < (ulong)(lVar9 >> 4)) {
        uVar1 = 0xfffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3c != 0) break;
        plVar8 = *(long **)(lVar5 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        __dest = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar1 << 4,8);
      }
      puVar3 = (undefined8 *)(lVar12 + lVar13);
      uVar4 = puVar3[1];
      puVar2 = (undefined8 *)((long)__dest + uVar11 * 0x10);
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *puVar7 = __dest;
      puVar7[1] = puVar2 + 2;
      puVar7[2] = (void *)((long)__dest + uVar1 * 0x10);
      if (__src != (void *)0x0) {
        plVar8 = *(long **)(lVar5 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar11 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,__src,0,8);
        }
        else {
          FUN_00c48fe8(plVar8,__src,0,8);
        }
      }
    }
    else {
      puVar2 = (undefined8 *)(lVar12 + lVar13);
      uVar4 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar7[1] = puVar3 + 2;
    }
    lVar12 = *(long *)(*param_1 + 8);
    if (*(int *)(lVar12 + -0xc) == 4) {
      plVar8 = *(long **)(lVar5 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      this = (string *)(**(code **)(*plVar8 + 0x10))(plVar8,8,8);
      *(undefined8 *)this = 0;
      FUN_00bff208(this,*(undefined8 *)(lVar12 + -8));
LAB_00bff470:
      *(string **)(lVar12 + -8) = this;
    }
    else if (*(int *)(lVar12 + -0xc) == 3) {
      plVar8 = *(long **)(lVar5 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      this = (string *)(**(code **)(*plVar8 + 0x10))(plVar8,0x18,8);
      std::string::string(this,*(string **)(lVar12 + -8));
      goto LAB_00bff470;
    }
    if (lVar14 == 0) {
      return;
    }
    puVar7 = (undefined8 *)*param_1;
    lVar13 = lVar13 + 0x10;
  } while( true );
  FUN_00c017d0();
LAB_00bff6a8:
  iVar6 = __cxa_guard_acquire(&DAT_04859438);
  if (iVar6 != 0) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
LAB_00bff678:
  plVar8 = DAT_04859430;
  *(long **)(lVar5 + 0x30) = DAT_04859430;
  goto LAB_00bff26c;
}


