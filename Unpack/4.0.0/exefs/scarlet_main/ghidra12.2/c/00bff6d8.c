/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bff6d8; name: FUN_00bff6d8
 */


void FUN_00bff6d8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  void *__dest;
  string *this;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  void *__src;
  undefined8 *puVar12;
  size_t __n;
  long lVar13;
  long lVar14;
  
  plVar7 = (long *)*param_2;
  if ((plVar7 == (long *)0x0) || (uVar10 = (ulong)(plVar7[1] - *plVar7) >> 4, (int)uVar10 < 1)) {
    return;
  }
  puVar12 = (undefined8 *)*param_1;
  lVar5 = tpidr_el0;
  if (puVar12 != (undefined8 *)0x0) goto LAB_00bff76c;
  plVar7 = *(long **)(lVar5 + 0x30);
  if (plVar7 == (long *)0x0) {
    if ((DAT_04859438 & 1) == 0) goto LAB_00bffb80;
    goto LAB_00bffb50;
  }
LAB_00bff744:
  puVar12 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x18,8);
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  *param_1 = (long)puVar12;
LAB_00bff76c:
  lVar14 = -(uVar10 & 0xffffffff);
  lVar13 = 0;
  do {
    lVar14 = lVar14 + 1;
    lVar11 = *(long *)*param_2;
    puVar3 = (undefined8 *)puVar12[1];
    if (puVar3 == (undefined8 *)puVar12[2]) {
      __src = (void *)*puVar12;
      __n = (long)puVar3 - (long)__src;
      uVar10 = (long)__n >> 4;
      uVar1 = uVar10 + 1;
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar8 = (long)puVar12[2] - (long)__src;
      uVar9 = lVar8 >> 3;
      if (uVar1 <= uVar9) {
        uVar1 = uVar9;
      }
      if (0x7fffffffffffffe < (ulong)(lVar8 >> 4)) {
        uVar1 = 0xfffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3c != 0) break;
        plVar7 = *(long **)(lVar5 + 0x30);
        if (plVar7 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar7 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar1 << 4,8);
      }
      puVar3 = (undefined8 *)(lVar11 + lVar13);
      uVar4 = puVar3[1];
      puVar2 = (undefined8 *)((long)__dest + uVar10 * 0x10);
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *puVar12 = __dest;
      puVar12[1] = puVar2 + 2;
      puVar12[2] = (void *)((long)__dest + uVar1 * 0x10);
      if (__src != (void *)0x0) {
        plVar7 = *(long **)(lVar5 + 0x30);
        if (plVar7 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar7 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,__src,0,8);
        }
        else {
          FUN_00c48fe8(plVar7,__src,0,8);
        }
      }
    }
    else {
      puVar2 = (undefined8 *)(lVar11 + lVar13);
      uVar4 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar12[1] = puVar3 + 2;
    }
    lVar11 = *(long *)(*param_1 + 8);
    if (*(int *)(lVar11 + -0xc) == 4) {
      plVar7 = *(long **)(lVar5 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      this = (string *)(**(code **)(*plVar7 + 0x10))(plVar7,8,8);
      *(undefined8 *)this = 0;
      FUN_00bff208(this,*(undefined8 *)(lVar11 + -8));
LAB_00bff948:
      *(string **)(lVar11 + -8) = this;
    }
    else if (*(int *)(lVar11 + -0xc) == 3) {
      plVar7 = *(long **)(lVar5 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      this = (string *)(**(code **)(*plVar7 + 0x10))(plVar7,0x18,8);
      std::string::string(this,*(string **)(lVar11 + -8));
      goto LAB_00bff948;
    }
    if (lVar14 == 0) {
      return;
    }
    puVar12 = (undefined8 *)*param_1;
    lVar13 = lVar13 + 0x10;
  } while( true );
  FUN_00c017d0();
LAB_00bffb80:
  iVar6 = __cxa_guard_acquire(&DAT_04859438);
  if (iVar6 != 0) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
LAB_00bffb50:
  plVar7 = DAT_04859430;
  *(long **)(lVar5 + 0x30) = DAT_04859430;
  goto LAB_00bff744;
}


