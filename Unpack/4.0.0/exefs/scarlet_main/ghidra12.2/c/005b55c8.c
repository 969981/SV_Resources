/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005b55c8; name: FUN_005b55c8
 */


void FUN_005b55c8(long *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  *param_1 = (long)(PTR_DAT_047ce608 + 0x10);
  param_1[1] = param_3;
  lVar18 = param_2[4];
  lVar15 = param_2[1];
  lVar11 = *param_2;
  lVar17 = param_2[3];
  lVar16 = param_2[2];
  param_1[7] = param_2[5];
  param_1[6] = lVar18;
  puVar2 = PTR_DAT_047ce610;
  param_1[3] = lVar15;
  param_1[2] = lVar11;
  param_1[5] = lVar17;
  param_1[4] = lVar16;
  param_1[8] = param_4;
  plVar13 = param_1 + 9;
  *plVar13 = (long)(puVar2 + 0x10);
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = (long)plVar13;
  param_1[0x12] = (long)plVar13;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  plVar1 = param_1 + 0x3e;
  plVar9 = param_1 + 0x7c;
  plVar14 = param_1 + 0xe9;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puVar2 = PTR_DAT_047cbe90 + 0x10;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x29] = 0;
  param_1[0x1a] = (long)puVar2;
  param_1[0x1b] = 0;
  *(undefined8 *)((long)param_1 + 0xdd) = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x33] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  uVar4 = *(undefined1 *)(param_3 + 0x130);
  *(undefined1 *)(param_1 + 0x3d) = uVar4;
  *(undefined1 *)((long)param_1 + 0x1e9) = uVar4;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x43] = 0;
  param_1[0x3e] = (long)(PTR_DAT_047ce618 + 0x10);
  param_1[0x42] = 0;
  param_1[0x49] = (long)plVar1;
  param_1[0x4a] = (long)plVar1;
  param_1[0x4b] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = (long)puVar2;
  param_1[0x55] = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((long)param_1 + 0x29d) = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x6b] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined2 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  *(undefined2 *)(param_1 + 0x83) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)((long)param_1 + 0x42c) = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x88] = 0;
  param_1[0x7c] = (long)(PTR_DAT_047ce3d8 + 0x10);
  *(undefined2 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = (long)plVar9;
  param_1[0x8b] = (long)plVar9;
  param_1[0x8e] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x92) = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x93] = (long)puVar2;
  param_1[0x96] = 0;
  *(undefined2 *)(param_1 + 0x97) = 0;
  *(undefined8 *)((long)param_1 + 0x4a5) = 0;
  param_1[0x94] = 0;
  param_1[0xa2] = 0;
  param_1[0xac] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  *(undefined2 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  puVar3 = PTR_DAT_047ce620 + 0x10;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  param_1[0xb6] = (long)puVar3;
  param_1[0xbd] = (long)(param_1 + 0xb6);
  param_1[0xbe] = (long)(param_1 + 0xb6);
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0xffffffff;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  param_1[0xc6] = (long)puVar2;
  param_1[0xc9] = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined8 *)((long)param_1 + 0x63d) = 0;
  param_1[199] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xdf] = 0;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  param_1[0xe5] = 0;
  param_1[0xe4] = 0;
  puVar3 = PTR_DAT_047ce628 + 0x10;
  *(undefined4 *)((long)param_1 + 0x767) = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0xffffffff;
  param_1[0xf7] = (long)puVar2;
  param_1[0xe9] = (long)puVar3;
  param_1[0xee] = (long)plVar14;
  param_1[0xef] = (long)plVar14;
  param_1[0xf1] = 0;
  param_1[0xf0] = 0;
  param_1[0xf2] = 0;
  param_1[0xf5] = 0;
  param_1[0xf4] = 0;
  *(undefined1 *)(param_1 + 0xf6) = 0;
  param_1[0xfa] = 0;
  *(undefined2 *)(param_1 + 0xfb) = 0;
  *(undefined8 *)((long)param_1 + 0x7c5) = 0;
  param_1[0xf8] = 0;
  param_1[0x106] = 0;
  param_1[0x110] = 0;
  param_1[0x105] = 0;
  param_1[0x104] = 0;
  param_1[0x103] = 0;
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  param_1[0x100] = 0;
  param_1[0xff] = 0;
  param_1[0xfe] = 0;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0x10f] = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  param_1[0x108] = 0;
  param_1[0x118] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  puVar2 = PTR_DAT_047cbb08;
  *(undefined2 *)(param_1 + 0x11a) = 0;
  *(undefined1 *)((long)param_1 + 0x8d2) = 0;
  param_1[0x11b] = 3;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  (**(code **)(**(long **)puVar2 + 0x70))(*(long **)puVar2,param_1 + 0x11d);
  *(long **)(param_4 + 8) = param_1;
  lVar11 = param_1[4];
  plVar8 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  plVar8[2] = 0;
  puVar3 = PTR_DAT_047ce638;
  *plVar8 = (long)(PTR_DAT_047ce630 + 0x10);
  plVar8[1] = 0;
  plVar8[3] = (long)(puVar3 + 0x10);
  plVar8[4] = (long)param_1;
  if (param_1[0x38] == 0) {
    (**(code **)(**(long **)puVar2 + 0x118))(*(long **)puVar2,lVar11);
    param_1[0x38] = lVar11;
    param_1[0x39] = (long)(plVar8 + 3);
    plVar12 = (long *)param_1[0x3a];
    param_1[0x3a] = (long)plVar8;
    if (plVar12 != (long *)0x0) {
      plVar8 = plVar12 + 1;
      do {
        lVar11 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        std::__shared_weak_count::__release_weak();
      }
    }
    param_1[0x3c] = (long)plVar13;
    puVar3 = PTR_LAB_047cbf08;
    puVar10 = (undefined1 *)param_1[1];
    *(undefined4 *)(param_1 + 0x36) = 0;
    param_1[0x35] = (long)puVar3;
    *puVar10 = 1;
    param_1[0x10] = (long)(puVar10 + 0xb0);
    param_1[0x11] = (long)(param_1 + 0x35);
    lVar11 = param_1[4];
    plVar8 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    plVar8[2] = 0;
    puVar7 = PTR_DAT_047ce648;
    *plVar8 = (long)(PTR_DAT_047ce640 + 0x10);
    plVar8[1] = 0;
    plVar8[3] = (long)(puVar7 + 0x10);
    plVar8[4] = (long)param_1;
    if (param_1[0xb1] == 0) {
      (**(code **)(**(long **)puVar2 + 0x118))(*(long **)puVar2,lVar11);
      param_1[0xb1] = lVar11;
      plVar13 = (long *)param_1[0xb3];
      param_1[0xb2] = (long)(plVar8 + 3);
      param_1[0xb3] = (long)plVar8;
      if (plVar13 != (long *)0x0) {
        plVar8 = plVar13 + 1;
        do {
          lVar11 = *plVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
        }
      }
      param_1[0xb5] = (long)plVar9;
      lVar11 = param_1[4];
      param_1[0xae] = (long)puVar3;
      *(undefined4 *)(param_1 + 0xaf) = 0;
      param_1[0x8a] = (long)(param_1 + 0xae);
      plVar9 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
      plVar9[2] = 0;
      puVar7 = PTR_DAT_047ce658;
      *plVar9 = (long)(PTR_DAT_047ce650 + 0x10);
      plVar9[1] = 0;
      plVar9[3] = (long)(puVar7 + 0x10);
      plVar9[4] = (long)param_1;
      if (param_1[0x115] == 0) {
        (**(code **)(**(long **)puVar2 + 0x118))(*(long **)puVar2,lVar11);
        param_1[0x115] = lVar11;
        plVar8 = (long *)param_1[0x117];
        param_1[0x116] = (long)(plVar9 + 3);
        param_1[0x117] = (long)plVar9;
        if (plVar8 != (long *)0x0) {
          plVar9 = plVar8 + 1;
          do {
            lVar11 = *plVar9;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__shared_weak_count::__release_weak();
          }
        }
        param_1[0x119] = (long)plVar14;
        lVar11 = param_1[4];
        param_1[0x112] = (long)puVar3;
        *(undefined4 *)(param_1 + 0x113) = 0;
        param_1[0xee] = (long)(param_1 + 0x112);
        plVar9 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
        plVar9[2] = 0;
        puVar7 = PTR_DAT_047ce668;
        *plVar9 = (long)(PTR_DAT_047ce660 + 0x10);
        plVar9[1] = 0;
        plVar9[3] = (long)(puVar7 + 0x10);
        plVar9[4] = (long)param_1;
        if (param_1[0x70] == 0) {
          (**(code **)(**(long **)puVar2 + 0x118))(*(long **)puVar2,lVar11);
          param_1[0x70] = lVar11;
          plVar14 = (long *)param_1[0x72];
          param_1[0x71] = (long)(plVar9 + 3);
          param_1[0x72] = (long)plVar9;
          if (plVar14 != (long *)0x0) {
            plVar9 = plVar14 + 1;
            do {
              lVar11 = *plVar9;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar6) {
                *plVar9 = lVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              std::__shared_weak_count::__release_weak();
            }
          }
          param_1[0x40] = param_1[1];
          param_1[0x74] = (long)plVar1;
          param_1[0x6d] = (long)puVar3;
          *(undefined4 *)(param_1 + 0x6e) = 0;
          param_1[0x42] = (long)(param_1 + 0x75);
          param_1[0x41] = param_1[1] + 0xe8;
          (**(code **)(**(long **)puVar2 + 0x138))(&local_80);
          param_1[0x46] = lStack_78;
          param_1[0x45] = local_80;
          param_1[0x48] = lStack_68;
          param_1[0x47] = lStack_70;
          param_1[0x49] = (long)(param_1 + 0x6d);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


