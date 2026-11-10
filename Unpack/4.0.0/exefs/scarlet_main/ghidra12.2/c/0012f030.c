/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012f030; name: FUN_0012f030
 */


void FUN_0012f030(long param_1)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  long lVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  long *plVar22;
  char *pcVar23;
  long lVar24;
  long lVar25;
  char *unaff_x25;
  int iVar26;
  ulong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  byte local_a0;
  char local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  ulong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  byte local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  iVar10 = *(int *)(param_1 + 4);
  FUN_0013b000(*(undefined8 *)(param_1 + 0x38));
  switch(*(int *)(param_1 + 0x10)) {
  case 0x101:
    uVar5 = *(undefined4 *)(param_1 + 4);
    FUN_00138a10(param_1);
    uVar12 = FUN_0013be00(*(undefined8 *)(param_1 + 0x38),"break",5);
    uVar8 = FUN_00133380(*(undefined8 *)(param_1 + 0x30));
    lVar25 = *(long *)(param_1 + 0x58);
    iVar10 = *(int *)(lVar25 + 0x18);
    lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar25 + 0x10),iVar10,
                          lVar25 + 0x1c,0x18,0x7fff,"labels/gotos");
    lVar18 = (long)iVar10 * 0x18;
    *(long *)(lVar25 + 0x10) = lVar14;
    *(undefined8 *)(lVar14 + lVar18) = uVar12;
    *(undefined4 *)(*(long *)(lVar25 + 0x10) + lVar18 + 0xc) = uVar5;
    *(undefined1 *)(*(long *)(lVar25 + 0x10) + lVar18 + 0x10) =
         *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x42);
    *(undefined1 *)(*(long *)(lVar25 + 0x10) + lVar18 + 0x11) = 0;
    *(undefined4 *)(*(long *)(lVar25 + 0x10) + lVar18 + 8) = uVar8;
    *(int *)(lVar25 + 0x18) = iVar10 + 1;
    goto LAB_001307c8;
  case 0x102:
    FUN_00138a10(param_1);
    lVar18 = *(long *)(param_1 + 0x30);
    lVar14 = *(long *)(*(long *)(lVar18 + 0x10) + 0x58);
    local_78 = CONCAT44(*(undefined4 *)(lVar14 + 0x18),*(undefined4 *)(lVar14 + 0x28));
    local_80 = *(ulong *)(lVar18 + 0x18);
    if (local_80 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)(local_80 + 0x13) != '\0';
    }
    local_70 = CONCAT44(local_70._4_4_,CONCAT13(bVar4,(uint3)*(byte *)(lVar18 + 0x42)));
    *(ulong **)(lVar18 + 0x18) = &local_80;
    do {
      iVar26 = *(int *)(param_1 + 0x10);
      uVar16 = iVar26 - 0x103;
      if (uVar16 < 0x1e && (1 << (ulong)(uVar16 & 0x1f) & 0x20020007U) != 0) break;
      FUN_0012f030(param_1);
    } while (iVar26 != 0x111);
    FUN_00130d70(lVar18);
    if (*(int *)(param_1 + 0x10) == 0x105) goto LAB_001301d8;
LAB_0013099c:
    if (*(int *)(param_1 + 4) != iVar10) {
      uVar21 = *(undefined8 *)(param_1 + 0x38);
      uVar12 = FUN_00138700(param_1,0x105);
      uVar11 = 0x102;
      goto LAB_00130a50;
    }
    break;
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x10b:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x112:
  case 0x113:
  case 0x114:
  case 0x116:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
