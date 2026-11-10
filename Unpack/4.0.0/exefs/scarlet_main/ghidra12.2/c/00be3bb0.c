/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00be3bb0; name: FUN_00be3bb0
 */


void FUN_00be3bb0(long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  undefined8 *puVar14;
  string *psVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined4 local_100 [2];
  char *local_f8;
  undefined4 local_f0;
  char local_e8 [24];
  string local_d0 [16];
  long local_c0;
  undefined1 local_51;
  
  puVar5 = PTR_DAT_047dad58;
  if (*(int *)(param_4 + 0x40) != 3) {
    switch(*(undefined4 *)(PTR_DAT_047dad58 + (ulong)*(uint *)(param_4 + 0x3c) * 4)) {
    case 1:
    case 3:
    case 6:
    case 8:
      lVar10 = *(long *)(param_4 + 0x58);
      if (lVar10 == 0) {
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
      }
      else {
        iVar6 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) *
                -0x55555555;
      }
      lVar18 = (long)*(int *)(param_1[4] + (long)iVar6 * 4);
      if (lVar10 == 0) {
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
      }
      else {
        iVar6 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) *
                -0x55555555;
      }
      lVar10 = (long)*(int *)(param_1[4] + (long)iVar6 * 4);
      uVar9 = *(undefined4 *)((long)param_2 + lVar18);
      *(undefined4 *)((long)param_2 + lVar18) = *(undefined4 *)((long)param_3 + lVar10);
      *(undefined4 *)((long)param_3 + lVar10) = uVar9;
      return;
    case 2:
    case 4:
    case 5:
      lVar10 = *(long *)(param_4 + 0x58);
      if (lVar10 == 0) {
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
      }
      else {
        iVar6 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) *
                -0x55555555;
      }
      lVar18 = (long)*(int *)(param_1[4] + (long)iVar6 * 4);
      if (lVar10 == 0) {
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
      }
      else {
        iVar6 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) *
                -0x55555555;
      }
      lVar10 = (long)*(int *)(param_1[4] + (long)iVar6 * 4);
      uVar7 = *(undefined8 *)((long)param_2 + lVar18);
      *(undefined8 *)((long)param_2 + lVar18) = *(undefined8 *)((long)param_3 + lVar10);
      *(undefined8 *)((long)param_3 + lVar10) = uVar7;
      return;
    case 7:
      lVar10 = *(long *)(param_4 + 0x58);
      if (lVar10 == 0) {
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
      }
      else {
        iVar6 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) *
                -0x55555555;
      }
      lVar18 = (long)*(int *)(param_1[4] + (long)iVar6 * 4);
      if (lVar10 == 0) {
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
      }
      else {
        iVar6 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) *
                -0x55555555;
      }
      lVar10 = (long)*(int *)(param_1[4] + (long)iVar6 * 4);
      uVar3 = *(undefined1 *)((long)param_2 + lVar18);
      *(undefined1 *)((long)param_2 + lVar18) = *(undefined1 *)((long)param_3 + lVar10);
      *(undefined1 *)((long)param_3 + lVar10) = uVar3;
      return;
    case 9:
      lVar10 = (long)(int)param_1[7];
      if ((int)param_1[7] == -1) {
        uVar12 = 0;
        uVar11 = 0;
      }
      else if ((int)param_1[6] == -1) {
        uVar12 = *(ulong *)((long)param_2 + lVar10) & 0xfffffffffffffffe;
        if ((*(ulong *)((long)param_2 + lVar10) & 1) != 0) {
          uVar12 = *(ulong *)(uVar12 + 8);
        }
        uVar11 = *(ulong *)((long)param_3 + lVar10) & 0xfffffffffffffffe;
        if ((*(ulong *)((long)param_3 + lVar10) & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 + 8);
        }
      }
      else {
        uVar12 = *(ulong *)((long)param_2 + lVar10);
        uVar11 = *(ulong *)((long)param_3 + lVar10);
      }
      lVar10 = *(long *)(param_4 + 0x58);
      if (lVar10 == 0) {
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
      }
      else {
        iVar6 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) *
                -0x55555555;
      }
      lVar18 = param_1[4];
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar18 + (long)iVar6 * 4));
      if (lVar10 == 0) {
        cVar2 = *(char *)(param_4 + 0x44);
        if (cVar2 == '\0') {
          plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        uVar4 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
        puVar14 = (undefined8 *)
                  ((long)param_3 +
                  (long)*(int *)(lVar18 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 |
                                          (ulong)uVar4 << 2)));
        if (uVar12 == uVar11) goto LAB_00be4d54;
        lVar10 = param_1[2];
      }
      else {
        puVar14 = (undefined8 *)
                  ((long)param_3 +
                  (long)*(int *)(lVar18 + (long)(*(int *)(param_1[1] + 0x2c) +
                                                (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 
                                                  0x10) + 0x40)) >> 4) * -0x55555555) * 4));
        if (uVar12 == uVar11) {
LAB_00be4d54:
          uVar7 = *puVar1;
          *puVar1 = *puVar14;
          *puVar14 = uVar7;
          return;
        }
        cVar2 = *(char *)(param_4 + 0x44);
        lVar10 = param_1[3];
      }
      if (cVar2 == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      uVar4 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
      psVar15 = *(string **)
                 (lVar10 + *(int *)(lVar18 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 |
                                             (ulong)uVar4 << 2)));
      std::string::string(local_d0,(string *)*puVar1);
      if ((string *)*puVar1 == psVar15) {
        FUN_00bf4408(puVar1,uVar12);
      }
      else {
        std::string::operator=((string *)*puVar1,(string *)*puVar14);
      }
      if ((string *)*puVar14 == psVar15) {
        FUN_00bf4408(puVar14,uVar11,local_d0);
      }
      else {
        std::string::operator=((string *)*puVar14,local_d0);
      }
      if (((byte)local_d0[0] & 1) == 0) {
        return;
      }
      if (local_c0 == 0) {
        return;
      }
      lVar10 = tpidr_el0;
      plVar16 = *(long **)(lVar10 + 0x30);
      if (plVar16 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar16 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,local_c0,0,8);
        return;
      }
      FUN_00c48fe8(plVar16,local_c0,0,8);
      return;
    case 10:
      goto switchD_00be3c68_caseD_a;
    default:
      local_f0 = 0x1fd;
      goto LAB_00be3ed4;
    }
  }
  switch(*(undefined4 *)(PTR_DAT_047dad58 + (ulong)*(uint *)(param_4 + 0x3c) * 4)) {
  case 1:
  case 8:
    lVar10 = *(long *)(param_4 + 0x58);
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar6 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar8 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar8 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    FUN_00be5160((long)param_2 + (long)*(int *)(param_1[4] + (long)iVar6 * 4),
                 (long)param_3 + (long)*(int *)(param_1[4] + (long)iVar8 * 4));
    return;
  case 2:
    lVar10 = *(long *)(param_4 + 0x58);
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar6 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar8 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar8 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    FUN_00be5434((long)param_2 + (long)*(int *)(param_1[4] + (long)iVar6 * 4),
                 (long)param_3 + (long)*(int *)(param_1[4] + (long)iVar8 * 4));
    return;
  case 3:
    lVar10 = *(long *)(param_4 + 0x58);
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar6 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar8 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar8 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    FUN_00be5708((long)param_2 + (long)*(int *)(param_1[4] + (long)iVar6 * 4),
                 (long)param_3 + (long)*(int *)(param_1[4] + (long)iVar8 * 4));
    return;
  case 4:
    lVar10 = *(long *)(param_4 + 0x58);
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar6 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar8 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar8 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    FUN_00be59dc((long)param_2 + (long)*(int *)(param_1[4] + (long)iVar6 * 4),
                 (long)param_3 + (long)*(int *)(param_1[4] + (long)iVar8 * 4));
    return;
  case 5:
    lVar10 = *(long *)(param_4 + 0x58);
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar6 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar8 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar8 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    FUN_00be5f84((long)param_2 + (long)*(int *)(param_1[4] + (long)iVar6 * 4),
                 (long)param_3 + (long)*(int *)(param_1[4] + (long)iVar8 * 4));
    return;
  case 6:
    lVar10 = *(long *)(param_4 + 0x58);
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar6 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar8 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar8 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    FUN_00be5cb0((long)param_2 + (long)*(int *)(param_1[4] + (long)iVar6 * 4),
                 (long)param_3 + (long)*(int *)(param_1[4] + (long)iVar8 * 4));
    return;
  case 7:
    lVar10 = *(long *)(param_4 + 0x58);
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar6 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar8 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar8 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    FUN_00be6258((long)param_2 + (long)*(int *)(param_1[4] + (long)iVar6 * 4),
                 (long)param_3 + (long)*(int *)(param_1[4] + (long)iVar8 * 4));
    return;
  case 9:
    lVar10 = *(long *)(param_4 + 0x58);
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar6 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    param_2 = (long *)((long)param_2 + (long)*(int *)(param_1[4] + (long)iVar6 * 4));
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar6 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    param_3 = (long *)((long)param_3 + (long)*(int *)(param_1[4] + (long)iVar6 * 4));
    if (*param_3 != *param_2) {
      FUN_00bf4dd8();
      return;
    }
    break;
  case 10:
    if (*(uint *)(param_4 + 0x3c) == 0xb) {
      lVar10 = *(long *)(param_4 + 0x58);
      if (*(char *)(*(long *)(*(long *)(param_4 + 0x68) + 0x20) + 0x53) != '\0') {
        if (lVar10 == 0) {
          if (*(char *)(param_4 + 0x44) == '\0') {
            plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
          }
          else if (*(long *)(param_4 + 0x60) == 0) {
            plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
          }
          else {
            plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
          }
          iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
        }
        else {
          iVar6 = *(int *)(param_1[1] + 0x2c) +
                  (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) *
                  -0x55555555;
        }
        param_2 = (long *)((long)param_2 + (long)*(int *)(param_1[4] + (long)iVar6 * 4));
        if ((int)param_2[6] == 0) {
          FUN_00bb1344(param_2 + 5);
          if ((int)param_2[6] == 0) {
            (**(code **)(*param_2 + 0x50))(param_2);
            *(undefined4 *)(param_2 + 6) = 2;
          }
          FUN_00bb14b8(param_2 + 5);
        }
        *(undefined4 *)(param_2 + 6) = 1;
        param_2 = (long *)param_2[2];
        lVar10 = *(long *)(param_4 + 0x58);
        if (lVar10 == 0) {
          if (*(char *)(param_4 + 0x44) == '\0') {
            plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
          }
          else if (*(long *)(param_4 + 0x60) == 0) {
            plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
          }
          else {
            plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
          }
          iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
        }
        else {
          iVar6 = *(int *)(param_1[1] + 0x2c) +
                  (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) *
                  -0x55555555;
        }
        param_3 = (long *)((long)param_3 + (long)*(int *)(param_1[4] + (long)iVar6 * 4));
        if ((int)param_3[6] == 0) {
          FUN_00bb1344(param_3 + 5);
          if ((int)param_3[6] == 0) {
            (**(code **)(*param_3 + 0x50))(param_3);
            *(undefined4 *)(param_3 + 6) = 2;
          }
          FUN_00bb14b8(param_3 + 5);
        }
        *(undefined4 *)(param_3 + 6) = 1;
        param_3 = (long *)param_3[2];
        if (*param_3 != *param_2) goto LAB_00be5070;
        lVar10 = param_2[2];
        param_2[2] = param_3[2];
        param_3[2] = lVar10;
        lVar10 = param_2[1];
        *(int *)(param_2 + 1) = (int)param_3[1];
        *(int *)(param_3 + 1) = (int)lVar10;
        uVar9 = *(undefined4 *)((long)param_2 + 0xc);
        *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)((long)param_3 + 0xc);
        goto LAB_00be4ee4;
      }
    }
    else {
      lVar10 = *(long *)(param_4 + 0x58);
    }
    if (lVar10 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
      lVar10 = 0;
      bVar13 = true;
    }
    else {
      bVar13 = false;
      iVar6 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    param_2 = (long *)((long)param_2 + (long)*(int *)(param_1[4] + (long)iVar6 * 4));
    if (bVar13) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
    }
    else {
      iVar6 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555
      ;
    }
    param_3 = (long *)((long)param_3 + (long)*(int *)(param_1[4] + (long)iVar6 * 4));
    if (*param_3 != *param_2) {
LAB_00be5070:
      FUN_00bf5330(param_2);
      return;
    }
    break;
  default:
    local_f0 = 0x1b8;
