/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01814250; name: FUN_01814250
 */


void FUN_01814250(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,ulong *param_6)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong unaff_x24;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  
  nn::os::AcquireWriteLock((ReaderWriterLockType *)(param_5 + 0x278));
  uVar10 = *param_6;
  plVar1 = (long *)(param_5 + 0x140);
  uVar9 = *(ulong *)(param_5 + 0x148);
  if (uVar9 != 0) {
    uVar6 = uVar9 - 1;
    if ((uVar9 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar10;
      plVar8 = *(long **)(*plVar1 + unaff_x24 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) || (plVar8[1] != uVar10 && (plVar8[1] & uVar6) != unaff_x24))
          goto LAB_01814380;
        } while (plVar8[2] != uVar10);
        goto LAB_018142ec;
      }
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
      plVar8 = *(long **)(*plVar1 + unaff_x24 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_01814380;
          uVar6 = plVar8[1];
          if (uVar6 != uVar10) {
            if (uVar9 <= uVar6) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar6 / uVar9;
              }
              uVar6 = uVar6 - uVar5 * uVar9;
            }
            if (uVar6 != unaff_x24) goto LAB_01814380;
          }
        } while (plVar8[2] != uVar10);
        goto LAB_018142ec;
      }
    }
  }
LAB_01814380:
  plVar8 = (long *)(**(code **)(**(long **)(param_5 + 0x178) + 0x10))
                             (*(long **)(param_5 + 0x178),0x70,0x10);
  if (plVar8 == (long *)0x0) {
    (**(code **)(**(long **)(param_5 + 0x178) + 0xe8))();
  }
  uVar11 = *(undefined8 *)(param_5 + 0x178);
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
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar11;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  plVar8[2] = *param_6;
  plVar8[3] = param_6[1];
  plVar8[4] = param_6[2];
  plVar4 = (long *)param_6[3];
  plVar8[5] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  plVar8[0xc] = 0;
  plVar8[0xd] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar10;
  fVar12 = (float)(*(long *)(param_5 + 0x198) + 1);
  if ((uVar9 == 0) || (*(float *)(param_5 + 0x1a0) * (float)uVar9 < fVar12)) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar6 = (ulong)(fVar12 / *(float *)(param_5 + 0x1a0));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = std::__next_prime(uVar6);
    }
    uVar9 = *(ulong *)(param_5 + 0x148);
    if (uVar9 < uVar6) {
      uVar5 = uVar6;
LAB_01814520:
      FUN_01814670(plVar1,uVar5);
    }
    else if (uVar6 < uVar9) {
      uVar5 = (ulong)((float)*(ulong *)(param_5 + 0x198) / *(float *)(param_5 + 0x1a0));
      if ((uVar9 < 3) ||
         (uVar7 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar5 = std::__next_prime(uVar5);
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if (uVar5 < uVar9) goto LAB_01814520;
    }
    uVar9 = *(ulong *)(param_5 + 0x148);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else if (uVar10 < uVar9) {
      unaff_x24 = uVar10;
    }
    else {
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar10 / uVar9;
      }
      unaff_x24 = uVar10 - uVar6 * uVar9;
    }
  }
  plVar4 = *(long **)(*plVar1 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    *plVar8 = *(long *)(param_5 + 0x170);
    *(long **)(param_5 + 0x170) = plVar8;
    *(long *)(*(long *)(param_5 + 0x140) + unaff_x24 * 8) = param_5 + 0x170;
    if (*plVar8 != 0) {
      uVar10 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar6 * uVar9;
      }
      plVar4 = (long *)(*plVar1 + uVar10 * 8);
      goto LAB_018144b0;
    }
  }
  else {
    *plVar8 = *plVar4;
LAB_018144b0:
    *plVar4 = (long)plVar8;
  }
  *(long *)(param_5 + 0x198) = *(long *)(param_5 + 0x198) + 1;
LAB_018142ec:
  plVar8[7] = param_1._8_8_;
  plVar8[6] = param_1._0_8_;
  plVar8[9] = param_2._8_8_;
  plVar8[8] = param_2._0_8_;
  plVar8[0xb] = param_3._8_8_;
  plVar8[10] = param_3._0_8_;
  plVar8[0xd] = param_4._8_8_;
  plVar8[0xc] = param_4._0_8_;
  nn::os::ReleaseWriteLock((ReaderWriterLockType *)(param_5 + 0x278));
  return;
}


