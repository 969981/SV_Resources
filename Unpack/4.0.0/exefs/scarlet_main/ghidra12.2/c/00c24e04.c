/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c24e04; name: FUN_00c24e04
 */


void FUN_00c24e04(long *param_1,int param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  string *this;
  undefined8 *puVar7;
  undefined8 *puVar8;
  size_t __n;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  long *plVar17;
  undefined4 uVar18;
  string *psVar19;
  long lVar20;
  long *plVar21;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (*(char *)((long)param_3 + 9) != '\0') {
    lVar20 = param_3[2];
    local_7c = 0;
    uStack_78 = 0;
    local_84 = 0;
    uStack_80 = 0;
    local_8c = 0;
    uStack_88 = 0;
    plVar6 = param_1 + 1;
    plVar21 = (long *)*plVar6;
    if (plVar21 != (long *)0x0) {
      plVar6 = param_1 + 1;
      do {
        if (param_2 < (int)plVar21[4]) {
          plVar9 = (long *)*plVar21;
          plVar6 = plVar21;
          if (plVar9 == (long *)0x0) {
            goto LAB_00c24f2c;
          }
        }
        else {
          if (param_2 <= (int)plVar21[4]) goto LAB_00c24f2c;
          plVar6 = plVar21 + 1;
          plVar9 = (long *)*plVar6;
          if (plVar9 == (long *)0x0) goto LAB_00c24f2c;
        }
        plVar21 = plVar9;
      } while( true );
    }
    plVar21 = plVar6;
LAB_00c24f2c:
    lVar12 = *plVar6;
    if (lVar12 == 0) {
      lVar12 = tpidr_el0;
      plVar9 = *(long **)(lVar12 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar12 + 0x30) = DAT_04859430;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x40,8);
      *(int *)(puVar5 + 4) = param_2;
      plVar9 = puVar5 + 5;
      *plVar9 = CONCAT44(uStack_88,local_8c);
      puVar5[6] = CONCAT44(uStack_80,local_84);
      puVar5[7] = CONCAT44(uStack_78,local_7c);
      puVar5[2] = plVar21;
      *puVar5 = 0;
      puVar5[1] = 0;
      *plVar6 = (long)puVar5;
      if (*(long *)*param_1 == 0) {
        puVar7 = puVar5;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar7 = (undefined8 *)*plVar6;
      }
      FUN_010108e0(param_1[1],puVar7);
      param_1[2] = param_1[2] + 1;
      puVar5[7] = lVar20;
      bVar1 = *(byte *)(param_3 + 1);
      *(byte *)(puVar5 + 6) = bVar1;
      *(undefined1 *)((long)puVar5 + 0x33) = *(undefined1 *)((long)param_3 + 0xb);
      bVar3 = true;
      *(undefined1 *)((long)puVar5 + 0x31) = 1;
    }
    else {
      *(long *)(lVar12 + 0x38) = lVar20;
      plVar9 = (long *)(lVar12 + 0x28);
      bVar1 = *(byte *)(param_3 + 1);
      bVar3 = false;
    }
    switch(*(undefined4 *)(PTR_DAT_047dad98 + (ulong)bVar1 * 4)) {
    case 1:
    case 8:
      if (bVar3) {
        lVar20 = param_1[3];
        if (lVar20 == 0) {
          lVar20 = tpidr_el0;
          plVar6 = *(long **)(lVar20 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar20 + 0x30) = DAT_04859430;
          }
          piVar13 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13[3] = 0;
        }
        else {
          piVar13 = (int *)FUN_00c0e238(lVar20,0,0x10);
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13[3] = 0;
          plVar6 = (long *)FUN_00c0e238(lVar20,0,8);
          *(long **)(piVar13 + 2) = plVar6;
          *plVar6 = lVar20;
          FUN_00c0e13c(lVar20,piVar13,&LAB_00c2cb10);
        }
        *plVar9 = (long)piVar13;
      }
      else {
        piVar13 = (int *)*plVar9;
      }
      piVar16 = (int *)*param_3;
      if (piVar16 == piVar13) {
        local_90 = 3;
        local_68 = 0;
        uStack_80 = 0x47a;
        uStack_88 = 0x3c7131c;
        local_84 = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        std::string::append((char *)&uStack_78);
        FUN_00bb0e90(&local_90);
        FUN_00bb0d74(&local_90);
      }
      if (*piVar16 == 0) {
        return;
      }
      FUN_00ba867c(piVar13,*piVar13 + *piVar16);
      break;
    case 2:
      if (bVar3) {
        lVar20 = param_1[3];
        if (lVar20 == 0) {
          lVar20 = tpidr_el0;
          plVar6 = *(long **)(lVar20 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar20 + 0x30) = DAT_04859430;
          }
          piVar13 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13[3] = 0;
        }
        else {
          piVar13 = (int *)FUN_00c0e238(lVar20,0,0x10);
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13[3] = 0;
          plVar6 = (long *)FUN_00c0e238(lVar20,0,8);
          *(long **)(piVar13 + 2) = plVar6;
          *plVar6 = lVar20;
          FUN_00c0e13c(lVar20,piVar13,&LAB_00c2cb30);
        }
        *plVar9 = (long)piVar13;
      }
      else {
        piVar13 = (int *)*plVar9;
      }
      piVar16 = (int *)*param_3;
      if (piVar16 == piVar13) {
        local_90 = 3;
        local_68 = 0;
        uStack_80 = 0x47a;
        uStack_88 = 0x3c7131c;
        local_84 = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        std::string::append((char *)&uStack_78);
        FUN_00bb0e90(&local_90);
        FUN_00bb0d74(&local_90);
      }
      if (*piVar16 == 0) {
        return;
      }
      FUN_00bf472c(piVar13,*piVar13 + *piVar16);
      goto LAB_00c25cf0;
    case 3:
      if (bVar3) {
        lVar20 = param_1[3];
        if (lVar20 == 0) {
          lVar20 = tpidr_el0;
          plVar6 = *(long **)(lVar20 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar20 + 0x30) = DAT_04859430;
          }
          piVar13 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13[3] = 0;
        }
        else {
          piVar13 = (int *)FUN_00c0e238(lVar20,0,0x10);
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13[3] = 0;
          plVar6 = (long *)FUN_00c0e238(lVar20,0,8);
          *(long **)(piVar13 + 2) = plVar6;
          *plVar6 = lVar20;
          FUN_00c0e13c(lVar20,piVar13,&LAB_00c2cb50);
        }
        *plVar9 = (long)piVar13;
      }
      else {
        piVar13 = (int *)*plVar9;
      }
      piVar16 = (int *)*param_3;
      if (piVar16 == piVar13) {
        local_90 = 3;
        local_68 = 0;
        uStack_80 = 0x47a;
        uStack_88 = 0x3c7131c;
        local_84 = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        std::string::append((char *)&uStack_78);
        FUN_00bb0e90(&local_90);
        FUN_00bb0d74(&local_90);
      }
      if (*piVar16 == 0) {
        return;
      }
      FUN_00bf4834(piVar13,*piVar13 + *piVar16);
      break;
    case 4:
      if (bVar3) {
        lVar20 = param_1[3];
        if (lVar20 == 0) {
          lVar20 = tpidr_el0;
          plVar6 = *(long **)(lVar20 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar20 + 0x30) = DAT_04859430;
          }
          piVar13 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13[3] = 0;
        }
        else {
          piVar13 = (int *)FUN_00c0e238(lVar20,0,0x10);
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13[3] = 0;
          plVar6 = (long *)FUN_00c0e238(lVar20,0,8);
          *(long **)(piVar13 + 2) = plVar6;
          *plVar6 = lVar20;
          FUN_00c0e13c(lVar20,piVar13,&LAB_00c2cb70);
        }
        *plVar9 = (long)piVar13;
      }
      else {
        piVar13 = (int *)*plVar9;
      }
      piVar16 = (int *)*param_3;
      if (piVar16 == piVar13) {
        local_90 = 3;
        local_68 = 0;
        uStack_80 = 0x47a;
        uStack_88 = 0x3c7131c;
        local_84 = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        std::string::append((char *)&uStack_78);
        FUN_00bb0e90(&local_90);
        FUN_00bb0d74(&local_90);
      }
      if (*piVar16 == 0) {
        return;
      }
      FUN_00bf493c(piVar13,*piVar13 + *piVar16);
      goto LAB_00c25cf0;
    case 5:
      if (bVar3) {
        lVar20 = param_1[3];
        if (lVar20 == 0) {
          lVar20 = tpidr_el0;
          plVar6 = *(long **)(lVar20 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar20 + 0x30) = DAT_04859430;
          }
          piVar13 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13[3] = 0;
        }
        else {
          piVar13 = (int *)FUN_00c0e238(lVar20,0,0x10);
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13[3] = 0;
          plVar6 = (long *)FUN_00c0e238(lVar20,0,8);
          *(long **)(piVar13 + 2) = plVar6;
          *plVar6 = lVar20;
          FUN_00c0e13c(lVar20,piVar13,&LAB_00c2cbb0);
        }
        *plVar9 = (long)piVar13;
      }
      else {
        piVar13 = (int *)*plVar9;
      }
      piVar16 = (int *)*param_3;
      if (piVar16 == piVar13) {
        local_90 = 3;
        local_68 = 0;
        uStack_80 = 0x47a;
        uStack_88 = 0x3c7131c;
        local_84 = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        std::string::append((char *)&uStack_78);
        FUN_00bb0e90(&local_90);
        FUN_00bb0d74(&local_90);
      }
      if (*piVar16 == 0) {
        return;
      }
      FUN_00bf4b4c(piVar13,*piVar13 + *piVar16);
