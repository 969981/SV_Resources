/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c08798; name: FUN_00c08798
 */


int FUN_00c08798(long *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  int iVar19;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  
  lVar10 = (**(code **)(*param_1 + 0xb8))();
  plVar11 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  (**(code **)(*plVar11 + 0x80))(plVar11,param_1,&local_78);
  if (local_70 == local_78) {
    iVar19 = 0;
  }
  else {
    uVar17 = 0;
    iVar19 = 0;
    do {
      lVar15 = *(long *)(local_78 + uVar17 * 8);
      plVar12 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
      if ((((*(char *)(lVar15 + 0x44) == '\0') ||
           (*(char *)(*(long *)(*(long *)(lVar15 + 0x50) + 0x20) + 0x50) == '\0')) ||
          ((*(uint *)(lVar15 + 0x3c) & 0xfffffffe) != 10)) || (*(int *)(lVar15 + 0x40) == 3)) {
        if (*(int *)(lVar15 + 0x40) == 3) {
          uVar6 = (**(code **)(*plVar12 + 0x30))(plVar12,param_1,lVar15);
        }
        else {
          uVar6 = (**(code **)(*plVar12 + 0x28))(plVar12,param_1,lVar15);
          uVar6 = uVar6 & 1;
        }
        uVar7 = FUN_00c07bdc(lVar15,param_1);
        if ((*(int *)(lVar15 + 0x40) == 3) && (3 < *(int *)(lVar15 + 0x3c) - 9U)) {
          lVar16 = *(long *)(lVar15 + 0x78);
          if (*(int *)(*(long *)(lVar15 + 0x30) + 0x7c) != 2) {
            if ((lVar16 != 0) && ((*(byte *)(lVar16 + 0x30) >> 1 & 1) != 0)) goto LAB_00c088fc;
LAB_00c08904:
            if (0 < (int)uVar7) {
              uVar6 = *(uint *)(lVar15 + 0x38) << 3;
              if (uVar6 < 0x80) {
                iVar8 = 1;
              }
              else if (uVar6 < 0x4000) {
                iVar8 = 2;
              }
              else if (uVar6 < 0x200000) {
                iVar8 = 3;
              }
              else {
                iVar8 = 4;
                if ((*(uint *)(lVar15 + 0x38) & 0x1fffffff) >> 0x19 != 0) {
                  iVar8 = 5;
                }
              }
              if (uVar7 < 0x80) {
                iVar9 = 1;
              }
              else if (uVar7 < 0x4000) {
                iVar9 = 2;
              }
              else if (uVar7 < 0x200000) {
                iVar9 = 3;
              }
              else {
                iVar9 = 4;
                if (uVar7 >> 0x1c != 0) {
                  iVar9 = 5;
                }
              }
              uVar7 = iVar8 + uVar7 + iVar9;
            }
            goto LAB_00c08a78;
          }
          if (lVar16 != 0) {
LAB_00c088fc:
            if (*(char *)(lVar16 + 0x58) != '\0') goto LAB_00c08904;
          }
        }
        uVar5 = *(uint *)(lVar15 + 0x38) << 3;
        iVar8 = 4;
        if ((*(uint *)(lVar15 + 0x38) & 0x1fffffff) >> 0x19 != 0) {
          iVar8 = 5;
        }
        iVar9 = 3;
        if (0x1fffff < uVar5) {
          iVar9 = iVar8;
        }
        iVar8 = 2;
        if (0x3fff < uVar5) {
          iVar8 = iVar9;
        }
        iVar9 = 1;
        if (0x7f < uVar5) {
          iVar9 = iVar8;
        }
        uVar7 = uVar7 + (iVar9 << (*(int *)(lVar15 + 0x3c) == 10)) * uVar6;
      }
      else {
        plVar12 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
        uVar6 = *(uint *)(lVar15 + 0x38);
        iVar8 = 5;
        if (0x7f < uVar6) {
          if (uVar6 < 0x4000) {
            iVar8 = 6;
          }
          else if (uVar6 < 0x200000) {
            iVar8 = 7;
          }
          else {
            iVar8 = 8;
            if (uVar6 >> 0x1c != 0) {
              iVar8 = 9;
            }
          }
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0xd8))(plVar12,param_1,lVar15,0);
        uVar13 = (**(code **)(*plVar12 + 0x60))();
        iVar9 = 4;
        if ((uVar13 >> 0x1c & 0xf) != 0) {
          iVar9 = 5;
        }
        uVar6 = (uint)uVar13;
        iVar1 = 3;
        if (0x1fffff < uVar6) {
          iVar1 = iVar9;
        }
        iVar9 = 2;
        if (0x3fff < uVar6) {
          iVar9 = iVar1;
        }
        iVar1 = 1;
        if (0x7f < uVar6) {
          iVar1 = iVar9;
        }
        uVar7 = uVar6 + iVar8 + iVar1;
      }
LAB_00c08a78:
      uVar17 = uVar17 + 1;
      iVar19 = uVar7 + iVar19;
    } while (uVar17 < (ulong)(local_70 - local_78 >> 3));
  }
  cVar3 = *(char *)(*(long *)(lVar10 + 0x20) + 0x50);
  puVar14 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,param_1);
  if (cVar3 == '\0') {
    iVar8 = FUN_00c0358c();
LAB_00c08b94:
    lVar10 = local_78;
    if (local_78 != 0) {
      local_70 = local_78;
      lVar15 = tpidr_el0;
      plVar11 = *(long **)(lVar15 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar15 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar17 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,lVar10,0,8);
      }
    }
    return iVar8 + iVar19;
  }
  plVar11 = (long *)*puVar14;
  lVar15 = 0;
  lVar10 = 0;
  iVar8 = 0;
  if (plVar11 == (long *)0x0) goto LAB_00c08ae8;
  do {
    uVar17 = (ulong)(plVar11[1] - *plVar11) >> 4;
    while( true ) {
      if ((int)uVar17 <= lVar10) goto LAB_00c08b94;
      lVar16 = *plVar11 + lVar15;
      if (*(int *)(lVar16 + 4) == 3) {
        uVar6 = *(uint *)(*plVar11 + lVar15);
        iVar9 = 4;
        if (uVar6 >> 0x1c != 0) {
          iVar9 = 5;
        }
        pbVar18 = *(byte **)(lVar16 + 8);
        iVar1 = 3;
        if (0x1fffff < uVar6) {
          iVar1 = iVar9;
        }
        iVar9 = 2;
        if (0x3fff < uVar6) {
          iVar9 = iVar1;
        }
        iVar1 = 1;
        if (0x7f < uVar6) {
          iVar1 = iVar9;
        }
        bVar4 = *pbVar18;
        if ((bVar4 & 1) == 0) {
          uVar17 = (ulong)(bVar4 >> 1);
        }
        else {
          uVar17 = *(ulong *)(pbVar18 + 8);
        }
        iVar9 = 4;
        if ((uVar17 >> 0x1c & 0xf) != 0) {
          iVar9 = 5;
        }
        uVar6 = (uint)uVar17;
        iVar2 = 3;
        if (0x1fffff < uVar6) {
          iVar2 = iVar9;
        }
        iVar9 = 2;
        if (0x3fff < uVar6) {
          iVar9 = iVar2;
        }
        iVar2 = 1;
        if (0x7f < uVar6) {
          iVar2 = iVar9;
        }
        iVar8 = iVar8 + 4 + iVar1 + uVar6 + iVar2;
      }
      lVar10 = lVar10 + 1;
      lVar15 = lVar15 + 0x10;
      if (plVar11 != (long *)0x0) break;
LAB_00c08ae8:
      uVar17 = 0;
    }
  } while( true );
}


