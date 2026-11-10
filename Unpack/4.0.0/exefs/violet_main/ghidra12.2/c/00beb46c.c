/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00beb46c; name: FUN_00beb46c
 */


void FUN_00beb46c(long *param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x23;
  void *__src;
  size_t __n;
  long lVar9;
  
  lVar8 = *param_3;
  param_3[1] = lVar8;
  if (param_1[2] == param_2) {
    return;
  }
  __src = (void *)(long)*(int *)(param_1[1] + 0x2c);
  lVar2 = tpidr_el0;
  if (__src <= (void *)(param_3[2] - lVar8 >> 3)) goto LAB_00beb564;
  if (*(int *)(param_1[1] + 0x2c) < 0) goto LAB_00beb938;
  unaff_x23 = (long)__src << 3;
  plVar6 = *(long **)(lVar2 + 0x30);
  if (plVar6 == (long *)0x0) {
    if ((DAT_04859438 & 1) == 0) goto LAB_00beb93c;
    goto LAB_00beb8d8;
  }
LAB_00beb4f0:
  lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,unaff_x23,8);
  *param_3 = lVar4;
  param_3[1] = lVar4;
  param_3[2] = lVar4 + (long)__src * 8;
  if (lVar8 != 0) {
    plVar6 = *(long **)(lVar2 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar2 + 0x30) = DAT_04859430;
    }
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar8,0,8);
    }
  }
LAB_00beb564:
  lVar4 = param_1[1];
  if (*(int *)(lVar4 + 0x2c) < 1) {
LAB_00beb840:
    if (*(int *)((long)param_1 + 0x34) != -1) {
      FUN_00c1bb38(param_2 + *(int *)((long)param_1 + 0x34),lVar4,param_1[9],param_3);
    }
    FUN_00bf5610(*param_3,param_3[1]);
    return;
  }
  lVar9 = 0;
  lVar8 = 0;
  do {
    unaff_x23 = *(long *)(lVar4 + 0x30) + lVar9;
    if (*(int *)(unaff_x23 + 0x40) == 3) {
      iVar3 = (**(code **)(*param_1 + 0x30))(param_1,param_2,unaff_x23);
      if (0 < iVar3) goto LAB_00beb60c;
    }
    else {
      lVar4 = *(long *)(unaff_x23 + 0x58);
      if (lVar4 == 0) {
        uVar5 = FUN_00be944c(param_1,param_2,unaff_x23);
        if ((uVar5 & 1) != 0) goto LAB_00beb60c;
      }
      else {
        uVar1 = (int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
        if (*(int *)(param_2 + *(int *)((long)param_1 + 0x2c) +
                    (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2)) ==
            *(int *)(unaff_x23 + 0x38)) {
LAB_00beb60c:
          plVar6 = (long *)param_3[1];
          if (plVar6 == (long *)param_3[2]) {
            __src = (void *)*param_3;
            __n = (long)plVar6 - (long)__src;
            uVar5 = ((long)__n >> 3) + 1;
            if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar4 = param_3[2] - (long)__src;
            uVar7 = lVar4 >> 2;
            if (uVar5 <= uVar7) {
              uVar5 = uVar7;
            }
            if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
              uVar5 = 0x1fffffffffffffff;
            }
            if (uVar5 == 0) {
              __dest = (void *)0x0;
            }
            else {
              if (uVar5 >> 0x3d != 0) break;
              plVar6 = *(long **)(lVar2 + 0x30);
              if (plVar6 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar6 = DAT_04859430;
                *(long **)(lVar2 + 0x30) = DAT_04859430;
              }
              __dest = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar5 << 3,8);
            }
            plVar6 = (long *)((long)__dest + ((long)__n >> 3) * 8);
            *plVar6 = unaff_x23;
            if (0 < (long)__n) {
              memcpy(__dest,__src,__n);
            }
            *param_3 = (long)__dest;
            param_3[1] = (long)(plVar6 + 1);
            param_3[2] = (long)((long)__dest + uVar5 * 8);
            if (__src != (void *)0x0) {
              plVar6 = *(long **)(lVar2 + 0x30);
              if (plVar6 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar6 = DAT_04859430;
                *(long **)(lVar2 + 0x30) = DAT_04859430;
              }
              uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
              if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                (**(code **)(*plVar6 + 0x18))(plVar6,__src,0,8);
              }
              else {
                FUN_00c48fe8(plVar6,__src,0,8);
              }
            }
          }
          else {
            *plVar6 = unaff_x23;
            param_3[1] = (long)(plVar6 + 1);
          }
        }
      }
    }
    lVar4 = param_1[1];
    lVar8 = lVar8 + 1;
    lVar9 = lVar9 + 0x90;
    if (*(int *)(lVar4 + 0x2c) <= lVar8) goto LAB_00beb840;
  } while( true );
LAB_00beb938:
  FUN_00bf4720();
LAB_00beb93c:
  iVar3 = __cxa_guard_acquire(&DAT_04859438);
  if (iVar3 != 0) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
LAB_00beb8d8:
  plVar6 = DAT_04859430;
  *(long **)(lVar2 + 0x30) = DAT_04859430;
  goto LAB_00beb4f0;
}