switchD_0012f084_caseD_103:
    plVar19 = *(long **)(param_1 + 0x30);
    FUN_00131b80(param_1,&local_78);
    if ((*(int *)(param_1 + 0x10) == 0x3d) || (*(int *)(param_1 + 0x10) == 0x2c)) {
      local_80 = 0;
      FUN_00132ca0(param_1,&local_80,1);
    }
    else {
      if ((int)local_78 != 0x12) {
                    /* WARNING: Subroutine does not return */
        FUN_00138770(param_1,"syntax error");
      }
      *(undefined1 *)(*(long *)(*plVar19 + 0x40) + (long)(int)local_70 * 4 + 3) = 1;
    }
    goto LAB_001307c8;
  case 0x107:
    lVar18 = *(long *)(param_1 + 0x30);
    local_86 = 1;
    local_88 = *(byte *)(lVar18 + 0x42);
    lVar14 = *(long *)(*(long *)(lVar18 + 0x10) + 0x58);
    local_90 = *(undefined4 *)(lVar14 + 0x28);
    uStack_8c = *(undefined4 *)(lVar14 + 0x18);
    local_87 = 0;
    local_98 = *(ulong *)(lVar18 + 0x18);
    if (local_98 == 0) {
      local_85 = false;
    }
    else {
      local_85 = *(char *)(local_98 + 0x13) != '\0';
    }
    *(ulong **)(lVar18 + 0x18) = &local_98;
    FUN_00138a10(param_1);
    if (*(int *)(param_1 + 0x10) != 0x123) goto LAB_0012f918;
    unaff_x25 = *(char **)(param_1 + 0x18);
    FUN_00138a10(param_1);
    iVar26 = *(int *)(param_1 + 0x10);
    if ((iVar26 != 0x2c) && (iVar26 != 0x10b)) {
      if (iVar26 != 0x3d) goto LAB_00130974;
      lVar25 = *(long *)(param_1 + 0x30);
      uVar13 = *(undefined1 *)(lVar25 + 0x44);
      uVar12 = FUN_001388e0(param_1,"(for state)",0xb);
      plVar19 = *(long **)(param_1 + 0x58);
      lVar14 = *(long *)(param_1 + 0x30);
      iVar26 = (int)plVar19[1] + 1;
      if (iVar26 - *(int *)(lVar14 + 0x38) < 0xc9) {
        lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar19,iVar26,(long)plVar19 + 0xc,
                              0x18,0xffff,"local variables");
        lVar24 = lVar14 + (long)(int)plVar19[1] * 0x18;
        *plVar19 = lVar14;
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        *(undefined1 *)(lVar24 + 9) = 0;
        *(undefined8 *)(lVar24 + 0x10) = uVar12;
        uVar12 = FUN_001388e0(param_1,"(for state)",0xb);
        plVar19 = *(long **)(param_1 + 0x58);
        lVar14 = *(long *)(param_1 + 0x30);
        iVar26 = (int)plVar19[1] + 1;
        if (iVar26 - *(int *)(lVar14 + 0x38) < 0xc9) {
          lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar19,iVar26,(long)plVar19 + 0xc,
                                0x18,0xffff,"local variables");
          lVar24 = lVar14 + (long)(int)plVar19[1] * 0x18;
          *plVar19 = lVar14;
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          *(undefined1 *)(lVar24 + 9) = 0;
          *(undefined8 *)(lVar24 + 0x10) = uVar12;
          uVar12 = FUN_001388e0(param_1,"(for state)",0xb);
          plVar19 = *(long **)(param_1 + 0x58);
          lVar14 = *(long *)(param_1 + 0x30);
          iVar26 = (int)plVar19[1] + 1;
          if (iVar26 - *(int *)(lVar14 + 0x38) < 0xc9) {
            lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar19,iVar26,
                                  (long)plVar19 + 0xc,0x18,0xffff,"local variables");
            lVar24 = lVar14 + (long)(int)plVar19[1] * 0x18;
            *plVar19 = lVar14;
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            *(undefined1 *)(lVar24 + 9) = 0;
            *(undefined8 *)(lVar24 + 0x10) = uVar12;
            plVar19 = *(long **)(param_1 + 0x58);
            lVar14 = *(long *)(param_1 + 0x30);
            iVar26 = (int)plVar19[1] + 1;
            if (iVar26 - *(int *)(lVar14 + 0x38) < 0xc9) {
              lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar19,iVar26,
                                    (long)plVar19 + 0xc,0x18,0xffff,"local variables");
              lVar24 = lVar14 + (long)(int)plVar19[1] * 0x18;
              *plVar19 = lVar14;
              *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
              *(undefined1 *)(lVar24 + 9) = 0;
              *(char **)(lVar24 + 0x10) = unaff_x25;
              if (*(int *)(param_1 + 0x10) != 0x3d) {
                FUN_001329f0(param_1,0x3d);
LAB_00130a9c:
                FUN_001329f0(param_1,0x2c);
                    /* WARNING: Does not return */
                pcVar3 = (code *)UndefinedInstructionException(0,0x130aa8);
                (*pcVar3)();
              }
              FUN_00138a10(param_1);
              FUN_00131050(param_1,&local_80,0);
              FUN_00133e30(*(undefined8 *)(param_1 + 0x30),&local_80);
              if (*(int *)(param_1 + 0x10) != 0x2c) goto LAB_00130a9c;
              FUN_00138a10(param_1);
              FUN_00131050(param_1,&local_80,0);
              FUN_00133e30(*(undefined8 *)(param_1 + 0x30),&local_80);
              if (*(int *)(param_1 + 0x10) == 0x2c) {
                FUN_00138a10(param_1);
                FUN_00131050(param_1,&local_80,0);
                FUN_00133e30(*(undefined8 *)(param_1 + 0x30),&local_80);
              }
              else {
                FUN_00133880(lVar25,*(undefined1 *)(lVar25 + 0x44),1);
                FUN_00133830(lVar25,1);
              }
              FUN_00131f40(param_1,3);
              FUN_00132a30(param_1,uVar13,iVar10,1,0);
              if (*(int *)(param_1 + 0x10) != 0x105) goto LAB_0013065c;
LAB_00130388:
              FUN_00138a10(param_1);
              goto LAB_001303d8;
            }
          }
        }
      }
LAB_0013091c:
      FUN_0012efb0(lVar14,200,"local variables");
LAB_0013092c:
      FUN_001329f0(param_1,0x3e);
LAB_00130938:
      uVar12 = FUN_0012e860(*(undefined8 *)(param_1 + 0x38),"unknown attribute \'%s\'",unaff_x25);
LAB_0013094c:
      FUN_00133030(param_1,uVar12);
