/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048fca0; name: FUN_0048fca0
 */


/* WARNING: Removing unreachable block (ram,0x0048fd5c) */

int FUN_0048fca0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  int *piVar14;
  
  if (((*(long *)(param_1 + 0x98) == 0) || (iVar1 = FUN_0047e430(), iVar1 == 0)) ||
     (*(long *)(param_1 + 0x38) == 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x98);
  if (((lVar11 == 0) || (iVar1 = FUN_0047e430(lVar11), iVar1 < 1)) || (param_1 == 0)) {
    if (param_1 == 0) {
      return 0;
    }
LAB_0048fd34:
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x38) == 0)) goto LAB_0048fd34;
  lVar7 = FUN_0047e450(lVar11,0);
  lVar6 = *(long *)(lVar7 + 0x120);
  if (lVar6 == 0) {
    iVar1 = 1;
    lVar6 = 0;
    goto LAB_004901f0;
  }
  iVar1 = FUN_0048e940(lVar6);
  if (iVar1 == 0) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      *(long *)(param_1 + 0xb8) = lVar7;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        lVar6 = 0;
        goto LAB_004901f0;
      }
      goto LAB_0048fd74;
    }
  }
  else {
    iVar1 = 1;
LAB_0048fd74:
    FUN_0047d9e0(lVar6,&LAB_0048ec40);
    lVar6 = FUN_0047da00(lVar6);
    if (lVar6 != 0) {
      iVar5 = 1;
      iVar2 = FUN_0047e430(lVar11);
      if (1 < iVar2) {
LAB_0048fdcc:
        lVar7 = FUN_0047e450(lVar11,iVar5);
        iVar2 = FUN_0048e940(*(undefined8 *)(lVar7 + 0x120));
        if (iVar2 == 0) {
          if (param_1 == 0) goto LAB_004901a4;
          *(int *)(param_1 + 0xac) = iVar5;
          *(undefined4 *)(param_1 + 0xb0) = 0x29;
          *(long *)(param_1 + 0xb8) = lVar7;
          iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar1 == 0) goto LAB_004901f0;
        }
        if (*(long *)(lVar7 + 0x120) == 0) {
          iVar2 = FUN_0047e430(lVar6);
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              lVar9 = FUN_0047e450(lVar6,iVar2);
              if (**(int **)(lVar9 + 8) != 0) goto LAB_00490064;
              iVar2 = iVar2 + 1;
              iVar4 = FUN_0047e430(lVar6);
            } while (iVar2 < iVar4);
          }
        }
        else {
          FUN_0047d9e0(*(long *)(lVar7 + 0x120),&LAB_0048ec40);
          iVar2 = FUN_0047e430(lVar6);
          if (0 < iVar2) {
            iVar2 = 0;
            if (param_1 == 0) {
              do {
                puVar8 = (undefined8 *)FUN_0047e450(lVar6,iVar2);
                uVar3 = FUN_0047e200(*(undefined8 *)(lVar7 + 0x120),puVar8);
                lVar9 = FUN_0047e450(*(undefined8 *)(lVar7 + 0x120),uVar3);
                if (lVar9 == 0) {
                  if (*(int *)puVar8[1] == 1) goto LAB_00490064;
                }
                else if (**(int **)(lVar9 + 8) == 1) {
                  if (*(int *)puVar8[1] != 0) {
                    uVar10 = *(undefined8 *)(*(int **)(lVar9 + 8) + 2);
                    uVar12 = *(undefined8 *)((int *)puVar8[1] + 2);
                    piVar14 = (int *)*puVar8;
                    if (((piVar14 == (int *)0x0) || (*(ushort **)(piVar14 + 2) == (ushort *)0x0)) ||
                       (*piVar14 < 2)) {
                      iVar4 = FUN_0048fb60(uVar10,uVar12,0);
                    }
                    else {
                      uVar13 = (uint)**(ushort **)(piVar14 + 2);
                      uVar13 = ((uVar13 & 0xff00) << 8 | uVar13 << 0x18) >> 0x10;
                      iVar4 = 0x10;
                      if (uVar13 != 2) {
                        iVar4 = (uint)(uVar13 == 1) << 2;
                      }
                      iVar4 = FUN_0048fb60(uVar10,uVar12,iVar4);
                    }
                    if (iVar4 == 0) goto LAB_004901a4;
                  }
                  FUN_0047e480(lVar6,iVar2,lVar9);
                }
                iVar2 = iVar2 + 1;
                iVar4 = FUN_0047e430(lVar6);
              } while (iVar2 < iVar4);
            }
            else {
              do {
                puVar8 = (undefined8 *)FUN_0047e450(lVar6,iVar2);
                uVar3 = FUN_0047e200(*(undefined8 *)(lVar7 + 0x120),puVar8);
                lVar9 = FUN_0047e450(*(undefined8 *)(lVar7 + 0x120),uVar3);
                if (lVar9 == 0) {
                  if (*(int *)puVar8[1] == 1) goto LAB_00490064;
                }
                else if (**(int **)(lVar9 + 8) == 1) {
                  if (*(int *)puVar8[1] != 0) {
                    uVar10 = *(undefined8 *)(*(int **)(lVar9 + 8) + 2);
                    uVar12 = *(undefined8 *)((int *)puVar8[1] + 2);
                    piVar14 = (int *)*puVar8;
                    if (((piVar14 == (int *)0x0) || (*(ushort **)(piVar14 + 2) == (ushort *)0x0)) ||
                       (*piVar14 < 2)) {
                      uVar10 = FUN_0048fb60(uVar10,uVar12,0);
                      iVar4 = (int)uVar10;
                    }
                    else {
                      uVar13 = (uint)**(ushort **)(piVar14 + 2);
                      uVar13 = ((uVar13 & 0xff00) << 8 | uVar13 << 0x18) >> 0x10;
                      iVar4 = 0x10;
                      if (uVar13 != 2) {
                        iVar4 = (uint)(uVar13 == 1) << 2;
                      }
                      uVar10 = FUN_0048fb60(uVar10,uVar12,iVar4);
                      iVar4 = (int)uVar10;
                    }
                    if (iVar4 == 0) {
                      *(int *)(param_1 + 0xac) = iVar5;
                      *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                      *(long *)(param_1 + 0xb8) = lVar7;
                      iVar1 = (**(code **)(param_1 + 0x38))(uVar10,param_1);
                      if (iVar1 != 0) goto LAB_0048fe4c;
                      goto LAB_004901f0;
                    }
                  }
                  FUN_0047e480(lVar6,iVar2,lVar9);
                }
LAB_0048fe4c:
                iVar2 = iVar2 + 1;
                iVar4 = FUN_0047e430(lVar6);
              } while (iVar2 < iVar4);
            }
          }
        }
        goto LAB_0048fdb8;
      }