LAB_00be3ed4:
    local_100[0] = 3;
    local_f8 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/generated_message_reflection.cc"
    ;
    local_e8[0x10] = '\0';
    local_e8[0x11] = '\0';
    local_e8[0x12] = '\0';
    local_e8[0x13] = '\0';
    local_e8[0x14] = '\0';
    local_e8[0x15] = '\0';
    local_e8[0x16] = '\0';
    local_e8[0x17] = '\0';
    local_e8[0] = '\0';
    local_e8[1] = '\0';
    local_e8[2] = '\0';
    local_e8[3] = '\0';
    local_e8[4] = '\0';
    local_e8[5] = '\0';
    local_e8[6] = '\0';
    local_e8[7] = '\0';
    local_e8[8] = '\0';
    local_e8[9] = '\0';
    local_e8[10] = '\0';
    local_e8[0xb] = '\0';
    local_e8[0xc] = '\0';
    local_e8[0xd] = '\0';
    local_e8[0xe] = '\0';
    local_e8[0xf] = '\0';
    std::string::append(local_e8);
    snprintf((char *)local_d0,0x80,"%d",
             (ulong)*(uint *)(puVar5 + (ulong)*(uint *)(param_4 + 0x3c) * 4));
    local_51 = 0;
    std::string::append(local_e8);
    FUN_00bb0e90(local_100);
    FUN_00bb0d74(local_100);
    return;
  }
  lVar10 = param_2[2];
  param_2[2] = param_3[2];
  param_3[2] = lVar10;
  lVar10 = param_2[1];
  *(int *)(param_2 + 1) = (int)param_3[1];
  *(int *)(param_3 + 1) = (int)lVar10;
  uVar9 = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)((long)param_3 + 0xc);