LAB_00130958:
      FUN_00133030(param_1,"multiple to-be-closed variables in local list");
      goto LAB_00130968;
    }
    lVar25 = *(long *)(param_1 + 0x30);
    uVar13 = *(undefined1 *)(lVar25 + 0x44);
    uVar12 = FUN_001388e0(param_1,"(for state)",0xb);
    plVar19 = *(long **)(param_1 + 0x58);
    lVar14 = *(long *)(param_1 + 0x30);
    iVar26 = (int)plVar19[1] + 1;
    if (200 < iVar26 - *(int *)(lVar14 + 0x38)) goto LAB_0013091c;
    lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar19,iVar26,(long)plVar19 + 0xc,0x18,
                          0xffff,"local variables");
    lVar24 = lVar14 + (long)(int)plVar19[1] * 0x18;
    *plVar19 = lVar14;
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    *(undefined1 *)(lVar24 + 9) = 0;
    *(undefined8 *)(lVar24 + 0x10) = uVar12;
    uVar12 = FUN_001388e0(param_1,"(for state)",0xb);
    plVar19 = *(long **)(param_1 + 0x58);
    lVar14 = *(long *)(param_1 + 0x30);
    iVar26 = (int)plVar19[1] + 1;
    if (200 < iVar26 - *(int *)(lVar14 + 0x38)) goto LAB_0013091c;
    lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar19,iVar26,(long)plVar19 + 0xc,0x18,
                          0xffff,"local variables");
    lVar24 = lVar14 + (long)(int)plVar19[1] * 0x18;
    *plVar19 = lVar14;
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    *(undefined1 *)(lVar24 + 9) = 0;
    *(undefined8 *)(lVar24 + 0x10) = uVar12;
    uVar12 = FUN_001388e0(param_1,"(for state)",0xb);
    plVar19 = *(long **)(param_1 + 0x58);
    lVar14 = *(long *)(param_1 + 0x30);
    iVar26 = (int)plVar19[1] + 1;
    if (200 < iVar26 - *(int *)(lVar14 + 0x38)) goto LAB_0013091c;
    lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar19,iVar26,(long)plVar19 + 0xc,0x18,
                          0xffff,"local variables");
    lVar24 = lVar14 + (long)(int)plVar19[1] * 0x18;
    *plVar19 = lVar14;
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    *(undefined1 *)(lVar24 + 9) = 0;
    *(undefined8 *)(lVar24 + 0x10) = uVar12;
    uVar12 = FUN_001388e0(param_1,"(for state)",0xb);
    plVar19 = *(long **)(param_1 + 0x58);
    lVar14 = *(long *)(param_1 + 0x30);
    iVar26 = (int)plVar19[1] + 1;
    if (200 < iVar26 - *(int *)(lVar14 + 0x38)) goto LAB_0013091c;
    lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar19,iVar26,(long)plVar19 + 0xc,0x18,
                          0xffff,"local variables");
    lVar24 = lVar14 + (long)(int)plVar19[1] * 0x18;
    *plVar19 = lVar14;
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    *(undefined1 *)(lVar24 + 9) = 0;
    *(undefined8 *)(lVar24 + 0x10) = uVar12;
    plVar19 = *(long **)(param_1 + 0x58);
    lVar14 = *(long *)(param_1 + 0x30);
    iVar26 = (int)plVar19[1] + 1;
    if (200 < iVar26 - *(int *)(lVar14 + 0x38)) goto LAB_0013091c;
    lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar19,iVar26,(long)plVar19 + 0xc,0x18,
                          0xffff,"local variables");
    lVar24 = lVar14 + (long)(int)plVar19[1] * 0x18;
    *plVar19 = lVar14;
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    *(undefined1 *)(lVar24 + 9) = 0;
    *(char **)(lVar24 + 0x10) = unaff_x25;
    iVar9 = *(int *)(param_1 + 0x10);
    iVar26 = 1;
    if (iVar9 == 0x2c) {
      unaff_x25 = "local variables";
      do {
        FUN_00138a10(param_1);
        if (*(int *)(param_1 + 0x10) != 0x123) goto LAB_0012f918;
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        FUN_00138a10(param_1);
        plVar19 = *(long **)(param_1 + 0x58);
        lVar14 = *(long *)(param_1 + 0x30);
        iVar9 = (int)plVar19[1] + 1;
        if (200 < iVar9 - *(int *)(lVar14 + 0x38)) goto LAB_0013091c;
        lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar19,iVar9,(long)plVar19 + 0xc,
                              0x18,0xffff,"local variables");
        lVar24 = lVar14 + (long)(int)plVar19[1] * 0x18;
        *plVar19 = lVar14;
        iVar26 = iVar26 + 1;
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        *(undefined1 *)(lVar24 + 9) = 0;
        *(undefined8 *)(lVar24 + 0x10) = uVar12;
        iVar9 = *(int *)(param_1 + 0x10);
      } while (iVar9 == 0x2c);
    }
    if (iVar9 == 0x10b) {
      FUN_00138a10(param_1);
      uVar5 = *(undefined4 *)(param_1 + 4);
      FUN_00131050(param_1,&local_80,0);
      uVar16 = 1;
      iVar9 = *(int *)(param_1 + 0x10);
      while (iVar9 == 0x2c) {
        FUN_00138a10(param_1);
        FUN_00133e30(*(undefined8 *)(param_1 + 0x30),&local_80);
        FUN_00131050(param_1,&local_80,0);
        uVar16 = uVar16 + 1;
        iVar9 = *(int *)(param_1 + 0x10);
      }
      iVar9 = 4 - uVar16;
      lVar14 = *(long *)(param_1 + 0x30);
      if ((uint)local_80 - 0x12 < 2) {
        iVar6 = 0;
        if (uVar16 < 5) {
          iVar6 = 5 - uVar16;
        }
        FUN_00133a60(lVar14,&local_80,iVar6);
        if (uVar16 < 4) goto LAB_0013030c;
LAB_0013031c:
        *(char *)(lVar14 + 0x44) = *(char *)(lVar14 + 0x44) + (char)iVar9;
      }
      else {
        if ((uint)local_80 != 0) {
          FUN_00133e30(lVar14,&local_80);
        }
        if (3 < uVar16) goto LAB_0013031c;
        FUN_00133110(lVar14,*(undefined1 *)(lVar14 + 0x44),iVar9);
LAB_0013030c:
        FUN_00133830(lVar14,iVar9);
      }
      FUN_00131f40(param_1,4);
      plVar19 = (long *)(lVar25 + 0x18);
      do {
        plVar19 = (long *)*plVar19;
      } while (*(byte *)(lVar25 + 0x42) < *(byte *)(plVar19 + 2));
      *(undefined1 *)((long)plVar19 + 0x11) = 1;
      *(undefined1 *)(lVar25 + 0x46) = 1;
      FUN_001337e0(lVar25,3);
      FUN_00132a30(param_1,uVar13,uVar5,iVar26,1);
      if (*(int *)(param_1 + 0x10) == 0x105) goto LAB_00130388;
LAB_0013065c:
      if (*(int *)(param_1 + 4) != iVar10) {
        uVar21 = *(undefined8 *)(param_1 + 0x38);
        uVar12 = FUN_00138700(param_1,0x105);
        uVar11 = 0x107;
        goto LAB_00130a50;
      }
      break;
    }
    goto LAB_00130a10;
  case 0x108:
    FUN_00138a10(param_1);
    FUN_00132300(param_1,&local_98);
    iVar26 = *(int *)(param_1 + 0x10);
    while (iVar26 == 0x2e) {
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      FUN_001346c0(uVar12,&local_98);
      FUN_00138a10(param_1);
      if (*(int *)(param_1 + 0x10) != 0x123) goto LAB_0012f918;
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      FUN_00138a10(param_1);
      local_80 = CONCAT44(local_80._4_4_,7);
      local_70 = 0xffffffffffffffff;
      local_78 = uVar11;
      FUN_00135110(uVar12,&local_98,&local_80);
      iVar26 = *(int *)(param_1 + 0x10);
    }
    if (iVar26 != 0x3a) goto LAB_0012f924;
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    FUN_001346c0(uVar12,&local_98);
    FUN_00138a10(param_1);
    if (*(int *)(param_1 + 0x10) != 0x123) goto LAB_0012f918;
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    FUN_00138a10(param_1);
    local_80 = CONCAT44(local_80._4_4_,7);
    local_70 = 0xffffffffffffffff;
    local_78 = uVar11;
    FUN_00135110(uVar12,&local_98,&local_80);
    uVar12 = 1;
    goto LAB_0012f928;
  case 0x109:
    FUN_00138a10(param_1);
    if (*(int *)(param_1 + 0x10) == 0x123) {
      lVar14 = *(long *)(param_1 + 0x30);
      uVar5 = *(undefined4 *)(param_1 + 4);
      lVar18 = *(long *)(param_1 + 0x18);
      FUN_00138a10(param_1);
      iVar10 = *(int *)(*(long *)(param_1 + 0x30) + 0x3c);
      iVar26 = *(int *)(*(long *)(param_1 + 0x58) + 0x28);
      if (iVar10 < iVar26) {
        lVar25 = (long)iVar26 - (long)iVar10;
        puVar20 = (undefined4 *)
                  (*(long *)(*(long *)(param_1 + 0x58) + 0x20) + (long)iVar10 * 0x18 + 8);
        do {
          if (*(long *)(puVar20 + -2) == lVar18) {
            uVar16 = (uint)*(byte *)(puVar20 + 2);
            goto LAB_00130468;
          }
          puVar20 = puVar20 + 6;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      uVar8 = FUN_00133380(lVar14);
      lVar24 = *(long *)(param_1 + 0x58);
      iVar10 = *(int *)(lVar24 + 0x18);
      lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar24 + 0x10),iVar10,
                            lVar24 + 0x1c,0x18,0x7fff,"labels/gotos");
      lVar25 = (long)iVar10 * 0x18;
      *(long *)(lVar24 + 0x10) = lVar14;
      *(long *)(lVar14 + lVar25) = lVar18;
      *(undefined4 *)(*(long *)(lVar24 + 0x10) + lVar25 + 0xc) = uVar5;
      *(undefined1 *)(*(long *)(lVar24 + 0x10) + lVar25 + 0x10) =
           *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x42);
      *(undefined1 *)(*(long *)(lVar24 + 0x10) + lVar25 + 0x11) = 0;
      *(undefined4 *)(*(long *)(lVar24 + 0x10) + lVar25 + 8) = uVar8;
      *(int *)(lVar24 + 0x18) = iVar10 + 1;
      goto LAB_001307c8;
    }
    goto LAB_0012f918;
  case 0x10a:
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    local_98 = CONCAT44(local_98._4_4_,0xffffffff);
    do {
      FUN_00130ab0(param_1,&local_98);
      iVar26 = *(int *)(param_1 + 0x10);
    } while (iVar26 == 0x104);
    if (iVar26 == 0x103) {
      FUN_00138a10(param_1);
      lVar18 = *(long *)(param_1 + 0x30);
      lVar14 = *(long *)(*(long *)(lVar18 + 0x10) + 0x58);
      local_78 = CONCAT44(*(undefined4 *)(lVar14 + 0x18),*(undefined4 *)(lVar14 + 0x28));
      local_80 = *(ulong *)(lVar18 + 0x18);
      if (local_80 == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = *(char *)(local_80 + 0x13) != '\0';
      }
      local_70 = CONCAT44(local_70._4_4_,CONCAT13(bVar4,(uint3)*(byte *)(lVar18 + 0x42)));
      *(ulong **)(lVar18 + 0x18) = &local_80;
      do {
        iVar26 = *(int *)(param_1 + 0x10);
        uVar16 = iVar26 - 0x103;
        if (uVar16 < 0x1e && (1 << (ulong)(uVar16 & 0x1f) & 0x20020007U) != 0) break;
        FUN_0012f030(param_1);
      } while (iVar26 != 0x111);
      FUN_00130d70(lVar18);
      iVar26 = *(int *)(param_1 + 0x10);
    }
    if (iVar26 == 0x105) {
      FUN_00138a10(param_1);
      FUN_001335c0(uVar12,local_98 & 0xffffffff);
      goto LAB_001307c8;
    }
    if (*(int *)(param_1 + 4) != iVar10) {
      uVar21 = *(undefined8 *)(param_1 + 0x38);
      uVar12 = FUN_00138700(param_1,0x105);
      uVar11 = 0x10a;
      goto LAB_00130a50;
    }
    break;
  case 0x10c:
    FUN_00138a10(param_1);
    if (*(int *)(param_1 + 0x10) == 0x108) {
      FUN_00138a10(param_1);
      if (*(int *)(param_1 + 0x10) == 0x123) {
        plVar19 = *(long **)(param_1 + 0x30);
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        bVar2 = *(byte *)((long)plVar19 + 0x42);
        FUN_00138a10(param_1);
        plVar22 = *(long **)(param_1 + 0x58);
        lVar14 = *(long *)(param_1 + 0x30);
        iVar10 = (int)plVar22[1] + 1;
        if (iVar10 - *(int *)(lVar14 + 0x38) < 0xc9) {
          lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar22,iVar10,(long)plVar22 + 0xc,
                                0x18,0xffff,"local variables");
          lVar18 = lVar14 + (long)(int)plVar22[1] * 0x18;
          *plVar22 = lVar14;
          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
          *(undefined1 *)(lVar18 + 9) = 0;
          *(undefined8 *)(lVar18 + 0x10) = uVar12;
          FUN_00131f40(param_1,1);
          FUN_001316a0(param_1,&local_80,0,*(undefined4 *)(param_1 + 4));
          *(int *)(*(long *)(*plVar19 + 0x68) +
                   (long)*(short *)(**(long **)(plVar19[2] + 0x58) +
                                    (long)(int)((int)plVar19[7] + (uint)bVar2) * 0x18 + 0xc) * 0x10
                  + 8) = (int)plVar19[4];
          goto LAB_001307c8;
        }
        goto LAB_0013091c;
      }
    }
    else if (*(int *)(param_1 + 0x10) == 0x123) {
      lVar14 = *(long *)(param_1 + 0x30);
      iVar26 = -1;
      iVar10 = 1;
LAB_0012f7bc:
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      FUN_00138a10(param_1);
      plVar19 = *(long **)(param_1 + 0x58);
      unaff_x25 = *(char **)(param_1 + 0x30);
      iVar9 = (int)plVar19[1] + 1;
      if (200 < iVar9 - *(int *)(unaff_x25 + 0x38)) {
        lVar14 = FUN_0012efb0(unaff_x25,200,"local variables");
        goto LAB_0013091c;
      }
      lVar18 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar19,iVar9,(long)plVar19 + 0xc,0x18,
                            0xffff,"local variables");
      lVar25 = lVar18 + (long)(int)plVar19[1] * 0x18;
      *plVar19 = lVar18;
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      *(undefined1 *)(lVar25 + 9) = 0;
      *(undefined8 *)(lVar25 + 0x10) = uVar12;
      iVar9 = (int)plVar19[1] + ~*(uint *)(unaff_x25 + 0x38);
      uVar13 = 0;
      if (*(int *)(param_1 + 0x10) == 0x3c) {
        FUN_00138a10(param_1);
        if (*(int *)(param_1 + 0x10) != 0x123) goto LAB_0012f918;
        lVar18 = *(long *)(param_1 + 0x18);
        FUN_00138a10(param_1);
        if (*(int *)(param_1 + 0x10) != 0x3e) goto LAB_0013092c;
        unaff_x25 = (char *)(lVar18 + 0x18);
        FUN_00138a10(param_1);
        iVar6 = strcmp(unaff_x25,"const");
        if (iVar6 == 0) {
          uVar13 = 1;
          goto LAB_0012f8d8;
        }
        iVar6 = strcmp(unaff_x25,"close");
        if (iVar6 != 0) goto LAB_00130938;
        *(undefined1 *)
         (**(long **)(*(long *)(lVar14 + 0x10) + 0x58) +
          (long)(*(int *)(lVar14 + 0x38) + iVar9) * 0x18 + 9) = 2;
        if (iVar26 != -1) goto LAB_00130958;
        iVar26 = iVar10 + (uint)*(byte *)(lVar14 + 0x42) + -1;
      }
      else {
LAB_0012f8d8:
        *(undefined1 *)
         (**(long **)(*(long *)(lVar14 + 0x10) + 0x58) +
          (long)(*(int *)(lVar14 + 0x38) + iVar9) * 0x18 + 9) = uVar13;
      }
      if (*(int *)(param_1 + 0x10) == 0x2c) goto code_r0x0012f900;
      if (*(int *)(param_1 + 0x10) == 0x3d) {
        FUN_00138a10(param_1);
        FUN_00131050(param_1,&local_80,0);
        iVar6 = 1;
        iVar1 = *(int *)(param_1 + 0x10);
        while (iVar1 == 0x2c) {
          FUN_00138a10(param_1);
          FUN_00133e30(*(undefined8 *)(param_1 + 0x30),&local_80);
          FUN_00131050(param_1,&local_80,0);
          iVar6 = iVar6 + 1;
          iVar1 = *(int *)(param_1 + 0x10);
        }
      }
      else {
        iVar6 = 0;
        local_80 = local_80 & 0xffffffff00000000;
      }
      iVar6 = iVar10 - iVar6;
      if (iVar6 == 0) {
        iVar9 = *(int *)(lVar14 + 0x38) + iVar9;
        lVar18 = **(long **)(*(long *)(lVar14 + 0x10) + 0x58);
        pcVar23 = (char *)(lVar18 + (long)iVar9 * 0x18 + 9);
        if ((*pcVar23 != '\x01') ||
           (iVar9 = FUN_00133040(lVar14,&local_80,lVar18 + (long)iVar9 * 0x18), iVar9 == 0))
        goto LAB_0013052c;
        *pcVar23 = '\x03';
        FUN_00131f40(param_1,iVar10 + -1);
        *(char *)(lVar14 + 0x42) = *(char *)(lVar14 + 0x42) + '\x01';
      }
      else {
LAB_0013052c:
        lVar14 = *(long *)(param_1 + 0x30);
        if ((uint)local_80 - 0x12 < 2) {
          iVar9 = 0;
          if (-1 < iVar6) {
            iVar9 = iVar6 + 1;
          }
          FUN_00133a60(lVar14,&local_80,iVar9);
          if (0 < iVar6) goto LAB_00130588;
LAB_00130684:
          *(char *)(lVar14 + 0x44) = *(char *)(lVar14 + 0x44) + (char)iVar6;
        }
        else {
          if ((uint)local_80 != 0) {
            FUN_00133e30(lVar14,&local_80);
          }
          if (iVar6 < 1) goto LAB_00130684;
          FUN_00133110(lVar14,*(undefined1 *)(lVar14 + 0x44),iVar6);
LAB_00130588:
          FUN_00133830(lVar14,iVar6);
        }
        FUN_00131f40(param_1,iVar10);
      }
      if (iVar26 == -1) goto LAB_001307c8;
      lVar14 = *(long *)(param_1 + 0x30);
      plVar19 = (long *)(lVar14 + 0x18);
      do {
        plVar19 = (long *)*plVar19;
      } while (iVar26 + 1 < (int)(uint)*(byte *)(plVar19 + 2));
      *(undefined1 *)((long)plVar19 + 0x11) = 1;
      *(undefined1 *)(lVar14 + 0x46) = 1;
      *(undefined1 *)(*(long *)(lVar14 + 0x18) + 0x13) = 1;
      do {
        if (iVar26 < 1) {
          iVar10 = 0;
          goto LAB_00130728;
        }
        iVar10 = iVar26 + *(int *)(lVar14 + 0x38) + -1;
        lVar18 = **(long **)(*(long *)(lVar14 + 0x10) + 0x58);
        iVar26 = iVar26 + -1;
      } while (*(char *)(lVar18 + (long)iVar10 * 0x18 + 9) == '\x03');
      iVar10 = *(byte *)(lVar18 + (long)iVar10 * 0x18 + 10) + 1;
