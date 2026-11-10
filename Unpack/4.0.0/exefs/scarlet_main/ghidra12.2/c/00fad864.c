/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fad864; name: FUN_00fad864
 */


void FUN_00fad864(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined1 auVar15 [16];
  long *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar10 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar14 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar14;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar11 = param_1 + 5;
  *plVar11 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar11);
  plVar13 = param_1 + 8;
  *plVar13 = 0;
  *param_1 = (long)&DAT_0459c0f8;
  param_1[4] = (long)&PTR_LAB_0459c170;
  *plVar11 = (long)&DAT_0459c1c0;
  param_1[9] = 0;
  FUN_00fadd6c(param_1 + 10);
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x29] = -1;
  param_1[0x2a] = 0;
  (*DAT_04859f60)(&local_158,&DAT_04859f80);
  if (local_158 != (long *)0x0) {
    plVar11 = local_158 + 5;
    do {
      lVar10 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == -1) goto LAB_00fadd40;
  }
  plVar11 = (long *)*plVar13;
  *plVar13 = (long)local_158;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 5;
    do {
      lVar10 = *plVar1;
      iVar9 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00fadc50;
  }
  if (local_158 != (long *)0x0) {
    plVar11 = local_158 + 5;
    do {
      lVar10 = *plVar11;
      iVar9 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_158 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00fadc50;
  }
  if (*param_3 != 0) {
    lVar10 = FUN_00eb5f00(&local_158,param_2,param_3);
    if (lVar10 != 0) {
      piVar2 = (int *)(lVar10 + 0x28);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == -1) goto LAB_00fadd40;
    }
    plVar11 = (long *)param_1[9];
    param_1[9] = 0;
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 5;
      do {
        lVar14 = *plVar1;
        iVar9 = (int)lVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_00fadc50;
    }
    param_1[9] = lVar10;
    FUN_00eb6400(lVar10);
    FUN_00d100a8(param_1[9]);
    puVar12 = (undefined8 *)
              FUN_00c516a0(*(undefined8 *)(*(long *)(param_1[8] + 0x30) + 0x6120),param_1[9] + 0xf0)
    ;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00d8d0ac(param_1 + 10,*puVar12,0,0x1f);
    }
  }
  local_158 = (long *)0x100000001;
  uStack_150 = 0;
  local_148 = 0x3f800000;
  uStack_140 = 0x447a0000;
  local_114 = 0;
  local_138 = 0x700000000;
  uStack_130 = 0x700000007;
  local_118 = 8;
  local_128 = 0;
  uStack_120 = 0;
  lVar10 = *(long *)(param_1[8] + 0x30);
  local_80 = *(ulong *)(lVar10 + 8);
  uStack_78 = *(undefined8 *)(lVar10 + 0x6098);
  local_70 = lVar10 + 0x10;
  auVar15 = FUN_00d07784(*(undefined8 *)(lVar10 + 0x6160),&local_80,&local_158);
  *(undefined1 (*) [16])(param_1 + 0x27) = auVar15;
  if ((auVar15._8_8_ != 0) && ((auVar15._0_8_ & 0xff) != 0)) {
    FUN_00f1d9f4(*(long *)(*(long *)(*plVar13 + 0x30) + 0x6160) + 0x110,param_1 + 0x29,
                 *(undefined4 *)(auVar15._8_8_ + 0x68));
  }
  lVar10 = FUN_00fac5e8(&local_80,param_2,plVar13);
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x28);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == -1) {
LAB_00fadd40:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar13 = (long *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 5;
    do {
      lVar14 = *plVar11;
      iVar9 = (int)lVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
    else if ((int)lVar14 == 0) {
LAB_00fadc50:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[0x2a] = lVar10;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  FUN_0145b670(&local_80);
  local_80 = local_80 & 0xfffffffcffffffff;
  FUN_0145b6a4(param_1[0x2a] + 0x80,
               &DAT_00003010 + *(long *)(*(long *)(param_1[0x2a] + 0x30) + 0x30),&local_80);
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_00fab5ec(&local_c0);
  uVar6 = local_c0;
  uVar8 = local_c0._4_2_;
  local_c0._0_3_ = (uint3)(ushort)local_c0;
  uVar7 = local_c0;
  local_c0._6_2_ = SUB82(uVar6,6);
  local_c0._0_4_ = (undefined4)uVar7;
  local_c0 = CONCAT26(local_c0._6_2_,CONCAT24(uVar8,(undefined4)local_c0)) | 0xc00000000;
  FUN_00facacc(param_1[0x2a] + 0x9c,
               &DAT_00003010 + *(long *)(*(long *)(param_1[0x2a] + 0x30) + 0x30),&local_c0);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (undefined8 *)0x0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  FUN_00fab594(&local_f0);
  FUN_00fab56c(&local_110);
  local_f0 = CONCAT71(local_f0._1_7_,1);
  local_d8 = &local_110;
  FUN_00fac4c8(param_1[0x2a],&local_f0);
  return;
}


