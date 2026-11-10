/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01612840; name: FUN_01612840
 */


void FUN_01612840(long *param_1,ulong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  long lVar11;
  
  uVar9 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar5 = uVar10 - 1;
    if ((uVar10 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar9;
      plVar6 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar6 != (long *)0x0) {
        while ((plVar6 = (long *)*plVar6, plVar6 != (long *)0x0 &&
               (plVar6[1] == uVar9 || (plVar6[1] & uVar5) == unaff_x25))) {
          if (plVar6[2] == uVar9) {
            return;
          }
        }
      }
    }
    else {
      unaff_x25 = uVar9;
      if (uVar10 <= uVar9) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar9 / uVar10;
        }
        unaff_x25 = uVar9 - uVar5 * uVar10;
      }
      plVar6 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar6 != (long *)0x0) {
        while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
          uVar5 = plVar6[1];
          if (uVar5 != uVar9) {
            if (uVar10 <= uVar5) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar5 / uVar10;
              }
              uVar5 = uVar5 - uVar4 * uVar10;
            }
            if (uVar5 != unaff_x25) break;
          }
          if (plVar6[2] == uVar9) {
            return;
          }
        }
      }
    }
  }
  plVar6 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x40,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar11 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  plVar6[2] = *param_2;
  *(undefined4 *)(plVar6 + 3) = *param_3;
  *(undefined4 *)((long)plVar6 + 0x1c) = param_3[1];
  *(undefined4 *)(plVar6 + 4) = param_3[2];
  *(undefined4 *)((long)plVar6 + 0x24) = param_3[3];
  *(undefined4 *)(plVar6 + 5) = param_3[4];
  *(undefined4 *)((long)plVar6 + 0x2c) = param_3[5];
  *(undefined4 *)(plVar6 + 6) = param_3[6];
  uVar1 = param_3[7];
  *(undefined4 *)((long)plVar6 + 0x37) = *(undefined4 *)((long)param_3 + 0x1f);
  *(undefined4 *)((long)plVar6 + 0x34) = uVar1;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar6 = 0;
  plVar6[1] = uVar9;
  if ((uVar10 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar10 < (float)(param_1[0xb] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar5 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      uVar5 = std::__next_prime(uVar5);
    }
    uVar10 = param_1[1];
    if (uVar10 < uVar5) {
      uVar4 = uVar5;
LAB_01612a68:
      FUN_01612c2c(param_1,uVar4);
    }
    else if (uVar5 < uVar10) {
      uVar4 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar10 < 3) ||
         (uVar8 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
         uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
         1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar4 = std::__next_prime(uVar4);
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      if (uVar4 < uVar10) goto LAB_01612a68;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      unaff_x25 = uVar9;
    }
    else {
      uVar5 = 0;
      if (uVar10 != 0) {
        uVar5 = uVar9 / uVar10;
      }
      unaff_x25 = uVar9 - uVar5 * uVar10;
    }
  }
  plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 6;
    *plVar6 = *plVar7;
    *plVar7 = (long)plVar6;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar7;
    if (*plVar6 == 0) goto LAB_01612a9c;
    uVar9 = *(ulong *)(*plVar6 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar9 = uVar9 & uVar10 - 1;
    }
    else if (uVar10 <= uVar9) {
      uVar5 = 0;
      if (uVar10 != 0) {
        uVar5 = uVar9 / uVar10;
      }
      uVar9 = uVar9 - uVar5 * uVar10;
    }
    plVar7 = (long *)(*param_1 + uVar9 * 8);
  }
  else {
    *plVar6 = *plVar7;
  }
  *plVar7 = (long)plVar6;
LAB_01612a9c:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


