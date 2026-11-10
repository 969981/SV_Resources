/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e82630; name: FUN_02e82630
 */


void FUN_02e82630(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *__src;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  void *__dest;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80 [2];
  byte local_68 [8];
  
  puVar7 = PTR_DAT_047d19f0;
  if ((*(int *)(param_1 + 0x98) == 0) && (uVar4 = *(uint *)(param_1 + 0x50), 0 < (int)uVar4)) {
    uVar14 = 0;
    plVar13 = (long *)(param_1 + 0x48);
    do {
      lVar11 = (ulong)(uVar14 & 0xffff) * 0x40 + *plVar13;
      if ((*(byte *)((long)plVar13 + lVar11 + 0x1e) & 1) == 0) {
        plVar10 = (long *)((long)plVar13 + lVar11 + 0x30);
        lVar12 = *plVar10;
        lVar11 = 0;
        if (lVar12 != 0) {
          lVar11 = lVar12 + (long)plVar10;
        }
        iVar8 = (**(code **)(*(long *)puVar7 + (ulong)*(byte *)(lVar11 + 0x18) * 0x200 + 0xc0))();
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar8;
      }
      uVar14 = uVar14 + 1;
    } while (uVar4 != uVar14);
  }
  cVar5 = *(char *)(param_1 + 0x100);
  if (cVar5 == '\x02') {
    plVar13 = (long *)(param_1 + 0xe8);
    lVar11 = *plVar13;
    uVar17 = *(undefined8 *)((long)plVar13 + lVar11 + 0x88);
    uVar9 = *(undefined8 *)((long)plVar13 + lVar11 + 0x80);
    uVar20 = *(undefined8 *)((long)plVar13 + lVar11 + 0x98);
    uVar19 = *(undefined8 *)((long)plVar13 + lVar11 + 0x90);
    iVar8 = -(uint)((float)uVar9 <= (float)uVar19);
    iVar15 = -(uint)((float)((ulong)uVar9 >> 0x20) <= (float)((ulong)uVar19 >> 0x20));
    iVar16 = -(uint)((float)uVar17 <= (float)uVar20);
    iVar18 = -(uint)((float)((ulong)uVar17 >> 0x20) <= (float)((ulong)uVar20 >> 0x20));
    if (CONCAT13((byte)((uint)iVar15 >> 0x18) | (byte)((uint)iVar8 >> 0x18) |
                 (byte)((uint)iVar16 >> 0x18) | (byte)((uint)iVar18 >> 0x18),
                 CONCAT12((byte)((uint)iVar15 >> 0x10) | (byte)((uint)iVar8 >> 0x10) |
                          (byte)((uint)iVar16 >> 0x10) | (byte)((uint)iVar18 >> 0x10),
                          CONCAT11((byte)((uint)iVar15 >> 8) | (byte)((uint)iVar8 >> 8) |
                                   (byte)((uint)iVar16 >> 8) | (byte)((uint)iVar18 >> 8),
                                   (byte)iVar15 | (byte)iVar8 | (byte)iVar16 | (byte)iVar18))) != 0)
    goto LAB_02e828ac;
LAB_02e82734:
    plVar13 = (long *)(param_1 + 200);
    if (*(int *)(param_1 + 0xd4) < 0) {
      lVar11 = 0;
      if (*plVar13 != 0) {
        lVar11 = *plVar13 + (long)plVar13;
      }
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar11,0);
    }
    *(undefined2 *)(param_1 + 0xd8) = 0;
    plVar10 = (long *)(param_1 + 0xe8);
    *plVar13 = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    uVar4 = *(uint *)(param_1 + 0xf0);
    *(undefined2 *)(param_1 + 0xe4) = 0;
    *(undefined8 *)(param_1 + 0xdc) = 0;
    if (uVar4 != 2) {
      uVar14 = *(uint *)(param_1 + 0xf4);
      if (*(uint *)(param_1 + 0xf4) == 0) {
        *(uint *)(param_1 + 0xf4) = uVar4;
        uVar14 = uVar4;
      }
      puVar7 = PTR_DAT_047d1a08;
      if ((int)uVar4 < 2) {
        uVar3 = uVar14 & 0x7fffffff;
        if ((int)(uVar14 & 0x7fffffff) <= (int)uVar4) {
          uVar3 = uVar4;
        }
        if ((int)uVar3 < 2) {
          local_b0 = 0x100;
          __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_b0,0);
          __src = (void *)0x0;
          if (*(long *)(param_1 + 0xe8) != 0) {
            __src = (void *)(*(long *)(param_1 + 0xe8) + (long)plVar10);
          }
          memcpy(__dest,__src,(long)*(int *)(param_1 + 0xf0) << 7);
          if (*(int *)(param_1 + 0xf4) < 0) {
            lVar11 = 0;
            if (*plVar10 != 0) {
              lVar11 = *plVar10 + (long)plVar10;
            }
            (**(code **)(puVar7 + 8))(0,lVar11,0);
          }
          lVar11 = 0;
          if (__dest != (void *)0x0) {
            lVar11 = (long)__dest - (long)plVar10;
          }
          *(long *)(param_1 + 0xe8) = lVar11;
          *(undefined4 *)(param_1 + 0xf4) = 0x80000002;
        }
      }
      *(undefined4 *)(param_1 + 0xf0) = 2;
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0xe8) + (long)plVar10);
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[1] = 0x7f7fffee7f7fffee;
    *puVar2 = 0x7f7fffee7f7fffee;
    puVar2[3] = 0xff7fffeeff7fffee;
    puVar2[2] = 0xff7fffeeff7fffee;
    *(undefined2 *)(puVar2 + 0xe) = 0;
    puVar2[5] = 0x7f7fffee7f7fffee;
    puVar2[4] = 0x7f7fffee7f7fffee;
    puVar2[7] = 0xff7fffeeff7fffee;
    puVar2[6] = 0xff7fffeeff7fffee;
    uVar9 = 2;
    puVar2[9] = 0x7f7fffee7f7fffee;
    puVar2[8] = 0x7f7fffee7f7fffee;
    puVar2[0xb] = 0xff7fffeeff7fffee;
    puVar2[10] = 0xff7fffeeff7fffee;
    lVar11 = *(long *)(param_1 + 0xe8);
    *(undefined8 *)((long)plVar10 + lVar11 + 0xe0) = 0;
    *(undefined8 *)((long)plVar10 + lVar11 + 0xe8) = 0;
    *(undefined2 *)((long)plVar10 + lVar11 + 0xf0) = 0;
    *(undefined8 *)((long)plVar10 + lVar11 + 0x88) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar10 + lVar11 + 0x80) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar10 + lVar11 + 0x98) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar10 + lVar11 + 0x90) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar10 + lVar11 + 0xa8) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar10 + lVar11 + 0xa0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar10 + lVar11 + 0xb8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar10 + lVar11 + 0xb0) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar10 + lVar11 + 200) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar10 + lVar11 + 0xc0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar10 + lVar11 + 0xd8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar10 + lVar11 + 0xd0) = 0xff7fffeeff7fffee;
    *(undefined1 *)(param_1 + 0xf8) = 1;
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  else {
    if (cVar5 == '\x01') {
      if (*(short *)(param_1 + 0xe4) != 0) goto LAB_02e828ac;
      goto LAB_02e82734;
    }
    if (cVar5 != '\0') goto LAB_02e828ac;
    uVar9 = 1;
  }
  FUN_02eaac90(param_1,uVar9);
