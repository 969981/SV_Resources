/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350be30; name: FUN_0350be30
 */


void FUN_0350be30(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  int *piVar16;
  int *piVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 local_90;
  char local_88;
  undefined4 local_87;
  undefined2 local_83;
  long *local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  iVar2 = param_2 + 1;
  if (iVar2 < 4) {
    lVar13 = (long)iVar2;
    if (lVar13 < 4) {
      lVar13 = 3;
    }
    puVar20 = (undefined8 *)(param_1 + (long)iVar2 * 8 + 0xe0);
    lVar13 = (lVar13 - iVar2) + 1;
    do {
      plVar15 = (long *)*puVar20;
      if (plVar15 != (long *)0x0) {
        bVar5 = true;
        goto LAB_0350beb4;
      }
      lVar13 = lVar13 + -1;
      puVar20 = puVar20 + 1;
    } while (lVar13 != 0);
  }
  bVar5 = false;
  plVar15 = (long *)0x0;
LAB_0350beb4:
  uVar12 = param_2;
  plVar4 = (long *)(param_1 + 0x68);
  if (plVar15 != (long *)0x0) {
    plVar4 = plVar15;
  }
  do {
    uVar12 = uVar12 - 1;
    if ((int)uVar12 < 0) {
      plVar15 = *(long **)(param_1 + 0x128);
      if (plVar15 == (long *)0x0) {
        plVar15 = *(long **)(param_1 + 0x118);
      }
      bVar11 = false;
      goto LAB_0350bef0;
    }
    plVar15 = *(long **)(param_1 + (ulong)uVar12 * 8 + 0xe0);
  } while (plVar15 == (long *)0x0);
  bVar11 = true;
LAB_0350bef0:
  lVar19 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
  lVar13 = *(long *)(lVar19 + 600);
  local_68 = *(uint *)(lVar19 + 0x260);
  if (bVar11) {
    local_70 = lVar13;
    uVar12 = (**(code **)(*plVar15 + 0x98))(plVar15);
    local_70 = (ulong)uVar12 << 0x20;
  }
  else {
    local_70._4_4_ = (uint)((ulong)lVar13 >> 0x20);
    uVar12 = local_70._4_4_;
    local_70 = lVar13;
  }
  local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)PTR_DAT_047e6fa0);
  local_68 = CONCAT13(local_68._3_1_,
                      (uint3)((local_68 >> 0x10 & 0xf8) << 0x10) | (uint3)((uVar12 & 0xff) << 8)) |
             0x50020;
  puVar20 = (undefined8 *)(param_1 + (ulong)param_2 * 8 + 0xe0);
  plVar18 = (long *)*puVar20;
  uVar7 = uVar12;
  if (plVar18 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar18 + 0x98))(plVar18);
    if ((int)param_2 < 4) {
      lVar13 = 0;
      do {
        plVar9 = *(long **)(param_1 + (long)(int)param_2 * 8 + 0xe0 + lVar13 * 8);
        if (((plVar9 != (long *)0x0) && (uVar10 = (**(code **)(*plVar9 + 0x78))(), lVar13 != 0)) &&
           ((uVar10 & 1) != 0)) break;
        lVar13 = lVar13 + 1;
      } while (4 - param_2 != (int)lVar13);
    }
    plVar4[1] = 0;
    (**(code **)(*plVar18 + 0x68))(plVar18);
    (**(code **)*plVar18)(plVar18);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,plVar18);
    *puVar20 = 0;
  }
  local_80 = (long *)0x0;
  (**(code **)(**(long **)(lVar19 + 0x188) + 0x1c8))
            (*(long **)(lVar19 + 0x188),param_2,&local_80,*(undefined8 *)(lVar19 + 0x28));
  if (local_80 == (long *)0x0) {
    plVar18 = (long *)0x0;
LAB_0350c194:
    if (uVar7 != uVar12) {
      if (bVar5) {
        FUN_0350be30(param_1,iVar2);
        goto LAB_0350c2d4;
      }
      if (*(long *)(param_1 + 0x78) != 0) {
        (**(code **)(*(long *)PTR_PTR_047e71e0 + 0x18))();
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        (**(code **)(*(long *)PTR_PTR_047e71e0 + 0x18))();
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        (**(code **)(*(long *)PTR_PTR_047e71e0 + 0x18))();
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
      if (*(long *)(param_1 + 0xa8) != 0) {
        (**(code **)(*(long *)PTR_PTR_047e71e0 + 0x18))();
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
      FUN_034faa74((long *)(param_1 + 0x78),uVar12);
      *(uint *)(param_1 + 0x188) = uVar12;
    }
    lVar13 = *plVar4;
    if (plVar18 != (long *)0x0) {
      plVar15 = plVar18;
    }
  }
  else {
    local_90 = 0;
    local_88 = '\x01';
    local_87 = 0;
    local_83 = 1;
    piVar14 = *(int **)PTR_DAT_047e6f70;
    uVar12 = *(uint *)(PTR_DAT_047e6f70 + 8);
    if ((uVar12 == 0) || (*piVar14 == (int)local_80[6])) {
      piVar16 = piVar14;
    }
    else {
      lVar13 = (ulong)uVar12 * 0x20;
      piVar17 = piVar14;
      do {
        lVar13 = lVar13 + -0x20;
        if (lVar13 == 0) goto LAB_0350c2c0;
        piVar16 = piVar17 + 8;
        piVar1 = piVar17 + 8;
        piVar17 = piVar16;
      } while (*piVar1 != (int)local_80[6]);
    }
    if ((piVar16 == piVar14 + (ulong)uVar12 * 8) ||
       (plVar9 = (long *)(**(code **)(piVar16 + 2))(PTR_PTR_047e71e0), plVar9 == (long *)0x0))
    goto LAB_0350c2c0;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_90);
    if ((local_90._4_4_ == 0x7e501) && ((int)local_90 == 3)) {
      cVar6 = local_87._2_1_;
      if (local_88 == '\0') {
        if ((local_87._2_1_ == '\0') && (local_87._3_1_ == '\0')) {
          plVar18 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x138);
          if (plVar18 != (long *)0x0) {
            memset(plVar18 + 1,0,0x130);
            *(undefined4 *)(plVar18 + 3) = 0;
            plVar18[4] = 0;
            plVar18[5] = 0;
            plVar18[2] = (long)(PTR_DAT_047e7478 + 0x10);
            plVar18[8] = 0;
            plVar18[9] = 0;
            *(undefined1 *)(plVar18 + 0xd) = 0xff;
            *(undefined1 *)(plVar18 + 0xe) = 0xff;
            *(undefined4 *)(plVar18 + 0xc) = 0;
            plVar18[10] = 0;
            *(undefined4 *)(plVar18 + 0xb) = 0;
            plVar18[6] = 0;
            plVar18[7] = (long)&PTR_LAB_047c67a8;
            *(undefined4 *)(plVar18 + 0x13) = 0xffffffff;
            plVar18[0xf] = 0;
            plVar18[0x10] = 0;
            *plVar18 = (long)(PTR_DAT_047e7480 + 0x10);
            *(undefined4 *)(plVar18 + 0x19) = 0;
            *(undefined8 *)((long)plVar18 + 0xcc) = 0;
            *(undefined4 *)(plVar18 + 0x1f) = 0;
            *(undefined8 *)((long)plVar18 + 0xfc) = 0;
            plVar18[0x11] = 0;
            plVar18[0x12] = 0;
            plVar18[0x17] = 0;
            plVar18[0x18] = 0x2b00000000;
            plVar18[0x1d] = 0;
            plVar18[0x1e] = 0x2b00000000;
            goto LAB_0350c434;
          }
          goto LAB_0350c2c0;
        }
        goto LAB_0350c2a8;
      }
      if (((char)local_87 != '\0') || (local_87._3_1_ != '\0')) goto LAB_0350c2a8;
      plVar18 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0xc0);
      if (cVar6 == '\0') {
        if (plVar18 != (long *)0x0) {
          memset(plVar18 + 1,0,0xb8);
          *(undefined4 *)(plVar18 + 3) = 0;
          plVar18[4] = 0;
          plVar18[5] = 0;
          plVar18[2] = (long)(PTR_DAT_047e7478 + 0x10);
          plVar18[8] = 0;
          plVar18[9] = 0;
          *(undefined1 *)(plVar18 + 0xd) = 0xff;
          *(undefined1 *)(plVar18 + 0xe) = 0xff;
          *(undefined4 *)(plVar18 + 0xc) = 0;
          plVar18[10] = 0;
          *(undefined4 *)(plVar18 + 0xb) = 0;
          plVar18[6] = 0;
          plVar18[7] = (long)&PTR_LAB_047c67a8;
          *(undefined4 *)(plVar18 + 0x13) = 0xffffffff;
          plVar18[0xf] = 0;
          plVar18[0x10] = 0;
          plVar18[0x11] = 0;
          plVar18[0x12] = 0;
          *plVar18 = (long)(PTR_DAT_047e7488 + 0x10);
          *(undefined4 *)(plVar18 + 0x17) = 0;
          goto LAB_0350c434;
        }
      }
      else if (plVar18 != (long *)0x0) {
        memset(plVar18 + 1,0,0xb8);
        *(undefined4 *)(plVar18 + 3) = 0;
        plVar18[4] = 0;
        plVar18[5] = 0;
        plVar18[2] = (long)(PTR_DAT_047e7478 + 0x10);
        plVar18[8] = 0;
        plVar18[9] = 0;
        *(undefined1 *)(plVar18 + 0xd) = 0xff;
        *(undefined1 *)(plVar18 + 0xe) = 0xff;
        *(undefined4 *)(plVar18 + 0xc) = 0;
        plVar18[10] = 0;
        *(undefined4 *)(plVar18 + 0xb) = 0;
        plVar18[6] = 0;
        plVar18[7] = (long)&PTR_LAB_047c67a8;
        *(undefined4 *)(plVar18 + 0x13) = 0xffffffff;
        plVar18[0xf] = 0;
        plVar18[0x10] = 0;
        plVar18[0x11] = 0;
        plVar18[0x12] = 0;
        puVar3 = PTR_DAT_047e7490 + 0x10;
        *(undefined4 *)(plVar18 + 0x17) = 0;
        *plVar18 = (long)puVar3;
LAB_0350c434:
        iVar8 = (**(code **)(*plVar18 + 0x60))(plVar18,plVar9,&local_80,param_2,param_1,&local_70);
        if (iVar8 == 1) {
          *puVar20 = plVar18;
          *(undefined2 *)((long)plVar18 + 0xa2) = local_78;
          (**(code **)(*plVar18 + 0x58))(plVar18,plVar15);
          uVar12 = (**(code **)(*plVar18 + 0x98))(plVar18);
          goto LAB_0350c194;
        }
        (**(code **)(*plVar18 + 0x68))(plVar18);
        (**(code **)*plVar18)(plVar18);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,plVar18);
      }
    }
    else {
LAB_0350c2a8:
      (**(code **)(*plVar9 + 0x10))(plVar9,PTR_PTR_047e71e0);
    }
LAB_0350c2c0:
    lVar13 = *plVar4;
  }
  (**(code **)(lVar13 + 0x58))(plVar4,plVar15);
LAB_0350c2d4:
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  return;
}


