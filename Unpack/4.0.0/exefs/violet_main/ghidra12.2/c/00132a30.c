/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00132a30; name: FUN_00132a30
 */


void FUN_00132a30(long param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long extraout_x8;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long *plStack_100;
  uint auStack_f8 [2];
  ulong uStack_f0;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  long local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 auStack_64 [4];
  
  puVar1 = auStack_64 + 4;
  if (*(int *)(param_1 + 0x10) == 0x102) {
    plVar14 = *(long **)(param_1 + 0x30);
    FUN_00138a10(param_1);
    uVar8 = FUN_00133750(plVar14,*(undefined4 *)(&DAT_03cb5540 + (ulong)param_5 * 4),param_2,0);
    local_7e = 0;
    local_80 = *(undefined1 *)((long)plVar14 + 0x42);
    local_88 = *(undefined4 *)(*(long *)(plVar14[2] + 0x58) + 0x28);
    uStack_84 = *(undefined4 *)(*(long *)(plVar14[2] + 0x58) + 0x18);
    local_7f = 0;
    local_90 = plVar14[3];
    if (local_90 == 0) {
      local_7d = false;
    }
    else {
      local_7d = *(char *)(local_90 + 0x13) != '\0';
    }
    plVar14[3] = (long)&local_90;
    FUN_00131f40(param_1,param_4);
    FUN_00133830(plVar14,param_4);
    lVar15 = *(long *)(param_1 + 0x30);
    local_66 = 0;
    local_68 = *(undefined1 *)(lVar15 + 0x42);
    lVar11 = *(long *)(*(long *)(lVar15 + 0x10) + 0x58);
    local_70 = *(undefined4 *)(lVar11 + 0x28);
    uStack_6c = *(undefined4 *)(lVar11 + 0x18);
    local_67 = 0;
    local_78 = *(long *)(lVar15 + 0x18);
    if (local_78 == 0) {
      local_65 = false;
    }
    else {
      local_65 = *(char *)(local_78 + 0x13) != '\0';
    }
    *(long **)(lVar15 + 0x18) = &local_78;
    do {
      iVar9 = *(int *)(param_1 + 0x10);
      uVar4 = iVar9 - 0x103;
      if (uVar4 < 0x1e && (1 << (ulong)(uVar4 & 0x1f) & 0x20020007U) != 0) break;
      FUN_0012f030(param_1);
    } while (iVar9 != 0x111);
    FUN_00130d70(lVar15);
    FUN_00130d70(plVar14);
    iVar9 = FUN_001334a0(plVar14);
    if ((int)(iVar9 + ~uVar8) < 0x20000) {
      *(uint *)(*(long *)(*plVar14 + 0x40) + (long)(int)uVar8 * 4) =
           *(uint *)(*(long *)(*plVar14 + 0x40) + (long)(int)uVar8 * 4) & 0x7fff |
           (iVar9 + ~uVar8) * 0x8000;
      if (param_5 != 0) {
        FUN_00133250(plVar14,0x4c,param_2,0,param_4,0);
        FUN_00137b60(plVar14,param_3);
      }
      iVar9 = FUN_00133750(plVar14,*(undefined4 *)(&DAT_03cb55c8 + (ulong)param_5 * 4),param_2,0);
      if ((int)(iVar9 - uVar8) < 0x20000) {
        *(uint *)(*(long *)(*plVar14 + 0x40) + (long)iVar9 * 4) =
             *(uint *)(*(long *)(*plVar14 + 0x40) + (long)iVar9 * 4) & 0x7fff |
             (iVar9 - uVar8) * 0x8000;
        FUN_00137b60(plVar14,param_3);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00138770(plVar14[2],"control structure too long");
  }
  auVar16 = FUN_001329f0(param_1,0x102);
  plVar14 = auVar16._8_8_;
  lVar11 = auVar16._0_8_;
  pcStack_d8 = FUN_00132ca0;
  plVar13 = plVar14 + 1;
  iVar9 = (int)*plVar13;
  puStack_e0 = puVar1;
  if (6 < iVar9 - 9U) {
                    /* WARNING: Subroutine does not return */
    FUN_00138770(lVar11,"syntax error");
  }
  plVar12 = *(long **)(lVar11 + 0x30);
  if (iVar9 == 9) {
    iVar9 = (int)plVar12[7] + (uint)*(ushort *)((long)plVar14 + 0x12);
    lVar15 = **(long **)(plVar12[2] + 0x58);
    if (*(char *)(lVar15 + (long)iVar9 * 0x18 + 9) != '\0') {
LAB_00132d4c:
      plVar12 = (long *)(lVar15 + (long)iVar9 * 0x18 + 0x10);
LAB_00132d58:
      lVar15 = *plVar12;
      if (lVar15 != 0) goto LAB_00133004;
    }
  }
  else if (iVar9 == 10) {
    plVar12 = (long *)(*(long *)(*plVar12 + 0x50) + (long)(int)plVar14[2] * 0x10);
    if (*(char *)((long)plVar12 + 10) != '\0') goto LAB_00132d58;
  }
  else if (iVar9 == 0xb) {
    lVar15 = **(long **)(lVar11 + 0x58);
    iVar9 = (int)plVar14[2];
    goto LAB_00132d4c;
  }
  if (*(int *)(lVar11 + 0x10) == 0x3d) {
    FUN_00138a10(lVar11);
    FUN_00131050(lVar11,&plStack_100,0);
    iVar9 = 1;
    iVar2 = *(int *)(lVar11 + 0x10);
    while (iVar2 == 0x2c) {
      FUN_00138a10(lVar11);
      FUN_00133e30(*(undefined8 *)(lVar11 + 0x30),&plStack_100);
      FUN_00131050(lVar11,&plStack_100,0);
      iVar9 = iVar9 + 1;
      iVar2 = *(int *)(lVar11 + 0x10);
    }
    lVar15 = *(long *)(lVar11 + 0x30);
    if (iVar9 == param_3) {
      FUN_00133af0(lVar15,&plStack_100);
      lVar11 = *(long *)(lVar11 + 0x30);
      goto LAB_00132fc4;
    }
    param_3 = param_3 - iVar9;
    if ((int)plStack_100 - 0x12U < 2) {
      iVar9 = 0;
      if (-1 < param_3) {
        iVar9 = param_3 + 1;
      }
      FUN_00133a60(lVar15,&plStack_100,iVar9);
      if (0 < param_3) {
LAB_00132f38:
        FUN_00133830(lVar15,param_3);
        goto LAB_00132fa4;
      }
    }
    else {
      if ((int)plStack_100 != 0) {
        FUN_00133e30(lVar15,&plStack_100);
      }
      if (0 < param_3) {
        FUN_00133110(lVar15,*(undefined1 *)(lVar15 + 0x44),param_3);
        goto LAB_00132f38;
      }
    }
    *(char *)(lVar15 + 0x44) = *(char *)(lVar15 + 0x44) + (char)param_3;
  }
  else {
    if (*(int *)(lVar11 + 0x10) != 0x2c) {
      FUN_001329f0(lVar11,0x3d);
      lVar15 = extraout_x8;
LAB_00133004:
      uVar10 = FUN_0012e860(*(undefined8 *)(lVar11 + 0x38),
                            "attempt to assign to const variable \'%s\'",lVar15 + 0x18);
      FUN_00133030(lVar11,uVar10);
                    /* WARNING: Does not return */
      pcVar5 = (code *)UndefinedInstructionException(0,0x133024);
      (*pcVar5)();
    }
    FUN_00138a10(lVar11);
    plStack_100 = plVar14;
    FUN_00131b80(lVar11,auStack_f8);
    if ((auStack_f8[0] & 0xfffffffc) != 0xc) {
      lVar15 = *(long *)(lVar11 + 0x30);
      bVar6 = false;
      bVar3 = *(byte *)(lVar15 + 0x44);
      do {
        uVar8 = *(uint *)(plVar14 + 1);
        bVar7 = (byte)uStack_f0;
        if ((uVar8 & 0xfffffffc) == 0xc) {
          if (uVar8 == 0xd) {
            if ((auStack_f8[0] == 10) && ((uint)uStack_f0 == *(byte *)((long)plVar14 + 0x12))) {
              *(undefined4 *)(plVar14 + 1) = 0xf;
              bVar6 = true;
              *(byte *)((long)plVar14 + 0x12) = bVar3;
            }
          }
          else if (auStack_f8[0] == 9) {
            if ((ushort)*(byte *)((long)plVar14 + 0x12) == (ushort)bVar7) {
              bVar6 = true;
              *(byte *)((long)plVar14 + 0x12) = bVar3;
            }
            if ((uVar8 == 0xc) && (*(ushort *)(plVar14 + 2) == (ushort)bVar7)) {
              bVar6 = true;
              *(ushort *)(plVar14 + 2) = (ushort)bVar3;
            }
          }
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      if (bVar6) {
        if (auStack_f8[0] == 9) {
          uStack_f0 = uStack_f0 & 0xff;
          uVar10 = 0;
        }
        else {
          uStack_f0 = uStack_f0 & 0xffffffff;
          uVar10 = 9;
        }
        FUN_00133250(lVar15,uVar10,bVar3,uStack_f0,0,0);
        FUN_00133830(lVar15,1);
      }
    }
    FUN_0013b000(*(undefined8 *)(lVar11 + 0x38));
    FUN_00132ca0(lVar11,&plStack_100,param_3 + 1);
    *(int *)(*(long *)(lVar11 + 0x38) + 0xb0) = *(int *)(*(long *)(lVar11 + 0x38) + 0xb0) + -1;
  }
LAB_00132fa4:
  lVar11 = *(long *)(lVar11 + 0x30);
  uStack_f0 = 0xffffffffffffffff;
  plStack_100 = (long *)CONCAT44(plStack_100._4_4_,8);
  auStack_f8[0] = *(byte *)(lVar11 + 0x44) - 1;
LAB_00132fc4:
  FUN_00134820(lVar11,plVar13,&plStack_100);
  return;
}


