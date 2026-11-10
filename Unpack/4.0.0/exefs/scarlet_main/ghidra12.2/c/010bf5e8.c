/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010bf5e8; name: FUN_010bf5e8
 */


void FUN_010bf5e8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  int *piVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  long *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  long local_60;
  undefined1 auStack_58 [8];
  
  param_1[2] = 0;
  puVar4 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar10 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045d6d08;
  param_1[1] = lVar10;
  param_1[4] = (long)&PTR_LAB_045d6da0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[6] = (long)&PTR_LAB_045d6dd0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = lVar10;
  param_1[0xe] = 0x38e38e38e38e38e;
  param_1[0xf] = 0;
  param_1[0x11] = lVar10;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = lVar10;
  param_1[0x15] = lVar10;
  param_1[0x16] = 0x38e38e38e38e38e;
  plVar19 = param_1 + 0x1a;
  *plVar19 = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar10;
  param_1[0x1f] = 0x1fffffffffffffff;
  param_1[0x22] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x25] = lVar10;
  param_1[0x26] = 0x1fffffffffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  plVar17 = param_1 + 0x29;
  *plVar17 = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = lVar10;
  param_1[0x2d] = -1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_010bffc8(param_1 + 0x33);
  param_1[0x38] = 0x700000000;
  *(undefined2 *)(param_1 + 0x39) = 1;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  local_80 = 0x20;
  local_78 = (char *)0x4;
  local_a0 = DAT_0485a0a0;
  lVar10 = FUN_00cf3764(&local_60,DAT_0485a0a0[1],&local_a0);
  lVar7 = 0;
  if (lVar10 != 0) {
    piVar12 = (int *)(lVar10 + 0x28);
    do {
      iVar6 = *piVar12;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 != -1) {
      lVar7 = lVar10;
      goto LAB_010bf774;
    }
LAB_010bfca8:
    pcVar9 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
    ;
LAB_010bfcc8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",pcVar9,0x53,"Reference counter overflows.")
    ;
  }
