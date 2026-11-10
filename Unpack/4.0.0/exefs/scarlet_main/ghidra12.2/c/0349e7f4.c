/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349e7f4; name: FUN_0349e7f4
 */


uint FUN_0349e7f4(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 param_5,uint param_6,undefined8 param_7,uint param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  code *pcVar5;
  ulong *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  size_t sVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  undefined8 *puVar21;
  uint uVar22;
  ulong uVar23;
  long *plVar24;
  ulong local_80;
  undefined4 local_78;
  ulong *local_70;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_047e2fd0;
  puVar9 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x480);
  if (puVar9 == (undefined8 *)0x0) {
    return 0x34;
  }
  FUN_0349a384(puVar9,param_2,param_1,param_6 & 1,param_8 & 1);
  puVar3 = PTR_DAT_047e7138;
  if (*PTR_DAT_047e6980 == '\0') {
    do {
      uVar7 = FUN_0349cd08(puVar9);
      puVar21 = DAT_048b0118;
      if (0x33 < (int)uVar7) {
        if ((int)uVar7 < 0x5a) {
          if (uVar7 == 0x58) goto joined_r0x0349ebb0;
          if (uVar7 != 0x34) goto LAB_0349ef70;
          goto LAB_0349edf4;
        }
        if (uVar7 != 0x5a) goto LAB_0349ef70;
        uVar12 = 1;
LAB_0349ef78:
        uVar7 = FUN_0349afcc(puVar9,uVar12);
        goto LAB_0349e880;
      }
      if ((uVar7 != 4) && (uVar7 != 0xf)) {
        if (uVar7 != 1) {
LAB_0349ef70:
          uVar12 = 0;
          goto LAB_0349ef78;
        }
        break;
      }
joined_r0x0349ebb0:
      for (; puVar21 != (undefined8 *)0x0; puVar21 = (undefined8 *)puVar21[4]) {
        if (*(int *)(puVar21 + 0x10) == -0x19eeceb6) goto LAB_0349ec7c;
      }
      iVar8 = *(int *)(puVar9 + 0x10);
      if (iVar8 == -0x19eeceb6) goto LAB_0349ef70;
      uVar23 = (ulong)*(uint *)(puVar3 + 8);
      if (*(uint *)(puVar3 + 8) != 0) {
        plVar15 = *(long **)puVar3;
        plVar24 = plVar15;
        do {
          lVar18 = *plVar24;
          iVar19 = *(int *)(lVar18 + 0x1b8);
          if (iVar19 == -1) {
            lVar20 = lVar18;
            do {
              lVar20 = *(long *)(lVar20 + 0xa0);
              if (lVar20 == 0) {
                iVar19 = -1;
                goto LAB_0349ec20;
              }
              iVar19 = *(int *)(lVar20 + 0x1b8);
            } while (iVar19 == -1);
            *(int *)(lVar18 + 0x1b8) = iVar19;
          }
LAB_0349ec20:
          if (iVar19 == iVar8) {
            FUN_03475440(*plVar24,0xe611314a);
            plVar15 = *(long **)puVar3;
            uVar23 = (ulong)*(uint *)(puVar3 + 8);
          }
          plVar24 = plVar24 + 1;
        } while (plVar24 != plVar15 + uVar23);
      }
      *(undefined4 *)(puVar9 + 0x10) = 0xe611314a;
      FUN_0349dde0(puVar9 + 0x10,(long)puVar9 + 0x84);
      puVar9[5] = puVar9[0x10];
    } while (uVar7 != 1);
  }
  else {
    uVar7 = FUN_0349afcc(puVar9,1);
LAB_0349e880:
    if ((uVar7 & 0xfffffffd) != 1) goto LAB_0349edf4;
    if (uVar7 == 3) {
      puVar21 = puVar9;
LAB_0349ec7c:
      (**(code **)*puVar9)(puVar9);
      (**(code **)(puVar2 + 0x30))(0,puVar9);
      goto LAB_0349eca0;
    }
    puVar21 = puVar9;
    if (uVar7 != 1) goto LAB_0349eca0;
  }
  local_80 = 0x42b4000042340000;
  local_78 = 0x43070000;
  uVar7 = FUN_0349c568(0x425acccd,puVar9,&local_80,3);
  pcVar5 = DAT_048b0140;
  puVar21 = DAT_048b0118;
  if (uVar7 == 1) {
    for (; puVar21 != (undefined8 *)0x0; puVar21 = (undefined8 *)puVar21[4]) {
      if (*(int *)(puVar21 + 0x10) == *(int *)(puVar9 + 0x10)) {
        if (((*(char *)((long)puVar21 + 0x46e) == '\0') && (*(int *)(puVar21 + 0xb) == 0)) ||
           (*(int *)(param_4 + 3) == 0)) goto LAB_0349ee54;
        local_70 = (ulong *)0x0;
        local_68 = 0;
        uVar7 = *(uint *)(puVar21 + 0xb);
        uVar23 = (ulong)uVar7;
        if (uVar7 == 1) {
          local_70 = &local_80;
          local_68 = 0x100000001;
LAB_0349e980:
          *local_70 = *(ulong *)puVar21[10];
          if (1 < *(uint *)(puVar21 + 0xb)) {
            uVar23 = 1;
            do {
              local_70[uVar23] = *(ulong *)(puVar21[10] + uVar23 * 8);
              uVar23 = uVar23 + 1;
            } while (uVar23 < *(uint *)(puVar21 + 0xb));
          }
LAB_0349e9bc:
          uVar23 = local_68 & 0xffffffff;
          if ((uint)local_68 == 0) {
            uVar7 = 0;
            goto LAB_0349eaf0;
          }
LAB_0349e9c8:
          uVar22 = (uint)uVar23;
          puVar10 = local_70;
          if (*(int *)(param_4 + 3) != 0) {
            puVar13 = (ulong *)param_4[2];
            puVar14 = local_70;
            do {
              uVar17 = *puVar14;
              if (uVar17 == *puVar13) {
                if (puVar14 != puVar10) {
                  *puVar10 = uVar17;
                  uVar23 = local_68 & 0xffffffff;
                }
                puVar10 = puVar10 + 1;
                puVar14 = puVar14 + 1;
                puVar13 = puVar13 + 1;
              }
              else {
                puVar6 = puVar13 + 1;
                if (uVar17 < *puVar13) {
                  puVar14 = puVar14 + 1;
                  puVar6 = puVar13;
                }
                puVar13 = puVar6;
              }
              uVar22 = (uint)uVar23;
            } while ((local_70 + uVar23 != puVar14) &&
                    (puVar13 != (ulong *)(param_4[2] + (ulong)*(uint *)(param_4 + 3) * 8)));
          }
          uVar7 = (uint)((ulong)((long)puVar10 - (long)local_70) >> 3);
          if (uVar7 < uVar22) goto LAB_0349eaf0;
          if (uVar7 <= local_68._4_4_) goto LAB_0349eaf0;
          uVar1 = local_68._4_4_ + (uVar7 - uVar22);
          if (uVar1 < 2) {
            puVar10 = &local_80;
LAB_0349eae0:
            local_68 = (ulong)uVar1 << 0x20;
            local_70 = puVar10;
            goto LAB_0349eaf0;
          }
          if (&local_80 == local_70) {
            puVar10 = (ulong *)(**(code **)(puVar2 + 0x18))(4,(ulong)uVar1 << 3,0x10);
            if (puVar10 != (ulong *)0x0) {
              memcpy(puVar10,&local_80,((ulong)uVar22 & 0x1fffffff) << 3);
              goto LAB_0349eae0;
            }
          }
          else {
            puVar10 = (ulong *)(**(code **)(puVar2 + 0x28))(4,local_70,(ulong)uVar1 << 3,0x10);
            if (puVar10 != (ulong *)0x0) goto LAB_0349eae0;
          }
          uVar7 = (uint)local_68;
        }
        else {
          if (uVar7 != 0) {
            puVar10 = (ulong *)(**(code **)(puVar2 + 0x28))(4,0,uVar23 << 3,0x10);
            if (puVar10 == (ulong *)0x0) goto LAB_0349e9bc;
            local_68 = CONCAT44(uVar7,uVar7);
            local_70 = puVar10;
            if (*(int *)(puVar21 + 0xb) != 0) goto LAB_0349e980;
            goto LAB_0349e9c8;
          }
          uVar7 = 0;
          local_68 = 0;
LAB_0349eaf0:
          local_68 = CONCAT44(local_68._4_4_,uVar7);
        }
        if (local_70 != (ulong *)0x0) {
          local_68 = local_68 & 0xffffffff00000000;
          if (&local_80 != local_70) {
            (**(code **)(puVar2 + 0x30))(4);
          }
          local_70 = (ulong *)0x0;
          local_68 = local_68 & 0xffffffff;
        }
        if (uVar7 != 0) {
LAB_0349ee54:
          pcVar5 = DAT_048b0140;
          if ((param_6 & 1) != 0) {
            DAT_048b0148 = 2;
          }
          if (DAT_048b0140 != (code *)0x0) {
            if (((DAT_048afc00 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_048afc00), iVar8 != 0)) {
              DAT_048afbf8 = PTR_DAT_047e6ff0 + 0x10;
              __cxa_guard_release(&DAT_048afc00);
            }
            (*pcVar5)(&DAT_048afbf8,*(undefined4 *)(puVar9 + 0x10),
                      *(undefined4 *)((long)puVar9 + 0x84),0,0x61);
          }
          (**(code **)*puVar9)(puVar9);
          (**(code **)(puVar2 + 0x30))(0,puVar9);
          return 0x61;
        }
        *(undefined1 *)((long)puVar21 + 0x46e) = 1;
        *(undefined1 *)((long)puVar9 + 0x46e) = 1;
      }
    }
    if (*(char *)((long)puVar9 + 0x46d) == '\0') {
      puVar9[4] = 0;
      plVar24 = (long *)&DAT_048b0118;
      if (DAT_048b0118 != (undefined8 *)0x0) {
        plVar24 = DAT_048b0110 + 4;
      }
      *plVar24 = (long)puVar9;
      DAT_048b0110 = puVar9;
    }
    else if (DAT_048b0118 == (undefined8 *)0x0) {
      DAT_048b0110 = puVar9;
      DAT_048b0118 = puVar9;
      puVar9[4] = 0;
    }
    else {
      puVar9[4] = DAT_048b0118;
      DAT_048b0118 = puVar9;
    }
    pcVar4 = DAT_048afee0;
    DAT_048b0108 = DAT_048b0108 + 1;
    puVar21 = puVar9;
    if (DAT_048afee0 != (char *)0x0) {
      sVar11 = strlen(DAT_048afee0);
      pcVar4[sVar11 - 5] = pcVar4[sVar11 - 5] + '\x01';
      FUN_0349b478(puVar9,DAT_048afee0);
    }
LAB_0349eca0:
    puVar9 = puVar21 + 8;
    if ((undefined8 *)puVar21[10] != (undefined8 *)0x0) {
      *(undefined4 *)(puVar21 + 0xb) = 0;
      if (puVar9 != (undefined8 *)puVar21[10]) {
        (**(code **)(puVar2 + 0x30))(4);
      }
      puVar21[10] = 0;
      *(undefined4 *)((long)puVar21 + 0x5c) = 0;
    }
    puVar16 = (undefined8 *)param_4[2];
    if (param_4 == puVar16) {
      *puVar9 = *param_4;
      puVar16 = puVar9;
    }
    puVar21[10] = puVar16;
    *(undefined4 *)(puVar21 + 0xb) = *(undefined4 *)(param_4 + 3);
    *(undefined4 *)((long)puVar21 + 0x5c) = *(undefined4 *)((long)param_4 + 0x1c);
    param_4[2] = 0;
    param_4[3] = 0;
    *(undefined4 *)(puVar21 + 0xc) = param_5;
    FUN_0349fe20(&DAT_048b0120,puVar9);
    if (*(int *)PTR_DAT_047e7008 != 2) {
      *(undefined4 *)PTR_DAT_047e7008 = 1;
    }
    pcVar5 = DAT_048b0140;
    if (((DAT_048b0148 == 0) && ((param_6 & 1) != 0)) &&
       (DAT_048b0148 = 1, *(int *)(DAT_048b0118 + 0x10) != *param_2)) {
      DAT_048b0148 = 2;
    }
    if (DAT_048b0140 != (code *)0x0) {
      if (((DAT_048afc00 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_048afc00), iVar8 != 0)) {
        DAT_048afbf8 = PTR_DAT_047e6ff0 + 0x10;
        __cxa_guard_release(&DAT_048afc00);
      }
      (*pcVar5)(&DAT_048afbf8,*(undefined4 *)(puVar21 + 0x10),*(undefined4 *)((long)puVar21 + 0x84),
                0,1);
    }
    return 1;
  }
  if ((param_6 & 1) != 0) {
    DAT_048b0148 = 2;
  }
  if (DAT_048b0140 != (code *)0x0) {
    if (((DAT_048afc00 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_048afc00), iVar8 != 0)) {
      DAT_048afbf8 = PTR_DAT_047e6ff0 + 0x10;
      __cxa_guard_release(&DAT_048afc00);
    }
    (*pcVar5)(&DAT_048afbf8,*(undefined4 *)(puVar9 + 0x10),*(undefined4 *)((long)puVar9 + 0x84),0,
              0x34);
  }
LAB_0349edf4:
  (**(code **)*puVar9)(puVar9);
  (**(code **)(puVar2 + 0x30))(0,puVar9);
  return uVar7;
}


