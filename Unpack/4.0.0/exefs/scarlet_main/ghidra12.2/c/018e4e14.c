/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018e4e14; name: FUN_018e4e14
 */


void FUN_018e4e14(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x25;
  
  lVar10 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = lVar5;
  param_1[5] = lVar2;
  param_1[2] = lVar10;
  param_1[3] = lVar1;
  lVar10 = *(long *)(param_2 + 0x38);
  lVar5 = *(long *)(param_2 + 0x48);
  lVar1 = *(long *)(param_2 + 0x50);
  param_1[8] = *(long *)(param_2 + 0x40);
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = lVar10;
  param_1[9] = lVar5;
  param_1[10] = lVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  FUN_00fb9604(param_1,*(undefined8 *)(param_2 + 8));
  plVar7 = *(long **)(param_2 + 0x30);
  if (plVar7 != (long *)0x0) {
    do {
      uVar12 = plVar7[2];
      uVar11 = param_1[1];
      if (uVar11 == 0) {
LAB_018e4ef8:
        plVar9 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x38,8);
        if (plVar9 == (long *)0x0) {
          (**(code **)(*(long *)param_1[7] + 0xe8))();
        }
        lVar10 = param_1[7];
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 != 0) {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar10;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        }
        plVar9[2] = plVar7[2];
        plVar9[3] = plVar7[3];
        plVar9[4] = plVar7[4];
        plVar9[5] = plVar7[5];
        plVar6 = (long *)plVar7[6];
        plVar9[6] = (long)plVar6;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))();
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        *plVar9 = 0;
        plVar9[1] = uVar12;
        if ((uVar11 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar11 < (float)(param_1[0xb] + 1))
           ) {
          uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
          uVar8 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
          if (uVar8 <= uVar11) {
            uVar8 = uVar11;
          }
          FUN_00fb9604(param_1,uVar8);
          uVar11 = param_1[1];
          if ((uVar11 & uVar11 - 1) == 0) {
            unaff_x25 = uVar11 - 1 & uVar12;
          }
          else if (uVar12 < uVar11) {
            unaff_x25 = uVar12;
          }
          else {
            uVar8 = 0;
            if (uVar11 != 0) {
              uVar8 = uVar12 / uVar11;
            }
            unaff_x25 = uVar12 - uVar8 * uVar11;
          }
        }
        plVar6 = *(long **)(*param_1 + unaff_x25 * 8);
        if (plVar6 == (long *)0x0) {
          *plVar9 = param_1[6];
          param_1[6] = (long)plVar9;
          *(long **)(*param_1 + unaff_x25 * 8) = param_1 + 6;
          if (*plVar9 != 0) {
            uVar12 = *(ulong *)(*plVar9 + 8);
            if ((uVar11 & uVar11 - 1) == 0) {
              uVar12 = uVar12 & uVar11 - 1;
            }
            else if (uVar11 <= uVar12) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar8 * uVar11;
            }
            plVar6 = (long *)(*param_1 + uVar12 * 8);
            goto LAB_018e5018;
          }
        }
        else {
          *plVar9 = *plVar6;
LAB_018e5018:
          *plVar6 = (long)plVar9;
        }
        param_1[0xb] = param_1[0xb] + 1;
      }
      else {
        uVar8 = uVar11 - 1;
        if ((uVar11 & uVar8) == 0) {
          unaff_x25 = uVar8 & uVar12;
          plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
          if (plVar9 == (long *)0x0) goto LAB_018e4ef8;
          do {
            plVar9 = (long *)*plVar9;
            if ((plVar9 == (long *)0x0) || (plVar9[1] != uVar12 && (plVar9[1] & uVar8) != unaff_x25)
               ) goto LAB_018e4ef8;
          } while (plVar9[2] != uVar12);
        }
        else {
          unaff_x25 = uVar12;
          if (uVar11 <= uVar12) {
            uVar8 = 0;
            if (uVar11 != 0) {
              uVar8 = uVar12 / uVar11;
            }
            unaff_x25 = uVar12 - uVar8 * uVar11;
          }
          plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
          if (plVar9 == (long *)0x0) goto LAB_018e4ef8;
          do {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_018e4ef8;
            uVar8 = plVar9[1];
            if (uVar8 != uVar12) {
              if (uVar11 <= uVar8) {
                uVar3 = 0;
                if (uVar11 != 0) {
                  uVar3 = uVar8 / uVar11;
                }
                uVar8 = uVar8 - uVar3 * uVar11;
              }
              if (uVar8 != unaff_x25) goto LAB_018e4ef8;
            }
          } while (plVar9[2] != uVar12);
        }
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return;
}