LAB_010bf774:
  FUN_00d560a0(lVar7,&local_80,2,0,0);
  plVar8 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar7 = *plVar1;
      iVar6 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_010bfc80;
  }
  param_1[9] = lVar10;
  local_80 = 0x31ba1bc894dbac7b;
  local_78 = PTR_s_Morphing_047e1210;
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  local_a0 = (long *)&DAT_bde932403bfe7e1d;
  pcStack_98 = "[BlendShape]";
  local_90 = 0xc;
  local_88 = (long *)0x0;
  lVar7 = param_1[1];
  if (lVar7 == 0) {
    lVar7 = *(long *)(DAT_0485a0d0 + 8);
  }
  local_60 = DAT_0485a0d0;
  lVar7 = FUN_00dfee60(auStack_58,lVar7,&local_60,&local_a0);
  if (lVar7 != 0) {
    piVar12 = (int *)(lVar7 + 0x28);
    do {
      iVar6 = *piVar12;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == -1) {
      pcVar9 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      goto LAB_010bfcc8;
    }
  }
  if (*local_78 != '\0') {
    FUN_00eac828(lVar7,&local_80);
  }
  plVar8 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_010bfc80;
  }
  param_1[8] = lVar7;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  *(undefined4 *)(param_1[8] + 0x100) = 2;
  FUN_00c973e4(*(undefined8 *)(param_1[8] + 200),0);
  lVar7 = *(long *)(DAT_0485a0d8 + 0x38);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x20) + 0x10))();
  }
  local_80 = 0xb4a4d34d1cb955cd;
  local_78 = PTR_s_BlendShape_047e1218;
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  FUN_00eb0610(&local_a0,*(undefined8 *)(lVar7 + 0x40),&local_80);
  lVar10 = FUN_010bf4b8(&local_80,param_1[1],&local_a0);
  if (lVar10 != 0) {
    piVar12 = (int *)(lVar10 + 0x28);
    do {
      iVar6 = *piVar12;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == -1) goto LAB_010bfca8;
  }
  plVar8 = (long *)*plVar19;
  *plVar19 = 0;
  if (plVar8 != (long *)0x0) {
    plVar19 = plVar8 + 5;
    do {
      lVar3 = *plVar19;
      iVar6 = (int)lVar3 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *(int *)plVar19 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar3 == 0) goto LAB_010bfc80;
  }
  param_1[0x1a] = lVar10;
  FUN_00d2c970(param_1 + 0x31,param_2 + 0x1d0);
  uVar18 = (ulong)(param_1[0x32] - param_1[0x31]) >> 3 & 0xffffffff;
  uVar20 = (uint)((ulong)(param_1[0x32] - param_1[0x31]) >> 3);
  uVar14 = uVar18;
  if (3 < uVar20) {
    uVar14 = 4;
  }
  puVar11 = (undefined1 *)param_1[0x1b];
  puVar13 = (undefined1 *)param_1[0x1c];
  uVar16 = (long)puVar13 - (long)puVar11 >> 3;
  if (uVar16 < uVar14) {
    FUN_010bfd08(param_1 + 0x1b,uVar14 - uVar16);
    puVar11 = (undefined1 *)param_1[0x1b];
    puVar13 = (undefined1 *)param_1[0x1c];
  }
  else if (uVar14 < uVar16) {
    puVar13 = puVar11 + uVar14 * 8;
    param_1[0x1c] = (long)puVar13;
  }
  uVar14 = (long)puVar13 - (long)puVar11;
  if ((((0 < (long)uVar14) && (*puVar11 = 0, 8 < uVar14)) && (puVar11[8] = 0, 0x10 < uVar14)) &&
     (((puVar11[0x10] = 0, 0x18 < uVar14 && (puVar11[0x18] = 0, 0x20 < uVar14)) &&
      (puVar11[0x20] = 0, 0x28 < uVar14)))) {
    lVar10 = (uVar14 >> 3) - 4;
    puVar13 = puVar11 + 0x28;
    do {
      lVar10 = lVar10 + -1;
      *puVar13 = 0;
      puVar13 = puVar13 + 8;
    } while (1 < lVar10);
  }
  puVar13 = (undefined1 *)param_1[0x22];
  puVar11 = (undefined1 *)param_1[0x23];
  uVar14 = (long)puVar11 - (long)puVar13 >> 3;
  if (uVar14 < uVar18) {
    FUN_010bfd08(param_1 + 0x22,uVar18 - uVar14);
    puVar13 = (undefined1 *)param_1[0x22];
    puVar11 = (undefined1 *)param_1[0x23];
  }
  else if (uVar18 < uVar14) {
    puVar11 = puVar13 + uVar18 * 8;
    param_1[0x23] = (long)puVar11;
  }
  if (puVar13 != puVar11) {
    uVar14 = ((ulong)(puVar11 + (-8 - (long)puVar13)) >> 3) + 1;
    uVar16 = uVar14 & 3;
    if (puVar11 + (-8 - (long)puVar13) < (undefined1 *)0x18) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      do {
        iVar6 = (int)uVar15;
        *(int *)(puVar13 + 0xc) = iVar6 + 1;
        *(int *)(puVar13 + 4) = iVar6;
        *puVar13 = 1;
        puVar13[8] = 1;
        *(int *)(puVar13 + 0x14) = iVar6 + 2;
        uVar15 = uVar15 + 4;
        puVar13[0x10] = 1;
        *(int *)(puVar13 + 0x1c) = iVar6 + 3;
        puVar13[0x18] = 1;
        puVar13 = puVar13 + 0x20;
      } while ((uVar14 & 0x3ffffffffffffffc) != uVar15);
    }
    if (uVar16 != 0) {
      piVar12 = (int *)(puVar13 + 4);
      lVar10 = -uVar16;
      do {
        *piVar12 = (int)uVar15;
        bVar5 = lVar10 != -1;
        lVar10 = lVar10 + 1;
        uVar15 = (ulong)((int)uVar15 + 1);
        *(undefined1 *)(piVar12 + -1) = 1;
        piVar12 = piVar12 + 2;
      } while (bVar5);
    }
  }
  FUN_00d7684c(plVar17,uVar18,0);
  if (uVar20 != 0) {
    uVar14 = 0;
    do {
      uVar16 = uVar14 >> 6;
      uVar15 = 1L << (uVar14 & 0x3f);
      lVar10 = *plVar17;
      if (*(float *)(*(long *)(param_1[0x31] + uVar14 * 8) + 0x90) == 0.0) {
        uVar15 = *(ulong *)(lVar10 + uVar16 * 8) & (uVar15 ^ 0xffffffffffffffff);
      }
      else {
        uVar15 = *(ulong *)(lVar10 + uVar16 * 8) | uVar15;
      }
      uVar14 = uVar14 + 1;
      *(ulong *)(lVar10 + uVar16 * 8) = uVar15;
    } while (uVar18 != uVar14);
  }
  if (local_a0 != (long *)0x0) {
    plVar17 = local_a0 + 5;
    do {
      lVar10 = *plVar17;
      iVar6 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_010bfc80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x20) + 0x18))((long *)(lVar7 + 0x20));
  }
  return;
}