LAB_00130728:
      FUN_00133250(lVar14,0x37,iVar10,0,0,0);
      goto LAB_001307c8;
    }
    goto LAB_0012f918;
  case 0x110:
    lVar18 = *(long *)(param_1 + 0x30);
    uVar5 = FUN_001334a0(lVar18);
    local_86 = 1;
    local_a0 = *(byte *)(lVar18 + 0x42);
    lVar14 = *(long *)(*(long *)(lVar18 + 0x10) + 0x58);
    local_90 = *(undefined4 *)(lVar14 + 0x28);
    uStack_8c = *(undefined4 *)(lVar14 + 0x18);
    local_87 = 0;
    local_98 = *(ulong *)(lVar18 + 0x18);
    if (local_98 == 0) {
      local_9d = false;
    }
    else {
      local_9d = *(char *)(local_98 + 0x13) != '\0';
    }
    local_b0 = &local_98;
    *(ulong **)(lVar18 + 0x18) = local_b0;
    local_9e = 0;
    lVar14 = *(long *)(*(long *)(lVar18 + 0x10) + 0x58);
    local_a8 = *(undefined4 *)(lVar14 + 0x28);
    uStack_a4 = *(undefined4 *)(lVar14 + 0x18);
    local_9f = '\0';
    *(ulong ***)(lVar18 + 0x18) = &local_b0;
    local_88 = local_a0;
    local_85 = local_9d;
    FUN_00138a10(param_1);
    do {
      iVar26 = *(int *)(param_1 + 0x10);
      if (iVar26 - 0x103U < 0x1e && (1 << (ulong)(iVar26 - 0x103U & 0x1f) & 0x20020007U) != 0)
      goto LAB_001300b8;
      FUN_0012f030(param_1);
    } while (iVar26 != 0x111);
    iVar26 = *(int *)(param_1 + 0x10);
