/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ff7a8c; name: FUN_02ff7a8c
 */


void FUN_02ff7a8c(long param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_b0;
  uint local_a8;
  int local_a4;
  long local_a0;
  undefined8 local_98;
  uint local_90;
  int local_8c;
  long local_88;
  undefined8 local_80;
  uint local_78;
  int local_74;
  
  plVar14 = *(long **)(param_2 + 8);
  if (plVar14 == (long *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    lVar15 = *plVar14;
    if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
      (**(code **)(lVar15 + 0x18))("ShiftWorldSubTask",0x11,*(undefined8 *)(lVar15 + 0x28));
    }
    puVar12 = (undefined8 *)plVar14[2];
    uVar9 = (long)puVar12 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar14[3]) && (plVar14[2] = uVar9, puVar12 != (undefined8 *)0x0)) {
      *puVar12 = "TtShiftWorldSubTask";
      uVar6 = nn::os::GetSystemTick();
      puVar12[1] = uVar6;
    }
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
      puVar12 = (undefined8 *)plVar14[2];
      uVar9 = (long)puVar12 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar14[3]) && (plVar14[2] = uVar9, puVar12 != (undefined8 *)0x0)) {
        *puVar12 = &DAT_03c4e575;
        puVar12[1] = *(undefined8 *)(plVar14[6] + 8);
      }
    }
    plVar14 = *(long **)(param_2 + 8);
  }
  dVar22 = (double)(float)*(undefined8 *)(param_1 + 0x1ae0);
  dVar23 = (double)(float)((ulong)*(undefined8 *)(param_1 + 0x1ae0) >> 0x20);
  dVar24 = (double)(float)*(undefined8 *)(param_1 + 0x1ae8);
  lVar15 = *(long *)(*(long *)(param_1 + 0x1ad0) + 0x150);
  local_74 = *(int *)(param_2 + 0x18);
  local_88 = param_1 + 0x30;
  local_80 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar11 = 0;
  local_78 = 0;
  do {
    lVar13 = local_88;
    if (uVar8 <= uVar11) {
      if (local_88 == 0) break;
      uVar11 = local_74 + 1;
      puVar1 = (ulong *)(*(long *)(local_88 + 0x490) +
                        (long)*(int *)(*(long *)(local_88 + 0x40) +
                                      (-(ulong)(uVar11 >> 0x1f) & 0xffffffc000000000 |
                                      (ulong)uVar11 << 6)) * 0x40);
      if (uVar7 == 0) {
        uVar8 = (int)(*puVar1 >> 0x20) - (int)*puVar1 >> 3;
        uVar7 = *(uint *)(local_88 + 8);
        if ((int)*(uint *)(local_88 + 8) <= (int)uVar8) {
          uVar7 = uVar8;
        }
        if ((int)*(uint *)(local_88 + 0xc) <= (int)uVar7) {
          uVar7 = *(uint *)(local_88 + 0xc);
        }
      }
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 + uVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar10 = (uint)uVar9;
      uVar8 = (uint)(uVar9 >> 0x20);
      uVar5 = uVar8 - uVar10;
      local_80 = CONCAT44(local_80._4_4_,uVar10);
      if (uVar8 < uVar10 || uVar5 == 0) {
        uVar5 = FUN_03232ac8(local_88,(ulong)uVar11,(ulong)uVar7,&local_80);
        if (uVar5 == 0) break;
        uVar9 = local_80 & 0xffffffff;
      }
      uVar10 = *(uint *)(lVar13 + 8);
      uVar2 = *(uint *)(lVar13 + 0xc);
      uVar8 = uVar5;
      if ((int)uVar7 <= (int)uVar5) {
        uVar8 = uVar7;
      }
      uVar11 = (uint)uVar9;
      uVar8 = uVar8 + uVar11;
      if (uVar10 <= (uint)((int)uVar5 >> 3)) {
        uVar10 = (int)uVar5 >> 3;
      }
      uVar7 = uVar10;
      if ((int)uVar2 <= (int)uVar10) {
        uVar7 = uVar2;
      }
      local_80 = CONCAT44(uVar8,(undefined4)local_80);
      local_78 = uVar7;
    }
    lVar13 = lVar15 + (ulong)uVar11 * 0x80;
    if (*(char *)(lVar13 + 0x5f) != '\0') {
      *(double *)(lVar13 + 0x10) = *(double *)(lVar13 + 0x10) + dVar22;
      *(double *)(lVar13 + 0x18) = *(double *)(lVar13 + 0x18) + dVar23;
      *(double *)(lVar13 + 0x20) = *(double *)(lVar13 + 0x20) + dVar24;
    }
    uVar11 = uVar11 + 1;
  } while( true );
  uVar6 = *(undefined8 *)(param_1 + 0x1ae0);
  local_8c = *(int *)(param_2 + 0x18);
  fVar27 = (float)*(undefined8 *)(param_1 + 0x1ae8);
  fVar28 = *(float *)(param_1 + 0x1ae8);
  local_a0 = param_1 + 0x11f0;
  local_90 = 0;
  local_98 = 0;
  lVar15 = *(long *)(param_1 + 0x1ad0);
  uVar8 = 0;
  uVar7 = 0;
  uVar11 = 0;
  do {
    lVar13 = local_a0;
    fVar25 = (float)uVar6;
    fVar26 = (float)((ulong)uVar6 >> 0x20);
    if (uVar8 <= uVar11) {
      if (local_a0 == 0) break;
      uVar11 = local_8c + 1;
      puVar1 = (ulong *)(*(long *)(local_a0 + 0x490) +
                        (long)*(int *)(*(long *)(local_a0 + 0x40) +
                                      (-(ulong)(uVar11 >> 0x1f) & 0xffffffc000000000 |
                                      (ulong)uVar11 << 6)) * 0x40);
      if (uVar7 == 0) {
        uVar8 = (int)(*puVar1 >> 0x20) - (int)*puVar1 >> 3;
        uVar7 = *(uint *)(local_a0 + 8);
        if ((int)*(uint *)(local_a0 + 8) <= (int)uVar8) {
          uVar7 = uVar8;
        }
        if ((int)*(uint *)(local_a0 + 0xc) <= (int)uVar7) {
          uVar7 = *(uint *)(local_a0 + 0xc);
        }
      }
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 + uVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar10 = (uint)uVar9;
      uVar8 = (uint)(uVar9 >> 0x20);
      uVar5 = uVar8 - uVar10;
      local_98 = CONCAT44(local_98._4_4_,uVar10);
      if (uVar8 < uVar10 || uVar5 == 0) {
        uVar5 = FUN_03232ac8(local_a0,(ulong)uVar11,(ulong)uVar7,&local_98);
        if (uVar5 == 0) break;
        uVar9 = local_98 & 0xffffffff;
      }
      uVar10 = *(uint *)(lVar13 + 8);
      uVar2 = *(uint *)(lVar13 + 0xc);
      uVar8 = uVar5;
      if ((int)uVar7 <= (int)uVar5) {
        uVar8 = uVar7;
      }
      uVar11 = (uint)uVar9;
      uVar8 = uVar8 + uVar11;
      if (uVar10 <= (uint)((int)uVar5 >> 3)) {
        uVar10 = (int)uVar5 >> 3;
      }
      uVar7 = uVar10;
      if ((int)uVar2 <= (int)uVar10) {
        uVar7 = uVar2;
      }
      local_98 = CONCAT44(uVar8,(undefined4)local_98);
      local_90 = uVar7;
    }
    puVar12 = (undefined8 *)(*(long *)(lVar15 + 0x80) + (long)(int)uVar11 * 0x18);
    uVar11 = uVar11 + 1;
    puVar12[1] = CONCAT44(fVar28 + (float)((ulong)puVar12[1] >> 0x20),fVar27 + (float)puVar12[1]);
    *puVar12 = CONCAT44(fVar26 + (float)((ulong)*puVar12 >> 0x20),fVar25 + (float)*puVar12);
    puVar12[2] = CONCAT44(fVar26 + (float)((ulong)puVar12[2] >> 0x20),fVar25 + (float)puVar12[2]);
  } while( true );
  local_a4 = *(int *)(param_2 + 0x18);
  local_b0 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar11 = 0;
  local_a8 = 0;
  lVar15 = *(long *)(*(long *)(param_1 + 0x1ad0) + 0x38);
  do {
    if (uVar8 <= uVar11) {
      if (param_1 + 0x910 == 0) {
LAB_02ff7f84:
        if (plVar14 != (long *)0x0) {
          lVar15 = *plVar14;
          if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
            puVar12 = (undefined8 *)plVar14[2];
            uVar9 = (long)puVar12 + 0x17U & 0xfffffffffffffff8;
            if ((uVar9 <= (ulong)plVar14[3]) && (plVar14[2] = uVar9, puVar12 != (undefined8 *)0x0))
            {
              *puVar12 = &DAT_03c4e575;
              puVar12[1] = *(undefined8 *)(plVar14[6] + 8);
            }
          }
          puVar12 = (undefined8 *)plVar14[2];
          uVar9 = (long)puVar12 + 0x17U & 0xfffffffffffffff8;
          if ((uVar9 <= (ulong)plVar14[3]) && (plVar14[2] = uVar9, puVar12 != (undefined8 *)0x0)) {
            *puVar12 = &DAT_03c2d363;
            uVar6 = nn::os::GetSystemTick();
            puVar12[1] = uVar6;
          }
          if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02ff802c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
            return;
          }
        }
        return;
      }
      uVar11 = local_a4 + 1;
      puVar1 = (ulong *)(*(long *)(param_1 + 0xda0) +
                        (long)*(int *)(*(long *)(param_1 + 0x950) +
                                      (-(ulong)(uVar11 >> 0x1f) & 0xffffffc000000000 |
                                      (ulong)uVar11 << 6)) * 0x40);
      if (uVar7 == 0) {
        uVar8 = (int)(*puVar1 >> 0x20) - (int)*puVar1 >> 3;
        uVar7 = *(uint *)(param_1 + 0x918);
        if ((int)*(uint *)(param_1 + 0x918) <= (int)uVar8) {
          uVar7 = uVar8;
        }
        if ((int)*(uint *)(param_1 + 0x91c) <= (int)uVar7) {
          uVar7 = *(uint *)(param_1 + 0x91c);
        }
      }
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 + uVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar10 = (uint)uVar9;
      uVar8 = (uint)(uVar9 >> 0x20);
      uVar5 = uVar8 - uVar10;
      local_b0 = CONCAT44(local_b0._4_4_,uVar10);
      if (uVar8 < uVar10 || uVar5 == 0) {
        uVar5 = FUN_03232ac8(param_1 + 0x910,(ulong)uVar11,(ulong)uVar7,&local_b0);
        if (uVar5 == 0) goto LAB_02ff7f84;
        uVar9 = local_b0 & 0xffffffff;
      }
      uVar8 = uVar5;
      if ((int)uVar7 <= (int)uVar5) {
        uVar8 = uVar7;
      }
      uVar11 = (uint)uVar9;
      uVar8 = uVar8 + uVar11;
      uVar7 = *(uint *)(param_1 + 0x918);
      if (*(uint *)(param_1 + 0x918) <= (uint)((int)uVar5 >> 3)) {
        uVar7 = (int)uVar5 >> 3;
      }
      if ((int)*(uint *)(param_1 + 0x91c) <= (int)uVar7) {
        uVar7 = *(uint *)(param_1 + 0x91c);
      }
      local_b0 = CONCAT44(uVar8,(undefined4)local_b0);
      local_a8 = uVar7;
    }
    uVar9 = (ulong)uVar11;
    uVar5 = *(uint *)(lVar15 + uVar9 * 0xc0 + 0x54);
    if ((uVar5 & 3) != 0) {
      if ((uVar5 >> 4 & 1) == 0) {
        lVar13 = lVar15 + uVar9 * 0xc0;
        dVar17 = (double)(float)*(undefined8 *)(lVar13 + 0x30) +
                 (double)(float)*(undefined8 *)(lVar13 + 0x40) + dVar22;
        dVar18 = (double)(float)((ulong)*(undefined8 *)(lVar13 + 0x30) >> 0x20) +
                 (double)(float)((ulong)*(undefined8 *)(lVar13 + 0x40) >> 0x20) + dVar23;
        fVar19 = (float)dVar17;
        dVar16 = (double)(float)*(undefined8 *)(lVar13 + 0x38) +
                 (double)(float)*(undefined8 *)(lVar13 + 0x48) + dVar24;
        fVar20 = (float)dVar18;
        fVar21 = (float)dVar16;
        *(ulong *)(lVar13 + 0x30) = CONCAT44(fVar20,fVar19);
        *(float *)(lVar13 + 0x38) = fVar21;
        *(ulong *)(lVar13 + 0x40) =
             CONCAT44((float)(dVar18 - (double)fVar20),(float)(dVar17 - (double)fVar19));
        *(float *)(lVar13 + 0x48) = (float)(dVar16 - (double)fVar21);
      }
      lVar13 = lVar15 + uVar9 * 0xc0;
      *(ulong *)(lVar13 + 0x68) =
           CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(lVar13 + 0x68) >> 0x20),
                    fVar27 + (float)*(undefined8 *)(lVar13 + 0x68));
      *(ulong *)(lVar13 + 0x60) =
           CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar13 + 0x60) >> 0x20),
                    fVar25 + (float)*(undefined8 *)(lVar13 + 0x60));
      *(ulong *)(lVar13 + 0x70) =
           CONCAT44(fVar26 + (float)((ulong)*(undefined8 *)(lVar13 + 0x70) >> 0x20),
                    fVar25 + (float)*(undefined8 *)(lVar13 + 0x70));
    }
    uVar11 = uVar11 + 1;
  } while( true );
}


