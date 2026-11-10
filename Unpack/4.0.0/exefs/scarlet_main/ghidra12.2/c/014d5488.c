/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014d5488; name: FUN_014d5488
 */


void FUN_014d5488(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong unaff_x25;
  long *plVar13;
  
  lVar11 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar6 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = lVar6;
  param_1[5] = lVar2;
  param_1[2] = lVar11;
  param_1[3] = lVar1;
  lVar11 = *(long *)(param_2 + 0x38);
  lVar6 = *(long *)(param_2 + 0x48);
  lVar1 = *(long *)(param_2 + 0x50);
  param_1[8] = *(long *)(param_2 + 0x40);
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = lVar11;
  param_1[9] = lVar6;
  param_1[10] = lVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  FUN_014d4670(param_1,*(undefined8 *)(param_2 + 8));
  plVar13 = *(long **)(param_2 + 0x30);
  if (plVar13 != (long *)0x0) {
    do {
      bVar3 = *(byte *)(plVar13 + 2);
      uVar10 = (ulong)bVar3;
      uVar12 = param_1[1];
      if (uVar12 == 0) {
LAB_014d5544:
        plVar7 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x50,8);
        if (plVar7 == (long *)0x0) {
          (**(code **)(*(long *)param_1[7] + 0xe8))();
        }
        lVar11 = param_1[7];
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          *(char *)(plVar7 + 2) = (char)plVar13[2];
          FUN_014d57fc(plVar7 + 3,plVar13 + 3);
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar11;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          *(char *)(plVar7 + 2) = (char)plVar13[2];
          FUN_014d57fc(plVar7 + 3,plVar13 + 3);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        *plVar7 = 0;
        plVar7[1] = uVar10;
        if ((uVar12 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar12 < (float)(param_1[0xb] + 1))
           ) {
          uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
          uVar9 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
          if (uVar9 <= uVar12) {
            uVar9 = uVar12;
          }
          FUN_014d4670(param_1,uVar9);
          uVar12 = param_1[1];
          if ((uVar12 & uVar12 - 1) == 0) {
            unaff_x25 = (int)uVar12 - 1 & uVar10;
          }
          else if (uVar10 < uVar12) {
            unaff_x25 = uVar10;
          }
          else {
            uVar9 = 0;
            if (uVar12 != 0) {
              uVar9 = uVar10 / uVar12;
            }
            unaff_x25 = uVar10 - uVar9 * uVar12;
          }
        }
        plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
        if (plVar8 == (long *)0x0) {
          *plVar7 = param_1[6];
          param_1[6] = (long)plVar7;
          *(long **)(*param_1 + unaff_x25 * 8) = param_1 + 6;
          if (*plVar7 != 0) {
            uVar10 = *(ulong *)(*plVar7 + 8);
            if ((uVar12 & uVar12 - 1) == 0) {
              uVar10 = uVar10 & uVar12 - 1;
            }
            else if (uVar12 <= uVar10) {
              uVar9 = 0;
              if (uVar12 != 0) {
                uVar9 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar9 * uVar12;
            }
            plVar8 = (long *)(*param_1 + uVar10 * 8);
            goto LAB_014d5640;
          }
        }
        else {
          *plVar7 = *plVar8;
LAB_014d5640:
          *plVar8 = (long)plVar7;
        }
        param_1[0xb] = param_1[0xb] + 1;
      }
      else if ((uVar12 & uVar12 - 1) == 0) {
        unaff_x25 = (int)uVar12 - 1 & uVar10;
        plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
        if (plVar7 == (long *)0x0) goto LAB_014d5544;
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) ||
             (plVar7[1] != uVar10 && (plVar7[1] & uVar12 - 1) != unaff_x25)) goto LAB_014d5544;
        } while (*(byte *)(plVar7 + 2) != bVar3);
      }
      else {
        unaff_x25 = uVar10;
        if (uVar12 <= uVar10) {
          uVar9 = 0;
          if (uVar12 != 0) {
            uVar9 = uVar10 / uVar12;
          }
          unaff_x25 = uVar10 - uVar9 * uVar12;
        }
        plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
        if (plVar7 == (long *)0x0) goto LAB_014d5544;
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_014d5544;
          uVar9 = plVar7[1];
          if (uVar9 != uVar10) {
            if (uVar12 <= uVar9) {
              uVar4 = 0;
              if (uVar12 != 0) {
                uVar4 = uVar9 / uVar12;
              }
              uVar9 = uVar9 - uVar4 * uVar12;
            }
            if (uVar9 != unaff_x25) goto LAB_014d5544;
          }
        } while (*(byte *)(plVar7 + 2) != bVar3);
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return;
}


