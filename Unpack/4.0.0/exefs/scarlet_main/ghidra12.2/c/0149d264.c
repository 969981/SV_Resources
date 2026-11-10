/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0149d264; name: FUN_0149d264
 */


void FUN_0149d264(long *param_1,int *param_2)

{
  ushort uVar1;
  uint *__s;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  short *psVar20;
  ushort *puVar21;
  long lVar22;
  undefined8 local_128;
  char *pcStack_120;
  undefined8 local_118;
  long *local_110;
  short *local_108;
  short *local_100;
  long local_f8;
  long *plStack_f0;
  short *local_d0;
  short *local_c8;
  long local_c0;
  long *plStack_b8;
  ushort *local_98;
  ushort *local_90;
  long local_88;
  long *plStack_80;
  
  puVar8 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar8 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) {
    puVar21 = (ushort *)0x0;
  }
  else {
    puVar21 = *(ushort **)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045413c8;
  param_1[1] = (long)puVar21;
  param_1[4] = (long)&PTR_LAB_04541400;
  memset(param_1 + 6,0,0xd8);
  memset(param_1 + 0x22,0,0x6c);
  *(undefined8 *)((long)param_1 + 0x17c) = 1;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 1;
  param_1[0x32] = 0;
  *(undefined8 *)((long)param_1 + 0x195) = 0;
  param_1[0x3a] = 0x100000000;
  param_1[0x3b] = 0;
  __s = (uint *)((long)param_1 + 0xccc);
  *(undefined1 *)((long)param_1 + 0x19d) = 1;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)((long)param_1 + 0x1e2) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x1ed) = 0;
  param_1[0x40] = (long)&DAT_cbf29ce484222645;
  param_1[0x46] = (long)&DAT_cbf29ce484222645;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x41] = (long)&DAT_03c886bc;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = (long)&DAT_03c886bc;
  param_1[0x4e] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 1;
  *(undefined4 *)((long)param_1 + 0x29c) = 0;
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  *(undefined8 *)((long)param_1 + 0x294) = 0;
  *(undefined8 *)((long)param_1 + 0x27c) = 0;
  *(undefined8 *)((long)param_1 + 0x284) = 0;
  *(undefined1 *)(param_1 + 0x54) = 1;
  *(undefined1 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
  *(undefined4 *)((long)param_1 + 0x2ad) = 0x1010001;
  *(undefined1 *)((long)param_1 + 0x2b1) = 1;
  param_1[0x57] = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x2cc) = 1;
  param_1[0x2d9] = 0;
  memset(param_1 + 0x5a,0,0x9fa);
  memset(__s,0,0x9fa);
  *(undefined4 *)(param_1 + 0x2e2) = 0xffffffff;
  param_1[0x2da] = -1;
  param_1[0x2db] = -1;
  param_1[0x2dc] = -1;
  param_1[0x2dd] = -1;
  param_1[0x2de] = -1;
  param_1[0x2df] = 0;
  param_1[0x2e0] = 0;
  param_1[0x2e1] = 0;
  *(undefined1 *)((long)param_1 + 0x1714) = 0;
  *(undefined4 *)(param_1 + 0x2e3) = 1;
  param_1[0x2f4] = 0;
  param_1[0x2f5] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  param_1[0x304] = 0;
  param_1[0x305] = 0;
  param_1[0x306] = 0;
  param_1[0x307] = 0;
  param_1[0x314] = 0;
  param_1[0x315] = 0;
  param_1[0x316] = 0;
  param_1[0x317] = 0;
  param_1[0x324] = 0;
  param_1[0x325] = 0;
  param_1[0x326] = 0;
  param_1[0x327] = 0;
  param_1[0x337] = 0;
  param_1[0x336] = 0;
  param_1[0x335] = 0;
  param_1[0x334] = 0;
  param_1[0x347] = 0;
  param_1[0x346] = 0;
  param_1[0x345] = 0;
  param_1[0x344] = 0;
  *(undefined2 *)(param_1 + 0x354) = 0;
  *(undefined4 *)((long)param_1 + 0x173c) = 0;
  *(undefined8 *)((long)param_1 + 0x172c) = 0;
  *(undefined8 *)((long)param_1 + 0x1734) = 0;
  *(undefined8 *)((long)param_1 + 0x171c) = 0;
  *(undefined8 *)((long)param_1 + 0x1724) = 0;
  *(int *)((long)param_1 + 0x284) = *param_2;
  *(int *)((long)param_1 + 0x29c) = param_2[1];
  *(int *)(param_1 + 0x53) = param_2[0x5c];
  *(int *)((long)param_1 + 0x2cc) = param_2[2];
  *(char *)(param_1 + 0x5a) = (char)param_2[0x12];
  *(undefined1 *)((long)param_1 + 0x2d2) = *(undefined1 *)((long)param_2 + 0x49);
  local_98 = puVar21;
  lVar11 = FUN_01409590(&local_d0,puVar21,&local_98);
  if (lVar11 != 0) {
    lVar22 = *(long *)(lVar11 + 0x30);
    if (*(long *)(lVar22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar20 = (short *)(lVar22 + 0x1a);
    do {
      sVar3 = *psVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar20,0x10);
      if (bVar5) {
        *psVar20 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar14;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
      pcVar15 = "count != 0";
      pcVar16 = "AddReference";
      pcVar17 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar18 = "Reference counter overflows.";
      goto LAB_0149dbe4;
    }
  }
  plVar12 = (long *)param_1[0x38];
  param_1[0x38] = 0;
  if (plVar12 != (long *)0x0) {
    lVar22 = plVar12[6];
    psVar20 = (short *)(lVar22 + 0x1a);
    do {
      sVar3 = *psVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar20,0x10);
      if (bVar5) {
        *psVar20 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0x38] = lVar11;
  *(undefined4 *)(param_1 + 0x21) = 1;
  if (*param_2 != 3) {
    return;
  }
  if (((*PTR_DAT_047d4568 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar10 != 0)) {
    FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4568);
  }
  lVar11 = *(long *)PTR_DAT_047d4570;
  *(long *)PTR_DAT_047d4578 = lVar11;
  plVar12 = *(long **)(lVar11 + 0x50);
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 5;
    do {
      lVar11 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)lVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_00a51ad0(&local_98,plVar12,0);
  for (puVar21 = local_98; puVar21 != local_90; puVar21 = puVar21 + 4) {
    uVar6 = *puVar21 - 1;
    uVar19 = *(uint *)(puVar21 + 2);
    if (uVar6 < 0x352 && (uVar19 & 0xff) < 0x18) {
      lVar11 = ((ulong)uVar6 & 0xffff) * 2 + (ulong)(ushort)uVar6 + (ulong)(uVar19 >> 3 & 0x1f);
      *(byte *)((long)param_1 + lVar11 + 0x2d4) =
           *(byte *)((long)param_1 + lVar11 + 0x2d4) | (byte)(1 << (ulong)(uVar19 & 7));
    }
  }
  FUN_00a51ad0(&local_d0,plVar12,1);
  for (psVar20 = local_d0; psVar20 != local_c8; psVar20 = psVar20 + 4) {
    uVar1 = *psVar20 + 399;
    uVar19 = *(uint *)(psVar20 + 2);
    if (uVar1 < 0x352 && (uVar19 & 0xff) < 0x18) {
      lVar11 = (ulong)uVar1 * 2 + (ulong)uVar1 + (ulong)(uVar19 >> 3 & 0x1f);
      *(byte *)((long)param_1 + lVar11 + 0x2d4) =
           *(byte *)((long)param_1 + lVar11 + 0x2d4) | (byte)(1 << (ulong)(uVar19 & 7));
    }
  }
  FUN_00a51ad0(&local_108,plVar12,2);
  pbVar7 = PTR_DAT_047d4928;
  for (psVar20 = local_108; PTR_DAT_047d4928 = pbVar7, psVar20 != local_100; psVar20 = psVar20 + 4)
  {
    uVar1 = *psVar20 + 599;
    uVar19 = *(uint *)(psVar20 + 2);
    if (uVar1 < 0x352 && (uVar19 & 0xff) < 0x18) {
      lVar11 = (ulong)uVar1 * 2 + (ulong)uVar1 + (ulong)(uVar19 >> 3 & 0x1f);
      *(byte *)((long)param_1 + lVar11 + 0x2d4) =
           *(byte *)((long)param_1 + lVar11 + 0x2d4) | (byte)(1 << (ulong)(uVar19 & 7));
    }
    pbVar7 = PTR_DAT_047d4928;
  }
  local_128 = 0xd829ae6584284137;
  pcStack_120 = "FSYS_DLC2_POKEDEX_ADD";
  local_118 = 0x15;
  local_110 = (long *)0x0;
  if (((*pbVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar7), iVar10 != 0)) {
    FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4928);
  }
  puVar9 = PTR_DAT_047d4938;
  puVar8 = PTR_DAT_047d4930;
  lVar11 = *(long *)PTR_DAT_047d4930;
  *(long *)PTR_DAT_047d4938 = lVar11;
  uVar13 = FUN_00fb1cf4(&local_128,lVar11 + 0x198);
  if (local_110 == (long *)0x0) {
    if ((uVar13 & 1) != 0) goto LAB_0149d7b4;
LAB_0149d7d0:
    local_128 = 0x20591e9a4877db86;
    pcStack_120 = "FSYS_DLC1_POKEDEX_ADD";
    local_118 = 0x15;
    local_110 = (long *)0x0;
    if (((*pbVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar10 != 0)) {
      FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4928);
    }
    lVar11 = *(long *)puVar8;
    *(long *)puVar9 = lVar11;
    uVar13 = FUN_00fb1cf4(&local_128,lVar11 + 0x198);
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x20))();
    }
    if ((uVar13 & 1) == 0) {
      uVar19 = *__s | 1;
    }
    else {
      uVar19 = *__s | 2;
    }
  }
  else {
    (**(code **)(*local_110 + 0x20))();
    if ((uVar13 & 1) == 0) goto LAB_0149d7d0;
LAB_0149d7b4:
    uVar19 = *__s | 4;
  }
  *__s = uVar19;
  if (local_108 != (short *)0x0) {
    local_100 = local_108;
    uVar13 = (**(code **)(*plStack_f0 + 0xf8))(plStack_f0);
    if (((uVar13 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plStack_f0 + 0x18))(plStack_f0,local_108,local_f8 - (long)local_108,4);
    }
    else {
      FUN_00c48fe8(plStack_f0,local_108,local_f8 - (long)local_108,4);
    }
  }
  if (local_d0 != (short *)0x0) {
    local_c8 = local_d0;
    uVar13 = (**(code **)(*plStack_b8 + 0xf8))(plStack_b8);
    if (((uVar13 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plStack_b8 + 0x18))(plStack_b8,local_d0,local_c0 - (long)local_d0,4);
    }
    else {
      FUN_00c48fe8(plStack_b8,local_d0,local_c0 - (long)local_d0,4);
    }
  }
  puVar21 = local_98;
  if (local_98 != (ushort *)0x0) {
    local_90 = local_98;
    lVar11 = local_88 - (long)local_98;
    uVar13 = (**(code **)(*plStack_80 + 0xf8))(plStack_80);
    if (((uVar13 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
      (**(code **)(*plStack_80 + 0x18))(plStack_80,puVar21,lVar11,4);
    }
    else {
      FUN_00c48fe8(plStack_80,puVar21,lVar11,4);
    }
  }
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 5;
    do {
      lVar11 = *plVar2;
      iVar10 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar11 == 0) {
      pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar16 = "DecrementReferenceInternal";
      pcVar17 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
      ;
      pcVar18 = "Reference counter underflows.";
LAB_0149dbe4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar15,pcVar16,pcVar17,0x58,pcVar18);
    }
  }
  return;
}