LAB_001300b8:
    if (iVar26 == 0x114) {
      FUN_00138a10(param_1);
      FUN_00131050(param_1,&local_80,0);
      if ((uint)local_80 == 1) {
        local_80 = CONCAT44(local_80._4_4_,3);
      }
      FUN_00134c10(*(undefined8 *)(param_1 + 0x30),&local_80);
      FUN_00130d70(lVar18);
      uVar8 = local_70._4_4_;
      if (local_9f != '\0') {
        uVar7 = FUN_00133380(lVar18);
        FUN_001335c0(lVar18,local_70._4_4_);
        uVar16 = (uint)local_a0;
        do {
          if ((int)uVar16 < 1) {
            iVar10 = 0;
            goto LAB_00130398;
          }
          iVar10 = uVar16 + *(int *)(lVar18 + 0x38) + -1;
          lVar14 = **(long **)(*(long *)(lVar18 + 0x10) + 0x58);
          uVar16 = uVar16 - 1;
        } while (*(char *)(lVar14 + (long)iVar10 * 0x18 + 9) == '\x03');
        iVar10 = *(byte *)(lVar14 + (long)iVar10 * 0x18 + 10) + 1;
LAB_00130398:
        FUN_00133250(lVar18,0x36,iVar10,0,0,0);
        uVar8 = FUN_00133380(lVar18);
        FUN_001335c0(lVar18,uVar7);
      }
      FUN_001334b0(lVar18,uVar8,uVar5);
LAB_001303d8:
      FUN_00130d70(lVar18);
      goto LAB_001307c8;
    }
    if (*(int *)(param_1 + 4) == iVar10) {
      FUN_001329f0(param_1,0x114);
      goto LAB_0013099c;
    }
    goto LAB_00130a1c;
  case 0x111:
    FUN_00138a10(param_1);
    plVar19 = *(long **)(param_1 + 0x30);
    uVar16 = (uint)*(byte *)((long)plVar19 + 0x42);
    do {
      if ((int)uVar16 < 1) {
        iVar10 = 0;
        goto LAB_0012f748;
      }
      iVar10 = uVar16 + (int)plVar19[7] + -1;
      uVar16 = uVar16 - 1;
    } while (*(char *)(**(long **)(plVar19[2] + 0x58) + (long)iVar10 * 0x18 + 9) == '\x03');
    iVar10 = *(byte *)(**(long **)(plVar19[2] + 0x58) + (long)iVar10 * 0x18 + 10) + 1;
