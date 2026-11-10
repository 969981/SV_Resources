/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f457c; name: FUN_018f457c
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_018f457c(long param_1,uint param_2,ulong param_3,ulong param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  ushort *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  uint local_13c;
  long local_118 [18];
  undefined8 local_88;
  undefined8 uStack_80;
  byte bStack_72;
  byte local_70;
  
  piVar12 = *(int **)(param_1 + 8);
  if ((((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 5)) ||
      (uVar15 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar15 == 0)) ||
     (uVar16 = (ulong)*(uint *)((long)piVar12 + uVar15),
     *(int *)((long)((long)piVar12 + uVar15) + uVar16) == 0)) {
    return 0xffffffff;
  }
  uVar17 = param_4 >> 0x20;
  uVar18 = 0;
  do {
    if ((*(ulong *)(*(long *)(param_1 + 0x10) + (uVar18 >> 3 & 0x18)) >> (uVar18 & 0x3f) & 1) != 0)
    goto switchD_018f467c_default;
    puVar13 = (uint *)((long)piVar12 + uVar18 * 4 + uVar16 + uVar15 + 4);
    piVar12 = (int *)((long)puVar13 + (ulong)*puVar13);
    puVar14 = (ushort *)((long)piVar12 - (long)*piVar12);
    uVar1 = *puVar14;
    if (uVar1 < 5) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      if ((ulong)puVar14[2] != 0) {
        uVar3 = (uint)*(byte *)((long)piVar12 + (ulong)puVar14[2]);
      }
    }
    if (uVar3 != param_2) goto switchD_018f467c_default;
    switch(param_2) {
    case 0:
    case 5:
    case 0xb:
      if (uVar1 < 7) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        if ((ulong)puVar14[3] != 0) {
          uVar15 = (ulong)*(uint *)((long)piVar12 + (ulong)puVar14[3]);
        }
      }
      if (*(ulong *)(*(long *)(*(long *)(param_1 + 0x50) + 0x210) + 8) == uVar15) {
        return uVar18;
      }
      goto switchD_018f467c_default;
    case 1:
      uVar15 = FUN_017da624(param_1,piVar12,param_3 & 0xffffffff);
      break;
    case 2:
    case 0x1e:
      uVar15 = FUN_02999508(param_1,piVar12,param_3 & 0xffffffff);
      break;
    case 3:
      uVar15 = FUN_029996fc(param_1,piVar12,param_3 & 0xffffffff);
      break;
    case 4:
      uVar15 = FUN_0191f184(param_1,piVar12,param_3 & 0xffffffff,param_3 >> 0x20);
      break;
    case 6:
    case 7:
    case 8:
    case 0xe:
    case 0x17:
    case 0x1b:
    case 0x1c:
    case 0x1d:
      uVar15 = FUN_017da764(param_1,piVar12,param_3 & 0xffffffff);
      break;
    case 9:
      uVar15 = FUN_02999834(param_1,piVar12,param_3 & 0xffffffff,param_3 >> 0x30);
      break;
    case 10:
      goto switchD_018f467c_caseD_a;
    case 0xc:
      uVar15 = FUN_02999898(param_1,piVar12,param_3 & 0xffffffff);
      break;
    case 0xd:
      uVar15 = FUN_02999978(param_1,piVar12,param_3 & 0xffffffff,param_4 & 0xffffffff);
      break;
    case 0xf:
      uVar15 = FUN_02999b20(param_1,piVar12,uVar17);
      break;
    case 0x10:
      uVar15 = FUN_01a044e0(param_1,piVar12,uVar17);
      break;
    case 0x11:
      uVar15 = FUN_029999dc(param_1,piVar12,uVar17);
      break;
    case 0x12:
      uVar15 = FUN_010f8e80(param_1,piVar12,uVar17);
      break;
    case 0x13:
      uVar15 = FUN_02e3af4c(param_1,piVar12,uVar17);
      break;
    case 0x14:
    case 0x15:
      uVar15 = FUN_0299959c(param_1,piVar12,param_3 & 0xffffffff);
      break;
    case 0x16:
    case 0x20:
      uVar15 = FUN_017da764(param_1,piVar12,param_3 & 0xffffffff);
      if ((uVar15 & 1) != 0) {
        puVar14 = (ushort *)((long)piVar12 - (long)*piVar12);
        if (*puVar14 < 9) {
          uVar3 = 0;
LAB_018f4b34:
          local_13c = 0;
        }
        else {
          if ((ulong)puVar14[4] == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(uint *)((long)piVar12 + (ulong)puVar14[4]);
          }
          if ((*puVar14 < 0xb) || ((ulong)puVar14[5] == 0)) goto LAB_018f4b34;
          local_13c = *(uint *)((long)piVar12 + (ulong)puVar14[5]);
        }
        lVar6 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x30),param_3 & 0xffffffff)
        ;
        if (lVar6 != 0) {
          puVar7 = (undefined8 *)
                   (*(code *)**(undefined8 **)(lVar6 + 0x28))((undefined8 *)(lVar6 + 0x28));
          if (((*PTR_DAT_047d3f00 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar4 != 0)) {
            uVar8 = FUN_01b07aa4();
            *(undefined8 *)PTR_DAT_047d3f08 = uVar8;
            __cxa_guard_release(PTR_DAT_047d3f00);
          }
          for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
            if (puVar7 == (undefined8 *)PTR_DAT_047d3f08) {
              if ((uint)*(ushort *)(lVar6 + 0x710) == (uVar3 & 0xffff)) {
                if (0xfe < local_13c) {
                  return uVar18;
                }
                if ((uint)*(ushort *)(lVar6 + 0x718) == (local_13c & 0xffff)) {
                  return uVar18;
                }
              }
              break;
            }
          }
        }
      }
      goto switchD_018f467c_default;
    case 0x18:
      if (uVar1 < 7) {
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        if ((ulong)puVar14[3] != 0) {
          iVar4 = *(int *)((long)piVar12 + (ulong)puVar14[3]);
        }
      }
      if (iVar4 == (int)(param_4 >> 0x20)) {
        memset(local_118,0,0x8f);
        local_88 = 0;
        uStack_80 = 0;
        bStack_72 = 0;
        local_70 = 0;
        FUN_010f8f64(param_1,local_118,uVar17);
        local_70 = 0;
        if (bStack_72 != 0) {
          uVar15 = 0;
          do {
            local_70 = (char)uVar15 + 1;
            plVar19 = (long *)local_118[uVar15];
            if (plVar19 == (long *)0x0) break;
            uVar15 = (**(code **)(*plVar19 + 0x510))(plVar19,0x1a);
            if ((uVar15 & 1) != 0) {
              return uVar18;
            }
            uVar15 = (ulong)local_70;
          } while (local_70 < bStack_72);
        }
      }
      goto switchD_018f467c_default;
    case 0x19:
      lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x30);
      if ((*(char *)(lVar6 + 0x90) != '\0') &&
         (plVar19 = *(long **)(lVar6 + 0x60), plVar19 != (long *)0x0)) {
        if (uVar1 < 7) {
          uVar9 = 0;
LAB_018f4bc4:
          uVar10 = 0;
        }
        else {
          if ((ulong)puVar14[3] == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined4 *)((long)piVar12 + (ulong)puVar14[3]);
          }
          if ((uVar1 < 9) || ((ulong)puVar14[4] == 0)) goto LAB_018f4bc4;
          uVar10 = *(undefined4 *)((long)piVar12 + (ulong)puVar14[4]);
        }
        uVar15 = (**(code **)(*plVar19 + 0x90))(plVar19,uVar9,uVar10);
        if ((uVar15 & 1) != 0) {
          if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 0xb) ||
             (uVar15 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[5], uVar15 == 0)) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)((long)piVar12 + uVar15);
          }
          uVar3 = (**(code **)(*plVar19 + 0x110))(plVar19);
          uVar2 = iVar4 * (uVar3 & 0xffff);
          uVar3 = uVar2 / 100;
          if (0x31 < uVar2 % 100) {
            uVar3 = uVar2 / 100 + 1;
          }
          uVar2 = (**(code **)(*plVar19 + 0x108))(plVar19);
          if ((uVar2 & 0xffff) <= uVar3) {
            return uVar18;
          }
        }
      }
      goto switchD_018f467c_default;
    case 0x1a:
      if ((uVar1 < 7) || ((ulong)puVar14[3] == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((long)piVar12 + (ulong)puVar14[3]);
      }
      piVar5 = (int *)FUN_011e2dd4(*(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8) +
                                    0x50),param_3 & 0xffffffff);
      if (piVar5 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *piVar5;
        if (4 < iVar11) {
          iVar11 = 0;
        }
      }
      if (iVar11 == iVar4) {
        if (*(ushort *)((long)piVar12 - (long)*piVar12) < 9) {
          return uVar18;
        }
        uVar15 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[4];
        if (uVar15 == 0) {
          return uVar18;
        }
        if (*(int *)((long)piVar12 + uVar15) == 0) {
          return uVar18;
        }
        lVar6 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x30),param_3 & 0xffffffff)
        ;
        if (lVar6 != 0) {
          puVar7 = (undefined8 *)
                   (*(code *)**(undefined8 **)(lVar6 + 0x28))((undefined8 *)(lVar6 + 0x28));
          if (((*PTR_DAT_047d3f00 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar4 != 0)) {
            uVar8 = FUN_01b07aa4();
            *(undefined8 *)PTR_DAT_047d3f08 = uVar8;
            __cxa_guard_release(PTR_DAT_047d3f00);
          }
          for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
            if (puVar7 == (undefined8 *)PTR_DAT_047d3f08) {
              uVar15 = FUN_020febac(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),lVar6);
              if ((uVar15 & 1) != 0) {
                if (*(ushort *)((long)piVar12 - (long)*piVar12) < 0xb) {
                  iVar4 = 0;
                }
                else {
                  uVar15 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[5];
                  iVar4 = 0;
                  if (uVar15 != 0) {
                    iVar4 = *(int *)((long)piVar12 + uVar15);
                  }
                }
                if (iVar4 == *(int *)(*(long *)(*(long *)(param_1 + 0x50) + 0x210) + 0x28)) {
                  return uVar18;
                }
              }
              break;
            }
          }
        }
      }
      goto switchD_018f467c_default;
    case 0x1f:
      uVar15 = FUN_017da764(param_1,piVar12,param_3 & 0xffffffff);
      if ((uVar15 & 1) != 0) {
        puVar14 = (ushort *)((long)piVar12 - (long)*piVar12);
        if (*puVar14 < 7) {
          local_13c = 0;
          lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x30) + 0x28;
        }
        else {
          uVar15 = 0;
          if ((ulong)puVar14[3] != 0) {
            uVar15 = (ulong)*(uint *)((long)piVar12 + (ulong)puVar14[3]);
          }
          if ((*puVar14 < 9) || ((ulong)puVar14[4] == 0)) {
            local_13c = 0;
          }
          else {
            local_13c = *(uint *)((long)piVar12 + (ulong)puVar14[4]);
          }
          lVar6 = 0;
          if ((uint)uVar15 < 5) {
            lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x30) + uVar15 * 0x38 + 0x28;
          }
        }
        if (*(char *)(lVar6 + 0x30) == '\0') {
          uVar3 = 0;
        }
        else {
          uVar15 = 0;
          uVar3 = 0;
          do {
            uVar2 = (**(code **)(**(long **)(lVar6 + uVar15 * 8) + 0x208))();
            uVar3 = uVar3 + (uVar2 & 1);
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(byte *)(lVar6 + 0x30));
        }
        if ((uVar3 & 0xff) <= local_13c) {
          return uVar18;
        }
      }
    default:
      goto switchD_018f467c_default;
    }
    if ((uVar15 & 1) != 0) {
      return uVar18;
    }
switchD_018f467c_default:
    piVar12 = *(int **)(param_1 + 8);
    uVar3 = (int)uVar18 + 1;
    uVar18 = (ulong)(uVar3 & 0xff);
    uVar15 = (ulong)*(ushort *)((long)piVar12 + (4 - (long)*piVar12));
    uVar16 = (ulong)*(uint *)((long)piVar12 + uVar15);
  } while ((uVar3 & 0xff) < *(uint *)((long)((long)piVar12 + uVar15) + uVar16));
  uVar18 = 0xffffffff;
switchD_018f467c_caseD_a:
  return uVar18;
}


