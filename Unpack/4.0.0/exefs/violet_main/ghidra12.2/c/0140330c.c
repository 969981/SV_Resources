/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0140330c; name: FUN_0140330c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0140330c(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long *plVar15;
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  undefined1 auStack_b0 [96];
  long *local_50;
  undefined8 uStack_48;
  
  local_50 = (long *)0x0;
  uStack_48 = 0;
  FUN_00d0a71c(&local_50,param_3);
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047d8c78;
  if (lVar12 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar13 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar13;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar15 = param_1 + 5;
  *plVar15 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar15);
  puVar1 = PTR_DAT_047ddaf8;
  *param_1 = (long)(PTR_DAT_047ddaf8 + 0x10);
  param_1[4] = (long)(puVar1 + 0xc0);
  *plVar15 = (long)(puVar1 + 0x110);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[8] = (long)&DAT_cbf29ce484222645;
  param_1[9] = (long)&DAT_03c886bc;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  FUN_00d0a71c(param_1 + 0xc,&local_50);
  plVar15 = local_50;
  if (local_50 != (long *)0x0) {
    plVar2 = local_50 + 3;
    do {
      sVar4 = (short)*plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(short *)plVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_50 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_d0 = (undefined1 *)*plVar15;
        FUN_00c44438(lVar12 + 0x8040,&local_d0);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *param_1 = (long)&PTR_FUN_045a9cc8;
  param_1[4] = (long)&PTR_LAB_045a9d78;
  param_1[5] = (long)&DAT_045a9dc8;
  lVar12 = *param_2;
  param_1[0x16] = lVar12;
  if ((lVar12 != 0) && (*(long *)(lVar12 + 8) != 0)) {
    plVar15 = (long *)(lVar12 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  param_1[0x1a] = 0x42c800003f800000;
  lVar8 = _UNK_03cabe68;
  lVar7 = _DAT_03cabe60;
  lVar13 = _UNK_03caa5b8;
  lVar12 = _DAT_03caa5b0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  param_1[0x21] = lVar8;
  param_1[0x20] = lVar7;
  param_1[0x1d] = lVar13;
  param_1[0x1c] = lVar12;
  param_1[0x1f] = lVar8;
  param_1[0x1e] = lVar7;
  param_1[0x5e] = 0x3f4ccccd3f000000;
  param_1[0x29] = lVar8;
  param_1[0x28] = lVar7;
  lVar10 = _UNK_03cabe58;
  lVar9 = _DAT_03cabe50;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = lVar10;
  param_1[0x56] = lVar9;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = lVar10;
  param_1[0x5c] = lVar9;
  param_1[0x5f] = 0x83e4ccccd;
  lVar8 = _UNK_03caa988;
  lVar7 = _DAT_03caa980;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined2 *)(param_1 + 0x66) = 0;
  param_1[99] = lVar10;
  param_1[0x62] = lVar9;
  param_1[0x65] = lVar8;
  param_1[100] = lVar7;
  *(undefined8 *)((long)param_1 + 0x334) = 0x428c0000;
  *(undefined4 *)((long)param_1 + 0x33c) = 0x3f000000;
  param_1[0x68] = -1;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  FUN_014038b8(param_1 + 0x7b);
  *(undefined2 *)(param_1 + 0x90) = 0x200;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)((long)param_1 + 0x484) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  param_1[0x93] = lVar13;
  param_1[0x92] = lVar12;
  *(undefined4 *)((long)param_1 + 0x53c) = 0;
  param_1[0xa8] = 0x5f7ffff05f7ffff0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  puVar1 = PTR_DAT_047ddb00 + 0x10;
  param_1[0xa6] = (long)puVar1;
  param_1[0xaa] = (long)(param_1 + 0xae);
  param_1[0xab] = -0x7ffffff600000000;
  FUN_00c7a7ac();
  *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) | 0x40;
  *(undefined1 *)(param_1 + 0x14f) = 0;
  *(undefined4 *)((long)param_1 + 0xa7c) = 0;
  param_1[0x150] = 0x5f7ffff05f7ffff0;
  *(undefined1 *)(param_1 + 0x151) = 0;
  param_1[0x14e] = (long)puVar1;
  param_1[0x152] = (long)(param_1 + 0x156);
  param_1[0x153] = -0x7ffffff600000000;
  FUN_00c7a7ac();
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(byte *)(param_1 + 0x14f) = *(byte *)(param_1 + 0x14f) | 0x40;
  local_d0 = &LAB_02b74350;
  local_c8 = FUN_02b7435c;
  local_c0 = FUN_02b74360;
  local_b8 = &LAB_02b74364;
  pcVar14 = (code *)param_1[0x2f];
  if (pcVar14 == (code *)0x0) {
LAB_01403678:
    (*local_c0)(auStack_b0,param_1 + 0x32);
    param_1[0x31] = (long)local_b8;
    param_1[0x2e] = (long)local_d0;
    param_1[0x2f] = (long)local_c8;
    param_1[0x30] = (long)local_c0;
  }
  else {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    (*pcVar14)(param_1 + 0x32);
    if (local_c0 != (code *)0x0) goto LAB_01403678;
  }
  pcVar14 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar14)(auStack_b0);
  }
  local_d0 = &LAB_02b74368;
  local_c8 = FUN_02b743a8;
  local_c0 = FUN_02b743ac;
  local_b8 = &LAB_02b743b0;
  pcVar14 = (code *)param_1[0x3f];
  if (pcVar14 != (code *)0x0) {
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    (*pcVar14)(param_1 + 0x42);
    if (local_c0 == (code *)0x0) goto LAB_01403738;
  }
  (*local_c0)(auStack_b0,param_1 + 0x42);
  param_1[0x41] = (long)local_b8;
  param_1[0x3e] = (long)local_d0;
  param_1[0x3f] = (long)local_c8;
  param_1[0x40] = (long)local_c0;
LAB_01403738:
  pcVar14 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar14)(auStack_b0);
  }
  return;
}


