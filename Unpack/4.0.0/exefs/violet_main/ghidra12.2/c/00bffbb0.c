/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bffbb0; name: FUN_00bffbb0
 */


void FUN_00bffbb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  void *__src;
  long *plVar9;
  undefined8 *puVar10;
  size_t __n;
  long lVar11;
  long lVar12;
  
  plVar7 = (long *)*param_2;
  if (plVar7 == (long *)0x0) goto LAB_00bfff5c;
  lVar4 = tpidr_el0;
  uVar8 = (ulong)(plVar7[1] - *plVar7) >> 4;
  if (0 < (int)uVar8) {
    puVar10 = (undefined8 *)*param_1;
    if (puVar10 == (undefined8 *)0x0) {
      plVar7 = *(long **)(lVar4 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      puVar10 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x18,8);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *param_1 = puVar10;
    }
    lVar12 = -(uVar8 & 0xffffffff);
    lVar11 = 0;
    do {
      lVar12 = lVar12 + 1;
      plVar7 = *(long **)*param_2;
      puVar1 = (undefined8 *)puVar10[1];
      if (puVar1 == (undefined8 *)puVar10[2]) {
        __src = (void *)*puVar10;
        __n = (long)puVar1 - (long)__src;
        uVar8 = ((long)__n >> 4) + 1;
        if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar5 = (long)puVar10[2] - (long)__src;
        uVar6 = lVar5 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffe < (ulong)(lVar5 >> 4)) {
          uVar8 = 0xfffffffffffffff;
        }
        if (uVar8 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar8 >> 0x3c != 0) {
            FUN_00c017d0();
            goto LAB_00c00078;
          }
          plVar9 = *(long **)(lVar4 + 0x30);
          if (plVar9 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar9 = DAT_04859430;
            *(long **)(lVar4 + 0x30) = DAT_04859430;
          }
          __dest = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8 << 4,8);
        }
        uVar2 = ((undefined8 *)((long)plVar7 + lVar11))[1];
        puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
        *puVar1 = *(undefined8 *)((long)plVar7 + lVar11);
        puVar1[1] = uVar2;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *puVar10 = __dest;
        puVar10[1] = puVar1 + 2;
        puVar10[2] = (void *)((long)__dest + uVar8 * 0x10);
        if (__src != (void *)0x0) {
          plVar7 = *(long **)(lVar4 + 0x30);
          if (plVar7 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar7 = DAT_04859430;
            *(long **)(lVar4 + 0x30) = DAT_04859430;
          }
          uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if ((uVar8 & 1) != 0) {
            lVar5 = FUN_00c4e600();
            if (0 < *(int *)(lVar5 + 0x12c8)) {
              FUN_00c48fe8(plVar7,__src,0,8);
              goto LAB_00bffd88;
            }
          }
          (**(code **)(*plVar7 + 0x18))(plVar7,__src,0,8);
        }
      }
      else {
        uVar2 = ((undefined8 *)((long)plVar7 + lVar11))[1];
        *puVar1 = *(undefined8 *)((long)plVar7 + lVar11);
        puVar1[1] = uVar2;
        puVar10[1] = puVar1 + 2;
      }
LAB_00bffd88:
      iVar3 = *(int *)(*(long *)*param_2 + lVar11 + 4);
      if ((iVar3 == 4) || (iVar3 == 3)) {
        *(undefined8 *)(*(long *)*param_2 + lVar11 + 8) = 0;
      }
      if (lVar12 == 0) goto LAB_00bffeb8;
      puVar10 = (undefined8 *)*param_1;
      lVar11 = lVar11 + 0x10;
    } while( true );
  }
  goto LAB_00bffec0;
LAB_00bffeb8:
  plVar7 = (long *)*param_2;
  if (plVar7 == (long *)0x0) goto LAB_00bfff5c;
LAB_00bffec0:
  lVar11 = *plVar7;
  if (lVar11 != 0) {
    plVar7[1] = lVar11;
    plVar9 = *(long **)(lVar4 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if ((uVar8 & 1) != 0) {
      lVar12 = FUN_00c4e600();
      if (0 < *(int *)(lVar12 + 0x12c8)) {
        FUN_00c48fe8(plVar9,lVar11,0,8);
        goto LAB_00bfff14;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,0,8);
  }
LAB_00bfff14:
  plVar9 = *(long **)(lVar4 + 0x30);
  if (plVar9 == (long *)0x0) {
    if ((DAT_04859438 & 1) == 0) {
LAB_00c00078:
      iVar3 = __cxa_guard_acquire(&DAT_04859438);
      if (iVar3 != 0) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
    }
    plVar9 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if ((uVar8 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar9,plVar7,0,8);
      goto LAB_00bfff5c;
    }
  }
  (**(code **)(*plVar9 + 0x18))(plVar9,plVar7,0,8);
LAB_00bfff5c:
  *param_2 = 0;
  return;
}