LAB_02e828ac:
  FUN_00cb2110(param_1);
  puVar7 = PTR_DAT_047d19f0;
  if (*(char *)(param_1 + 0x94) != '\0') {
    plVar13 = (long *)(param_1 + 0x48);
    uVar4 = 0;
    do {
      uVar14 = uVar4;
      if ((*(uint *)(param_1 + 0x50) & ((int)*(uint *)(param_1 + 0x50) >> 0x1f ^ 0xffffffffU)) ==
          uVar14) {
        return;
      }
      lVar11 = *plVar13;
      uVar4 = uVar14 + 1;
    } while ((*(byte *)((long)plVar13 + (ulong)(uVar14 & 0xffff) * 0x40 + lVar11 + 0x1e) & 1) != 0);
    if (uVar14 + 1 != 0) {
      NEON_fmov(0x3f800000,4);
      do {
        puVar2 = (undefined8 *)((long)plVar13 + (ulong)(uVar14 & 0xffff) * 0x40 + lVar11);
        uStack_88 = puVar2[5];
        local_90 = puVar2[4];
        uStack_a8 = puVar2[1];
        local_b0 = *puVar2;
        uStack_98 = puVar2[3];
        local_a0 = puVar2[2];
        local_80[1] = puVar2[7];
        lVar11 = puVar2[6];
        local_80[0] = 0;
        if (lVar11 != 0) {
          local_80[0] = (long)(puVar2 + 6) + (lVar11 - (long)local_80);
        }
        lVar11 = local_80[0];
        if (((local_80[0] != 0) && (local_80[0] + (long)local_80 != 0)) &&
           (*(long *)((long)local_80 + local_80[0] + 8) != 0)) {
          plVar10 = (long *)((long)local_80 + local_80[0] + 0x10);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = *plVar10 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          lVar11 = local_80[0];
        }
        if (((local_80[0] + (long)local_80 != 0) && (lVar11 != 0)) &&
           (lVar11 = (**(code **)(*(long *)puVar7 + (ulong)local_68[local_80[0]] * 0x200 + 0x48))(),
           lVar11 != 0)) {
          lVar11 = 0;
          if (local_80[0] != 0) {
            lVar11 = local_80[0] + (long)local_80;
          }
          lVar11 = (**(code **)(*(long *)puVar7 + (ulong)*(byte *)(lVar11 + 0x18) * 0x200 + 0x48))()
          ;
          FUN_02e8aa20(lVar11,param_1,FUN_02e8aae4,0,uVar14);
          FUN_02e8ab58(lVar11 + 8,param_1,&LAB_02e8ac1c,0,uVar14);
        }
        if (((local_80[0] != 0) &&
            (plVar10 = (long *)(local_80[0] + (long)local_80), plVar10 != (long *)0x0)) &&
           (*(long *)((long)local_80 + local_80[0] + 8) != 0)) {
          plVar1 = (long *)((long)local_80 + local_80[0] + 0x10);
          do {
            lVar11 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))();
          }
        }
        uVar4 = uVar14 + 1;
        do {
          uVar14 = uVar4;
          if (*(int *)(param_1 + 0x50) <= (int)uVar14) {
            return;
          }
          lVar11 = *plVar13;
          uVar4 = uVar14 + 1;
        } while ((*(byte *)((long)plVar13 + (ulong)(uVar14 & 0xffff) * 0x40 + lVar11 + 0x1e) & 1) !=
                 0);
      } while (uVar14 + 1 != 0);
    }
  }
  return;
}