LAB_00be4ee4:
  *(undefined4 *)((long)param_3 + 0xc) = uVar9;
  return;
switchD_00be3c68_caseD_a:
  lVar10 = (long)(int)param_1[7];
  if ((int)param_1[7] == -1) {
    uVar11 = 0;
    uVar12 = 0;
  }
  else if ((int)param_1[6] == -1) {
    uVar11 = *(ulong *)((long)param_2 + lVar10) & 0xfffffffffffffffe;
    if ((*(ulong *)((long)param_2 + lVar10) & 1) != 0) {
      uVar11 = *(ulong *)(uVar11 + 8);
    }
    uVar12 = *(ulong *)((long)param_3 + lVar10) & 0xfffffffffffffffe;
    if ((*(ulong *)((long)param_3 + lVar10) & 1) != 0) {
      uVar12 = *(ulong *)(uVar12 + 8);
    }
  }
  else {
    uVar11 = *(ulong *)((long)param_2 + lVar10);
    uVar12 = *(ulong *)((long)param_3 + lVar10);
  }
  lVar10 = *(long *)(param_4 + 0x58);
  if (lVar10 == 0) {
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
  }
  else {
    iVar6 = *(int *)(param_1[1] + 0x2c) +
            (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555;
  }
  lVar18 = (long)*(int *)(param_1[4] + (long)iVar6 * 4);
  if (lVar10 == 0) {
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar16 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar16 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar16 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    iVar6 = (int)((ulong)(param_4 - *plVar16) >> 4) * 0x38e38e39;
  }
  else {
    iVar6 = *(int *)(param_1[1] + 0x2c) +
            (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4) * -0x55555555;
  }
  lVar10 = (long)*(int *)(param_1[4] + (long)iVar6 * 4);
  if (uVar11 == uVar12) {
    uVar7 = *(undefined8 *)((long)param_2 + lVar18);
    *(undefined8 *)((long)param_2 + lVar18) = *(undefined8 *)((long)param_3 + lVar10);
    *(undefined8 *)((long)param_3 + lVar10) = uVar7;
    return;
  }
  plVar16 = *(long **)((long)param_2 + lVar18);
  plVar17 = *(long **)((long)param_3 + lVar10);
  if (plVar16 == (long *)0x0) {
    if (plVar17 == (long *)0x0) {
      return;
    }
    uVar7 = (**(code **)(*param_2 + 0x28))(param_2);
    plVar16 = (long *)(**(code **)(*plVar17 + 0x20))(plVar17,uVar7);
    *(long **)((long)param_2 + lVar18) = plVar16;
    (**(code **)(*plVar16 + 0x88))(plVar16,*(undefined8 *)((long)param_3 + lVar10));
    lVar10 = *param_1;
  }
  else {
    if (plVar17 != (long *)0x0) {
      param_1 = (long *)(**(code **)(*plVar16 + 0xb0))(plVar16);
      param_4 = *(long *)((long)param_3 + lVar10);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x68);
      param_3 = *(long **)((long)param_2 + lVar18);
      goto LAB_00be46b8;
    }
    uVar7 = (**(code **)(*param_3 + 0x28))(param_3);
    plVar16 = (long *)(**(code **)(*plVar16 + 0x20))(plVar16,uVar7);
    *(long **)((long)param_3 + lVar10) = plVar16;
    (**(code **)(*plVar16 + 0x88))(plVar16,*(undefined8 *)((long)param_2 + lVar18));
    lVar10 = *param_1;
    param_3 = param_2;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x38);
LAB_00be46b8:
                    /* WARNING: Could not recover jumptable at 0x00be46d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4);
  return;
}