LAB_004900e4:
      if ((*(long *)(lVar7 + 0x120) != 0) && (iVar2 = FUN_0047e430(), 0 < iVar2)) {
        iVar2 = 0;
        if (param_1 == 0) {
          do {
            lVar11 = FUN_0047e450(*(undefined8 *)(lVar7 + 0x120),iVar2);
            if ((**(int **)(lVar11 + 8) == 0) && (iVar5 = FUN_0047e200(lVar6,lVar11), -1 < iVar5))
            goto LAB_004901a4;
            iVar2 = iVar2 + 1;
            iVar5 = FUN_0047e430(*(undefined8 *)(lVar7 + 0x120));
          } while (iVar2 < iVar5);
        }
        else {
          iVar2 = 0;
          do {
            lVar11 = FUN_0047e450(*(undefined8 *)(lVar7 + 0x120),iVar2);
            if ((**(int **)(lVar11 + 8) == 0) && (iVar4 = FUN_0047e200(lVar6,lVar11), -1 < iVar4)) {
              *(int *)(param_1 + 0xac) = iVar5;
              *(undefined4 *)(param_1 + 0xb0) = 0x2e;
              *(long *)(param_1 + 0xb8) = lVar7;
              iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar1 == 0) break;
            }
            iVar2 = iVar2 + 1;
            iVar4 = FUN_0047e430(*(undefined8 *)(lVar7 + 0x120));
          } while (iVar2 < iVar4);
        }
      }
      goto LAB_004901f0;
    }
    FUN_004806c0(0x22,0xa6,0x41,"external/openssl/crypto/x509v3/v3_addr.c",0x4bc);
    if (param_1 != 0) {
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0x11;
      lVar6 = 0;
      goto LAB_004901f0;
    }
  }
  iVar1 = 0;
  lVar6 = 0;
LAB_004901f0:
  FUN_0047db00(lVar6);
  return iVar1;
LAB_00490064:
  if (param_1 == 0) goto LAB_004901a4;
  *(int *)(param_1 + 0xac) = iVar5;
  *(undefined4 *)(param_1 + 0xb0) = 0x2e;
  *(long *)(param_1 + 0xb8) = lVar7;
  iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
  if (iVar1 == 0) goto LAB_004901f0;
LAB_0048fdb8:
  iVar5 = iVar5 + 1;
  iVar2 = FUN_0047e430(lVar11);
  if (iVar2 <= iVar5) goto LAB_004900e4;
  goto LAB_0048fdcc;
LAB_004901a4:
  iVar1 = 0;
  goto LAB_004901f0;
}