LAB_0012f748:
    uVar16 = *(int *)(param_1 + 0x10) - 0x103;
    iVar26 = 0;
    if ((0x1d < uVar16 || (1 << (ulong)(uVar16 & 0x1f) & 0x20020007U) == 0) &&
       (*(int *)(param_1 + 0x10) != 0x3b)) {
      FUN_00131050(param_1,&local_80,0);
      if (*(int *)(param_1 + 0x10) == 0x2c) {
        iVar9 = 1;
        do {
          FUN_00138a10(param_1);
          FUN_00133e30(*(undefined8 *)(param_1 + 0x30),&local_80);
          FUN_00131050(param_1,&local_80,0);
          iVar9 = iVar9 + 1;
        } while (*(int *)(param_1 + 0x10) == 0x2c);
        if (((uint)local_80 & 0xfffffffe) == 0x12) {
LAB_0013086c:
          iVar26 = -1;
          FUN_00133a60(plVar19,&local_80,0xffffffff);
          if ((iVar9 == 1) && ((uint)local_80 == 0x12)) {
            if (*(char *)(plVar19[3] + 0x13) == '\0') {
              iVar26 = -1;
              *(uint *)(*(long *)(*plVar19 + 0x40) + (long)(int)local_78 * 4) =
                   *(uint *)(*(long *)(*plVar19 + 0x40) + (long)(int)local_78 * 4) & 0xffffff80 |
                   0x45;
            }
            else {
              iVar26 = -1;
            }
          }
        }
        else {
          FUN_00133e30(plVar19,&local_80);
          iVar26 = iVar9;
        }
      }
      else {
        if (((uint)local_80 & 0xfffffffe) == 0x12) {
          iVar9 = 1;
          goto LAB_0013086c;
        }
        iVar10 = FUN_001345b0(plVar19,&local_80);
        iVar26 = 1;
      }
    }
    FUN_00133400(plVar19,iVar10,iVar26);
    if (*(int *)(param_1 + 0x10) != 0x3b) goto LAB_001307c8;
    goto LAB_001301d8;
  case 0x115:
    lVar14 = *(long *)(param_1 + 0x30);
    FUN_00138a10(param_1);
    uVar5 = FUN_001334a0(lVar14);
    FUN_00131050(param_1,&local_80,0);
    if ((uint)local_80 == 1) {
      local_80 = CONCAT44(local_80._4_4_,3);
    }
    FUN_00134c10(*(undefined8 *)(param_1 + 0x30),&local_80);
    local_86 = 1;
    local_88 = *(byte *)(lVar14 + 0x42);
    lVar18 = *(long *)(*(long *)(lVar14 + 0x10) + 0x58);
    local_90 = *(undefined4 *)(lVar18 + 0x28);
    uStack_8c = *(undefined4 *)(lVar18 + 0x18);
    local_87 = 0;
    uVar8 = local_70._4_4_;
    local_98 = *(ulong *)(lVar14 + 0x18);
    if (local_98 == 0) {
      local_85 = false;
    }
    else {
      local_85 = *(char *)(local_98 + 0x13) != '\0';
    }
    *(ulong **)(lVar14 + 0x18) = &local_98;
    if (*(int *)(param_1 + 0x10) == 0x102) {
      FUN_00138a10(param_1);
      lVar25 = *(long *)(param_1 + 0x30);
      lVar18 = *(long *)(*(long *)(lVar25 + 0x10) + 0x58);
      local_78 = CONCAT44(*(undefined4 *)(lVar18 + 0x18),*(undefined4 *)(lVar18 + 0x28));
      local_80 = *(ulong *)(lVar25 + 0x18);
      if (local_80 == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = *(char *)(local_80 + 0x13) != '\0';
      }
      local_70 = CONCAT44(local_70._4_4_,CONCAT13(bVar4,(uint3)*(byte *)(lVar25 + 0x42)));
      *(ulong **)(lVar25 + 0x18) = &local_80;
      do {
        iVar26 = *(int *)(param_1 + 0x10);
        uVar16 = iVar26 - 0x103;
        if (uVar16 < 0x1e && (1 << (ulong)(uVar16 & 0x1f) & 0x20020007U) != 0) break;
        FUN_0012f030(param_1);
      } while (iVar26 != 0x111);
      FUN_00130d70(lVar25);
      uVar7 = FUN_00133380(lVar14);
      FUN_001334b0(lVar14,uVar7,uVar5);
      if (*(int *)(param_1 + 0x10) == 0x105) {
        FUN_00138a10(param_1);
        FUN_00130d70(lVar14);
        FUN_001335c0(lVar14,uVar8);
        goto LAB_001307c8;
      }
    }
    else {
      FUN_001329f0(param_1,0x102);
    }
    if (*(int *)(param_1 + 4) != iVar10) {
      uVar21 = *(undefined8 *)(param_1 + 0x38);
      uVar12 = FUN_00138700(param_1,0x105);
      uVar11 = 0x115;
      goto LAB_00130a50;
    }
    break;
  case 0x11f:
    FUN_00138a10(param_1);
    if (*(int *)(param_1 + 0x10) == 0x123) {
      lVar14 = *(long *)(param_1 + 0x18);
      FUN_00138a10(param_1);
      if (*(int *)(param_1 + 0x10) == 0x11f) {
        FUN_00138a10(param_1);
        while ((iVar26 = *(int *)(param_1 + 0x10), iVar26 == 0x11f || (iVar26 == 0x3b))) {
          FUN_0012f030(param_1);
        }
        iVar9 = *(int *)(*(long *)(param_1 + 0x30) + 0x3c);
        iVar6 = *(int *)(*(long *)(param_1 + 0x58) + 0x28);
        if (iVar9 < iVar6) {
          plVar19 = (long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x20) + (long)iVar9 * 0x18);
          lVar18 = (long)iVar6 - (long)iVar9;
          do {
            if (*plVar19 == lVar14) {
              uVar12 = FUN_0012e860(*(undefined8 *)(param_1 + 0x38),
                                    "label \'%s\' already defined on line %d",lVar14 + 0x18,
                                    *(undefined4 *)((long)plVar19 + 0xc));
              goto LAB_0013094c;
            }
            plVar19 = plVar19 + 3;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        uVar12 = 1;
        if ((2 < iVar26 - 0x103U) && (iVar26 != 0x120)) {
          uVar12 = 0;
        }
        FUN_00132670(param_1,lVar14,iVar10,uVar12);
        goto LAB_001307c8;
      }
LAB_00130968:
      FUN_001329f0(param_1,0x11f);
LAB_00130974:
                    /* WARNING: Subroutine does not return */
      FUN_00138770(param_1,"\'=\' or \'in\' expected");
    }
LAB_0012f918:
    FUN_001329f0(param_1,0x123);
LAB_0012f924:
    uVar12 = 0;
LAB_0012f928:
    FUN_001316a0(param_1,&local_80,uVar12,iVar10);
    FUN_00134820(*(undefined8 *)(param_1 + 0x30),&local_98,&local_80);
    FUN_00137b60(*(undefined8 *)(param_1 + 0x30),iVar10);
LAB_001307c8:
    lVar14 = *(long *)(param_1 + 0x30);
    uVar16 = (uint)*(byte *)(lVar14 + 0x42);
    do {
      if ((int)uVar16 < 1) {
        cVar15 = '\0';
        goto LAB_00130824;
      }
      iVar10 = uVar16 + *(int *)(lVar14 + 0x38) + -1;
      lVar18 = **(long **)(*(long *)(lVar14 + 0x10) + 0x58);
      uVar16 = uVar16 - 1;
    } while (*(char *)(lVar18 + (long)iVar10 * 0x18 + 9) == '\x03');
    cVar15 = *(char *)(lVar18 + (long)iVar10 * 0x18 + 10) + '\x01';
LAB_00130824:
    *(char *)(lVar14 + 0x44) = cVar15;
    *(int *)(*(long *)(param_1 + 0x38) + 0xb0) = *(int *)(*(long *)(param_1 + 0x38) + 0xb0) + -1;
    return;
  default:
    if (*(int *)(param_1 + 0x10) != 0x3b) goto switchD_0012f084_caseD_103;
LAB_001301d8:
    FUN_00138a10(param_1);
    goto LAB_001307c8;
  }
  FUN_001329f0(param_1,0x105);
