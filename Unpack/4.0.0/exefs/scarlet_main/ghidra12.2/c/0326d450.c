/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0326d450; name: FUN_0326d450
 */


void FUN_0326d450(long param_1,int param_2)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long local_120;
  long lStack_118;
  long lStack_110;
  ulong local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  ulong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  ulong local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  
  puVar4 = PTR_DAT_047d1a08;
  lVar18 = *(long *)(param_1 + 0x20);
  plVar16 = *(long **)(param_1 + 0x30);
  if (plVar16 == (long *)0x0) {
    local_120 = 0x28;
    plVar16 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_120,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(plVar16,"VertexStorage");
    }
    plVar16[2] = 1;
    plVar16[3] = 0;
    plVar16[4] = -0x8000000000000000;
    *plVar16 = (long)&PTR_LAB_046c82c8;
    plVar16[1] = 0xffffffff;
    plVar5 = *(long **)(param_1 + 0x30);
    if ((plVar5 != plVar16) && (*(long **)(param_1 + 0x30) = plVar16, plVar5 != (long *)0x0)) {
      if (plVar5[1] != 0) {
        plVar16 = plVar5 + 2;
        do {
          lVar6 = *plVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      plVar16 = *(long **)(param_1 + 0x30);
    }
  }
  if ((int)plVar16[4] != 0) {
    *(undefined4 *)(plVar16 + 4) = 0;
  }
  if ((0 < param_2) && ((int)(*(uint *)(*(long *)(param_1 + 0x30) + 0x24) & 0x7fffffff) < param_2))
  {
    FUN_0326c8fc(*(long *)(param_1 + 0x30) + 0x18,PTR_PTR_047e61b0,param_2);
  }
  lVar6 = *(long *)(param_1 + 0x28);
  uVar15 = 0;
  puVar7 = *(uint **)(lVar6 + 0x18);
  uVar11 = *puVar7;
  do {
    if ((int)uVar11 < 0) {
      uVar15 = puVar7[(long)(int)uVar15 + 2] + uVar15;
    }
    else {
      while (uVar15 = uVar15 + 1, (uVar11 >> 0x1e & 1) == 0) {
        uVar11 = puVar7[(int)uVar15];
      }
    }
    if (*(int *)(lVar6 + 0x20) - 4U <= uVar15) {
      return;
    }
    uVar11 = puVar7[(int)uVar15];
  } while ((int)uVar11 < 0);
  do {
    if (uVar15 == 0) {
      return;
    }
    lVar12 = -0x400000000;
    lVar19 = (long)puVar7 + ((long)(((ulong)uVar15 << 0x20) + 0x200000000) >> 0x1e);
    iVar8 = -2;
    uVar11 = 0;
    do {
      uVar13 = uVar11;
      pbVar1 = (byte *)(lVar19 + 3);
      lVar12 = lVar12 + 0x200000000;
      iVar8 = iVar8 + 2;
      lVar19 = lVar19 + 8;
      uVar11 = uVar13 + 2;
    } while ((*pbVar1 >> 5 & 1) == 0);
    puVar7 = puVar7 + (long)(int)uVar15 + 2;
    plVar16 = (long *)(*(long *)(lVar18 + 0x30) + ((ulong)*puVar7 & 0xfffffff) * 0x40);
    if ((*puVar7 >> 0x1c & 1) == 0) {
      lStack_110 = plVar16[2];
      local_108 = plVar16[3];
      lStack_118 = plVar16[1];
      local_120 = *plVar16;
      local_f0 = (double)plVar16[6];
      local_e8 = (double)plVar16[7];
      local_100 = (double)plVar16[4];
      local_f8 = (double)plVar16[5];
    }
    else {
      uVar10 = (uint)plVar16[2];
      uVar11 = -uVar10;
      local_108 = -plVar16[3];
      if ((ulong)~plVar16[3] <= local_108) {
        uVar11 = ~uVar10;
      }
      lStack_110 = ((ulong)uVar11 & 0x7ff) - (plVar16[2] & 0xffffffffffffc000U);
      local_120 = (ulong)((uint7)((ulong)*plVar16 >> 8) & 0xffffffffffffc0) * -0x100;
      lStack_118 = (ulong)((uint7)((ulong)plVar16[1] >> 8) & 0xffffffffffffc0) * -0x100;
      local_100 = -(double)plVar16[4];
      local_f8 = -(double)plVar16[5];
      local_f0 = -(double)plVar16[6];
      local_e8 = -(double)plVar16[7];
    }
    if (iVar8 != 0) {
      uVar13 = uVar13 >> 1;
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      lVar19 = 0;
      lVar6 = 0;
      uVar11 = *(uint *)((long)puVar7 + (lVar12 >> 0x1e | 4U)) & 0x1fffffff;
      do {
        uVar10 = *(uint *)((long)puVar7 + (lVar19 >> 0x1e | 4U));
        uVar14 = uVar10 & 0x1fffffff;
        plVar16 = (long *)(*(long *)(lVar18 + 0x30) + ((ulong)uVar11 & 0xfffffff) * 0x40);
        if (uVar11 >> 0x1c == 0) {
          lStack_d0 = plVar16[2];
          local_c8 = plVar16[3];
          lStack_d8 = plVar16[1];
          local_e0 = *plVar16;
          local_b0 = (double)plVar16[6];
          local_a8 = (double)plVar16[7];
          local_c0 = (double)plVar16[4];
          local_b8 = (double)plVar16[5];
        }
        else {
          uVar9 = (uint)plVar16[2];
          uVar11 = -uVar9;
          local_c8 = -plVar16[3];
          if ((ulong)~plVar16[3] <= local_c8) {
            uVar11 = ~uVar9;
          }
          lStack_d0 = ((ulong)uVar11 & 0x7ff) - (plVar16[2] & 0xffffffffffffc000U);
          local_e0 = (ulong)((uint7)((ulong)*plVar16 >> 8) & 0xffffffffffffc0) * -0x100;
          lStack_d8 = (ulong)((uint7)((ulong)plVar16[1] >> 8) & 0xffffffffffffc0) * -0x100;
          local_c0 = -(double)plVar16[4];
          local_b8 = -(double)plVar16[5];
          local_b0 = -(double)plVar16[6];
          local_a8 = -(double)plVar16[7];
        }
        plVar16 = (long *)(*(long *)(lVar18 + 0x30) + ((ulong)uVar10 & 0xfffffff) * 0x40);
        if (uVar14 >> 0x1c == 0) {
          lStack_90 = plVar16[2];
          local_88 = plVar16[3];
          lStack_98 = plVar16[1];
          local_a0 = *plVar16;
          local_70 = (double)plVar16[6];
          local_68 = (double)plVar16[7];
          local_80 = (double)plVar16[4];
          local_78 = (double)plVar16[5];
        }
        else {
          uVar10 = (uint)plVar16[2];
          uVar11 = -uVar10;
          local_88 = -plVar16[3];
          if ((ulong)~plVar16[3] <= local_88) {
            uVar11 = ~uVar10;
          }
          lStack_90 = ((ulong)uVar11 & 0x7ff) - (plVar16[2] & 0xffffffffffffc000U);
          local_a0 = (ulong)((uint7)((ulong)*plVar16 >> 8) & 0xffffffffffffc0) * -0x100;
          lStack_98 = (ulong)((uint7)((ulong)plVar16[1] >> 8) & 0xffffffffffffc0) * -0x100;
          local_80 = -(double)plVar16[4];
          local_78 = -(double)plVar16[5];
          local_70 = -(double)plVar16[6];
          local_68 = -(double)plVar16[7];
        }
        lVar17 = *(long *)(param_1 + 0x30);
        iVar8 = *(int *)(lVar17 + 0x20);
        lVar12 = (long)iVar8;
        if ((int)(*(uint *)(lVar17 + 0x24) & 0x7fffffff) <= iVar8) {
          FUN_0326e354(lVar17 + 0x18,lVar12 + 1);
          iVar8 = *(int *)(lVar17 + 0x20);
        }
        *(int *)(lVar17 + 0x20) = (int)(lVar12 + 1);
        FUN_0326c364(&local_120,*(long *)(lVar17 + 0x18) + (long)iVar8 * 0x20);
        lVar6 = lVar6 + 2;
        lVar19 = lVar19 + 0x200000000;
        puVar7[(int)lVar6] =
             puVar7[(int)lVar6] & 0xe0000000 |
             *(int *)(*(long *)(param_1 + 0x30) + 0x20) - 1U & 0x1fffffff;
        uVar11 = uVar14;
      } while ((ulong)uVar13 << 1 != lVar6);
      lVar6 = *(long *)(param_1 + 0x28);
    }
    puVar7 = *(uint **)(lVar6 + 0x18);
    uVar11 = puVar7[(int)uVar15];
    do {
      if ((int)uVar11 < 0) {
        uVar15 = puVar7[(long)(int)uVar15 + 2] + uVar15;
      }
      else {
        while (uVar15 = uVar15 + 1, (uVar11 >> 0x1e & 1) == 0) {
          uVar11 = puVar7[(int)uVar15];
        }
      }
      if (*(int *)(lVar6 + 0x20) - 4U <= uVar15) {
        return;
      }
      uVar11 = puVar7[(int)uVar15];
    } while ((int)uVar11 < 0);
  } while( true );
}


