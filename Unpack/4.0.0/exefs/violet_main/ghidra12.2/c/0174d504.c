/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0174d504; name: FUN_0174d504
 */


void FUN_0174d504(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  void *__src;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  void *__dest;
  long lVar10;
  void *__src_00;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  void *__dest_00;
  size_t __n;
  undefined1 auStack_1c0 [96];
  undefined1 *local_160;
  code *local_158;
  code *local_150;
  undefined1 *local_148;
  undefined8 *apuStack_140 [12];
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  undefined8 *apuStack_c0 [12];
  
  FUN_0104c068();
  param_1[0x4a] = 0;
  *param_1 = &DAT_04598ea0;
  param_1[4] = &PTR_LAB_04599030;
  param_1[5] = &DAT_04599080;
  param_1[0x27] = &PTR_LAB_045990d8;
  param_1[0x28] = &PTR_LAB_04599110;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  param_1[0x29] = 0;
  param_1[0xeb] = &DAT_cbf29ce484222645;
  param_1[0xec] = &DAT_03c886bc;
  param_1[0xee] = 0;
  param_1[0xed] = 0;
  param_1[0xef] = &DAT_cbf29ce484222645;
  param_1[0xf0] = &DAT_03c886bc;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = &DAT_cbf29ce484222645;
  param_1[0x24] = &DAT_03c886bc;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((long)param_1 + 0x7ac) = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf9] = &DAT_cbf29ce484222645;
  param_1[0xfa] = &DAT_03c886bc;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfd] = &DAT_cbf29ce484222645;
  param_1[0xfe] = &DAT_03c886bc;
  param_1[0x100] = 0;
  param_1[0xff] = 0;
  param_1[0x101] = &DAT_cbf29ce484222645;
  param_1[0x102] = &DAT_03c886bc;
  param_1[0x104] = 0;
  param_1[0x103] = 0;
  param_1[0x105] = &DAT_cbf29ce484222645;
  param_1[0x106] = &DAT_03c886bc;
  param_1[0x108] = 0;
  param_1[0x107] = 0;
  param_1[0x109] = &DAT_cbf29ce484222645;
  param_1[0x10a] = &DAT_03c886bc;
  *(undefined1 *)(param_1 + 0x10f) = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  FUN_0174e690(&local_e0,param_1[1]);
  puVar6 = local_e0;
  local_e0 = (undefined1 *)0x0;
  lVar10 = param_1[0x118];
  param_1[0x118] = puVar6;
  if (lVar10 == 0) {
    param_1[0x11b] = local_c8;
    param_1[0x11a] = local_d0;
    param_1[0x119] = local_d8;
    local_e0 = (undefined1 *)0x0;
  }
  else {
    FUN_019442b4(param_1 + 0x119);
    puVar6 = local_e0;
    param_1[0x11b] = local_c8;
    param_1[0x11a] = local_d0;
    param_1[0x119] = local_d8;
    local_e0 = (undefined1 *)0x0;
    if (puVar6 != (undefined1 *)0x0) {
      FUN_019442b4(&local_d8);
    }
  }
  *(undefined8 *)((long)param_1 + 0x8e4) = 0;
  param_1[0x11e] = 0;
  param_1[0x120] = 0;
  *(undefined4 *)(param_1 + 0x121) = 0;
  memset(param_1 + 0x122,0,0x60);
  param_1[0x12e] = &DAT_cbf29ce484222645;
  param_1[0x12f] = &DAT_03c886bc;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  *(undefined4 *)(param_1 + 0x133) = 0;
  FUN_0174e0f0(param_1 + 0x134);
  FUN_0174e200(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  param_1[0x142] = 0x3e99999a00000000;
  param_1[0x143] = 0x3f0ccccd3ecccccd;
  param_1[0x144] = 0x30000002d;
  param_1[0x145] = 0x100000001;
  param_1[0x146] = 0x200000000a;
  *(undefined4 *)(param_1 + 0x147) = 0x20;
  param_1[0x148] = &DAT_cbf29ce484222645;
  param_1[0x149] = &DAT_03c886bc;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  FUN_0104bf58(param_1 + 0x14c);
  FUN_01517970(param_1 + 0x150);
  FUN_01517a80(param_1 + 0x154);
  FUN_0174e420(param_1 + 0x158);
  FUN_0174e310(param_1 + 0x15c);
  *(undefined1 *)(param_1 + 0x160) = 1;
  *(undefined8 *)((long)param_1 + 0xb04) = 0;
  *(undefined8 *)((long)param_1 + 0xb0c) = 0;
  *(undefined2 *)((long)param_1 + 0xb14) = 1;
  *(undefined1 *)((long)param_1 + 0xb16) = 0;
  param_1[0x166] = 0;
  param_1[0x164] = 0;
  *(undefined8 *)((long)param_1 + 0xb25) = 0;
  plVar11 = (long *)param_1[1];
  param_1[0x163] = 0;
  *(undefined4 *)(param_1 + 0x167) = 0;
  *(undefined2 *)((long)param_1 + 0xb3c) = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = plVar11;
  param_1[0x16d] = 0x3fffffffffffffff;
  param_1[0x16e] = 0;
  *(undefined4 *)(param_1 + 0x16f) = 0;
  *(undefined1 *)(param_1 + 0x11f) = 0;
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  param_1[0x11c] = 0;
  memset(param_1 + 0x170,0,0xfc);
  plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x30,8);
  if (plVar8 == (long *)0x0) {
    plVar11 = (long *)0x0;
    uVar16 = 0;
    uVar14 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0174e0a4;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar11;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar8[4] = 0;
    plVar8[5] = 0;
    puVar5 = PTR_DAT_047dd1d8;
    plVar8[2] = 0;
    plVar8[3] = 0;
    *(undefined4 *)(plVar8 + 5) = 0;
    *plVar8 = (long)(puVar5 + 0x10);
    plVar8[1] = 0;
    *(undefined1 *)((long)plVar8 + 0x2c) = 1;
    uVar14 = 8;
    uVar16 = 0x30;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  lVar10 = param_1[0x126];
  param_1[0x126] = plVar8;
  if (lVar10 != 0) {
    FUN_0174ec70(param_1 + 0x127);
  }
  pcVar12 = (code *)param_1[1];
  param_1[0x127] = plVar11;
  param_1[0x128] = uVar16;
  param_1[0x129] = uVar14;
  puVar9 = (undefined8 *)(**(code **)(*(long *)pcVar12 + 0x10))(pcVar12,0x10,8);
  if (puVar9 == (undefined8 *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0174e0a4;
    *(code **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = pcVar12;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *puVar9 = 0;
    puVar9[1] = 0;
    local_d0 = (code *)0x10;
    local_c8 = (undefined1 *)0x8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    local_d8 = pcVar12;
  }
  local_e0 = (undefined1 *)0x0;
  lVar10 = param_1[0x12a];
  param_1[0x12a] = puVar9;
  if (lVar10 == 0) {
    param_1[0x12d] = local_c8;
    param_1[300] = local_d0;
    param_1[299] = local_d8;
    local_e0 = (undefined1 *)0x0;
  }
  else {
    FUN_017a0d80(param_1 + 299);
    puVar6 = local_e0;
    param_1[0x12d] = local_c8;
    param_1[300] = local_d0;
    param_1[299] = local_d8;
    local_e0 = (undefined1 *)0x0;
    if (puVar6 != (undefined1 *)0x0) {
      FUN_017a0d80(&local_d8);
    }
  }
  *(undefined8 **)(param_1[0x12a] + 8) = param_1 + 0x28;
  lVar10 = FUN_01517f94(&local_e0,param_1[1]);
  if (lVar10 != 0) {
    lVar13 = *(long *)(lVar10 + 0x30);
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar14;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar8 = (long *)param_1[0x120];
  param_1[0x120] = 0;
  if (plVar8 != (long *)0x0) {
    lVar13 = plVar8[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  pcVar12 = (code *)param_1[1];
  param_1[0x120] = lVar10;
  puVar9 = (undefined8 *)(**(code **)(*(long *)pcVar12 + 0x10))(pcVar12,0x78,8);
  if (puVar9 == (undefined8 *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_0174e0a4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(code **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = pcVar12;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *(undefined4 *)(puVar9 + 7) = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = pcVar12;
    puVar9[5] = 0x555555555555555;
    puVar9[6] = 0;
    *puVar9 = &PTR_LAB_04599158;
    puVar9[1] = 0;
    puVar15 = puVar9 + 8;
    *puVar15 = pcVar12;
    puVar9[9] = 0x555555555555555;
    puVar9[10] = 0;
    puVar9[0xb] = puVar9[7];
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    __dest = (void *)(**(code **)(*(long *)*puVar15 + 0x10))((long *)*puVar15,0x1800,0x10);
    if (__dest == (void *)0x0) {
      (**(code **)(*(long *)*puVar15 + 0xe8))();
    }
    __src = (void *)puVar9[0xc];
    lVar13 = puVar9[0xd];
    __dest_00 = __dest;
    if ((__src != (void *)0x0) && (lVar13 != 0)) {
      memmove(__dest,__src,lVar13 * 0x30);
      __dest_00 = (void *)((long)__dest + lVar13 * 0x30);
    }
    if (__src != (void *)0x0) {
      if (puVar9[0xd] != lVar13) {
        __src_00 = (void *)((long)__src + lVar13 * 0x30);
        __n = (long)__src + (puVar9[0xd] * 0x30 - (long)__src_00);
        memmove(__dest_00,__src_00,__n);
        __dest_00 = (void *)((long)__dest_00 + __n);
      }
      FUN_01526d7c(puVar15,puVar9[0xc],puVar9[0xe]);
    }
    puVar9[0xc] = __dest;
    puVar9[0xd] = ((long)__dest_00 - (long)__dest >> 4) * -0x5555555555555555;
    puVar9[0xe] = 0x80;
    local_d0 = (code *)0x78;
    local_c8 = (undefined1 *)0x8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    local_d8 = pcVar12;
  }
  local_e0 = (undefined1 *)0x0;
  lVar10 = param_1[0x114];
  param_1[0x114] = puVar9;
  if (lVar10 != 0) {
    FUN_0174f024(param_1 + 0x115);
  }
  param_1[0x116] = local_d0;
  param_1[0x117] = local_c8;
  param_1[0x115] = local_d8;
  FUN_0174e530(&local_e0,param_1[1]);
  puVar6 = local_e0;
  local_e0 = (undefined1 *)0x0;
  lVar10 = param_1[0x122];
  param_1[0x122] = puVar6;
  if (lVar10 == 0) {
    param_1[0x125] = local_c8;
    param_1[0x124] = local_d0;
    param_1[0x123] = local_d8;
    local_e0 = (undefined1 *)0x0;
  }
  else {
    FUN_0174e8ac(param_1 + 0x123);
    puVar6 = local_e0;
    param_1[0x125] = local_c8;
    param_1[0x124] = local_d0;
    param_1[0x123] = local_d8;
    local_e0 = (undefined1 *)0x0;
    if (puVar6 != (undefined1 *)0x0) {
      FUN_0174e8ac(&local_d8);
    }
  }
  param_1[0x168] = 0;
  *(undefined2 *)((long)param_1 + 0xb3c) = 0;
  *(undefined4 *)(param_1 + 0x167) = 0;
  FUN_0155e550(param_1,0x400);
  pcVar12 = (code *)param_1[0x6b];
  local_d0 = FUN_02b34a8c;
  local_e0 = &LAB_02b34a64;
  local_d8 = FUN_02b34a88;
  local_c8 = &LAB_02b34a98;
  apuStack_c0[0] = param_1;
  if (pcVar12 == (code *)0x0) {
LAB_0174dbe0:
    (*local_d0)(apuStack_c0,param_1 + 0x6e);
    param_1[0x6d] = local_c8;
    param_1[0x6a] = local_e0;
    param_1[0x6b] = local_d8;
    param_1[0x6c] = local_d0;
  }
  else {
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    (*pcVar12)(param_1 + 0x6e);
    if (local_d0 != (code *)0x0) goto LAB_0174dbe0;
  }
  pcVar12 = (code *)param_1[0x7b];
  local_160 = &LAB_02b34aa4;
  local_158 = FUN_02b34ac0;
  local_150 = FUN_02b34ac4;
  local_148 = &LAB_02b34ad0;
  apuStack_140[0] = param_1;
  if (pcVar12 != (code *)0x0) {
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    (*pcVar12)(param_1 + 0x7e);
    if (local_150 == (code *)0x0) goto LAB_0174dc88;
  }
  (*local_150)(apuStack_140,param_1 + 0x7e);
  param_1[0x7d] = local_148;
  param_1[0x7a] = local_160;
  param_1[0x7b] = local_158;
  param_1[0x7c] = local_150;
LAB_0174dc88:
  pcVar12 = (code *)param_1[0x8b];
  if (pcVar12 != (code *)0x0) {
    param_1[0x8c] = 0;
    param_1[0x8d] = 0;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    (*pcVar12)(param_1 + 0x8e);
  }
  FUN_02b34ae4(auStack_1c0,param_1 + 0x8e);
  param_1[0x8d] = &LAB_02b34ae8;
  param_1[0x8a] = &LAB_02b34adc;
  param_1[0x8b] = FUN_02b34ae0;
  param_1[0x8c] = FUN_02b34ae4;
  pcVar12 = (code *)param_1[0xdb];
  if (pcVar12 != (code *)0x0) {
    param_1[0xdc] = 0;
    param_1[0xdd] = 0;
    param_1[0xda] = 0;
    param_1[0xdb] = 0;
    (*pcVar12)(param_1 + 0xde);
  }
  param_1[0xda] = &LAB_02b34aec;
  param_1[0xdb] = &LAB_02b34cd0;
  param_1[0xde] = param_1;
  param_1[0xdc] = &LAB_02b34cd4;
  param_1[0xdd] = &LAB_02b34ce0;
  FUN_02b34ae0(auStack_1c0);
  pcVar12 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (code *)0x0;
    local_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar12)(apuStack_140);
  }
  pcVar12 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar12)(apuStack_c0);
  }
  return;
}


