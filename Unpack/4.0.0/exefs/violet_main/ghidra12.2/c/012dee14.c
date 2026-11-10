/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012dee14; name: FUN_012dee14
 */


void FUN_012dee14(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,long *param_6,undefined4 param_7)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 local_1a0;
  long *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 auStack_180 [8];
  undefined8 local_178;
  long local_100;
  undefined8 uStack_f8;
  long *local_a8;
  
  *param_2 = param_3;
  plVar7 = (long *)param_2[2];
  plVar10 = (long *)*param_6;
  if (plVar7 != plVar10) {
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar10 = plVar10 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7 = (long *)param_2[2];
      plVar10 = (long *)*param_6;
    }
    param_2[2] = plVar10;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar10 = plVar7 + 2;
      do {
        lVar11 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
  *(undefined4 *)(param_2 + 3) = param_7;
  FUN_01330dd8(auStack_180);
  puVar5 = PTR_DAT_047d1a08;
  local_100 = param_1 << 0x20;
  uStack_f8 = 0;
  local_178 = *param_4;
  local_1a0 = 0x230;
  plVar10 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_1a0,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar10,"hknpGroupCollisionFilterBase");
  }
  *(undefined4 *)(plVar10 + 4) = 0;
  plVar10[1] = 0xffffffff;
  plVar10[2] = 1;
  memset(plVar10 + 5,0xff,0x200);
  *plVar10 = (long)(PTR_DAT_047d9310 + 0x10);
  *(undefined1 *)(plVar10 + 3) = 2;
  plVar8 = (long *)param_2[0x22];
  plVar7 = param_2 + 0x22;
  param_2[0x22] = plVar10;
  if (plVar8 != (long *)0x0) {
    if (plVar8[1] != 0) {
      plVar10 = plVar8 + 2;
      do {
        lVar11 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
    plVar10 = (long *)*plVar7;
  }
  lVar11 = 0;
  do {
    *(ulong *)((long)plVar10 + lVar11 + 0x30) = *(ulong *)((long)plVar10 + lVar11 + 0x30) & 1;
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x1f8);
  uVar12 = 0;
  *(ulong *)(*plVar7 + 0x28) = *(ulong *)(*plVar7 + 0x28) | 1;
  *(ulong *)(*plVar7 + 0x30) = *(ulong *)(*plVar7 + 0x30) | 2;
  *(ulong *)(*plVar7 + 0x38) = *(ulong *)(*plVar7 + 0x38) | 4;
  *(ulong *)(*plVar7 + 0x40) = *(ulong *)(*plVar7 + 0x40) | 8;
  *(ulong *)(*plVar7 + 0x48) = *(ulong *)(*plVar7 + 0x48) | 0x10;
  *(ulong *)(*plVar7 + 0x50) = *(ulong *)(*plVar7 + 0x50) | 0x20;
  *(ulong *)(*plVar7 + 0x58) = *(ulong *)(*plVar7 + 0x58) | 0x40;
  *(ulong *)(*plVar7 + 0x60) = *(ulong *)(*plVar7 + 0x60) | 0x80;
  *(ulong *)(*plVar7 + 0x68) = *(ulong *)(*plVar7 + 0x68) | 0x100;
  *(ulong *)(*plVar7 + 0x70) = *(ulong *)(*plVar7 + 0x70) | 0x200;
  *(ulong *)(*plVar7 + 0x78) = *(ulong *)(*plVar7 + 0x78) | 0x400;
  *(ulong *)(*plVar7 + 0x80) = *(ulong *)(*plVar7 + 0x80) | 0x800;
  *(ulong *)(*plVar7 + 0x88) = *(ulong *)(*plVar7 + 0x88) | 0x1000;
  *(ulong *)(*plVar7 + 0x90) = *(ulong *)(*plVar7 + 0x90) | 0x2000;
  *(ulong *)(*plVar7 + 0x98) = *(ulong *)(*plVar7 + 0x98) | 0x4000;
  *(ulong *)(*plVar7 + 0xa0) = *(ulong *)(*plVar7 + 0xa0) | 0x8000;
  *(ulong *)(*plVar7 + 0xa8) = *(ulong *)(*plVar7 + 0xa8) | 0x10000;
  *(ulong *)(*plVar7 + 0xb0) = *(ulong *)(*plVar7 + 0xb0) | 0x20000;
  *(ulong *)(*plVar7 + 0xb8) = *(ulong *)(*plVar7 + 0xb8) | 0x40000;
  *(ulong *)(*plVar7 + 0xc0) = *(ulong *)(*plVar7 + 0xc0) | 0x80000;
  *(ulong *)(*plVar7 + 200) = *(ulong *)(*plVar7 + 200) | 0x100000;
  *(ulong *)(*plVar7 + 0xd0) = *(ulong *)(*plVar7 + 0xd0) | 0x200000;
  *(ulong *)(*plVar7 + 0xd8) = *(ulong *)(*plVar7 + 0xd8) | 0x400000;
  *(ulong *)(*plVar7 + 0xe0) = *(ulong *)(*plVar7 + 0xe0) | 0x800000;
  *(ulong *)(*plVar7 + 0xe8) = *(ulong *)(*plVar7 + 0xe8) | 0x1000000;
  *(ulong *)(*plVar7 + 0xf0) = *(ulong *)(*plVar7 + 0xf0) | 0x2000000;
  *(ulong *)(*plVar7 + 0xf8) = *(ulong *)(*plVar7 + 0xf8) | 0x4000000;
  *(ulong *)(*plVar7 + 0x100) = *(ulong *)(*plVar7 + 0x100) | 0x8000000;
  *(ulong *)(*plVar7 + 0x108) = *(ulong *)(*plVar7 + 0x108) | 0x10000000;
  *(ulong *)(*plVar7 + 0x110) = *(ulong *)(*plVar7 + 0x110) | 0x20000000;
  *(ulong *)(*plVar7 + 0x118) = *(ulong *)(*plVar7 + 0x118) | 0x40000000;
  *(ulong *)(*plVar7 + 0x120) = *(ulong *)(*plVar7 + 0x120) | 0x80000000;
  lVar11 = *plVar7;
  do {
    if (uVar12 == 0x20) {
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 0xffffffff00000000;
LAB_012df184:
      *(ulong *)(lVar11 + 0x28 + uVar12 * 8) = *(ulong *)(lVar11 + 0x28 + uVar12 * 8) | 0x100000000;
    }
    else if (0x1f < uVar12) goto LAB_012df184;
    uVar12 = uVar12 + 1;
    if (uVar12 == 0x40) {
      if (param_5 != 0) {
        lVar11 = 0;
        do {
          iVar6 = *(int *)(param_5 + lVar11);
          iVar2 = ((int *)(param_5 + lVar11))[1];
          uVar12 = (ulong)iVar6;
          if (iVar6 != 0 && iVar2 != 0) {
            lVar1 = *plVar7 + 0x28;
            uVar14 = (ulong)iVar2;
            *(ulong *)(lVar1 + uVar12 * 8) = *(ulong *)(lVar1 + uVar12 * 8) | 1L << (uVar14 & 0x3f);
            *(ulong *)(lVar1 + uVar14 * 8) = *(ulong *)(lVar1 + uVar14 * 8) | 1L << (uVar12 & 0x3f);
          }
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0x100);
      }
      plVar10 = (long *)*plVar7;
      plVar8 = local_a8;
      if (local_a8 != plVar10) {
        if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
          plVar10 = plVar10 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = *plVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar10 = (long *)*plVar7;
        }
        plVar8 = plVar10;
        if ((local_a8 != (long *)0x0) && (local_a8[1] != 0)) {
          plVar7 = local_a8 + 2;
          do {
            lVar11 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 + -1 == 0) {
            lVar11 = *local_a8;
            local_a8 = plVar10;
            (**(code **)(lVar11 + 0x18))();
            plVar8 = local_a8;
          }
        }
      }
      local_a8 = plVar8;
      local_1a0 = 0x9b0;
      lVar11 = (**(code **)puVar5)(0,&local_1a0,0);
      if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
        (**(code **)(puVar5 + 0x10))(lVar11,"hknpWorld");
      }
      FUN_01331c40(lVar11,auStack_180);
      plVar10 = (long *)param_2[1];
      param_2[1] = lVar11;
      if (plVar10 != (long *)0x0) {
        if (plVar10[1] != 0) {
          plVar7 = plVar10 + 2;
          do {
            lVar11 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))();
          }
        }
        lVar11 = param_2[1];
      }
      FUN_012df824(*(undefined8 *)(lVar11 + 0x8a8),0x400);
      FUN_012df87c(*(undefined8 *)(param_2[1] + 0x8b0),0x80);
      FUN_012df804(*(undefined8 *)(param_2[1] + 0x488),0,0x80);
      FUN_012e02d4(param_2[1] + 0x28,0,0x4000);
      lVar11 = *(long *)(param_2[1] + 0x8a8);
      local_1a0 = 0x58;
      plVar10 = (long *)(**(code **)puVar5)(0,&local_1a0,0);
      if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
        (**(code **)(puVar5 + 0x10))(plVar10,"hknpMaterialPaletteShapeTagCodec");
      }
      puVar5 = PTR_DAT_047ddb78;
      *(undefined4 *)(plVar10 + 3) = 0;
      *(undefined1 *)((long)plVar10 + 0x1c) = 1;
      plVar10[1] = 0xffffffff;
      plVar10[2] = 1;
      *plVar10 = (long)(puVar5 + 0x10);
      plVar10[6] = lVar11;
      plVar10[4] = 0;
      plVar10[5] = -0x8000000000000000;
      if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
        plVar7 = (long *)(lVar11 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar10[7] = 0;
      plVar10[8] = -0x100000000;
      *plVar10 = (long)&PTR_LAB_045ab350;
      plVar10[9] = 0;
      plVar10[10] = -0x100000000;
      *(undefined1 *)((long)plVar10 + 0x1c) = 2;
      plVar7 = (long *)param_2[4];
      param_2[4] = plVar10;
      if (plVar7 != (long *)0x0) {
        if (plVar7[1] != 0) {
          plVar10 = plVar7 + 2;
          do {
            lVar11 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
        plVar10 = (long *)param_2[4];
      }
      (**(code **)(*(long *)param_2[1] + 0x60))((long *)param_2[1],plVar10);
      FUN_012df9c0(&local_1a0,*param_2,param_2);
      uVar13 = local_1a0;
      local_1a0 = 0;
      lVar11 = param_2[5];
      param_2[5] = uVar13;
      if (lVar11 != 0) {
        FUN_02215380(param_2 + 6);
      }
      param_2[7] = local_190;
      param_2[8] = local_188;
      param_2[6] = local_198;
      FUN_012dfae0(&local_1a0,*param_2,param_2);
      uVar13 = local_1a0;
      local_1a0 = 0;
      lVar11 = param_2[9];
      param_2[9] = uVar13;
      if (lVar11 != 0) {
        FUN_02214fc4(param_2 + 10);
      }
      param_2[0xb] = local_190;
      param_2[0xc] = local_188;
      param_2[10] = local_198;
      FUN_012dfc00(&local_1a0,*param_2,param_2);
      uVar13 = local_1a0;
      local_1a0 = 0;
      lVar11 = param_2[0xd];
      param_2[0xd] = uVar13;
      if (lVar11 != 0) {
        FUN_02214c08(param_2 + 0xe);
      }
      param_2[0xf] = local_190;
      param_2[0x10] = local_188;
      param_2[0xe] = local_198;
      FUN_012dfd20(&local_1a0,*param_2,param_2);
      uVar13 = local_1a0;
      local_1a0 = 0;
      lVar11 = param_2[0x11];
      param_2[0x11] = uVar13;
      if (lVar11 != 0) {
        FUN_0221484c(param_2 + 0x12);
      }
      param_2[0x13] = local_190;
      param_2[0x14] = local_188;
      param_2[0x12] = local_198;
      FUN_012dfe40(&local_1a0,*param_2,param_2);
      uVar13 = local_1a0;
      local_1a0 = 0;
      lVar11 = param_2[0x15];
      param_2[0x15] = uVar13;
      if (lVar11 != 0) {
        FUN_02214490(param_2 + 0x16);
      }
      param_2[0x17] = local_190;
      param_2[0x18] = local_188;
      param_2[0x16] = local_198;
      FUN_012dff60(&local_1a0,*param_2,param_2);
      uVar13 = local_1a0;
      local_1a0 = 0;
      lVar11 = param_2[0x19];
      param_2[0x19] = uVar13;
      if (lVar11 != 0) {
        FUN_022140d4(param_2 + 0x1a);
      }
      param_2[0x1b] = local_190;
      param_2[0x1c] = local_188;
      param_2[0x1a] = local_198;
      plVar10 = (long *)*param_2;
      puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x38,8);
      if (puVar9 == (undefined8 *)0x0) {
        local_190 = 0;
        local_188 = 0;
        local_198 = (long *)0x0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar10;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        uVar13 = *param_2;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = uVar13;
        puVar9[4] = 0x1fffffffffffffff;
        puVar9[5] = 0;
        *(undefined4 *)(puVar9 + 6) = 0;
        local_190 = 0x38;
        local_188 = 8;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        local_198 = plVar10;
      }
      local_1a0 = 0;
      lVar11 = param_2[0x1d];
      param_2[0x1d] = puVar9;
      if (lVar11 != 0) {
        FUN_01331820(param_2 + 0x1e);
      }
      param_2[0x1f] = local_190;
      param_2[0x20] = local_188;
      param_2[0x1e] = local_198;
      FUN_012df8d4(param_2 + 0x38,*param_2);
      *(undefined8 *)PTR_DAT_047d1ae0 = 0xb22bcc77b22bcc77;
      FUN_01330f00(auStack_180);
      return;
    }
  } while( true );
}


