/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00edf9fc; name: FUN_00edf9fc
 */


void FUN_00edf9fc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  short sVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  ulong unaff_x21;
  undefined8 uVar12;
  ulong uVar13;
  float fVar14;
  ulong local_80;
  long local_78;
  long local_70;
  long *local_68;
  
  FUN_00edfd64(param_1 + 0x30,*param_2);
  sVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x10))();
  if (0 < sVar4) {
    iVar11 = 0;
    plVar1 = (long *)(param_1 + 0x38);
    plVar2 = (long *)(param_1 + 0x68);
    do {
      plVar6 = (long *)(*(long *)(param_1 + 0x30) + 0x30);
      (**(code **)(*plVar6 + 0x20))(&local_80,plVar6,iVar11);
      uVar10 = local_80;
      uVar13 = *(ulong *)(param_1 + 0x40);
      if (uVar13 == 0) {
LAB_00edfaa4:
        plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x70) + 0x10))
                                   (*(long **)(param_1 + 0x70),0x38,8);
        if (plVar6 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x70) + 0xe8))();
        }
        uVar12 = *(undefined8 *)(param_1 + 0x70);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        plVar9 = local_68;
        if (lVar7 != 0) {
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        }
        plVar6[2] = local_80;
        plVar6[3] = local_78;
        local_68 = (long *)0x0;
        *(short *)(plVar6 + 6) = (short)iVar11;
        plVar6[4] = local_70;
        plVar6[5] = (long)plVar9;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        *plVar6 = 0;
        plVar6[1] = uVar10;
        fVar14 = (float)(*(long *)(param_1 + 0x90) + 1);
        if ((uVar13 == 0) || (*(float *)(param_1 + 0x98) * (float)uVar13 < fVar14)) {
          uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
          uVar8 = (ulong)(fVar14 / *(float *)(param_1 + 0x98));
          if (uVar8 <= uVar13) {
            uVar8 = uVar13;
          }
          FUN_00ec5c1c(plVar1,uVar8);
          uVar13 = *(ulong *)(param_1 + 0x40);
          if ((uVar13 & uVar13 - 1) == 0) {
            unaff_x21 = uVar13 - 1 & uVar10;
          }
          else if (uVar10 < uVar13) {
            unaff_x21 = uVar10;
          }
          else {
            uVar8 = 0;
            if (uVar13 != 0) {
              uVar8 = uVar10 / uVar13;
            }
            unaff_x21 = uVar10 - uVar8 * uVar13;
          }
        }
        plVar9 = *(long **)(*plVar1 + unaff_x21 * 8);
        if (plVar9 == (long *)0x0) {
          *plVar6 = *plVar2;
          *plVar2 = (long)plVar6;
          *(long **)(*plVar1 + unaff_x21 * 8) = plVar2;
          if (*plVar6 != 0) {
            uVar10 = *(ulong *)(*plVar6 + 8);
            if ((uVar13 & uVar13 - 1) == 0) {
              uVar10 = uVar10 & uVar13 - 1;
            }
            else if (uVar13 <= uVar10) {
              uVar8 = 0;
              if (uVar13 != 0) {
                uVar8 = uVar10 / uVar13;
              }
              uVar10 = uVar10 - uVar8 * uVar13;
            }
            plVar9 = (long *)(*plVar1 + uVar10 * 8);
            goto LAB_00edfb70;
          }
        }
        else {
          *plVar6 = *plVar9;
LAB_00edfb70:
          *plVar9 = (long)plVar6;
        }
        *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
      }
      else {
        uVar8 = uVar13 - 1;
        if ((uVar13 & uVar8) == 0) {
          unaff_x21 = uVar8 & local_80;
          plVar6 = *(long **)(*plVar1 + unaff_x21 * 8);
          if (plVar6 == (long *)0x0) goto LAB_00edfaa4;
          do {
            plVar6 = (long *)*plVar6;
            if ((plVar6 == (long *)0x0) ||
               (plVar6[1] != local_80 && (plVar6[1] & uVar8) != unaff_x21)) goto LAB_00edfaa4;
          } while (plVar6[2] != local_80);
        }
        else {
          unaff_x21 = local_80;
          if (uVar13 <= local_80) {
            uVar8 = 0;
            if (uVar13 != 0) {
              uVar8 = local_80 / uVar13;
            }
            unaff_x21 = local_80 - uVar8 * uVar13;
          }
          plVar6 = *(long **)(*plVar1 + unaff_x21 * 8);
          if (plVar6 == (long *)0x0) goto LAB_00edfaa4;
          do {
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) goto LAB_00edfaa4;
            uVar8 = plVar6[1];
            if (uVar8 != local_80) {
              if (uVar13 <= uVar8) {
                uVar3 = 0;
                if (uVar13 != 0) {
                  uVar3 = uVar8 / uVar13;
                }
                uVar8 = uVar8 - uVar3 * uVar13;
              }
              if (uVar8 != unaff_x21) goto LAB_00edfaa4;
            }
          } while (plVar6[2] != local_80);
        }
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      iVar11 = (int)(short)((short)iVar11 + 1);
    } while (iVar11 < sVar4);
  }
  return;
}


