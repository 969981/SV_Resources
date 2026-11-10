/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e32db0; name: FUN_02e32db0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_02e32db0(long param_1,undefined4 *param_2,long *param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  short sVar7;
  undefined1 uVar8;
  ushort uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  byte bVar12;
  byte bVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 uVar26;
  int *piVar27;
  uint *puVar28;
  uint uVar29;
  long lVar30;
  short sVar31;
  undefined4 *puVar32;
  long lVar33;
  long lVar34;
  undefined4 local_1f4;
  short local_1d8;
  undefined1 local_1d6;
  undefined1 auStack_1d0 [144];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined8 local_120;
  undefined5 uStack_118;
  undefined3 local_113;
  undefined5 uStack_110;
  ulong local_108;
  undefined2 uStack_100;
  undefined1 local_fe;
  undefined2 uStack_fd;
  undefined3 local_fb;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 uStack_d7;
  undefined1 local_d6;
  undefined2 uStack_d5;
  undefined3 local_d3;
  undefined5 uStack_d0;
  ushort local_c8;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined4 uStack_c4;
  short local_c0;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 local_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined5 uStack_b0;
  undefined3 uStack_ab;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined5 uStack_a0;
  undefined1 local_9b;
  undefined2 uStack_9a;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  uStack_f8 = 0;
  uStack_f4 = uStack_f4 & 0xffffff00;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_fe = 0;
  uStack_fd = 0;
  local_fb = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_113 = 0;
  memset(auStack_1d0,0,0x8f);
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_128 = 0;
  puVar32 = (undefined4 *)*param_3;
  uVar22 = puVar32[0x21];
  plVar23 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*puVar32);
  uVar24 = (**(code **)(*plVar23 + 0x220))(plVar23,0x2d);
  if ((uVar24 & 1) != 0) {
    lVar33 = *(long *)(param_1 + 0x20);
    uVar18 = (**(code **)(*plVar23 + 0x98))(plVar23);
    plVar25 = (long *)FUN_01021c94(*(undefined8 *)
                                    (*(long *)(*(long *)(lVar33 + 0x20) + 0x10) + 0x30),uVar18);
    (**(code **)(*plVar25 + 0x610))(plVar25,0x2d);
    FUN_0129aff0(*(undefined8 *)(lVar33 + 0x18),0x15,uVar18,0x2d);
  }
  local_1d8 = 0;
  local_1d6 = 10;
  uVar3 = uVar22 & 0x3fffff;
  uVar19 = FUN_0297da44(param_1,puVar32);
  uVar29 = (uint)*(ushort *)(puVar32 + 4);
  if ((uVar19 & 0xffff) != 0) {
    FUN_02930838(*(undefined8 *)(param_1 + 0x38),plVar23,*(ushort *)(puVar32 + 4),uVar19);
    uVar11 = FUN_011e21c0(*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 0x10),plVar23,uVar19,
                          *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
    *(short *)(puVar32 + 4) = (short)uVar19;
    *(undefined1 *)(puVar32 + 2) = uVar11;
    uVar29 = uVar19;
  }
  iVar6 = (uVar22 >> 0x10 & 0x3f) - 7;
  if (*(int *)(*param_3 + 4) == 1) {
    sVar31 = *(short *)(*param_3 + 0x10);
  }
  else {
    sVar31 = 0;
  }
  uVar11 = *(undefined1 *)(puVar32 + 2);
  local_1f4 = puVar32[3];
  bVar12 = (**(code **)(*plVar23 + 0x220))(plVar23,0x1a);
  bVar13 = (**(code **)(*plVar23 + 0x220))(plVar23,0x1b);
  lVar34 = *(long *)(param_1 + 0x20);
  uVar18 = (**(code **)(*plVar23 + 0x98))(plVar23);
  lVar33 = *(long *)(lVar34 + 0x20);
  uVar26 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar33 + 0x10) + 0x30),uVar18);
  uVar24 = FUN_0129b2a0(*(undefined8 *)(lVar33 + 0x18),uVar26,sVar31,uVar3);
  if ((uVar24 & 1) != 0) {
    FUN_0129aff0(*(undefined8 *)(lVar34 + 0x18),0x5a,uVar18,sVar31,uVar3);
  }
  FUN_029315cc(*(undefined8 *)(param_1 + 0x38),plVar23,sVar31);
  FUN_0107a750(*(undefined8 *)(param_1 + 0x38),sVar31,uVar29,iVar6,plVar23,&local_108);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) {
    lVar33 = *(long *)(param_1 + 0x10);
    iVar20 = (**(code **)(*plVar23 + 0x98))(plVar23);
    lVar33 = *(long *)(lVar33 + 0x310);
    if (((*(byte *)(*(long *)(*(long *)(lVar33 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
       (*(int *)(lVar33 + 0x18) == 0)) {
      uVar26 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar33 + 0x10) + 0x30),1);
      plVar25 = (long *)FUN_0124c614(uVar26,0);
      if (plVar25 != (long *)0x0) {
        uVar18 = (**(code **)(*plVar25 + 0x98))();
        *(undefined4 *)(lVar33 + 0x18) = uVar18;
      }
    }
    if ((*(int *)(lVar33 + 0x18) == iVar20) && (*(char *)(puVar32 + 10) == '\t')) {
      uStack_f4 = CONCAT31(uStack_f4._1_3_,1);
    }
  }
  uStack_c6 = (undefined1)((ulong)plVar23 >> 0x10);
  uVar16 = uStack_c6;
  uStack_c5 = (undefined1)((ulong)plVar23 >> 0x18);
  uVar10 = uStack_c5;
  local_c8 = (ushort)plVar23;
  uVar9 = local_c8;
  uStack_c4 = (undefined4)((ulong)plVar23 >> 0x20);
  uVar18 = uStack_c4;
  uStack_b4 = local_1f4;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
    lVar33 = *(long *)(param_1 + 0x10);
    uVar21 = (**(code **)(*plVar23 + 0x98))(plVar23);
    piVar27 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(lVar33 + 0x290) + 8) + 0x50),
                                  uVar21);
    if (((piVar27 != (int *)0x0) && (*piVar27 == 1)) &&
       (uVar24 = (**(code **)(*plVar23 + 0x510))(plVar23,0x1b), (uVar24 & 1) != 0)) {
      uStack_b0 = SUB85(param_2 + 10,0);
      uStack_ab = (undefined3)((ulong)(param_2 + 10) >> 0x28);
      local_c0 = (short)&local_108;
      uStack_be = (undefined1)((ulong)&local_108 >> 0x10);
      uStack_bd = (undefined1)((ulong)&local_108 >> 0x18);
      local_bc = (undefined1)((ulong)&local_108 >> 0x20);
      uStack_bb = (undefined1)((ulong)&local_108 >> 0x28);
      uStack_ba = (undefined2)((ulong)&local_108 >> 0x30);
      uStack_b8 = CONCAT31(uStack_b8._1_3_,uVar11);
      FUN_0183bcf8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1680),&local_e0,&local_c8);
      FUN_0107a750(*(undefined8 *)(param_1 + 0x38),sVar31,uVar29,iVar6,plVar23,&local_108);
      FUN_02930f0c(*(undefined8 *)(param_1 + 0x38),plVar23,&local_120,&local_108);
      local_a8 = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ab = 0;
      local_c8 = 0;
      uStack_c6 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      local_c0 = 0;
      uStack_be = 0;
      uStack_bd = 0;
      local_bc = 0;
      uStack_bb = 0;
      uStack_ba = 0;
      uVar24 = FUN_029380b0(*(undefined8 *)(param_1 + 0x38),plVar23,uVar29,sVar31,&local_c8);
      if ((uVar24 & 1) == 0) {
        lVar33 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        bVar12 = *(byte *)(lVar33 + 0x938);
        uVar17 = FUN_011afcb8(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8),0xc9,0xcf,0);
        *(undefined2 *)(lVar33 + (ulong)bVar12 * 0xc4 + 10) = uVar17;
      }
      else {
        uVar26 = *(undefined8 *)(param_1 + 0x20);
        uVar18 = (**(code **)(*plVar23 + 0x98))(plVar23);
        FUN_0124b0ac(uVar26,uVar18,&local_c8);
      }
      FUN_0293126c(*(undefined8 *)(param_1 + 0x38),plVar23,&local_108,0x25);
      *(undefined1 *)(param_2 + 8) = uVar11;
      *(ulong *)((long)param_2 + 0x15) =
           CONCAT17((undefined1)uStack_f4,CONCAT43(uStack_f8,local_fb));
      *(ulong *)(param_2 + 2) = local_108;
      *(ulong *)(param_2 + 4) = CONCAT35(local_fb,CONCAT23(uStack_fd,CONCAT12(local_fe,uStack_100)))
      ;
      *(undefined2 *)(param_2 + 1) = 0x101;
      uVar18 = 1;
      goto LAB_02e337a8;
    }
  }
  uStack_b0 = SUB85(puVar32 + 0x15,0);
  uStack_ab = (undefined3)((ulong)(puVar32 + 0x15) >> 0x28);
  local_c0 = (short)&local_108;
  uStack_be = (undefined1)((ulong)&local_108 >> 0x10);
  uStack_bd = (undefined1)((ulong)&local_108 >> 0x18);
  local_bc = (undefined1)((ulong)&local_108 >> 0x20);
  uStack_bb = (undefined1)((ulong)&local_108 >> 0x28);
  uStack_ba = (undefined2)((ulong)&local_108 >> 0x30);
  uStack_b8 = CONCAT31(uStack_b8._1_3_,bVar12 | bVar13) & 0xffffff01;
  FUN_01581c6c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1aa0),&local_e0,&local_c8);
  if ((char)local_e0 != '\0') {
    uVar18 = 0;
    *(undefined2 *)(param_2 + 1) = 0;
    *(ulong *)((long)param_2 + 0x15) = CONCAT17((undefined1)uStack_f4,CONCAT43(uStack_f8,local_fb));
    *(ulong *)(param_2 + 2) = local_108;
    *(ulong *)(param_2 + 4) = CONCAT35(local_fb,CONCAT23(uStack_fd,CONCAT12(local_fe,uStack_100)));
    *(undefined1 *)(param_2 + 8) = uVar11;
    goto LAB_02e337a8;
  }
  uVar24 = FUN_029374bc(*(undefined8 *)(param_1 + 0x38),plVar23,uVar29,uVar11,&local_1d8);
  uVar8 = local_1d6;
  sVar7 = local_1d8;
  if ((uVar24 & 1) == 0) {
    lVar33 = *(long *)(param_1 + 0x20);
    uVar21 = (**(code **)(*plVar23 + 0x98))(plVar23);
    FUN_0129aff0(*(undefined8 *)(lVar33 + 0x18),0xc9,uVar21,0,uVar29 & 0xffff,uVar11,0);
    FUN_0107a750(*(undefined8 *)(param_1 + 0x38),uVar29,uVar29,iVar6,plVar23,&local_120);
    uStack_b0 = SUB85(auStack_1d0,0);
    uStack_ab = (undefined3)((ulong)auStack_1d0 >> 0x28);
    local_c0 = (short)&local_120;
    uStack_be = (undefined1)((ulong)&local_120 >> 0x10);
    uStack_bd = (undefined1)((ulong)&local_120 >> 0x18);
    local_bc = (undefined1)((ulong)&local_120 >> 0x20);
    uStack_bb = (undefined1)((ulong)&local_120 >> 0x28);
    uStack_ba = (undefined2)((ulong)&local_120 >> 0x30);
    uStack_b8 = CONCAT31(uStack_b8._1_3_,uVar11);
    local_c8 = uVar9;
    uStack_c6 = uVar16;
    uStack_c5 = uVar10;
    uStack_c4 = uVar18;
    FUN_0183bcf8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1680),&local_e0,&local_c8);
    bVar12 = FUN_01705670(param_1,plVar23,uVar29,auStack_1d0);
    FUN_0298aa30(param_1,plVar23,uVar29,0x24);
    uVar18 = 0;
    *(undefined1 *)(param_2 + 8) = uVar11;
    *(byte *)((long)param_2 + 5) = bVar12 & 1;
    *(undefined1 *)(param_2 + 1) = 0;
    *(ulong *)((long)param_2 + 0x15) = CONCAT17((undefined1)uStack_f4,CONCAT43(uStack_f8,local_fb));
    *(ulong *)(param_2 + 2) = local_108;
    *(ulong *)(param_2 + 4) = CONCAT35(local_fb,CONCAT23(uStack_fd,CONCAT12(local_fe,uStack_100)));
    goto LAB_02e337a8;
  }
  if (local_1d8 == 0) {
    FUN_0107a750(*(undefined8 *)(param_1 + 0x38),uVar29,uVar29,iVar6,plVar23,&local_120);
    FUN_0107a750(*(undefined8 *)(param_1 + 0x38),sVar31,uVar29,iVar6,plVar23,&local_108);
LAB_02e335ec:
    local_c0 = (short)&local_108;
    uStack_be = (undefined1)((ulong)&local_108 >> 0x10);
    uStack_bd = (undefined1)((ulong)&local_108 >> 0x18);
    local_bc = (undefined1)((ulong)&local_108 >> 0x20);
    uStack_bb = (undefined1)((ulong)&local_108 >> 0x28);
    uStack_ba = (undefined2)((ulong)&local_108 >> 0x30);
    puVar1 = param_2 + 10;
    uStack_b0 = SUB85(puVar1,0);
    uStack_ab = (undefined3)((ulong)puVar1 >> 0x28);
    uStack_b8 = CONCAT31(uStack_b8._1_3_,uVar11);
    uStack_b4 = local_1f4;
    local_c8 = uVar9;
    uStack_c6 = uVar16;
    uStack_c5 = uVar10;
    uStack_c4 = uVar18;
    FUN_0183bcf8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1680),&local_e0,&local_c8);
    FUN_0292d080(*(undefined8 *)(param_1 + 0x38),sVar31,uVar29,iVar6,plVar23,puVar1,&local_108);
    if ((((bVar12 | bVar13) & 1) == 0) && ((*(byte *)(puVar32 + 0x16) >> 3 & 1) == 0)) {
      bVar12 = FUN_01705670(param_1,plVar23,uVar29,puVar1);
    }
    else {
      bVar12 = 0;
    }
    FUN_02930f0c(*(undefined8 *)(param_1 + 0x38),plVar23,&local_120,&local_108);
    FUN_02930b98(*(undefined8 *)(param_1 + 0x38),plVar23,&local_108);
    uStack_c4 = (**(code **)(*plVar23 + 0x98))(plVar23);
    uStack_be = 0;
    local_bc = 0;
    uStack_bb = 0;
    local_c8 = 4;
    uStack_c6 = 0;
    uStack_c5 = 0;
    local_e0 = local_e0 & 0xffffffffffffff00;
    local_c0 = sVar31;
    FUN_0131bdb0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d40),&local_e0,&local_c8);
    local_a8 = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ab = 0;
    local_c8 = 0;
    uStack_c6 = 0;
    uStack_c5 = 0;
    uStack_c4 = 0;
    local_c0 = 0;
    uStack_be = 0;
    uStack_bd = 0;
    local_bc = 0;
    uStack_bb = 0;
    uStack_ba = 0;
    uVar24 = FUN_029380b0(*(undefined8 *)(param_1 + 0x38),plVar23,uVar29,sVar31,&local_c8);
    if ((uVar24 & 1) == 0) {
      lVar33 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      bVar13 = *(byte *)(lVar33 + 0x938);
      uVar17 = FUN_011afcb8(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8),0xc9,0xcf,0);
      *(undefined2 *)(lVar33 + (ulong)bVar13 * 0xc4 + 10) = uVar17;
    }
    else {
      uVar26 = *(undefined8 *)(param_1 + 0x20);
      uVar21 = (**(code **)(*plVar23 + 0x98))(plVar23);
      FUN_0124b0ac(uVar26,uVar21,&local_c8);
    }
    lVar33 = *(long *)(param_1 + 0x78);
    if ((short)local_108 == 0xa5) {
LAB_02e33760:
      local_c0 = (short)&local_108;
      uStack_be = (undefined1)((ulong)&local_108 >> 0x10);
      uStack_bd = (undefined1)((ulong)&local_108 >> 0x18);
      local_bc = (undefined1)((ulong)&local_108 >> 0x20);
      uStack_bb = (undefined1)((ulong)&local_108 >> 0x28);
      uStack_ba = (undefined2)((ulong)&local_108 >> 0x30);
      local_c8 = uVar9;
      uStack_c6 = uVar16;
      uStack_c5 = uVar10;
      uStack_c4 = uVar18;
      FUN_0298bc10(*(undefined8 *)(lVar33 + 0x1b00),&local_e0,&local_c8);
      if ((char)local_e0 == '\0') {
        lVar33 = *(long *)(param_1 + 0x10);
        *(ulong *)(lVar33 + 0x360) = CONCAT44(uStack_f4,uStack_f8);
        *(ulong *)(lVar33 + 0x358) =
             CONCAT35(local_fb,CONCAT23(uStack_fd,CONCAT12(local_fe,uStack_100)));
        *(ulong *)(lVar33 + 0x350) = local_108;
        lVar33 = *(long *)(param_1 + 8);
        lVar34 = *(long *)(param_1 + 0x10);
        uVar21 = (**(code **)(*plVar23 + 0x98))(plVar23);
        puVar28 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                        (*(long *)(*(long *)(lVar34 + 0x290) + 8) + 0x50),uVar21);
        if (puVar28 == (uint *)0x0) {
          uVar22 = 0;
        }
        else {
          uVar22 = *puVar28;
          if (4 < (int)uVar22) {
            uVar22 = 0;
          }
        }
        if (uVar22 == *(byte *)(lVar33 + 0x95)) {
          plVar25 = *(long **)(*(long *)(param_1 + 8) + 0x130);
          if (plVar25 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          plVar2 = plVar25 + 5;
          do {
            lVar33 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = (int)lVar33 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar33 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          (**(code **)(*plVar25 + 0x48))(plVar25,1,1);
          do {
            lVar33 = *plVar2;
            iVar6 = (int)lVar33 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
          }
          else if ((int)lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        uVar24 = (**(code **)(*plVar23 + 0x220))(plVar23,0x23);
        if ((uVar24 & 1) != 0) {
          local_c8 = 0;
          uStack_c6 = 0;
          uStack_c5 = 0;
          uStack_c4 = 0x31;
          local_c0 = 0;
          uStack_be = 0;
          uStack_bd = 0;
          local_bc = 0;
          uStack_bb = 0;
          uStack_ba = 0;
          local_98._0_6_ = (uint6)(ushort)local_98;
          local_98 = local_98 & 0xffffffffffffff00;
          local_70 = 0;
          uStack_b8 = 0;
          uStack_b4 = 0;
          uStack_b0 = 0;
          uStack_ab = 0;
          local_a8 = 0;
          uStack_a4 = 0;
          uStack_a0 = 0;
          local_9b = 0;
          uStack_9a = 0;
          local_90 = 0;
          local_88 = 0;
          local_80 = 0;
          uStack_78 = 0;
          uVar21 = (**(code **)(*plVar23 + 0x98))(plVar23);
          local_c8 = (ushort)uVar21;
          uStack_c6 = (undefined1)((uint)uVar21 >> 0x10);
          uStack_c5 = (undefined1)((uint)uVar21 >> 0x18);
          uStack_c4 = 0x23;
          uVar21 = (**(code **)(*plVar23 + 0x98))(plVar23);
          uVar24 = local_98;
          local_c0 = (short)uVar21;
          uStack_be = (undefined1)((uint)uVar21 >> 0x10);
          uStack_bd = (undefined1)((uint)uVar21 >> 0x18);
          local_98 = CONCAT71(local_98._1_7_,1);
          uVar26 = local_98;
          local_98._6_2_ = SUB82(uVar24,6);
          local_98._0_6_ = CONCAT15(1,(int5)uVar26);
          FUN_018cdf14(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xae0),&local_e0,&local_c8);
          (**(code **)(*plVar23 + 0x508))(plVar23,0xe);
        }
        lVar33 = *(long *)(param_1 + 0x78);
        if ((short)local_108 != 0xa5) {
          lVar33 = *(long *)(lVar33 + 0x1ae0);
          uVar22 = FUN_015826c0(*(undefined8 *)(lVar33 + 0x38),plVar23,local_108 & 0xffff,0x22,
                                &local_108,puVar1);
          if ((uVar22 & 0xff) != 0) {
            FUN_0298bbd4(lVar33,plVar23,&local_108,uVar22);
            goto LAB_02e33780;
          }
          lVar33 = *(long *)(param_1 + 0x78);
        }
        local_e0 = local_e0 & 0xffffffffffff0000;
        local_c0 = (short)&local_108;
        uStack_be = (undefined1)((ulong)&local_108 >> 0x10);
        uStack_bd = (undefined1)((ulong)&local_108 >> 0x18);
        local_bc = (undefined1)((ulong)&local_108 >> 0x20);
        uStack_bb = (undefined1)((ulong)&local_108 >> 0x28);
        uStack_ba = (undefined2)((ulong)&local_108 >> 0x30);
        uStack_b8 = CONCAT31(uStack_b8._1_3_,uVar11);
        local_c8 = uVar9;
        uStack_c6 = uVar16;
        uStack_c5 = uVar10;
        uStack_c4 = uVar18;
        FUN_0182a09c(*(undefined8 *)(lVar33 + 0x1b60),&local_e0,&local_c8);
        *(undefined1 *)(param_2 + 1) = local_e0._1_1_;
        if ((char)local_e0 != '\0') {
          *(undefined1 *)(param_2 + 8) = uVar11;
          *(ulong *)((long)param_2 + 0x15) =
               CONCAT17((undefined1)uStack_f4,CONCAT43(uStack_f8,local_fb));
          *(ulong *)(param_2 + 2) = local_108;
          *(ulong *)(param_2 + 4) =
               CONCAT35(local_fb,CONCAT23(uStack_fd,CONCAT12(local_fe,uStack_100)));
          *(byte *)((long)param_2 + 5) = bVar12 & 1;
          uVar18 = 2;
          goto LAB_02e337a8;
        }
        local_c8 = uVar9;
        uStack_c6 = uVar16;
        uStack_c5 = uVar10;
        uStack_c4 = uVar18;
        local_c0 = sVar31;
        uStack_be = uVar11;
        FUN_0298be44(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1b40),&local_e0,&local_c8);
        if ((char)local_e0 != '\0') {
          *(undefined1 *)(param_2 + 8) = uVar11;
          *(ulong *)((long)param_2 + 0x15) =
               CONCAT17((undefined1)uStack_f4,CONCAT43(uStack_f8,local_fb));
          *(undefined1 *)(param_2 + 1) = 0;
          *(ulong *)(param_2 + 2) = local_108;
          *(ulong *)(param_2 + 4) =
               CONCAT35(local_fb,CONCAT23(uStack_fd,CONCAT12(local_fe,uStack_100)));
          uVar18 = 3;
          *(byte *)((long)param_2 + 5) = bVar12 & 1;
          goto LAB_02e337a8;
        }
        uVar18 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + 8);
        lVar30 = *(long *)(param_1 + 0x20);
        uVar21 = (**(code **)(*plVar23 + 0x98))(plVar23);
        lVar33 = *(long *)(*(long *)(*(long *)(lVar30 + 0x20) + 0x10) + 0x130);
        uVar22 = *(uint *)(lVar33 + 8);
        lVar34 = lVar33 + (ulong)uVar22 * 0xc;
        *(short *)(lVar34 + 0x14) = sVar31;
        *(undefined4 *)(lVar34 + 0xc) = uVar18;
        *(undefined4 *)(lVar34 + 0x10) = uVar21;
        *(undefined1 *)(lVar34 + 0x16) = 0;
        iVar6 = 0;
        if (uVar22 + 1 < 400) {
          iVar6 = uVar22 + 1;
        }
        *(int *)(lVar33 + 8) = iVar6;
        FUN_0129aff0(*(undefined8 *)(lVar30 + 0x18),0x7b,sVar31,uVar18,uVar21);
        FUN_0293126c(*(undefined8 *)(param_1 + 0x38),plVar23,&local_108,0x25);
        local_c8 = 0;
        uStack_c6 = 0;
        uStack_c5 = 0;
        local_e0 = local_e0 & 0xffffffff00000000;
        FUN_0293292c(*(undefined8 *)(param_1 + 0x38),plVar23,sVar31,puVar1,&local_c8,&local_e0);
        iVar6 = CONCAT13(uStack_c5,CONCAT12(uStack_c6,local_c8));
        if (iVar6 == 0) {
          *(ulong *)((long)param_2 + 0x15) =
               CONCAT17((undefined1)uStack_f4,CONCAT43(uStack_f8,local_fb));
          *(undefined1 *)(param_2 + 8) = uVar11;
          *(ulong *)(param_2 + 2) = local_108;
          *(ulong *)(param_2 + 4) =
               CONCAT35(local_fb,CONCAT23(uStack_fd,CONCAT12(local_fe,uStack_100)));
          *(byte *)((long)param_2 + 5) = bVar12 & 1;
          uVar18 = 1;
          *(undefined1 *)(param_2 + 1) = 1;
          goto LAB_02e337a8;
        }
        if ((int)local_e0 == 0) {
          uVar16 = 10;
        }
        else {
          uVar16 = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0));
        }
        *(undefined1 *)(param_2 + 0x42) = uVar16;
        bVar12 = bVar12 & 1;
        param_2[0x37] = iVar6;
        *(undefined1 *)(param_2 + 0x36) = 1;
        *(undefined1 *)(param_2 + 8) = uVar11;
        *(ulong *)((long)param_2 + 0x15) =
             CONCAT17((undefined1)uStack_f4,CONCAT43(uStack_f8,local_fb));
        *(ulong *)(param_2 + 2) = local_108;
        *(ulong *)(param_2 + 4) =
             CONCAT35(local_fb,CONCAT23(uStack_fd,CONCAT12(local_fe,uStack_100)));
        uVar18 = 4;
        goto LAB_02e337a0;
      }
    }
    else {
      uVar26 = *(undefined8 *)(lVar33 + 0x1ac0);
      uVar22 = FUN_02e34760(uVar26,plVar23,&local_108,puVar1);
      if ((uVar22 & 0xff) == 0) {
        lVar33 = *(long *)(param_1 + 0x78);
        goto LAB_02e33760;
      }
      FUN_0298bb98(uVar26,plVar23,&local_108,uVar22);
    }
