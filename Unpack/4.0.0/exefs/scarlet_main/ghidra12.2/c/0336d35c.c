/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336d35c; name: FUN_0336d35c
 */


void FUN_0336d35c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  char cVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  char *__s;
  ulong *puVar21;
  size_t sVar22;
  ulong *puVar23;
  ulong uVar24;
  int iVar25;
  undefined8 *puVar26;
  char *local_210;
  char *local_208;
  undefined *local_200;
  undefined *puStack_1f8;
  undefined **local_1f0;
  long *plStack_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  int local_190;
  int local_18c;
  undefined1 local_188 [128];
  undefined4 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [128];
  int local_70;
  
  local_100 = local_f0;
  local_f8 = 0x8000008000000000;
  local_70 = 1;
  FUN_031c6afc(&local_100,*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  puVar19 = local_100;
  iVar20 = (int)local_f8;
  lVar17 = (long)(int)local_f8;
  pvVar7 = memchr(local_100,0x3c,lVar17 - 1U);
  iVar20 = iVar20 + -3;
  sVar22 = lVar17 - 1U;
  do {
    if ((long)sVar22 < 1) {
      iVar20 = -3;
      break;
    }
    lVar17 = sVar22 - 1;
    iVar20 = iVar20 + -1;
    sVar22 = sVar22 - 1;
  } while (puVar19[lVar17] != '>');
  lVar17 = (long)((int)pvVar7 - (int)puVar19);
  if (pvVar7 == (void *)0x0) {
    lVar17 = -1;
  }
  lVar15 = lVar17 << 0x20;
  do {
    lVar13 = lVar17 + 1;
    lVar4 = lVar17 + 1;
    lVar15 = lVar15 + 0x100000000;
    lVar17 = lVar13;
  } while (puVar19[lVar4] == ' ');
  iVar25 = (int)lVar13;
  iVar20 = (iVar20 + 1) - iVar25;
  if (iVar25 != 0) {
    if (iVar25 < 0) {
      FUN_031d0240();
    }
    else {
      memmove(puVar19,puVar19 + (lVar15 >> 0x20),(long)iVar20);
    }
  }
  iVar18 = (local_f8._4_4_ & 0x7fffffff) - 1;
  iVar25 = iVar20;
  if (iVar18 <= iVar20) {
    iVar25 = iVar18;
  }
  if (local_70 != 0) {
    iVar25 = iVar20;
  }
  iVar20 = iVar25 + 1;
  if ((int)(local_f8._4_4_ & 0x7fffffff) <= iVar25) {
    FUN_030b4a20(&local_100,PTR_PTR_047d1a50 + 0x20,(long)iVar20);
  }
  if ((int)local_f8 <= iVar25 || iVar20 < (int)local_f8) {
    local_f8 = CONCAT44(local_f8._4_4_,iVar20);
  }
  local_100[iVar25] = 0;
  local_198 = local_188;
  lVar17 = 1;
  local_108 = 1;
  local_190 = 0;
  local_18c = -0x7fffff80;
  FUN_031c6afc(&local_198,local_100,~(uint)local_100 + (uint)local_100 + (int)local_f8);
  puVar19 = local_198;
  local_1a8 = (undefined8 *)0x0;
  local_1a0 = 0x8000000000000000;
  FUN_031b108c(&local_1a8,PTR_PTR_047d1a50 + 0x20,1);
  uVar12 = local_1a0 & 0xffffffff;
  uVar24 = 0;
LAB_0336d520:
  puVar6 = local_198;
  local_1a8[(int)uVar12] = puVar19;
  lVar15 = (long)local_190;
  iVar20 = (int)lVar17;
  local_1a0 = CONCAT44(local_1a0._4_4_,iVar20);
  do {
    sVar22 = (lVar15 + -1) - (long)(int)uVar24;
    pvVar7 = memchr(puVar6 + (int)uVar24,0x2c,sVar22);
    iVar25 = (int)puVar6;
    uVar2 = (int)pvVar7 - iVar25;
    if (pvVar7 == (void *)0x0) {
      uVar2 = 0xffffffff;
    }
    pvVar7 = memchr(puVar6 + (int)uVar24,0x3c,sVar22);
    puVar5 = PTR_DAT_047d1a08;
    iVar18 = (int)pvVar7 - iVar25;
    if (pvVar7 == (void *)0x0) {
      iVar18 = -1;
    }
    if ((iVar18 < 0) || ((int)uVar2 <= iVar18)) break;
    uVar24 = (ulong)(iVar18 + 1);
    iVar18 = 1;
    do {
      sVar22 = (size_t)((int)(lVar15 + -1) - (int)uVar24);
      pvVar7 = memchr(puVar6 + uVar24,0x3c,sVar22);
      iVar3 = (int)pvVar7 - iVar25;
      if (pvVar7 == (void *)0x0) {
        iVar3 = -1;
      }
      pvVar7 = memchr(puVar6 + uVar24,0x3e,sVar22);
      iVar11 = (int)pvVar7 - iVar25;
      if (pvVar7 == (void *)0x0) {
        iVar11 = -1;
      }
      if (iVar3 < 0) {
        iVar16 = -1;
        if (iVar11 < 0) break;
      }
      else {
        iVar16 = 1;
        if (!(iVar11 < 0 || iVar3 <= iVar11)) {
          iVar16 = -1;
          iVar3 = iVar11;
        }
        iVar11 = iVar3;
      }
      iVar18 = iVar18 + iVar16;
      uVar24 = (ulong)(iVar11 + 1);
    } while (0 < iVar18);
  } while( true );
  if ((int)uVar2 < 0) {
    if (iVar20 != 0) {
      puVar1 = local_1a8 + iVar20;
      puVar26 = local_1a8;
      do {
        iVar20 = *(int *)(param_1 + 0xe);
        lVar17 = (long)iVar20;
        __s = (char *)*puVar26;
        if ((int)(*(uint *)((long)param_1 + 0x74) & 0x7fffffff) <= iVar20) {
          FUN_0336fcfc(param_1 + 0xd,lVar17 + 1);
          iVar20 = *(int *)(param_1 + 0xe);
        }
        lVar15 = param_1[0xd];
        puVar23 = (ulong *)(lVar15 + (long)iVar20 * 0x28);
        *(int *)(param_1 + 0xe) = (int)(lVar17 + 1);
        *(undefined1 *)(puVar23 + 4) = 0;
        puVar23[2] = 0;
        puVar23[3] = 0;
        *puVar23 = 0;
        puVar23[1] = 0;
        cVar14 = *__s;
        lVar17 = (long)iVar20;
        if (cVar14 != '\0') {
          lVar13 = 1;
LAB_0336d704:
          if ((cVar14 == ' ') || ((byte)(cVar14 - 0x30U) < 10)) goto LAB_0336d720;
          local_1d0 = 0;
          local_1c8 = -0x8000000000000000;
          local_1c0 = &DAT_03d7702c;
          local_1b8 = 0;
          local_1b0 = param_3;
          FUN_0334026c(&local_1d0);
          plStack_1e8 = &local_1d0;
          local_1f0 = &PTR_FUN_047ad5d0;
          local_1e0 = param_1;
          local_1d8 = (**(code **)(*(long *)*param_1 + 0x40))();
          local_200 = &DAT_03c9c0b5;
          puStack_1f8 = &DAT_03c9c0b9;
          local_210 = __s;
          sVar22 = strlen(__s);
          local_208 = __s + sVar22;
          uVar10 = FUN_03364b58(&local_1f0,&local_200,&local_210);
          lVar13 = lVar15 + lVar17 * 0x28;
          puVar21 = *(ulong **)(lVar13 + 8);
          *(undefined8 *)(lVar13 + 8) = uVar10;
          if (puVar21 != (ulong *)0x0) {
            if (((*(uint *)((long)puVar21 + 0x1c) < 6) &&
                ((1 << (ulong)(*(uint *)((long)puVar21 + 0x1c) & 0x1f) & 0x32U) != 0)) &&
               (uVar24 = puVar21[2], uVar24 != 0)) {
              FUN_03364aa0(uVar24);
              (**(code **)(puVar5 + 8))(0,uVar24,0);
            }
            if ((puVar21[1] & 1) != 0) {
              (**(code **)(puVar5 + 8))(0,puVar21[1] - 1,0);
            }
            if ((*puVar21 & 1) != 0) {
              (**(code **)(puVar5 + 8))(0,*puVar21 - 1,0);
            }
            (**(code **)(puVar5 + 8))(0,puVar21,0);
          }
          *(undefined8 *)(lVar15 + lVar17 * 0x28 + 0x10) = 0;
          uVar24 = *puVar23;
          puVar9 = (undefined2 *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,2)
          ;
          *puVar9 = 0x5a;
          *puVar23 = (ulong)puVar9 | 1;
          if ((uVar24 & 1) != 0) {
            (**(code **)(puVar5 + 8))(0,uVar24 - 1,0);
          }
          *(undefined1 *)(lVar15 + lVar17 * 0x28 + 0x20) = 0;
          if ((local_1c0 != (undefined *)0x0) && (*(int *)(local_1c0 + 4) != -2)) {
            (**(code **)(puVar5 + 8))(PTR_PTR_047d1a50[8],local_1c0,0);
            local_1c0 = &DAT_03d7702c;
            local_1b8 = 0;
          }
          if ((int)local_1c8 != 0) {
            lVar17 = (long)(int)local_1c8 << 4;
            lVar15 = local_1d0 + -0x10;
            do {
              uVar24 = *(ulong *)(lVar15 + lVar17);
              if ((uVar24 & 1) != 0) {
                (**(code **)(puVar5 + 8))(0,uVar24 - 1,0);
              }
              lVar17 = lVar17 + -0x10;
            } while (lVar17 != 0);
          }
          lVar17 = local_1c8;
          uVar24 = (ulong)local_1c8._4_4_;
          local_1c8 = (ulong)local_1c8._4_4_ << 0x20;
          if ((-1 < lVar17) && (local_1d0 != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1d0,uVar24 << 4);
          }
          goto LAB_0336da4c;
        }
LAB_0336d72c:
        uVar8 = strtoull(__s,(char **)0x0,0);
        lVar13 = lVar15 + lVar17 * 0x28;
        puVar21 = *(ulong **)(lVar13 + 8);
        *(undefined8 *)(lVar13 + 8) = 0;
        *(ulonglong *)(lVar13 + 0x10) = uVar8;
        if (puVar21 != (ulong *)0x0) {
          if ((*(uint *)((long)puVar21 + 0x1c) < 6 &&
               (1 << (ulong)(*(uint *)((long)puVar21 + 0x1c) & 0x1f) & 0x32U) != 0) &&
             (uVar24 = puVar21[2], uVar24 != 0)) {
            FUN_03364aa0(uVar24);
            (**(code **)(puVar5 + 8))(0,uVar24,0);
          }
          if ((puVar21[1] & 1) != 0) {
            (**(code **)(puVar5 + 8))(0,puVar21[1] - 1,0);
          }
          if ((*puVar21 & 1) != 0) {
            (**(code **)(puVar5 + 8))(0,*puVar21 - 1,0);
          }
          (**(code **)(puVar5 + 8))(0,puVar21,0);
        }
        uVar24 = *puVar23;
        puVar9 = (undefined2 *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,2);
        *puVar9 = 0x5a;
        *puVar23 = (ulong)puVar9 | 1;
        if ((uVar24 & 1) != 0) {
          (**(code **)(puVar5 + 8))(0,uVar24 - 1,0);
        }
        *(undefined1 *)(lVar15 + lVar17 * 0x28 + 0x20) = 1;
LAB_0336da4c:
        puVar26 = puVar26 + 1;
      } while (puVar26 != puVar1);
    }
    uVar24 = local_1a0;
    uVar12 = (ulong)local_1a0._4_4_;
    local_1a0 = (ulong)local_1a0._4_4_ << 0x20;
    if ((-1 < (long)uVar24) && (local_1a8 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_1a8,uVar12 << 3);
    }
    local_190 = 0;
    if ((-1 < local_18c) && (local_198 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
    uVar24 = local_f8;
    local_f8 = local_f8 & 0xffffffff00000000;
    if ((-1 < (long)uVar24) && (local_100 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
    return;
  }
  FUN_031c8668(&local_198,uVar2,1,&DAT_03d7db22,1);
  uVar12 = (ulong)uVar2;
  do {
    uVar24 = uVar12 + 1;
    lVar17 = uVar12 + 1;
    uVar12 = uVar24;
  } while (local_198[lVar17] == ' ');
  puVar19 = local_198 + uVar24;
  uVar12 = (ulong)(int)local_1a0;
  lVar17 = uVar12 + 1;
  if ((int)(local_1a0._4_4_ & 0x7fffffff) <= (int)local_1a0) {
    FUN_031b108c(&local_1a8,PTR_PTR_047d1a50 + 0x20,lVar17);
    uVar12 = local_1a0 & 0xffffffff;
  }
  goto LAB_0336d520;
LAB_0336d720:
  cVar14 = __s[lVar13];
  lVar13 = lVar13 + 1;
  if (cVar14 == '\0') goto LAB_0336d72c;
  goto LAB_0336d704;
}


