/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ff0bd4; name: FUN_00ff0bd4
 */


void FUN_00ff0bd4(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x27;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  lVar5 = *(long *)(param_2 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = lVar3;
  param_1[5] = lVar5;
  param_1[2] = lVar2;
  param_1[3] = lVar4;
  lVar2 = *(long *)(param_2 + 0x38);
  lVar3 = *(long *)(param_2 + 0x48);
  lVar4 = *(long *)(param_2 + 0x50);
  param_1[8] = *(long *)(param_2 + 0x40);
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = lVar2;
  param_1[9] = lVar3;
  param_1[10] = lVar4;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  FUN_00ff1010(param_1,*(undefined8 *)(param_2 + 8));
  plVar11 = *(long **)(param_2 + 0x30);
  if (plVar11 != (long *)0x0) {
    plVar1 = param_1 + 7;
    do {
      iVar6 = (int)plVar11[2];
      uVar13 = (ulong)iVar6;
      uVar12 = param_1[1];
      if (uVar12 == 0) {
LAB_00ff0c8c:
        plVar9 = (long *)(**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,0x20,8);
        if (plVar9 == (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0xe8))();
        }
        FUN_00ff0e90(plVar1,plVar9 + 2,plVar11 + 2);
        *plVar9 = 0;
        plVar9[1] = uVar13;
        if ((uVar12 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar12 < (float)(param_1[0xb] + 1))
           ) {
          uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
          uVar8 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
          if (uVar8 <= uVar12) {
            uVar8 = uVar12;
          }
          FUN_00ff1010(param_1,uVar8);
          uVar12 = param_1[1];
          if ((uVar12 & uVar12 - 1) == 0) {
            unaff_x27 = uVar12 - 1 & uVar13;
          }
          else if (uVar13 < uVar12) {
            unaff_x27 = uVar13;
          }
          else {
            uVar8 = 0;
            if (uVar12 != 0) {
              uVar8 = uVar13 / uVar12;
            }
            unaff_x27 = uVar13 - uVar8 * uVar12;
          }
        }
        plVar10 = *(long **)(*param_1 + unaff_x27 * 8);
        if (plVar10 == (long *)0x0) {
          *plVar9 = param_1[6];
          param_1[6] = (long)plVar9;
          *(long **)(*param_1 + unaff_x27 * 8) = param_1 + 6;
          if (*plVar9 != 0) {
            uVar13 = *(ulong *)(*plVar9 + 8);
            if ((uVar12 & uVar12 - 1) == 0) {
              uVar13 = uVar13 & uVar12 - 1;
            }
            else if (uVar12 <= uVar13) {
              uVar8 = 0;
              if (uVar12 != 0) {
                uVar8 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar8 * uVar12;
            }
            plVar10 = (long *)(*param_1 + uVar13 * 8);
            goto LAB_00ff0d2c;
          }
        }
        else {
          *plVar9 = *plVar10;
LAB_00ff0d2c:
          *plVar10 = (long)plVar9;
        }
        param_1[0xb] = param_1[0xb] + 1;
      }
      else {
        uVar8 = uVar12 - 1;
        if ((uVar12 & uVar8) == 0) {
          unaff_x27 = uVar8 & uVar13;
          plVar9 = *(long **)(*param_1 + unaff_x27 * 8);
          if (plVar9 == (long *)0x0) goto LAB_00ff0c8c;
          do {
            plVar9 = (long *)*plVar9;
            if ((plVar9 == (long *)0x0) || (plVar9[1] != uVar13 && (plVar9[1] & uVar8) != unaff_x27)
               ) goto LAB_00ff0c8c;
          } while (*(int *)(plVar9 + 2) != iVar6);
        }
        else {
          unaff_x27 = uVar13;
          if (uVar12 <= uVar13) {
            uVar8 = 0;
            if (uVar12 != 0) {
              uVar8 = uVar13 / uVar12;
            }
            unaff_x27 = uVar13 - uVar8 * uVar12;
          }
          plVar9 = *(long **)(*param_1 + unaff_x27 * 8);
          if (plVar9 == (long *)0x0) goto LAB_00ff0c8c;
          do {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_00ff0c8c;
            uVar8 = plVar9[1];
            if (uVar8 != uVar13) {
              if (uVar12 <= uVar8) {
                uVar7 = 0;
                if (uVar12 != 0) {
                  uVar7 = uVar8 / uVar12;
                }
                uVar8 = uVar8 - uVar7 * uVar12;
              }
              if (uVar8 != unaff_x27) goto LAB_00ff0c8c;
            }
          } while (*(int *)(plVar9 + 2) != iVar6);
        }
      }
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  return;
}


