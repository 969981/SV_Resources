/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dad708; name: FUN_00dad708
 */


void FUN_00dad708(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
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
  FUN_00dadaac(param_1,*(undefined8 *)(param_2 + 8));
  plVar12 = *(long **)(param_2 + 0x30);
  if (plVar12 != (long *)0x0) {
    do {
      uVar11 = plVar12[2];
      uVar10 = param_1[1];
      if (uVar10 == 0) {
LAB_00dad7e4:
        plVar8 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x58,8);
        if (plVar8 == (long *)0x0) {
          (**(code **)(*(long *)param_1[7] + 0xe8))();
        }
        lVar9 = param_1[7];
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
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        }
        plVar8[2] = plVar12[2];
        plVar8[3] = plVar12[3];
        plVar8[4] = plVar12[4];
        plVar6 = (long *)plVar12[5];
        plVar8[5] = (long)plVar6;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))();
        }
        plVar8[6] = plVar12[6];
        plVar8[7] = plVar12[7];
        plVar8[8] = plVar12[8];
        plVar8[9] = plVar12[9];
        plVar6 = (long *)plVar12[10];
        plVar8[10] = (long)plVar6;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))();
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        *plVar8 = 0;
        plVar8[1] = uVar11;
        if ((uVar10 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar10 < (float)(param_1[0xb] + 1))
           ) {
          uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
          uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
          if (uVar7 <= uVar10) {
            uVar7 = uVar10;
          }
          FUN_00dadaac(param_1,uVar7);
          uVar10 = param_1[1];
          if ((uVar10 & uVar10 - 1) == 0) {
            param_2 = uVar10 - 1 & uVar11;
          }
          else if (uVar11 < uVar10) {
            param_2 = uVar11;
          }
          else {
            uVar7 = 0;
            if (uVar10 != 0) {
              uVar7 = uVar11 / uVar10;
            }
            param_2 = uVar11 - uVar7 * uVar10;
          }
        }
        plVar6 = *(long **)(*param_1 + param_2 * 8);
        if (plVar6 == (long *)0x0) {
          *plVar8 = param_1[6];
          param_1[6] = (long)plVar8;
          *(long **)(*param_1 + param_2 * 8) = param_1 + 6;
          if (*plVar8 != 0) {
            uVar11 = *(ulong *)(*plVar8 + 8);
            if ((uVar10 & uVar10 - 1) == 0) {
              uVar11 = uVar11 & uVar10 - 1;
            }
            else if (uVar10 <= uVar11) {
              uVar7 = 0;
              if (uVar10 != 0) {
                uVar7 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar7 * uVar10;
            }
            plVar6 = (long *)(*param_1 + uVar11 * 8);
            goto LAB_00dad98c;
          }
        }
        else {
          *plVar8 = *plVar6;
LAB_00dad98c:
          *plVar6 = (long)plVar8;
        }
        param_1[0xb] = param_1[0xb] + 1;
      }
      else {
        uVar7 = uVar10 - 1;
        if ((uVar10 & uVar7) == 0) {
          param_2 = uVar7 & uVar11;
          plVar8 = *(long **)(*param_1 + param_2 * 8);
          if (plVar8 == (long *)0x0) goto LAB_00dad7e4;
          do {
            plVar8 = (long *)*plVar8;
            if ((plVar8 == (long *)0x0) || (plVar8[1] != uVar11 && (plVar8[1] & uVar7) != param_2))
            goto LAB_00dad7e4;
          } while (plVar8[2] != uVar11);
        }
        else {
          param_2 = uVar11;
          if (uVar10 <= uVar11) {
            uVar7 = 0;
            if (uVar10 != 0) {
              uVar7 = uVar11 / uVar10;
            }
            param_2 = uVar11 - uVar7 * uVar10;
          }
          plVar8 = *(long **)(*param_1 + param_2 * 8);
          if (plVar8 == (long *)0x0) goto LAB_00dad7e4;
          do {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_00dad7e4;
            uVar7 = plVar8[1];
            if (uVar7 != uVar11) {
              if (uVar10 <= uVar7) {
                uVar3 = 0;
                if (uVar10 != 0) {
                  uVar3 = uVar7 / uVar10;
                }
                uVar7 = uVar7 - uVar3 * uVar10;
              }
              if (uVar7 != param_2) goto LAB_00dad7e4;
            }
          } while (plVar8[2] != uVar11);
        }
      }
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  return;
}