LAB_02e33780:
    uVar18 = 0;
    *(ulong *)((long)param_2 + 0x15) = CONCAT17((undefined1)uStack_f4,CONCAT43(uStack_f8,local_fb));
    *(ulong *)(param_2 + 2) = local_108;
    *(ulong *)(param_2 + 4) = CONCAT35(local_fb,CONCAT23(uStack_fd,CONCAT12(local_fe,uStack_100)));
    bVar12 = bVar12 & 1;
    *(undefined1 *)(param_2 + 8) = uVar11;
  }
  else {
    local_1f4 = FUN_012464b0(param_1);
    lVar34 = *(long *)(param_1 + 0x20);
    uVar21 = (**(code **)(*plVar23 + 0x98))(plVar23);
    lVar33 = *(long *)(lVar34 + 0x20);
    uVar26 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar33 + 0x10) + 0x30),uVar21);
    uVar24 = FUN_0129b2a0(*(undefined8 *)(lVar33 + 0x18),uVar26,sVar7,uVar3);
    if ((uVar24 & 1) != 0) {
      FUN_0129aff0(*(undefined8 *)(lVar34 + 0x18),0x5a,uVar21,sVar7,uVar3);
    }
    uVar21 = (**(code **)(*plVar23 + 0x98))(plVar23);
    uVar14 = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),uVar21);
    uVar15 = FUN_0298ab14(param_1,uVar29,uVar11);
    lVar33 = *(long *)(param_1 + 0x20);
    uVar21 = (**(code **)(*plVar23 + 0x98))(plVar23);
    FUN_0129aff0(*(undefined8 *)(lVar33 + 0x18),0xc9,uVar21,0,uVar29 & 0xffff,uVar11,0);
    uVar11 = local_fe;
    uStack_d0 = 0;
    local_d8 = 0;
    uStack_d7 = 0;
    local_d6 = 0;
    uStack_d5 = 0;
    local_d3 = 0;
    local_e0 = (ulong)(ushort)uVar29;
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar20 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar20 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar26 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)PTR_DAT_047d7950 = uVar26;
    piVar27 = (int *)FUN_00cf60cc(uVar26,uVar29);
    if (*(ushort *)((long)piVar27 - (long)*piVar27) < 9) {
      local_d8 = 0;
    }
    else {
      uVar24 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[4];
      local_d8 = 0;
      if (uVar24 != 0) {
        local_d8 = *(undefined1 *)((long)piVar27 + uVar24);
      }
    }
    uStack_c4 = 0;
    local_c0 = 0;
    uStack_be = 0xff;
    uStack_bd = 0xff;
    local_bc = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_b0 = 0x7000007;
    uStack_bb = 0;
    uStack_ba = 0x700;
    uStack_b8 = 0x70000;
    uStack_b4 = 0x700;
    uStack_ab = 0x700;
    local_a8 = 0x700;
    uStack_a4 = 0x7000007;
    uStack_a0 = 0x70000;
    local_9b = 7;
    local_d6 = uVar11;
    local_e8 = 0xffff;
    local_f0 = 0xffffffffffffffff;
    lVar33 = *(long *)(param_1 + 0x28);
    local_c8 = (ushort)uVar29;
    uStack_c6 = uVar14;
    uStack_c5 = uVar15;
    uVar17 = FUN_01679490(*(undefined8 *)(lVar33 + 8));
    uStack_be = (undefined1)uVar17;
    uStack_bd = (undefined1)((ushort)uVar17 >> 8);
    FUN_01679498(*(undefined8 *)(lVar33 + 0x10),&local_e0,&local_c8,&local_f0);
    FUN_0107a750(*(undefined8 *)(param_1 + 0x38),uVar29,uVar29,iVar6,plVar23,&local_120);
    FUN_0107a750(*(undefined8 *)(param_1 + 0x38),sVar7,uVar29,iVar6,plVar23,&local_108);
    uVar22 = FUN_0298ac08(param_1,plVar23,&local_108);
    if ((uVar22 & 0xff) == 0) {
      sVar31 = sVar7;
      uVar11 = uVar8;
      goto LAB_02e335ec;
    }
    FUN_0298aa30(param_1,plVar23,local_108 & 0xffff,uVar22);
    bVar12 = FUN_01705670(param_1,plVar23,uVar29,auStack_1d0);
    uVar18 = 0;
    *(ulong *)(param_2 + 2) = local_108;
    *(ulong *)(param_2 + 4) = CONCAT35(local_fb,CONCAT23(uStack_fd,CONCAT12(local_fe,uStack_100)));
    *(ulong *)((long)param_2 + 0x15) = CONCAT17((undefined1)uStack_f4,CONCAT43(uStack_f8,local_fb));
    bVar12 = bVar12 & 1;
    *(undefined1 *)(param_2 + 8) = uVar8;
  }
LAB_02e337a0:
  *(byte *)((long)param_2 + 5) = bVar12;
  *(undefined1 *)(param_2 + 1) = 0;
LAB_02e337a8:
  *param_2 = uVar18;
  return;
}