LAB_00c25cf0:
      lVar20 = *(long *)(piVar13 + 2) + (long)*piVar13 * 8;
      lVar12 = *(long *)(piVar16 + 2);
      __n = (long)*piVar16 << 3;
      goto LAB_00c25de0;
    case 6:
      if (bVar3) {
        lVar20 = param_1[3];
        if (lVar20 == 0) {
          lVar20 = tpidr_el0;
          plVar6 = *(long **)(lVar20 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar20 + 0x30) = DAT_04859430;
          }
          piVar13 = (int *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13[3] = 0;
        }
        else {
          piVar13 = (int *)FUN_00c0e238(lVar20,0,0x10);
          piVar13[0] = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13[3] = 0;
          plVar6 = (long *)FUN_00c0e238(lVar20,0,8);
          *(long **)(piVar13 + 2) = plVar6;
          *plVar6 = lVar20;
          FUN_00c0e13c(lVar20,piVar13,&LAB_00c2cb90);
        }
        *plVar9 = (long)piVar13;
      }
      else {
        piVar13 = (int *)*plVar9;
      }
      piVar16 = (int *)*param_3;
      if (piVar16 == piVar13) {
        local_90 = 3;
        local_68 = 0;
        uStack_80 = 0x47a;
        uStack_88 = 0x3c7131c;
        local_84 = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        std::string::append((char *)&uStack_78);
        FUN_00bb0e90(&local_90);
        FUN_00bb0d74(&local_90);
      }
      if (*piVar16 == 0) {
        return;
      }
      FUN_00bf4a44(piVar13,*piVar13 + *piVar16);
      break;
    case 7:
      if (bVar3) {
        lVar20 = param_1[3];
        if (lVar20 == 0) {
          lVar20 = tpidr_el0;
          plVar6 = *(long **)(lVar20 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar20 + 0x30) = DAT_04859430;
          }
          puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        else {
          puVar5 = (undefined8 *)FUN_00c0e238(lVar20,0,0x10);
          *puVar5 = 0;
          puVar5[1] = 0;
          plVar6 = (long *)FUN_00c0e238(lVar20,0,8);
          puVar5[1] = plVar6;
          *plVar6 = lVar20;
          FUN_00c0e13c(lVar20,puVar5,&LAB_00c2cbd0);
        }
        *plVar9 = (long)puVar5;
      }
      else {
        puVar5 = (undefined8 *)*plVar9;
      }
      FUN_00bf4c54(puVar5,*param_3);
      return;
    case 9:
      if (bVar3) {
        lVar20 = param_1[3];
        if (lVar20 == 0) {
          lVar20 = tpidr_el0;
          plVar6 = *(long **)(lVar20 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar20 + 0x30) = DAT_04859430;
          }
          plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x18,8);
          *plVar6 = 0;
          plVar6[1] = 0;
          plVar6[2] = 0;
        }
        else {
          plVar6 = (long *)FUN_00c0e238(lVar20,0,0x18);
          *plVar6 = lVar20;
          plVar6[1] = 0;
          plVar6[2] = 0;
          FUN_00c0e13c(lVar20,plVar6,&LAB_00c2cbf0);
        }
        *plVar9 = (long)plVar6;
      }
      else {
        plVar6 = (long *)*plVar9;
      }
      FUN_00be295c(plVar6,*param_3);
      return;
    case 10:
      if (bVar3) {
        lVar20 = param_1[3];
        if (lVar20 == 0) {
          lVar20 = tpidr_el0;
          plVar6 = *(long **)(lVar20 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar20 + 0x30) = DAT_04859430;
          }
          plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x18,8);
          *plVar6 = 0;
          plVar6[1] = 0;
          plVar6[2] = 0;
        }
        else {
          plVar6 = (long *)FUN_00c0e238(lVar20,0,0x18);
          *plVar6 = lVar20;
          plVar6[1] = 0;
          plVar6[2] = 0;
          FUN_00c0e13c(lVar20,plVar6,PTR_LAB_047dad90);
        }
        *plVar9 = (long)plVar6;
      }
      lVar20 = *param_3;
      if (*(int *)(lVar20 + 8) < 1) {
        return;
      }
      lVar12 = 0;
      do {
        plVar6 = *(long **)(*(long *)(lVar20 + 0x10) + lVar12 * 8 + 8);
        lVar10 = *plVar9;
        piVar13 = *(int **)(lVar10 + 0x10);
        if (piVar13 == (int *)0x0) {
LAB_00c25940:
          plVar21 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,param_1[3]);
          plVar17 = (long *)*plVar9;
          piVar13 = (int *)plVar17[2];
          if (piVar13 == (int *)0x0) {
            iVar4 = (int)plVar17[1];
            iVar15 = *(int *)((long)plVar17 + 0xc);
LAB_00c259cc:
            FUN_00c11f04(plVar17,(iVar15 - iVar4) + 1);
LAB_00c259dc:
            piVar13 = (int *)plVar17[2];
            iVar2 = *piVar13;
LAB_00c259e8:
            *piVar13 = iVar2 + 1;
          }
          else {
            iVar2 = *piVar13;
            iVar14 = (int)plVar17[1];
            iVar15 = *(int *)((long)plVar17 + 0xc);
            lVar10 = (long)iVar14;
            if (iVar2 < iVar15) {
              if (iVar14 < iVar2) {
                *(undefined8 *)(piVar13 + (long)iVar2 * 2 + 2) =
                     *(undefined8 *)(piVar13 + lVar10 * 2 + 2);
                iVar14 = (int)plVar17[1];
              }
              *(long **)(piVar13 + (long)iVar14 * 2 + 2) = plVar21;
              *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
              *(int *)plVar17[2] = *(int *)plVar17[2] + 1;
              goto LAB_00c25a04;
            }
            iVar4 = iVar15;
            if (iVar14 == iVar15) goto LAB_00c259cc;
            if (iVar2 != iVar15) {
              if (iVar14 < iVar2) {
                *(undefined8 *)(piVar13 + (long)iVar2 * 2 + 2) =
                     *(undefined8 *)(piVar13 + lVar10 * 2 + 2);
                goto LAB_00c259dc;
              }
              goto LAB_00c259e8;
            }
            if (*(long **)(piVar13 + lVar10 * 2 + 2) != (long *)0x0 && *plVar17 == 0) {
              (**(code **)(**(long **)(piVar13 + lVar10 * 2 + 2) + 8))();
            }
          }
          lVar10 = plVar17[1];
          *(int *)(plVar17 + 1) = (int)lVar10 + 1;
          *(long **)(plVar17[2] + (long)(int)lVar10 * 8 + 8) = plVar21;
        }
        else {
          iVar4 = *(int *)(lVar10 + 8);
          if (*piVar13 <= iVar4) goto LAB_00c25940;
          *(int *)(lVar10 + 8) = iVar4 + 1;
          plVar21 = *(long **)(piVar13 + (long)iVar4 * 2 + 2);
          if (plVar21 == (long *)0x0) goto LAB_00c25940;
        }
