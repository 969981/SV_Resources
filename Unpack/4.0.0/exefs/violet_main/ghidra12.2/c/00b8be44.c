/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b8be44; name: FUN_00b8be44
 */


undefined4 FUN_00b8be44(long param_1,byte *param_2,long param_3,byte *param_4)

{
  int iVar1;
  void *__dest;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  byte *__s2;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  size_t sVar9;
  size_t __n;
  ulong uVar10;
  ulong unaff_x26;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  
  __s2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  bVar2 = *__s2;
  if (bVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    pbVar5 = __s2;
    do {
      pbVar5 = pbVar5 + 1;
      uVar11 = uVar11 * 5 + (ulong)bVar2;
      bVar2 = *pbVar5;
    } while (bVar2 != 0);
  }
  uVar12 = *(ulong *)(param_1 + 0xf8);
  plVar4 = (long *)(param_1 + 0xf0);
  if (uVar12 != 0) {
    uVar10 = uVar12 - 1;
    if ((uVar12 & uVar10) == 0) {
      unaff_x26 = uVar10 & uVar11;
      plVar8 = *(long **)(*plVar4 + unaff_x26 * 8);
      if (plVar8 != (long *)0x0) {
        while ((plVar8 = (long *)*plVar8, plVar8 != (long *)0x0 &&
               (plVar8[1] == uVar11 || (plVar8[1] & uVar10) == unaff_x26))) {
          iVar1 = strcmp((char *)plVar8[2],(char *)__s2);
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
    }
    else {
      unaff_x26 = uVar11;
      if (uVar12 <= uVar11) {
        uVar10 = 0;
        if (uVar12 != 0) {
          uVar10 = uVar11 / uVar12;
        }
        unaff_x26 = uVar11 - uVar10 * uVar12;
      }
      plVar8 = *(long **)(*plVar4 + unaff_x26 * 8);
      if (plVar8 != (long *)0x0) {
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          uVar10 = plVar8[1];
          if (uVar10 != uVar11) {
            if (uVar12 <= uVar10) {
              uVar3 = 0;
              if (uVar12 != 0) {
                uVar3 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar3 * uVar12;
            }
            if (uVar10 != unaff_x26) break;
          }
          iVar1 = strcmp((char *)plVar8[2],(char *)__s2);
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
    }
  }
  __n = tpidr_el0;
  plVar8 = *(long **)(__n + 0x30);
  sVar9 = __n;
  uVar10 = unaff_x26;
  if (plVar8 == (long *)0x0) {
    if ((DAT_04859438 & 1) == 0) goto LAB_00b8c3c0;
    goto LAB_00b8c338;
  }
  do {
    unaff_x26 = uVar11;
    plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x28,8);
    plVar8[2] = (long)__s2;
    plVar8[3] = param_3;
    plVar8[4] = (long)param_4;
    *plVar8 = 0;
    plVar8[1] = unaff_x26;
    fVar13 = (float)(*(long *)(param_1 + 0x108) + 1);
    if ((uVar12 == 0) || (*(float *)(param_1 + 0x110) * (float)uVar12 < fVar13)) {
      uVar11 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
      uVar10 = (ulong)(fVar13 / *(float *)(param_1 + 0x110));
      if (uVar10 <= uVar11) {
        uVar10 = uVar11;
      }
      if (uVar10 - 1 == 0) {
        uVar10 = 2;
      }
      else if ((uVar10 & uVar10 - 1) != 0) {
        uVar10 = std::__next_prime(uVar10);
        uVar12 = *(ulong *)(param_1 + 0xf8);
      }
      if (uVar12 < uVar10) {
        uVar11 = uVar10;
LAB_00b8c060:
        FUN_00baa530(plVar4,uVar11);
      }
      else if (uVar10 < uVar12) {
        uVar11 = (ulong)((float)*(ulong *)(param_1 + 0x108) / *(float *)(param_1 + 0x110));
        if ((uVar12 < 3) ||
           (uVar3 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
           uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333),
           1 < (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar11 = std::__next_prime(uVar11);
        }
        else if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (uVar11 < uVar12) goto LAB_00b8c060;
      }
      uVar12 = *(ulong *)(param_1 + 0xf8);
      if ((uVar12 & uVar12 - 1) == 0) {
        unaff_x26 = uVar12 - 1 & unaff_x26;
      }
      else if (uVar12 <= unaff_x26) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = unaff_x26 / uVar12;
        }
        unaff_x26 = unaff_x26 - uVar11 * uVar12;
      }
    }
    else {
      unaff_x26 = uVar10;
    }
    lVar7 = *plVar4;
    plVar6 = *(long **)(lVar7 + unaff_x26 * 8);
    if (plVar6 == (long *)0x0) {
      *plVar8 = *(long *)(param_1 + 0x100);
      *(long **)(param_1 + 0x100) = plVar8;
      *(long *)(lVar7 + unaff_x26 * 8) = param_1 + 0x100;
      if (*plVar8 != 0) {
        uVar11 = *(ulong *)(*plVar8 + 8);
        if ((uVar12 & uVar12 - 1) == 0) {
          uVar11 = uVar11 & uVar12 - 1;
        }
        else if (uVar12 <= uVar11) {
          uVar10 = 0;
          if (uVar12 != 0) {
            uVar10 = uVar11 / uVar12;
          }
          uVar11 = uVar11 - uVar10 * uVar12;
        }
        plVar6 = (long *)(*plVar4 + uVar11 * 8);
        goto LAB_00b8c19c;
      }
    }
    else {
      *plVar8 = *plVar6;
LAB_00b8c19c:
      *plVar6 = (long)plVar8;
    }
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
    param_4 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      param_4 = *(byte **)(param_2 + 0x10);
    }
    plVar8 = *(long **)(param_1 + 0x178);
    if (plVar8 < *(long **)(param_1 + 0x180)) {
      *plVar8 = (long)param_4;
      *(long **)(param_1 + 0x178) = plVar8 + 1;
      return 1;
    }
    param_2 = *(byte **)(param_1 + 0x170);
    __n = (long)plVar8 - (long)param_2;
    param_3 = (long)__n >> 3;
    __s2 = (byte *)(param_3 + 1);
    if ((ulong)__s2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = (long)*(long **)(param_1 + 0x180) - (long)param_2;
    pbVar5 = (byte *)(lVar7 >> 2);
    if (__s2 <= pbVar5) {
      __s2 = pbVar5;
    }
    if (0xffffffffffffffe < (ulong)(lVar7 >> 3)) {
      __s2 = &DAT_1fffffffffffffff;
    }
    if (__s2 == (byte *)0x0) {
      __dest = (void *)0x0;
      goto LAB_00b8c260;
    }
    if ((ulong)__s2 >> 0x3d == 0) {
      plVar4 = *(long **)(sVar9 + 0x30);
      if (plVar4 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar4 = DAT_04859430;
        *(long **)(sVar9 + 0x30) = DAT_04859430;
      }
      __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,(long)__s2 << 3,8);
LAB_00b8c260:
      plVar4 = (long *)((long)__dest + param_3 * 8);
      *plVar4 = (long)param_4;
      if (0 < (long)__n) {
        memcpy(__dest,param_2,__n);
      }
      *(void **)(param_1 + 0x170) = __dest;
      *(long **)(param_1 + 0x178) = plVar4 + 1;
      *(void **)(param_1 + 0x180) = (void *)((long)__dest + (long)__s2 * 8);
      if (param_2 != (byte *)0x0) {
        plVar4 = *(long **)(sVar9 + 0x30);
        if (plVar4 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar4 = DAT_04859430;
          *(long **)(sVar9 + 0x30) = DAT_04859430;
        }
        uVar11 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (((uVar11 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0,8);
        }
        else {
          FUN_00c48fe8(plVar4,param_2,0,8);
        }
      }
      return 1;
    }
    FUN_01f6e360();
    uVar11 = sVar9;
LAB_00b8c3c0:
    iVar1 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar1 != 0) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00b8c338:
    plVar8 = DAT_04859430;
    *(long **)(__n + 0x30) = DAT_04859430;
    sVar9 = __n;
    uVar10 = unaff_x26;
  } while( true );
}


