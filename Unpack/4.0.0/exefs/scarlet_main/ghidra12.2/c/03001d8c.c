/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03001d8c; name: FUN_03001d8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03001d8c(long param_1,long param_2,int param_3,uint param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  bool bVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 uVar22;
  uint uVar23;
  long *plVar24;
  long *plVar25;
  int *piVar26;
  long lVar27;
  undefined4 *puVar28;
  MutexType *pMVar29;
  undefined8 *puVar30;
  long lVar31;
  long lVar32;
  undefined1 auVar33 [16];
  ulong uVar34;
  long *local_68;
  
  puVar3 = PTR_PTR_047d1a50;
  puVar2 = PTR_DAT_047d1a08;
  plVar1 = (long *)(param_1 + 0x18);
  if (param_3 < *(int *)(param_1 + 0x20)) {
    lVar31 = (long)param_3;
    do {
      lVar32 = *(long *)(*plVar1 + lVar31 * 8);
      FUN_031c34c8(*(long *)(lVar32 + 0x7e0) + 0x20);
      lVar19 = *(long *)(lVar32 + 0x10);
      uVar23 = *(uint *)(lVar32 + 0x6f8);
      if (*(char *)(lVar32 + 0x6ec) != '\0') {
        plVar24 = *(long **)(lVar32 + 0x6f0);
        if ((int)uVar23 < 1) {
          plVar21 = plVar24;
        }
        else {
          uVar5 = uVar23 & 3;
          plVar21 = plVar24;
          if (2 < uVar23 - 1) {
            iVar18 = -(uVar23 & 0xfffffffc);
            do {
              plVar25 = plVar24;
              if (*plVar21 != 0) {
                plVar25 = plVar24 + 1;
                *plVar24 = *plVar21;
              }
              plVar24 = plVar25;
              if (plVar21[1] != 0) {
                plVar24 = plVar25 + 1;
                *plVar25 = plVar21[1];
              }
              plVar25 = plVar24;
              if (plVar21[2] != 0) {
                plVar25 = plVar24 + 1;
                *plVar24 = plVar21[2];
              }
              plVar24 = plVar25;
              if (plVar21[3] != 0) {
                plVar24 = plVar25 + 1;
                *plVar25 = plVar21[3];
              }
              plVar21 = plVar21 + 4;
              iVar18 = iVar18 + 4;
            } while (iVar18 != 0);
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            plVar25 = plVar24;
            if (*plVar21 != 0) {
              plVar25 = plVar24 + 1;
              *plVar24 = *plVar21;
            }
            plVar24 = plVar25;
            plVar21 = plVar21 + 1;
          }
          plVar21 = *(long **)(lVar32 + 0x6f0);
        }
        uVar23 = (uint)((ulong)((long)plVar24 - (long)plVar21) >> 3);
        *(undefined1 *)(lVar32 + 0x6ec) = 0;
      }
      if (uVar23 != 0) {
        if (lVar19 == 0) {
          (**(code **)(**(long **)(lVar32 + 0x6e0) + 0x28))
                    (*(long **)(lVar32 + 0x6e0),*(undefined8 *)(lVar32 + 0x6f0));
        }
        else {
          FUN_031c2998(lVar19,*(undefined8 *)(lVar32 + 0x6f0));
        }
      }
      *(undefined4 *)(lVar32 + 0x6f8) = 0;
      *(undefined4 *)(lVar32 + 0x6e8) = 0;
      if (*(long **)(lVar32 + 0x7e0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar32 + 0x7e0) + 0x10))();
      }
      puVar30 = *(undefined8 **)(lVar32 + 0x10);
      if (puVar30 != (undefined8 *)0x0) {
        if (*(int *)(puVar30 + 0xb) != 0) {
          (**(code **)(*(long *)*puVar30 + 0x28))((long *)*puVar30,puVar30[1]);
          *(undefined4 *)(puVar30 + 0xb) = 0;
        }
        *(undefined4 *)(puVar30 + 2) = 0;
        if ((-1 < (int)*(uint *)((long)puVar30 + 0x14)) && (puVar30[1] != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,puVar30[1],(ulong)*(uint *)((long)puVar30 + 0x14) << 3);
        }
        puVar30[1] = 0;
        *(undefined4 *)((long)puVar30 + 0x14) = 0x80000000;
        (**(code **)(puVar2 + 8))(0,puVar30,0);
      }
      *(undefined8 *)(lVar32 + 0x10) = 0;
      lVar19 = *(long *)(*plVar1 + lVar31 * 8);
      if (lVar19 != 0) {
        FUN_03001af8(lVar19);
        (**(code **)(puVar2 + 8))(0,lVar19,0);
      }
      lVar31 = lVar31 + 1;
      iVar18 = *(int *)(param_1 + 0x20);
    } while (lVar31 < iVar18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < param_3) {
      FUN_03002a20(plVar1,(long)param_3);
      iVar18 = *(int *)(param_1 + 0x20);
    }
    if ((iVar18 < param_3) || (param_3 < iVar18)) {
      *(int *)(param_1 + 0x20) = param_3;
    }
  }
  puVar2 = PTR_DAT_047d1a08;
  puVar28 = *(undefined4 **)(param_1 + 0x530);
  if (puVar28 == (undefined4 *)0x0) {
    uVar6 = *(undefined4 *)(*(long *)(param_2 + 0x498) + 0x4c);
    local_68 = (long *)0x28;
    uVar20 = (**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(uVar20,"hkTimeStampHash");
    }
    FUN_03002b34(uVar20,uVar6);
    lVar31 = *(long *)(param_1 + 0x530);
    *(undefined8 *)(param_1 + 0x530) = uVar20;
    if (lVar31 != 0) {
      *(undefined4 *)(lVar31 + 0x20) = 0;
      if ((-1 < (int)*(uint *)(lVar31 + 0x24)) && (*(long *)(lVar31 + 0x18) != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,*(long *)(lVar31 + 0x18),(ulong)*(uint *)(lVar31 + 0x24) << 6);
      }
      pMVar29 = *(MutexType **)(lVar31 + 8);
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(undefined4 *)(lVar31 + 0x24) = 0x80000000;
      if (pMVar29 != (MutexType *)0x0) {
        nn::os::FinalizeMutex(pMVar29);
        (**(code **)(puVar2 + 8))(0,pMVar29,0);
      }
      (**(code **)(puVar2 + 8))(0,lVar31,0);
    }
  }
  else if ((param_4 & 1) != 0) {
    memset(*(void **)(puVar28 + 6),0xff,(long)(int)puVar28[8] << 6);
    *puVar28 = 1;
  }
  lVar31 = (long)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < param_3) {
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < param_3) {
      FUN_03002d54(plVar1,(long)param_3);
    }
    puVar16 = PTR_DAT_047d1a08;
    uVar15 = _UNK_03cabe68;
    uVar14 = _DAT_03cabe60;
    uVar13 = _UNK_03cabe58;
    uVar12 = _DAT_03cabe50;
    uVar11 = DAT_03cab628;
    uVar10 = DAT_03cab620;
    uVar9 = _UNK_03caa5b8;
    uVar20 = _DAT_03caa5b0;
    puVar2 = PTR_DAT_047d1b40 + 0x10;
    uVar34 = 0;
    auVar33 = NEON_fmov(0x3f800000,4);
    puVar3 = PTR_DAT_047e49e8 + 0x10;
    puVar4 = PTR_DAT_047e49f0 + 0x10;
    do {
      local_68 = (long *)0x7f0;
      puVar28 = (undefined4 *)(**(code **)puVar16)(0,&local_68,0);
      if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
        (**(code **)(puVar16 + 0x10))(puVar28,"hknpParticleSimulationThreadContext");
      }
      uVar22 = *(undefined8 *)(param_1 + 0x530);
      *puVar28 = (int)lVar31;
      FUN_030028b0(puVar28 + 0x12,uVar22);
      *(undefined8 *)(puVar28 + 0xc) = 0;
      *(undefined8 *)(puVar28 + 0xe) = 0xffffffff00ffffff;
      FUN_02ee3eb4(puVar28 + 0x1c);
      FUN_02ee3eb4(puVar28 + 0x60);
      local_68 = (long *)0xc90;
      lVar19 = (**(code **)puVar16)(0,&local_68,0);
      if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
        (**(code **)(puVar16 + 0x10))(lVar19,"hknpParticlesSolver");
      }
      *(undefined8 *)(lVar19 + 0x218) = 0;
      memset((void *)(lVar19 + 0x28),0,0x50);
      *(undefined4 *)(lVar19 + 0x228) = 0x800;
      *(long *)(lVar19 + 0x220) = lVar19 + 0x230;
      *(undefined **)(lVar19 + 0x210) = puVar2;
      *(undefined8 *)(lVar19 + 0x88) = uVar11;
      *(undefined8 *)(lVar19 + 0x80) = uVar10;
      *(undefined8 *)(lVar19 + 0x98) = uVar15;
      *(undefined8 *)(lVar19 + 0x90) = uVar14;
      *(undefined8 *)(lVar19 + 0xa8) = uVar9;
      *(undefined8 *)(lVar19 + 0xa0) = uVar20;
      *(undefined8 *)(lVar19 + 0xb8) = uVar13;
      *(undefined8 *)(lVar19 + 0xb0) = uVar12;
      *(undefined8 *)(lVar19 + 0x1e0) = 0xd;
      *(undefined8 *)(lVar19 + 0x200) = 0;
      *(undefined4 *)(lVar19 + 0x1d8) = 0;
      *(undefined8 *)(lVar19 + 0xc0) = 0;
      *(undefined2 *)(lVar19 + 0xc78) = 0xffff;
      *(undefined8 *)(lVar19 + 200) = 0;
      *(undefined8 *)(lVar19 + 0xd0) = 0;
      *(long *)(lVar19 + 0x1f8) = auVar33._8_8_;
      *(long *)(lVar19 + 0x1f0) = auVar33._0_8_;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar34;
      *(undefined8 *)(puVar28 + 0xd2) = 0xffffffff;
      *(undefined8 *)(puVar28 + 0xd4) = 1;
      *(undefined1 *)(puVar28 + 0xd6) = 4;
      *(undefined **)(puVar28 + 0xd0) = puVar3;
      *(undefined8 *)(puVar28 + 0xf2) = 0x100000000;
      *(undefined8 *)(puVar28 + 0xf4) = 0xffffffff00ffffff;
      *(undefined4 **)(puVar28 + 0x15c) = puVar28 + 0x160;
      *(undefined4 **)(puVar28 + 0x1bc) = puVar28 + 0x1c4;
      puVar28[0x1bf] = 0x80000018;
      *(long *)(puVar28 + 0xa4) = lVar19;
      *(undefined8 *)(puVar28 + 0xa6) = 0;
      *(undefined2 *)(puVar28 + 0xac) = 0xffff;
      puVar28[0xad] = 0;
      *(undefined8 *)(puVar28 + 0xae) = 0;
      *(undefined8 *)(puVar28 + 0xa8) = 0;
      *(undefined8 *)(puVar28 + 0xaa) = 0;
      puVar28[0xb0] = 0xfb0001;
      *(undefined8 *)(puVar28 + 0xb6) = 0;
      puVar28[0xb8] = 0;
      *(undefined8 *)(puVar28 + 0xba) = 0;
      *(undefined2 *)(puVar28 + 0xc0) = 0xffff;
      puVar28[0xc1] = 0;
      *(undefined8 *)(puVar28 + 0xc2) = 0;
      *(undefined8 *)(puVar28 + 0xbc) = 0;
      *(undefined8 *)(puVar28 + 0xbe) = 0;
      puVar28[0xc4] = 0xfb0001;
      *(undefined8 *)(puVar28 + 0xca) = 0;
      puVar28[0xcc] = 0;
      *(undefined8 *)(puVar28 + 0xce) = 0;
      *(undefined8 *)(puVar28 + 0xec) = 0;
      *(undefined4 **)(puVar28 + 0xee) = puVar28 + 0x1c;
      *(undefined4 **)(puVar28 + 0xf0) = puVar28 + 0x60;
      puVar28[0xf6] = 0;
      *(undefined8 *)(puVar28 + 0x114) = 0;
      puVar28[0x15e] = 0;
      puVar28[0x15f] = 0x80000004;
      *(undefined8 *)(puVar28 + 0x1b8) = 0;
      puVar28[0x1be] = 0;
      FUN_00e5cdc4(&local_68,auVar8 << 0x40);
      plVar24 = local_68;
      local_68 = (long *)0x0;
      plVar21 = *(long **)(puVar28 + 0xa6);
      *(long **)(puVar28 + 0xa6) = plVar24;
      if (plVar21 != (long *)0x0) {
        if (plVar21[1] != 0) {
          plVar24 = plVar21 + 2;
          do {
            lVar19 = *plVar24;
            cVar7 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar17) {
              *plVar24 = lVar19 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar19 + -1 == 0) {
            (**(code **)(*plVar21 + 0x18))();
          }
        }
        if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
          plVar24 = local_68 + 2;
          do {
            lVar19 = *plVar24;
            cVar7 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar17) {
              *plVar24 = lVar19 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar19 + -1 == 0) {
            (**(code **)(*local_68 + 0x18))();
          }
        }
      }
      puVar28[0xb0] = 0xfb0001;
      *(undefined8 *)(puVar28 + 0xba) = 0;
      *(undefined4 **)(puVar28 + 0xaa) = puVar28 + 0xd0;
      *(undefined8 *)(puVar28 + 0xb6) = *(undefined8 *)(puVar28 + 0xa6);
      *(undefined2 *)(puVar28 + 0xac) = 0xffff;
      puVar28[0xad] = 0;
      *(undefined8 *)(puVar28 + 0xae) = 0;
      *(undefined8 *)(puVar28 + 0xa8) = 0;
      *(undefined4 **)(puVar28 + 0xd8) = puVar28 + 0xa8;
      puVar28[0xb8] = 0x7f7fffee;
      iVar18 = *(int *)(param_1 + 0x20);
      lVar19 = (long)iVar18;
      if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= iVar18) {
        FUN_03002a20(plVar1,lVar19 + 1);
        iVar18 = *(int *)(param_1 + 0x20);
      }
      *(undefined4 **)(*(long *)(param_1 + 0x18) + (long)iVar18 * 8) = puVar28;
      *(int *)(param_1 + 0x20) = (int)(lVar19 + 1);
      lVar19 = *(long *)(*(long *)(param_1 + 0x18) + lVar31 * 8);
      *(undefined8 *)(lVar19 + 8) = *(undefined8 *)(param_2 + 0x490);
      local_68 = (long *)0x60;
      puVar30 = (undefined8 *)(**(code **)puVar16)(0,&local_68,0);
      if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
        (**(code **)(puVar16 + 0x10))(puVar30,"hkThreadLocalBlockStreamAllocator");
      }
      plVar24 = *(long **)(param_2 + 0x4a0);
      *puVar30 = plVar24;
      puVar30[1] = puVar30 + 3;
      *(undefined4 *)(puVar30 + 2) = 0;
      *(undefined4 *)((long)puVar30 + 0x14) = 0x80000008;
      *(undefined4 *)(puVar30 + 0xb) = 0;
      iVar18 = (**(code **)(*plVar24 + 0x50))();
      if (7 < iVar18) {
        iVar18 = 8;
      }
      *(int *)((long)puVar30 + 0x5c) = iVar18;
      if ((int)(*(uint *)((long)puVar30 + 0x14) & 0x7fffffff) < iVar18) {
        FUN_031c2ad4(puVar30 + 1,PTR_PTR_047d1a50,(long)iVar18);
      }
      if (*(int *)(puVar30 + 2) != iVar18) {
        *(int *)(puVar30 + 2) = iVar18;
      }
      *(undefined8 **)(lVar19 + 0x10) = puVar30;
      *(long *)(lVar19 + 0x378) = param_2;
      *(long *)(lVar19 + 0x368) = param_2;
      plVar24 = (long *)*puVar30;
      *(long **)(lVar19 + 0x6e0) = plVar24;
      *(undefined4 *)(lVar19 + 0x6e8) = 0;
      *(undefined1 *)(lVar19 + 0x6ec) = 0;
      uVar23 = *(int *)(puVar30 + 0xb) - 1;
      if (*(int *)(puVar30 + 0xb) < 1) {
        lVar32 = puVar30[1];
        (**(code **)(*plVar24 + 0x20))(plVar24,lVar32,6);
        *(undefined4 *)(puVar30 + 0xb) = 5;
        puVar30 = (undefined8 *)(lVar32 + 0x28);
      }
      else {
        *(uint *)(puVar30 + 0xb) = uVar23;
        puVar30 = (undefined8 *)(puVar30[1] + (ulong)uVar23 * 8);
      }
      puVar30 = (undefined8 *)*puVar30;
      puVar30[2] = 0;
      puVar30[3] = 0;
      *puVar30 = 0;
      puVar30[1] = 0;
      *(undefined4 *)((long)puVar30 + 4) = *(undefined4 *)(lVar19 + 0x6f8);
      iVar18 = *(int *)(lVar19 + 0x6f8);
      lVar32 = (long)iVar18;
      if ((int)(*(uint *)(lVar19 + 0x6fc) & 0x7fffffff) <= iVar18) {
        FUN_031c25b4(lVar19 + 0x6f0,PTR_PTR_047d1a50,lVar32 + 1);
        iVar18 = *(int *)(lVar19 + 0x6f8);
      }
      *(undefined8 **)(*(long *)(lVar19 + 0x6f0) + (long)iVar18 * 8) = puVar30;
      *(int *)(lVar19 + 0x6f8) = (int)(lVar32 + 1);
      *(char **)(lVar19 + 2000) = "hknpParticleSimulationThreadContext::m_commandBlockStream";
      local_68 = (long *)0x48;
      plVar24 = (long *)(**(code **)puVar16)(0,&local_68,0);
      if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
        (**(code **)(puVar16 + 0x10))(plVar24,"hkBlockStreamCommandWriter");
      }
      plVar24[2] = 1;
      plVar24[3] = 0;
      plVar24[4] = 0;
      lVar31 = lVar31 + 1;
      *plVar24 = (long)puVar4;
      plVar24[1] = 0xffffffff;
      *(long **)(lVar19 + 0x7e0) = plVar24;
      lVar32 = *(long *)(lVar19 + 0x10);
      lVar27 = **(long **)(lVar19 + 0x6f0);
      plVar24[4] = lVar19 + 0x6e0;
      plVar24[5] = lVar32;
      plVar24[6] = lVar27;
      plVar24[7] = 0;
      Hint_Prefetch(lVar27,0,0,0);
      Hint_Prefetch(lVar27 + 0x40,0,0,0);
      *(undefined1 *)(lVar19 + 0x3a8) = 0;
    } while ((int)lVar31 != param_3);
  }
  lVar31 = tpidr_el0;
  lVar19 = *(long *)(lVar31 + 0x1000b8);
  if (lVar19 == 0) {
    lVar19 = FUN_00e5d3b4();
    *(long *)(lVar31 + 0x1000b8) = lVar19;
  }
  if (*(ulong *)(*(long *)(lVar19 + 0x3e0) + 0x10) < *(ulong *)(*(long *)(lVar19 + 0x3e0) + 0x20)) {
    bVar17 = *(int *)(param_2 + 0x868) != 0;
  }
  else {
    bVar17 = false;
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar31 = 0;
    do {
      lVar19 = *(long *)(*(long *)(param_1 + 0x18) + lVar31 * 8);
      *(undefined8 *)(lVar19 + 0x3d0) = 0xffffffff00ffffff;
      *(undefined4 *)(lVar19 + 0x3d8) = 0;
      *(undefined8 *)(lVar19 + 0x38) = 0xffffffff00ffffff;
      *(bool *)(lVar19 + 0x3a8) = bVar17;
      lVar31 = lVar31 + 1;
    } while (lVar31 < *(int *)(param_1 + 0x20));
  }
  lVar31 = -0x100;
  piVar26 = (int *)(param_1 + 0x138);
  do {
    iVar18 = (int)lVar31;
    piVar26[-3] = iVar18 + 0x101;
    piVar26[-2] = iVar18 + 0x102;
    piVar26[-1] = iVar18 + 0x103;
    lVar31 = lVar31 + 4;
    *piVar26 = iVar18 + 0x104;
    piVar26 = piVar26 + 4;
  } while (lVar31 != 0);
  *(undefined4 *)(param_1 + 0x528) = 0x1ff;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return;
}