LAB_00c25a04:
        (**(code **)(*plVar21 + 0x50))(plVar21,plVar6);
        lVar12 = lVar12 + 1;
        if (*(int *)(lVar20 + 8) <= lVar12) {
          return;
        }
      } while( true );
    default:
      return;
    }
    lVar20 = *(long *)(piVar13 + 2) + (long)*piVar13 * 4;
    lVar12 = *(long *)(piVar16 + 2);
    __n = (long)*piVar16 << 2;
LAB_00c25de0:
    memcpy((void *)(lVar20 + 8),(void *)(lVar12 + 8),__n);
    *piVar13 = *piVar13 + *piVar16;
    return;
  }
  if ((*(byte *)((long)param_3 + 10) & 1) != 0) {
    return;
  }
  bVar1 = *(byte *)(param_3 + 1);
  switch(*(undefined4 *)(PTR_DAT_047dad98 + (ulong)bVar1 * 4)) {
  case 1:
    uVar18 = (undefined4)*param_3;
    lVar20 = param_3[2];
    if ((long *)param_1[1] != (long *)0x0) {
      plVar6 = param_1 + 1;
      plVar21 = (long *)param_1[1];
      do {
        if (param_2 < (int)plVar21[4]) {
          plVar9 = (long *)*plVar21;
          plVar6 = plVar21;
          if (plVar9 == (long *)0x0) goto LAB_00c256d4;
        }
        else {
          if (param_2 <= (int)plVar21[4]) goto LAB_00c256d8;
          plVar6 = plVar21 + 1;
          plVar9 = (long *)*plVar6;
          if (plVar9 == (long *)0x0) goto LAB_00c256d8;
        }
        plVar21 = plVar9;
      } while( true );
    }
    goto LAB_00c25650;
  case 2:
    lVar20 = *param_3;
    lVar12 = param_3[2];
    if ((long *)param_1[1] != (long *)0x0) {
      plVar6 = param_1 + 1;
      plVar21 = (long *)param_1[1];
      do {
        if (param_2 < (int)plVar21[4]) {
          plVar9 = (long *)*plVar21;
          plVar6 = plVar21;
          if (plVar9 == (long *)0x0) goto LAB_00c25768;
        }
        else {
          if (param_2 <= (int)plVar21[4]) goto LAB_00c2576c;
          plVar6 = plVar21 + 1;
          plVar9 = (long *)*plVar6;
          if (plVar9 == (long *)0x0) goto LAB_00c2576c;
        }
        plVar21 = plVar9;
      } while( true );
    }
    goto LAB_00c255f0;
  case 3:
    uVar18 = (undefined4)*param_3;
    lVar20 = param_3[2];
    if ((long *)param_1[1] != (long *)0x0) {
      plVar6 = param_1 + 1;
      plVar21 = (long *)param_1[1];
      do {
        if (param_2 < (int)plVar21[4]) {
          plVar9 = (long *)*plVar21;
          plVar6 = plVar21;
          if (plVar9 == (long *)0x0) goto LAB_00c256d4;
        }
        else {
          if (param_2 <= (int)plVar21[4]) goto LAB_00c256d8;
          plVar6 = plVar21 + 1;
          plVar9 = (long *)*plVar6;
          if (plVar9 == (long *)0x0) goto LAB_00c256d8;
        }
        plVar21 = plVar9;
      } while( true );
    }
    goto LAB_00c25650;
  case 4:
    lVar20 = *param_3;
    lVar12 = param_3[2];
    if ((long *)param_1[1] != (long *)0x0) {
      plVar6 = param_1 + 1;
      plVar21 = (long *)param_1[1];
      do {
        if (param_2 < (int)plVar21[4]) {
          plVar9 = (long *)*plVar21;
          plVar6 = plVar21;
          if (plVar9 == (long *)0x0) goto LAB_00c25768;
        }
        else {
          if (param_2 <= (int)plVar21[4]) goto LAB_00c2576c;
          plVar6 = plVar21 + 1;
          plVar9 = (long *)*plVar6;
          if (plVar9 == (long *)0x0) goto LAB_00c2576c;
        }
        plVar21 = plVar9;
      } while( true );
    }
    goto LAB_00c255f0;
  case 5:
    lVar20 = *param_3;
    lVar12 = param_3[2];
    if ((long *)param_1[1] != (long *)0x0) {
      plVar6 = param_1 + 1;
      plVar21 = (long *)param_1[1];
      do {
        if (param_2 < (int)plVar21[4]) {
          plVar9 = (long *)*plVar21;
          plVar6 = plVar21;
          if (plVar9 == (long *)0x0) goto LAB_00c25768;
        }
        else {
          if (param_2 <= (int)plVar21[4]) goto LAB_00c2576c;
          plVar6 = plVar21 + 1;
          plVar9 = (long *)*plVar6;
          if (plVar9 == (long *)0x0) goto LAB_00c2576c;
        }
        plVar21 = plVar9;
      } while( true );
    }
LAB_00c255f0:
    plVar6 = param_1 + 1;
    plVar21 = plVar6;
LAB_00c2576c:
    uStack_78 = 0;
    local_7c = 0;
    uStack_80 = 0;
    local_84 = 0;
    uStack_88 = 0;
    local_8c = 0;
    lVar10 = *plVar6;
    if (lVar10 == 0) {
      lVar10 = tpidr_el0;
      plVar9 = *(long **)(lVar10 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x40,8);
      *(int *)(puVar5 + 4) = param_2;
      plVar9 = puVar5 + 5;
      *plVar9 = CONCAT44(uStack_88,local_8c);
      puVar5[6] = CONCAT44(uStack_80,local_84);
      puVar5[7] = CONCAT44(uStack_78,local_7c);
      puVar5[2] = plVar21;
      *puVar5 = 0;
      puVar5[1] = 0;
      *plVar6 = (long)puVar5;
      if (*(long *)*param_1 == 0) {
        puVar7 = puVar5;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar7 = (undefined8 *)*plVar6;
      }
      FUN_010108e0(param_1[1],puVar7);
      param_1[2] = param_1[2] + 1;
      puVar5[7] = lVar12;
      *(byte *)(puVar5 + 6) = bVar1;
      *(undefined1 *)((long)puVar5 + 0x31) = 0;
    }
    else {
      plVar9 = (long *)(lVar10 + 0x28);
      *(long *)(lVar10 + 0x38) = lVar12;
    }
    *(byte *)((long)plVar9 + 10) = *(byte *)((long)plVar9 + 10) & 0xf0;
    *plVar9 = lVar20;
    break;
  case 6:
    uVar18 = (undefined4)*param_3;
    lVar20 = param_3[2];
    if ((long *)param_1[1] != (long *)0x0) {
      plVar6 = param_1 + 1;
      plVar21 = (long *)param_1[1];
      do {
        if (param_2 < (int)plVar21[4]) {
          plVar9 = (long *)*plVar21;
          plVar6 = plVar21;
          if (plVar9 == (long *)0x0) goto LAB_00c256d4;
        }
        else {
          if (param_2 <= (int)plVar21[4]) goto LAB_00c256d8;
          plVar6 = plVar21 + 1;
          plVar9 = (long *)*plVar6;
          if (plVar9 == (long *)0x0) goto LAB_00c256d8;
        }
        plVar21 = plVar9;
      } while( true );
    }
    goto LAB_00c25650;
  case 7:
    lVar20 = *param_3;
    lVar12 = param_3[2];
    local_7c = 0;
    uStack_78 = 0;
    local_84 = 0;
    uStack_80 = 0;
    local_8c = 0;
    uStack_88 = 0;
    plVar6 = param_1 + 1;
    plVar21 = (long *)*plVar6;
    if (plVar21 != (long *)0x0) {
      plVar6 = param_1 + 1;
      do {
        if (param_2 < (int)plVar21[4]) {
          plVar9 = (long *)*plVar21;
          plVar6 = plVar21;
          if (plVar9 == (long *)0x0) {
            goto LAB_00c25fbc;
          }
        }
        else {
          if (param_2 <= (int)plVar21[4]) goto LAB_00c25fbc;
          plVar6 = plVar21 + 1;
          plVar9 = (long *)*plVar6;
          if (plVar9 == (long *)0x0) goto LAB_00c25fbc;
        }
        plVar21 = plVar9;
      } while( true );
    }
    plVar21 = plVar6;
LAB_00c25fbc:
    lVar10 = *plVar6;
    if (lVar10 == 0) {
      lVar10 = tpidr_el0;
      plVar9 = *(long **)(lVar10 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x40,8);
      *(int *)(puVar7 + 4) = param_2;
      puVar5 = puVar7 + 5;
      *puVar5 = CONCAT44(uStack_88,local_8c);
      puVar7[6] = CONCAT44(uStack_80,local_84);
      puVar7[7] = CONCAT44(uStack_78,local_7c);
      puVar7[2] = plVar21;
      *puVar7 = 0;
      puVar7[1] = 0;
      *plVar6 = (long)puVar7;
      if (*(long *)*param_1 == 0) {
        puVar8 = puVar7;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar8 = (undefined8 *)*plVar6;
      }
      FUN_010108e0(param_1[1],puVar8);
      param_1[2] = param_1[2] + 1;
      puVar7[7] = lVar12;
      *(byte *)(puVar7 + 6) = bVar1;
      *(undefined1 *)((long)puVar7 + 0x31) = 0;
    }
    else {
      puVar5 = (undefined8 *)(lVar10 + 0x28);
      *(long *)(lVar10 + 0x38) = lVar12;
    }
    *(byte *)((long)puVar5 + 10) = *(byte *)((long)puVar5 + 10) & 0xf0;
    *(char *)puVar5 = (char)lVar20;
    break;
  case 8:
    uVar18 = (undefined4)*param_3;
    lVar20 = param_3[2];
    if ((long *)param_1[1] != (long *)0x0) {
      plVar6 = param_1 + 1;
      plVar21 = (long *)param_1[1];
      do {
        if (param_2 < (int)plVar21[4]) {
          plVar9 = (long *)*plVar21;
          plVar6 = plVar21;
          if (plVar9 == (long *)0x0) goto LAB_00c256d4;
        }
        else {
          if (param_2 <= (int)plVar21[4]) goto LAB_00c256d8;
          plVar6 = plVar21 + 1;
          plVar9 = (long *)*plVar6;
          if (plVar9 == (long *)0x0) goto LAB_00c256d8;
        }
        plVar21 = plVar9;
      } while( true );
    }
LAB_00c25650:
    plVar6 = param_1 + 1;
    plVar21 = plVar6;
LAB_00c256d8:
    uStack_78 = 0;
    local_7c = 0;
    uStack_80 = 0;
    local_84 = 0;
    uStack_88 = 0;
    local_8c = 0;
    lVar12 = *plVar6;
    if (lVar12 == 0) {
      lVar12 = tpidr_el0;
      plVar9 = *(long **)(lVar12 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar12 + 0x30) = DAT_04859430;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x40,8);
      *(int *)(puVar7 + 4) = param_2;
      puVar5 = puVar7 + 5;
      *puVar5 = CONCAT44(uStack_88,local_8c);
      puVar7[6] = CONCAT44(uStack_80,local_84);
      puVar7[7] = CONCAT44(uStack_78,local_7c);
      puVar7[2] = plVar21;
      *puVar7 = 0;
      puVar7[1] = 0;
      *plVar6 = (long)puVar7;
      if (*(long *)*param_1 == 0) {
        puVar8 = puVar7;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar8 = (undefined8 *)*plVar6;
      }
      FUN_010108e0(param_1[1],puVar8);
      param_1[2] = param_1[2] + 1;
      puVar7[7] = lVar20;
      *(byte *)(puVar7 + 6) = bVar1;
      *(undefined1 *)((long)puVar7 + 0x31) = 0;
    }
    else {
      puVar5 = (undefined8 *)(lVar12 + 0x28);
      *(long *)(lVar12 + 0x38) = lVar20;
    }
    *(byte *)((long)puVar5 + 10) = *(byte *)((long)puVar5 + 10) & 0xf0;
    *(undefined4 *)puVar5 = uVar18;
    break;
  case 9:
    psVar19 = (string *)*param_3;
    this = (string *)FUN_00c23734(param_1,param_2,(ulong)bVar1,param_3[2]);
    std::string::operator=(this,psVar19);
    break;
  case 10:
    lVar20 = param_3[2];
    local_7c = 0;
    uStack_78 = 0;
    local_84 = 0;
    uStack_80 = 0;
    local_8c = 0;
    uStack_88 = 0;
    plVar6 = param_1 + 1;
    plVar21 = (long *)*plVar6;
    if (plVar21 != (long *)0x0) {
      plVar6 = param_1 + 1;
      do {
        if (param_2 < (int)plVar21[4]) {
          plVar9 = (long *)*plVar21;
          plVar6 = plVar21;
          if (plVar9 == (long *)0x0) {
            goto LAB_00c25ee8;
          }
        }
        else {
          if (param_2 <= (int)plVar21[4]) goto LAB_00c25ee8;
          plVar6 = plVar21 + 1;
          plVar9 = (long *)*plVar6;
          if (plVar9 == (long *)0x0) goto LAB_00c25ee8;
        }
        plVar21 = plVar9;
      } while( true );
    }
    plVar21 = plVar6;
