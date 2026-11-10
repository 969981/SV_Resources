/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f09284; name: FUN_02f09284
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f09284(long param_1,undefined8 *param_2,long *param_3,ulong param_4,int param_5)

{
  uint *puVar1;
  long *plVar2;
  char *__s2;
  char *__s1;
  char cVar3;
  char cVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined *puVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  size_t sVar16;
  void *__dest;
  undefined4 uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_68;
  
  uVar5 = *(ushort *)(param_2 + 0xb);
  uVar18 = *(uint *)(param_2 + 10);
  memset(param_2,0,0xc0);
  auVar23._8_8_ = _UNK_03cabeb8;
  auVar23._0_8_ = _DAT_03cabeb0;
  auVar24._8_4_ = (int)_UNK_03cac088;
  auVar24._0_8_ = _DAT_03cac080;
  auVar24._12_4_ = (int)((ulong)_UNK_03cac088 >> 0x20);
  auVar24 = a64_TBL(ZEXT816(0),auVar24,auVar23);
  uVar21 = (ulong)uVar18 | 0x8000000000000000;
  if (param_4 != 0xffffffffffffffff) {
    uVar21 = param_4;
  }
  param_2[0x16] = uVar21;
  *(ushort *)(param_2 + 0xb) = uVar5 & 0x800 | 1;
  *(uint *)(param_2 + 10) = uVar18;
  *(undefined4 *)((long)param_2 + 0x84) = 0xffffff;
  param_2[0xe] = 0x7f7fffee7f7fffee;
  param_2[0xd] = CONCAT44(auVar24._12_4_,0xff7fffee);
  param_2[0xc] = 0xff7fffeeff7fffee;
  *(undefined2 *)((long)param_2 + 0x94) = 0x3f80;
  lVar20 = param_3[7];
  fVar8 = *(float *)(param_3 + 8);
  fVar9 = *(float *)((long)param_3 + 0x44);
  fVar28 = *(float *)(param_3 + 9);
  fVar10 = *(float *)((long)param_3 + 0x4c);
  fVar25 = fVar9 + fVar9;
  fVar26 = fVar28 + fVar28;
  param_2[6] = param_3[6];
  fVar27 = (fVar8 + fVar8) * fVar8;
  fVar22 = (fVar8 + fVar8) * fVar10;
  fVar28 = 1.0 - fVar28 * fVar26;
  param_2[2] = CONCAT44(fVar28 - fVar27,fVar25 * fVar8 - fVar26 * fVar10);
  *param_2 = CONCAT44(fVar25 * fVar8 + fVar26 * fVar10,fVar28 - fVar25 * fVar9);
  *(float *)(param_2 + 1) = fVar26 * fVar8 - fVar25 * fVar10;
  *(float *)(param_2 + 3) = fVar26 * fVar9 + fVar22;
  param_2[4] = CONCAT44(fVar26 * fVar9 - fVar22,fVar26 * fVar8 + fVar25 * fVar10);
  *(float *)(param_2 + 5) = (1.0 - fVar27) - fVar25 * fVar9;
  *(int *)(param_2 + 7) = (int)lVar20;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)((long)param_3 + 0x94);
  lVar20 = *param_3;
  if (lVar20 == 0) {
    uVar18 = *(uint *)((long)param_2 + 0x54) & 0xff7fffff;
    param_2[0xf] = 0;
  }
  else {
    if (*(long *)(lVar20 + 8) != 0) {
      plVar14 = (long *)(lVar20 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *plVar14 = *plVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar14 = (long *)param_2[0xf];
      if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
        plVar2 = plVar14 + 2;
        do {
          lVar19 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))();
        }
      }
    }
    param_2[0xf] = lVar20;
    uVar18 = *(uint *)((long)param_2 + 0x54) & 0xff000000 |
             *(uint *)((long)param_2 + 0x54) & 0x7fffff |
             (uint)(*(ushort *)(lVar20 + 0x1a) >> 0xf) << 0x17;
  }
  puVar1 = (uint *)((long)param_2 + 0x54);
  *puVar1 = uVar18;
  *(undefined2 *)((long)param_2 + 0x8a) = *(undefined2 *)((long)param_3 + 0x14);
  *(int *)((long)param_2 + 0x8c) = (int)param_3[2];
  param_2[0x13] = param_3[4];
  *(char *)((long)param_2 + 0x96) = (char)param_3[0x14];
  cVar4 = *(char *)((long)param_3 + 0x16);
  cVar6 = '\0';
  if (cVar4 != -1) {
    cVar6 = cVar4;
  }
  cVar3 = '\x03';
  if (cVar4 != -1) {
    cVar3 = cVar4;
  }
  if (param_5 != 0) {
    cVar6 = cVar3;
  }
  *(char *)((long)param_2 + 0x89) = cVar6;
  uVar17 = 0;
  if (param_5 != 0) {
    uVar17 = 0x7fffffff;
  }
  *(undefined4 *)(param_2 + 0x10) = uVar17;
  uVar21 = (ulong)*(uint *)(param_2 + 10) & 0xffffff;
  *(int *)(*(long *)(param_1 + 0x68) + uVar21 * 8) = (int)param_3[0xe];
  *(short *)(*(long *)(param_1 + 0x68) + uVar21 * 8 + 4) = (short)param_3[0x11];
  __s2 = (char *)(param_3[3] & 0xfffffffffffffffe);
  plVar14 = *(long **)(*(long *)(param_1 + 0x98) + uVar21 * 8);
  if (__s2 == (char *)0x0) {
    *(undefined8 *)(*(long *)(param_1 + 0x98) + uVar21 * 8) = 0;
    if ((plVar14 == (long *)0x0) || (plVar14[1] == 0)) goto LAB_02f09618;
    plVar2 = plVar14 + 2;
    do {
      lVar20 = *plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar20;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  else {
    if ((((plVar14 != (long *)0x0) &&
         (__s1 = (char *)(plVar14[3] & 0xfffffffffffffffe), __s1 != (char *)0x0)) && (*__s1 != '\0')
        ) && (iVar13 = strcmp(__s1,__s2), iVar13 == 0)) goto LAB_02f09618;
    puVar12 = PTR_DAT_047d1a08;
    local_68 = 0x20;
    puVar15 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar12 + 0x10) != (code *)0x0) {
      (**(code **)(puVar12 + 0x10))(puVar15,"hkReferencedObject");
    }
    *puVar15 = &PTR_LAB_0460e980;
    puVar15[1] = 0xffffffff;
    puVar15[2] = 1;
    puVar15[3] = 0;
    sVar16 = strlen(__s2);
    sVar16 = (size_t)((int)sVar16 + 1);
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar16);
    memcpy(__dest,__s2,sVar16);
    puVar15[3] = (ulong)__dest | 1;
    plVar14 = *(long **)(*(long *)(param_1 + 0x98) + uVar21 * 8);
    *(undefined8 **)(*(long *)(param_1 + 0x98) + uVar21 * 8) = puVar15;
    if ((plVar14 == (long *)0x0) || (plVar14[1] == 0)) goto LAB_02f09618;
    plVar2 = plVar14 + 2;
    do {
      lVar20 = *plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar20;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (lVar20 == 0) {
    (**(code **)(*plVar14 + 0x18))();
  }
LAB_02f09618:
  puVar12 = PTR_DAT_047d1a08;
  lVar20 = param_3[0xf];
  if (lVar20 != 0) {
    puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x78) + uVar21 * 8);
    if (puVar15 == (undefined8 *)0x0) {
      local_68 = 0x30;
      puVar15 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
      if (*(code **)(puVar12 + 0x10) != (code *)0x0) {
        (**(code **)(puVar12 + 0x10))(puVar15,"hknpMassDistribution");
      }
      puVar15[4] = 0xffffffffffffffff;
      puVar15[5] = 0xffffffffffffffff;
      puVar15[2] = 0xffffffffffffffff;
      puVar15[3] = 0xffffffffffffffff;
      *puVar15 = 0xffffffffffffffff;
      puVar15[1] = 0xffffffffffffffff;
      *(undefined8 **)(*(long *)(param_1 + 0x78) + uVar21 * 8) = puVar15;
    }
    uVar11 = *(undefined8 *)(lVar20 + 0x20);
    puVar15[1] = *(undefined8 *)(lVar20 + 0x28);
    *puVar15 = uVar11;
    uVar11 = *(undefined8 *)(lVar20 + 0x30);
    puVar15[3] = *(undefined8 *)(lVar20 + 0x38);
    puVar15[2] = uVar11;
    auVar23 = *(undefined1 (*) [16])(lVar20 + 0x40);
    puVar15[5] = auVar23._8_8_;
    puVar15[4] = auVar23._0_8_;
  }
  puVar12 = PTR_DAT_047d1a08;
  lVar20 = param_3[0x10];
  if (lVar20 != 0) {
    puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x88) + uVar21 * 8);
    if (puVar15 == (undefined8 *)0x0) {
      local_68 = 0xc0;
      puVar15 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
      if (*(code **)(puVar12 + 0x10) != (code *)0x0) {
        (**(code **)(puVar12 + 0x10))(puVar15,"hknpDragProperties");
      }
      memset(puVar15,0xff,0xc0);
      *(undefined8 **)(*(long *)(param_1 + 0x88) + uVar21 * 8) = puVar15;
    }
    uVar11 = *(undefined8 *)(lVar20 + 0x20);
    puVar15[1] = *(undefined8 *)(lVar20 + 0x28);
    *puVar15 = uVar11;
    uVar11 = *(undefined8 *)(lVar20 + 0x30);
    puVar15[3] = *(undefined8 *)(lVar20 + 0x38);
    puVar15[2] = uVar11;
    uVar11 = *(undefined8 *)(lVar20 + 0x40);
    puVar15[5] = *(undefined8 *)(lVar20 + 0x48);
    puVar15[4] = uVar11;
    uVar11 = *(undefined8 *)(lVar20 + 0x50);
    puVar15[7] = *(undefined8 *)(lVar20 + 0x58);
    puVar15[6] = uVar11;
    uVar11 = *(undefined8 *)(lVar20 + 0x60);
    puVar15[9] = *(undefined8 *)(lVar20 + 0x68);
    puVar15[8] = uVar11;
    uVar11 = *(undefined8 *)(lVar20 + 0x70);
    puVar15[0xb] = *(undefined8 *)(lVar20 + 0x78);
    puVar15[10] = uVar11;
    uVar11 = *(undefined8 *)(lVar20 + 0x80);
    puVar15[0xd] = *(undefined8 *)(lVar20 + 0x88);
    puVar15[0xc] = uVar11;
    uVar11 = *(undefined8 *)(lVar20 + 0x90);
    puVar15[0xf] = *(undefined8 *)(lVar20 + 0x98);
    puVar15[0xe] = uVar11;
    uVar11 = *(undefined8 *)(lVar20 + 0xa0);
    puVar15[0x11] = *(undefined8 *)(lVar20 + 0xa8);
    puVar15[0x10] = uVar11;
    memcpy(puVar15 + 0x12,(void *)(lVar20 + 0xb0),0x30);
  }
  puVar15 = (undefined8 *)(*(long *)(param_1 + 0x58) + uVar21 * 0x18);
  puVar15[2] = 0x7f7fffee7f7fffee;
  puVar15[1] = CONCAT44(auVar24._12_4_,0xff7fffee);
  *puVar15 = 0xff7fffeeff7fffee;
  *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar21) = 0xff;
  *(undefined4 *)(*(long *)(param_1 + 0xe0) + uVar21 * 4) = 0xffffffff;
  uVar18 = 1;
  if (param_5 != 0) {
    uVar18 = 2;
  }
  *puVar1 = *(uint *)(param_3 + 1) & 0xfffffff0 | uVar18 | *puVar1;
  return;
}


