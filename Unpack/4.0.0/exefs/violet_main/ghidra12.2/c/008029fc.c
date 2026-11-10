/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008029fc; name: FUN_008029fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008029fc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  char *pcVar17;
  float fVar18;
  undefined8 local_98;
  undefined4 local_78 [4];
  ulong local_68;
  
  local_68 = 0;
  FUN_007935cc(&local_68);
  local_78[0] = 0;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)&local_98);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar15 = 0;
    do {
      lVar14 = *(long *)(param_1 + 0xb8);
      lVar7 = lVar14 + uVar15 * 0x80;
      if (*(long *)(lVar7 + 0x10) != -1) {
        plVar5 = (long *)FUN_0079365c();
        lVar13 = uVar15 * 0x80;
        lVar12 = lVar14 + lVar13;
        iVar4 = *(int *)(lVar12 + 0x20);
        if (iVar4 == 5 || iVar4 == 2) {
          lVar14 = *(long *)(param_1 + 0xb8);
          plVar5 = (long *)FUN_0079365c();
          if ((ulong)(*(long *)(lVar14 + lVar13) + *plVar5 * 500) < local_68) {
LAB_00802afc:
            FUN_00804410(&local_98,param_1,*(long *)(param_1 + 0xb8) + uVar15 * 0x80);
            if ((int)local_98 == 0) goto switchD_00802b38_caseD_2;
          }
        }
        else if ((ulong)(*(long *)(lVar14 + lVar13) + *plVar5 * 300) < local_68) goto LAB_00802afc;
        iVar4 = *(int *)(lVar12 + 0x20);
        if (iVar4 - 1U < 0xc) {
          lVar14 = *(long *)(lVar7 + 0x10);
          switch(iVar4) {
          case 1:
            FUN_00804084(&local_98,param_1,*(long *)(param_1 + 0xb8) + uVar15 * 0x80,0);
            if ((int)local_98 == 0) {
              local_98 = 0;
              FUN_007935cc(&local_98);
              *(long *)(*(long *)(param_1 + 0xb8) + lVar13) = local_98;
              puVar2 = PTR_DAT_047d0dd8;
              iVar4 = FUN_00807e34(*(undefined8 *)PTR_DAT_047d0dd8,0);
              plVar5 = (long *)FUN_0079365c();
              *(ulong *)(*(long *)(param_1 + 0xb8) + lVar13 + 8) = local_68 + *plVar5 * (long)iVar4;
              fVar18 = (float)FUN_00807e20(*(undefined8 *)puVar2,0);
              puVar2 = PTR_DAT_047d0868;
              PTR_DAT_047d0868[0x3fe] = 1;
              *(short *)(puVar2 + 0x3fc) = (short)(int)fVar18;
              uVar11 = (ulong)*(uint *)(param_1 + 0xc0);
              if (*(uint *)(param_1 + 0xc0) == 0) {
                lVar7 = 0;
                uVar16 = _DAT_00000020;
              }
              else {
                lVar7 = *(long *)(param_1 + 0xb8);
                do {
                  if (*(long *)(lVar7 + 0x10) == lVar14) goto LAB_00802bf4;
                  lVar7 = lVar7 + 0x80;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
                lVar7 = 0;
LAB_00802bf4:
                uVar16 = *(uint *)(lVar7 + 0x20);
              }
              if (((int)uVar16 < 2) && (*(undefined8 *)(lVar7 + 0x74) = 0, uVar16 == 1)) {
                *(undefined4 *)(lVar7 + 0x20) = 2;
                goto LAB_00802a70;
              }
            }
            break;
          case 4:
            pcVar17 = (char *)(lVar7 + 0x68);
            lVar1 = lVar7 + 0x48;
            if (*pcVar17 != '\0') {
              lVar1 = lVar7 + 0x28;
            }
            FUN_0078a1c0(&local_98,lVar1);
            uVar11 = FUN_0078b12c(&local_98);
            if ((((uVar11 & 1) == 0) || (uVar11 = FUN_0078b12c(param_1 + 0x60), (uVar11 & 1) == 0))
               || (uVar11 = FUN_0078b12c(param_1 + 0x80), (uVar11 & 1) == 0)) {
              bVar3 = true;
            }
            else if (*pcVar17 == '\0') {
              bVar3 = *(char *)(param_1 + 0xa9) == '\0';
            }
            else {
              bVar3 = false;
            }
            FUN_0284e3d4(&local_98);
            lVar7 = *(long *)(param_1 + 0xb8) + uVar15 * 0x80;
            if (bVar3) {
              FUN_00804084(&local_98,param_1,lVar7,6);
              local_98 = 0;
              FUN_007935cc(&local_98);
              *(long *)(*(long *)(param_1 + 0xb8) + lVar13) = local_98;
              lVar7 = lVar12 + 0x48;
              if (*pcVar17 != '\0') {
                lVar7 = lVar12 + 0x28;
              }
              FUN_0078a1c0(&local_98,lVar7);
              uVar11 = FUN_0078b12c(&local_98);
              FUN_0284e3d4(&local_98);
              if ((uVar11 & 1) == 0) {
                lVar12 = *(long *)(param_1 + 0xb8);
                lVar7 = 0x10;
                uVar11 = 0xffffffffffffffff;
                do {
                  plVar5 = (long *)(lVar12 + lVar7);
                  uVar11 = uVar11 + 1;
                  lVar7 = lVar7 + 0x80;
                } while (*plVar5 != lVar14);
                piVar8 = (int *)(lVar12 + (uVar11 & 0xffffffff) * 0x80 + 0x6c);
                if (*piVar8 == 0) {
                  iVar4 = 9;
                  goto LAB_00803300;
                }
              }
              else {
                uVar11 = FUN_0078b12c(param_1 + 0x60);
                if ((uVar11 & 1) == 0) {
                  lVar12 = *(long *)(param_1 + 0xb8);
                  lVar7 = 0x10;
                  uVar11 = 0xffffffffffffffff;
                  do {
                    plVar5 = (long *)(lVar12 + lVar7);
                    uVar11 = uVar11 + 1;
                    lVar7 = lVar7 + 0x80;
                  } while (*plVar5 != lVar14);
                  piVar8 = (int *)(lVar12 + (uVar11 & 0xffffffff) * 0x80 + 0x6c);
                  if (*piVar8 == 0) {
                    iVar4 = 7;
                    goto LAB_00803300;
                  }
                }
                else {
                  uVar9 = FUN_0078b12c(param_1 + 0x80);
                  lVar12 = *(long *)(param_1 + 0xb8);
                  lVar7 = 0x10;
                  uVar11 = 0xffffffffffffffff;
                  if ((uVar9 & 1) == 0) {
                    do {
                      plVar5 = (long *)(lVar12 + lVar7);
                      uVar11 = uVar11 + 1;
                      lVar7 = lVar7 + 0x80;
                    } while (*plVar5 != lVar14);
                    piVar8 = (int *)(lVar12 + (uVar11 & 0xffffffff) * 0x80 + 0x6c);
                    if (*piVar8 == 0) {
                      iVar4 = 8;
                      goto LAB_00803300;
                    }
                  }
                  else {
                    do {
                      plVar5 = (long *)(lVar12 + lVar7);
                      uVar11 = uVar11 + 1;
                      lVar7 = lVar7 + 0x80;
                    } while (*plVar5 != lVar14);
                    piVar8 = (int *)(lVar12 + (uVar11 & 0xffffffff) * 0x80 + 0x6c);
                    if (*piVar8 == 0) {
                      iVar4 = 2;
LAB_00803300:
                      *piVar8 = iVar4;
                    }
                  }
                }
              }
              uVar16 = *(uint *)(param_1 + 0xc0);
              uVar9 = (ulong)uVar16;
              lVar7 = lVar12;
              uVar11 = uVar9;
              if (uVar16 != 0) {
                do {
                  if (*(long *)(lVar7 + 0x10) == lVar14) goto LAB_00803330;
                  lVar7 = lVar7 + 0x80;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
                lVar7 = 0;
LAB_00803330:
                uVar10 = *(uint *)(lVar7 + 0x20);
                if (0xd < (int)uVar10) break;
LAB_00803350:
                *(undefined8 *)(lVar7 + 0x74) = 0;
                if ((0xc < uVar10) || ((1 << (ulong)(uVar10 & 0x1f) & 0x157dU) == 0)) break;
                *(undefined4 *)(lVar7 + 0x20) = 0xe;
                if (uVar16 != 0) {
                  piVar8 = (int *)(lVar12 + 0x20);
                  do {
                    if ((*(long *)(piVar8 + -4) != -1) && (1 < *piVar8 - 0xdU)) goto LAB_00802a70;
                    uVar9 = uVar9 - 1;
                    piVar8 = piVar8 + 0x20;
                  } while (uVar9 != 0);
                }
                goto LAB_00802a6c;
              }
              lVar7 = 0;
              uVar10 = _DAT_00000020;
              if ((int)_DAT_00000020 < 0xe) goto LAB_00803350;
            }
            else {
              lVar12 = FUN_007fcb70();
              puVar2 = PTR_DAT_047d0dd8;
              if ((lVar12 == 0) || (iVar4 = *(int *)(lVar12 + 0x10), iVar4 < 0)) {
                fVar18 = (float)FUN_00807e20(*(undefined8 *)PTR_DAT_047d0dd8,6);
                PTR_DAT_047d0868[0x411] = (char)(int)fVar18;
                iVar4 = FUN_00807e34(*(undefined8 *)puVar2,6);
              }
              FUN_008042ec(&local_98,param_1,lVar7,2,iVar4);
              local_98 = 0;
              FUN_007935cc(&local_98);
              plVar5 = (long *)FUN_0079365c();
              lVar7 = local_98 + *plVar5 * -500;
              puVar6 = (uint *)FUN_007fcb70();
              if ((puVar6 == (uint *)0x0) || (uVar16 = *puVar6, (int)uVar16 < 0)) {
                uVar16 = 100;
              }
              plVar5 = (long *)FUN_0079365c();
              *(ulong *)(*(long *)(param_1 + 0xb8) + lVar13) = lVar7 + *plVar5 * (ulong)uVar16;
              puVar2 = PTR_DAT_047d0dd8;
              iVar4 = FUN_00807e34(*(undefined8 *)PTR_DAT_047d0dd8,1);
              plVar5 = (long *)FUN_0079365c();
              *(ulong *)(*(long *)(param_1 + 0xb8) + lVar13 + 8) = local_68 + *plVar5 * (long)iVar4;
              fVar18 = (float)FUN_00807e20(*(undefined8 *)puVar2,1);
              puVar2 = PTR_DAT_047d0868;
              PTR_DAT_047d0868[0x402] = 1;
              *(short *)(puVar2 + 0x400) = (short)(int)fVar18;
              puVar2[0x412] = 1;
              uVar11 = (ulong)*(uint *)(param_1 + 0xc0);
              if (*(uint *)(param_1 + 0xc0) == 0) {
                lVar7 = 0;
                uVar16 = _DAT_00000020;
              }
              else {
                lVar7 = *(long *)(param_1 + 0xb8);
                do {
                  if (*(long *)(lVar7 + 0x10) == lVar14) goto LAB_00803114;
                  lVar7 = lVar7 + 0x80;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
                lVar7 = 0;
LAB_00803114:
                uVar16 = *(uint *)(lVar7 + 0x20);
              }
              if (((int)uVar16 < 5) && (*(undefined8 *)(lVar7 + 0x74) = 0, uVar16 == 4)) {
                *(undefined4 *)(lVar7 + 0x20) = 5;
                goto LAB_00802a70;
              }
            }
            break;
          case 7:
            FUN_008042ec(&local_98,param_1,*(long *)(param_1 + 0xb8) + uVar15 * 0x80,3,2);
            if ((int)local_98 == 0) {
              local_98 = 0;
              FUN_007935cc(&local_98);
              *(long *)(*(long *)(param_1 + 0xb8) + lVar13) = local_98;
              puVar2 = PTR_DAT_047d0dd8;
              iVar4 = FUN_00807e34(*(undefined8 *)PTR_DAT_047d0dd8,3);
              plVar5 = (long *)FUN_0079365c();
              *(ulong *)(*(long *)(param_1 + 0xb8) + lVar13 + 8) = local_68 + *plVar5 * (long)iVar4;
              fVar18 = (float)FUN_00807e20(*(undefined8 *)puVar2,3);
              puVar2 = PTR_DAT_047d0868;
              PTR_DAT_047d0868[0x40e] = 1;
              *(short *)(puVar2 + 0x40c) = (short)(int)fVar18;
              uVar11 = (ulong)*(uint *)(param_1 + 0xc0);
              if (*(uint *)(param_1 + 0xc0) == 0) {
                lVar7 = 0;
                uVar16 = _DAT_00000020;
              }
              else {
                lVar7 = *(long *)(param_1 + 0xb8);
                do {
                  if (*(long *)(lVar7 + 0x10) == lVar14) goto LAB_00802d10;
                  lVar7 = lVar7 + 0x80;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
                lVar7 = 0;
LAB_00802d10:
                uVar16 = *(uint *)(lVar7 + 0x20);
              }
              if (((int)uVar16 < 8) && (*(undefined8 *)(lVar7 + 0x74) = 0, uVar16 == 7)) {
                *(undefined4 *)(lVar7 + 0x20) = 8;
                goto LAB_00802a70;
              }
            }
            break;
          case 9:
            FUN_008042ec(&local_98,param_1,*(long *)(param_1 + 0xb8) + uVar15 * 0x80,4,2);
            if ((int)local_98 == 0) {
              local_98 = 0;
              FUN_007935cc(&local_98);
              *(long *)(*(long *)(param_1 + 0xb8) + lVar13) = local_98;
              puVar2 = PTR_DAT_047d0dd8;
              iVar4 = FUN_00807e34(*(undefined8 *)PTR_DAT_047d0dd8,3);
              plVar5 = (long *)FUN_0079365c();
              *(ulong *)(*(long *)(param_1 + 0xb8) + lVar13 + 8) = local_68 + *plVar5 * (long)iVar4;
              fVar18 = (float)FUN_00807e20(*(undefined8 *)puVar2,3);
              puVar2 = PTR_DAT_047d0868;
              PTR_DAT_047d0868[0x40e] = 1;
              *(short *)(puVar2 + 0x40c) = (short)(int)fVar18;
              uVar11 = (ulong)*(uint *)(param_1 + 0xc0);
              if (*(uint *)(param_1 + 0xc0) == 0) {
                lVar7 = 0;
                uVar16 = _DAT_00000020;
              }
              else {
                lVar7 = *(long *)(param_1 + 0xb8);
                do {
                  if (*(long *)(lVar7 + 0x10) == lVar14) goto LAB_00802ddc;
                  lVar7 = lVar7 + 0x80;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
                lVar7 = 0;
LAB_00802ddc:
                uVar16 = *(uint *)(lVar7 + 0x20);
              }
              if (((int)uVar16 < 10) && (*(undefined8 *)(lVar7 + 0x74) = 0, uVar16 == 9)) {
                *(undefined4 *)(lVar7 + 0x20) = 10;
                goto LAB_00802a70;
              }
            }
            break;
          case 0xb:
            FUN_008042ec(&local_98,param_1,*(long *)(param_1 + 0xb8) + uVar15 * 0x80,5,2);
            if ((int)local_98 == 0) {
              local_98 = 0;
              FUN_007935cc(&local_98);
              lVar12 = *(long *)(param_1 + 0xb8);
              *(long *)(lVar12 + lVar13) = local_98;
              uVar16 = *(uint *)(param_1 + 0xc0);
              uVar9 = (ulong)uVar16;
              lVar7 = lVar12;
              uVar11 = uVar9;
              if (uVar16 == 0) {
                lVar7 = 0;
                uVar10 = _DAT_00000020;
              }
              else {
                do {
                  if (*(long *)(lVar7 + 0x10) == lVar14) goto LAB_00802e54;
                  lVar7 = lVar7 + 0x80;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
                lVar7 = 0;
LAB_00802e54:
                uVar10 = *(uint *)(lVar7 + 0x20);
              }
              if (((int)uVar10 < 0xd) &&
                 (*(undefined8 *)(lVar7 + 0x74) = 0, (uVar10 & 0xfffffffe) == 10)) {
                *(undefined4 *)(lVar7 + 0x20) = 0xd;
                if (uVar16 != 0) {
                  piVar8 = (int *)(lVar12 + 0x20);
                  do {
                    if ((*(long *)(piVar8 + -4) != -1) && (1 < *piVar8 - 0xdU)) goto LAB_008033b0;
                    uVar9 = uVar9 - 1;
                    piVar8 = piVar8 + 0x20;
                  } while (uVar9 != 0);
                }
                *(undefined1 *)(param_1 + 0x5a) = 0;
LAB_008033b0:
                *(undefined4 *)(lVar7 + 0x6c) = 1;
                goto LAB_00802a70;
              }
            }
            break;
          case 0xc:
            FUN_00804084(&local_98,param_1,*(long *)(param_1 + 0xb8) + lVar13,6);
            local_98 = 0;
            FUN_007935cc(&local_98);
            lVar7 = *(long *)(param_1 + 0xb8);
            *(long *)(lVar7 + lVar13) = local_98;
            uVar11 = 0xffffffffffffffff;
            plVar5 = (long *)(lVar7 + 0x10);
            do {
              lVar12 = *plVar5;
              uVar11 = uVar11 + 1;
              plVar5 = plVar5 + 0x10;
            } while (lVar12 != lVar14);
            piVar8 = (int *)(lVar7 + (uVar11 & 0xffffffff) * 0x80 + 0x6c);
            lVar12 = lVar7;
            if (*piVar8 == 0) {
              *piVar8 = 2;
              uVar9 = (ulong)*(uint *)(param_1 + 0xc0);
              uVar11 = uVar9;
              if (*(uint *)(param_1 + 0xc0) != 0) goto LAB_00802ecc;
LAB_00803138:
              lVar12 = 0;
              uVar16 = _DAT_00000020;
            }
            else {
              uVar9 = (ulong)*(uint *)(param_1 + 0xc0);
              uVar11 = uVar9;
              if (*(uint *)(param_1 + 0xc0) == 0) goto LAB_00803138;
LAB_00802ecc:
              do {
                if (*(long *)(lVar12 + 0x10) == lVar14) goto LAB_00802ee8;
                uVar11 = uVar11 - 1;
                lVar12 = lVar12 + 0x80;
              } while (uVar11 != 0);
              lVar12 = 0;
LAB_00802ee8:
              uVar16 = *(uint *)(lVar12 + 0x20);
            }
            if ((((int)uVar16 < 0xe) && (*(undefined8 *)(lVar12 + 0x74) = 0, uVar16 < 0xd)) &&
               ((1 << (ulong)(uVar16 & 0x1f) & 0x157dU) != 0)) {
              *(undefined4 *)(lVar12 + 0x20) = 0xe;
              if ((int)uVar9 != 0) {
                piVar8 = (int *)(lVar7 + 0x20);
                do {
                  if ((*(long *)(piVar8 + -4) != -1) && (1 < *piVar8 - 0xdU)) goto LAB_00802a70;
                  uVar9 = uVar9 - 1;
                  piVar8 = piVar8 + 0x20;
                } while (uVar9 != 0);
              }
LAB_00802a6c:
              *(undefined1 *)(param_1 + 0x5a) = 0;
LAB_00802a70:
              *(undefined1 *)(param_1 + 0xa8) = 1;
            }
          }
        }
      }
switchD_00802b38_caseD_2:
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_1 + 0xc0));
  }
  return;
}