LAB_00c25ee8:
    lVar12 = *plVar6;
    if (lVar12 == 0) {
      lVar12 = tpidr_el0;
      plVar9 = *(long **)(lVar12 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar12 + 0x30) = DAT_04859430;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x40,8);
      *(int *)(puVar7 + 4) = param_2;
      puVar5 = puVar7 + 5;
      *puVar5 = CONCAT44(uStack_88,local_8c);
      puVar7[6] = CONCAT44(uStack_80,local_84);
      puVar7[7] = CONCAT44(uStack_78,local_7c);
      puVar7[2] = plVar21;
      *puVar7 = 0;
      puVar7[1] = 0;
      *plVar6 = (long)puVar7;
      if (*(long *)*param_1 == 0) {
        puVar8 = puVar7;
      }
      else {
        *param_1 = *(long *)*param_1;
        puVar8 = (undefined8 *)*plVar6;
      }
      FUN_010108e0(param_1[1],puVar8);
      param_1[2] = param_1[2] + 1;
      puVar7[7] = lVar20;
      *(char *)(puVar7 + 6) = (char)param_3[1];
      *(undefined1 *)((long)puVar7 + 0x33) = *(undefined1 *)((long)param_3 + 0xb);
      *(undefined1 *)((long)puVar7 + 0x31) = 0;
      bVar1 = *(byte *)((long)puVar7 + 0x32) & 0xf;
      if ((*(byte *)((long)param_3 + 10) >> 4 & 1) == 0) {
        *(byte *)((long)puVar7 + 0x32) = bVar1;
        plVar6 = (long *)(**(code **)(*(long *)*param_3 + 0x20))((long *)*param_3,param_1[3]);
        puVar7[5] = plVar6;
        goto LAB_00c260c8;
      }
      *(byte *)((long)puVar7 + 0x32) = bVar1 | 0x10;
      plVar6 = (long *)(**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,param_1[3]);
      puVar7[5] = plVar6;
