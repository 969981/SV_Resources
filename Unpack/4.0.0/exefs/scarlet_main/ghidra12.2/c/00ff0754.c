/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff0754; name: FUN_00ff0754
 */


void FUN_00ff0754(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong unaff_x23;
  ulong uVar11;
  long *plVar12;
  
  lVar9 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = lVar5;
  param_1[5] = lVar2;
  param_1[2] = lVar9;
  param_1[3] = lVar1;
  lVar9 = *(long *)(param_2 + 0x38);
  lVar5 = *(long *)(param_2 + 0x48);
  lVar1 = *(long *)(param_2 + 0x50);
  param_1[8] = *(long *)(param_2 + 0x40);
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = lVar9;
  param_1[9] = lVar5;
  param_1[10] = lVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  FUN_00ff0ac8(param_1,*(undefined8 *)(param_2 + 8));
  plVar12 = *(long **)(param_2 + 0x30);
  if (plVar12 != (long *)0x0) {
    do {
      iVar4 = (int)plVar12[2];
      uVar11 = (ulong)iVar4;
      uVar10 = param_1[1];
      if (uVar10 == 0) {
LAB_00ff0808:
        plVar7 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x80,8);
        if (plVar7 == (long *)0x0) {
          (**(code **)(*(long *)param_1[7] + 0xe8))();
        }
        lVar9 = param_1[7];
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          *(int *)(plVar7 + 2) = (int)plVar12[2];
          FUN_00ff0bd4(plVar7 + 3,plVar12 + 3);
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          *(int *)(plVar7 + 2) = (int)plVar12[2];
          FUN_00ff0bd4(plVar7 + 3,plVar12 + 3);
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        *plVar7 = 0;
        plVar7[1] = uVar11;
        if ((uVar10 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar10 < (float)(param_1[0xb] + 1))
           ) {
          uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
          uVar6 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
          if (uVar6 <= uVar10) {
            uVar6 = uVar10;
          }
          FUN_00ff0ac8(param_1,uVar6);
          uVar10 = param_1[1];
          if ((uVar10 & uVar10 - 1) == 0) {
            unaff_x23 = uVar10 - 1 & uVar11;
          }
          else if (uVar11 < uVar10) {
            unaff_x23 = uVar11;
          }
          else {
            uVar6 = 0;
            if (uVar10 != 0) {
              uVar6 = uVar11 / uVar10;
            }
            unaff_x23 = uVar11 - uVar6 * uVar10;
          }
        }
        plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
        if (plVar8 == (long *)0x0) {
          *plVar7 = param_1[6];
          param_1[6] = (long)plVar7;
          *(long **)(*param_1 + unaff_x23 * 8) = param_1 + 6;
          if (*plVar7 != 0) {
            uVar11 = *(ulong *)(*plVar7 + 8);
            if ((uVar10 & uVar10 - 1) == 0) {
              uVar11 = uVar11 & uVar10 - 1;
            }
            else if (uVar10 <= uVar11) {
              uVar6 = 0;
              if (uVar10 != 0) {
                uVar6 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar6 * uVar10;
            }
            plVar8 = (long *)(*param_1 + uVar11 * 8);
            goto LAB_00ff0910;
          }
        }
        else {
          *plVar7 = *plVar8;
LAB_00ff0910:
          *plVar8 = (long)plVar7;
        }
        param_1[0xb] = param_1[0xb] + 1;
      }
      else {
        uVar6 = uVar10 - 1;
        if ((uVar10 & uVar6) == 0) {
          unaff_x23 = uVar6 & uVar11;
          plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
          if (plVar7 == (long *)0x0) goto LAB_00ff0808;
          do {
            plVar7 = (long *)*plVar7;
            if ((plVar7 == (long *)0x0) || (plVar7[1] != uVar11 && (plVar7[1] & uVar6) != unaff_x23)
               ) goto LAB_00ff0808;
          } while (*(int *)(plVar7 + 2) != iVar4);
        }
        else {
          unaff_x23 = uVar11;
          if (uVar10 <= uVar11) {
            uVar6 = 0;
            if (uVar10 != 0) {
              uVar6 = uVar11 / uVar10;
            }
            unaff_x23 = uVar11 - uVar6 * uVar10;
          }
          plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
          if (plVar7 == (long *)0x0) goto LAB_00ff0808;
          do {
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_00ff0808;
            uVar6 = plVar7[1];
            if (uVar6 != uVar11) {
              if (uVar10 <= uVar6) {
                uVar3 = 0;
                if (uVar10 != 0) {
                  uVar3 = uVar6 / uVar10;
                }
                uVar6 = uVar6 - uVar3 * uVar10;
              }
              if (uVar6 != unaff_x23) goto LAB_00ff0808;
            }
          } while (*(int *)(plVar7 + 2) != iVar4);
        }
      }
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  return;
}