LAB_00130a10:
  FUN_001329f0(param_1,0x10b);
LAB_00130a1c:
  uVar21 = *(undefined8 *)(param_1 + 0x38);
  uVar12 = FUN_00138700(param_1,0x114);
  uVar11 = 0x110;
LAB_00130a50:
  uVar11 = FUN_00138700(param_1,uVar11);
  uVar12 = FUN_0012e860(uVar21,"%s expected (to close %s at line %d)",uVar12,uVar11,iVar10);
                    /* WARNING: Subroutine does not return */
  FUN_00138770(param_1,uVar12);
code_r0x0012f900:
  FUN_00138a10(param_1);
  iVar10 = iVar10 + 1;
  if (*(int *)(param_1 + 0x10) != 0x123) goto LAB_0012f918;
  goto LAB_0012f7bc;
  while( true ) {
    iVar10 = uVar16 + *(int *)(lVar14 + 0x38) + -1;
    lVar18 = **(long **)(*(long *)(lVar14 + 0x10) + 0x58);
    uVar16 = uVar16 - 1;
    if (*(char *)(lVar18 + (long)iVar10 * 0x18 + 9) != '\x03') break;
LAB_00130468:
    if ((int)uVar16 < 1) {
      uVar16 = 0;
      goto LAB_00130744;
    }
  }
  uVar16 = *(byte *)(lVar18 + (long)iVar10 * 0x18 + 10) + 1;
LAB_00130744:
  uVar17 = (uint)*(byte *)(lVar14 + 0x42);
  do {
    if ((int)uVar17 < 1) goto LAB_001307b0;
    iVar10 = uVar17 + *(int *)(lVar14 + 0x38) + -1;
    lVar18 = **(long **)(*(long *)(lVar14 + 0x10) + 0x58);
    uVar17 = uVar17 - 1;
  } while (*(char *)(lVar18 + (long)iVar10 * 0x18 + 9) == '\x03');
  if (uVar16 <= *(byte *)(lVar18 + (long)iVar10 * 0x18 + 10)) {
    FUN_00133250(lVar14,0x36,uVar16,0,0,0);
  }
LAB_001307b0:
  uVar5 = FUN_00133380(lVar14);
  FUN_001334b0(lVar14,uVar5,*puVar20);
  goto LAB_001307c8;
}