LAB_00c260f8:
      lVar20 = *param_3;
      pcVar11 = *(code **)(*plVar6 + 0x60);
    }
    else {
      *(long *)(lVar12 + 0x38) = lVar20;
      puVar5 = (undefined8 *)(lVar12 + 0x28);
      if ((*(byte *)((long)param_3 + 10) >> 4 & 1) == 0) {
        if ((*(byte *)(lVar12 + 0x32) >> 4 & 1) == 0) {
          plVar6 = (long *)*puVar5;
        }
        else {
          plVar6 = (long *)(**(code **)(*(long *)*puVar5 + 0x20))((long *)*puVar5,*param_3);
        }
LAB_00c260c8:
        lVar12 = *plVar6;
        lVar20 = *param_3;
      }
      else {
        if ((*(byte *)(lVar12 + 0x32) >> 4 & 1) != 0) {
          plVar6 = (long *)*puVar5;
          goto LAB_00c260f8;
        }
        plVar6 = (long *)*puVar5;
        lVar20 = (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,plVar6);
        lVar12 = *plVar6;
      }
      pcVar11 = *(code **)(lVar12 + 0x50);
    }
    (*pcVar11)(plVar6,lVar20);
    *(byte *)((long)puVar5 + 10) = *(byte *)((long)puVar5 + 10) & 0xf0;
  }
  return;
LAB_00c25768:
  plVar21 = plVar6;
  goto LAB_00c2576c;
LAB_00c256d4:
  plVar21 = plVar6;
  goto LAB_00c256d8;
}


