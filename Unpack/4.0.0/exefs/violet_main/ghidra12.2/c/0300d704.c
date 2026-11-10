/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300d704; name: FUN_0300d704
 */


void FUN_0300d704(undefined8 *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  void *__dest;
  long *plVar19;
  void *__src;
  long *plVar20;
  ulong uVar21;
  long local_68;
  
  param_1[2] = 0x8000000000000000;
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  uVar18 = (ulong)param_4;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  plVar19 = param_1 + 10;
  *plVar19 = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  plVar20 = param_1 + 7;
  *plVar20 = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = param_3;
  *(undefined8 *)((long)param_1 + 100) = 0;
  puVar5 = PTR_DAT_047d1a08;
  param_1[0xb] = 0;
  local_68 = 0x538;
  plVar6 = (long *)(**(code **)puVar5)(0,&local_68,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar6,"hknpParticleSimulationContext");
  }
  memset(plVar6 + 5,0,0x510);
  plVar6[2] = 1;
  plVar6[3] = (long)(plVar6 + 5);
  *plVar6 = (long)(PTR_DAT_047e49e0 + 0x10);
  plVar6[1] = 0xffffffff;
  lVar13 = 0;
  plVar6[4] = -0x7fffffe000000000;
  plVar7 = plVar6 + 0x27;
  do {
    iVar10 = (int)lVar13;
    *(int *)((long)plVar7 + -0xc) = iVar10 + 1;
    *(int *)(plVar7 + -1) = iVar10 + 2;
    lVar13 = lVar13 + 4;
    *(int *)((long)plVar7 + -4) = iVar10 + 3;
    *(int *)plVar7 = (int)lVar13;
    plVar7 = plVar7 + 2;
  } while (lVar13 != 0x100);
  *(undefined4 *)(plVar6 + 0xa5) = 0x1ff;
  *(undefined4 *)(plVar6 + 0x25) = 0;
  plVar6[0xa6] = 0;
  plVar7 = (long *)param_1[8];
  if (((plVar7 != plVar6) && (param_1[8] = plVar6, plVar7 != (long *)0x0)) && (plVar7[1] != 0)) {
    plVar6 = plVar7 + 2;
    do {
      lVar13 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  local_68 = 0x3e40;
  lVar13 = (**(code **)puVar5)(0,&local_68,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(lVar13,"hknpCollisionQueryDispatcher");
  }
  FUN_02ea2338(lVar13,1);
  plVar6 = (long *)*plVar20;
  *plVar20 = lVar13;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
    lVar13 = *plVar20;
  }
  FUN_02e9b430(lVar13,0xffffffff);
  FUN_02ea3128(*plVar20 + 0x98,1,9,PTR_LAB_047e49f8,"hkParticleCompressedMeshClosest",0xffffffff,0);
  FUN_02ea3128(*plVar20 + 0x98,1,10,PTR_LAB_047e4a00,"hkParticleExternMeshClosest",0xffffffff,0);
  FUN_02ea3128(*plVar20 + 0x98,1,8,PTR_LAB_047e4a08,"hkParticleMeshClosest",0xffffffff,0);
  FUN_02ea3128(*plVar20 + 0x98,1,0xc,PTR_LAB_047e4a10,"hknpParticleCompoundClosest",0xffffffff,0);
  FUN_02ea3128(*plVar20 + 0x98,1,0xe,PTR_LAB_047e4a18,"hknpParticleHeightFieldClosest",0xffffffff,0)
  ;
  FUN_02ea3128(*plVar20 + 0x98,1,0xd,PTR_LAB_047e4a20,"hknpParticleSDFClosest",0xffffffff,0);
  local_68 = 0x20;
  puVar8 = (undefined8 *)(**(code **)puVar5)(0,&local_68,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(puVar8,"hkTask");
  }
  *puVar8 = &PTR_LAB_046130a8;
  puVar8[1] = 0;
  puVar8[2] = 0x3d088889;
  puVar8[3] = 0;
  *(undefined4 *)(puVar8 + 3) = 0;
  plVar6 = (long *)*plVar19;
  *plVar19 = (long)puVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  local_68 = 0x10;
  puVar8 = (undefined8 *)(**(code **)puVar5)(0,&local_68,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(puVar8,"hkTask");
  }
  *puVar8 = &PTR_LAB_04613108;
  puVar8[1] = 0;
  plVar6 = (long *)param_1[0xb];
  param_1[0xb] = puVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined8 **)(param_1[10] + 8) = param_1;
  *(undefined8 **)(param_1[0xb] + 8) = param_1;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  uVar2 = *(uint *)(param_1 + 2);
  uVar21 = (ulong)uVar2;
  if ((param_4 <= *(uint *)((long)param_1 + 0x2c)) && (param_4 < uVar2)) {
    uVar16 = uVar18;
    do {
      if ((~*(uint *)(param_1[1] + (long)(int)uVar16 * 0x10 + 8) & 0xffffff) != 0) {
        return;
      }
      uVar11 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar11;
    } while (uVar2 != uVar11);
  }
  uVar11 = *(uint *)(param_1 + 2);
  __src = (void *)param_1[1];
  if ((param_4 <= *(uint *)((long)param_1 + 0x2c)) && (param_4 < uVar11)) {
    uVar16 = uVar18;
    do {
      if ((~*(uint *)((long)__src + (long)(int)uVar16 * 0x10 + 8) & 0xffffff) != 0) {
        return;
      }
      uVar14 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar14;
    } while (uVar11 != uVar14);
  }
  lVar13 = param_1[3];
  uVar14 = uVar11;
  if (param_4 <= uVar11) {
    uVar14 = param_4;
  }
  if (param_4 == 0) {
    __dest = (void *)0x0;
    param_1[3] = 0;
  }
  else {
    *(uint *)(param_1 + 4) = param_4 << 4;
    local_68 = (long)(int)(param_4 << 4);
    lVar9 = (**(code **)puVar5)(0,&local_68,0);
    param_1[3] = lVar9;
    __dest = (void *)(lVar9 + 0xfU & 0xfffffffffffffff0);
  }
  if (__src != (void *)0x0) {
    if (lVar13 == 0) {
      if (*(int *)((long)param_1 + 0x14) < 0) {
        if (__dest != __src) {
          memmove(__dest,__src,(ulong)uVar14 << 4);
        }
      }
      else {
        memcpy(__dest,__src,(ulong)uVar14 << 4);
        *(undefined4 *)(param_1 + 2) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,param_1[1],(ulong)*(uint *)((long)param_1 + 0x14) << 4);
        }
        param_1[1] = 0;
        *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
      }
    }
    else {
      memcpy(__dest,__src,(ulong)uVar14 << 4);
      (**(code **)(puVar5 + 8))(0,lVar13,0);
    }
  }
  param_1[1] = __dest;
  *(uint *)(param_1 + 2) = param_4;
  *(uint *)((long)param_1 + 0x14) = param_4 | 0x80000000;
  if (uVar11 < param_4) {
    lVar13 = (long)(int)uVar11;
    *(uint *)((long)__dest + lVar13 * 0x10 + 8) =
         *(uint *)((long)__dest + lVar13 * 0x10 + 8) | 0xffffff;
    uVar14 = uVar11 + 1;
    if (uVar14 != param_4) {
      if ((~uVar11 + param_4 & 1) != 0) {
        lVar9 = param_1[1] + (long)(int)uVar14 * 0x10;
        *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0xffffff;
        uVar14 = uVar11 + 2;
      }
      if (param_4 - 2 != uVar11) {
        do {
          lVar9 = param_1[1] + (long)(int)uVar14 * 0x10;
          *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0xffffff;
          iVar10 = uVar14 + 1;
          uVar14 = uVar14 + 2;
          lVar9 = param_1[1] + (long)iVar10 * 0x10;
          *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0xffffff;
        } while (param_4 != uVar14);
      }
    }
    uVar14 = uVar11;
    if ((param_4 - uVar11 & 1) != 0) {
      uVar14 = uVar11 + 1;
      *(uint *)(param_1[1] + lVar13 * 0x10 + 0xc) = uVar14;
    }
    if (~uVar11 + param_4 != 0) {
      do {
        lVar13 = (long)(int)uVar14;
        iVar10 = uVar14 + 1;
        uVar14 = uVar14 + 2;
        *(int *)(param_1[1] + lVar13 * 0x10 + 0xc) = iVar10;
        *(uint *)(param_1[1] + (long)iVar10 * 0x10 + 0xc) = uVar14;
      } while (param_4 != uVar14);
    }
    *(undefined4 *)(param_1[1] + (long)(int)(param_4 - 1) * 0x10 + 0xc) = 0xffffffff;
    uVar14 = *(uint *)((long)param_1 + 0x24);
    if (uVar11 == 0) {
      *(uint *)((long)param_1 + 0x24) = uVar14 & 0xff000000;
    }
    else {
      uVar12 = uVar14 & 0xffffff;
      if (uVar12 == 0xffffff) {
        *(uint *)((long)param_1 + 0x24) = uVar14 & 0xff000000 | uVar11 & 0xffffff;
      }
      else {
        do {
          puVar17 = (uint *)(param_1[1] + (long)(int)uVar12 * 0x10 + 0xc);
          uVar12 = *puVar17;
        } while (uVar12 != 0xffffffff);
        *puVar17 = uVar11;
      }
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
    if (0 < *(int *)(param_1 + 2)) {
      uVar16 = 0;
      uVar15 = 0;
      lVar13 = 8;
      do {
        uVar11 = (uint)uVar16;
        if ((~*(uint *)(param_1[1] + lVar13) & 0xffffff) == 0) {
          if ((~*(uint *)((long)param_1 + 0x24) & 0xffffff) == 0) {
            *(uint *)((long)param_1 + 0x24) =
                 *(uint *)((long)param_1 + 0x24) & 0xff000000 | uVar11 & 0xffffff;
          }
          else {
            *(uint *)(param_1[1] + (long)(int)uVar15 * 0x10 + 0xc) = uVar11;
          }
          uVar15 = uVar16 & 0xffffffff;
        }
        else {
          *(uint *)((long)param_1 + 0x2c) = uVar11;
        }
        uVar16 = uVar16 + 1;
        lVar13 = lVar13 + 0x10;
      } while ((long)uVar16 < (long)*(int *)(param_1 + 2));
      if (0 < (int)uVar15) {
        *(undefined4 *)(param_1[1] + uVar15 * 0x10 + 0xc) = 0xffffffff;
      }
    }
  }
  if (uVar2 < param_4) {
    uVar16 = ~uVar21;
    if ((param_4 - uVar2 & 1) != 0) {
      lVar13 = uVar21 * 0x10;
      uVar21 = uVar21 + 1;
      *(undefined4 *)(param_1[1] + lVar13 + 8) = 0xffffff;
    }
    if (uVar16 + uVar18 != 0) {
      lVar9 = uVar18 - uVar21;
      lVar13 = uVar21 << 4;
      do {
        *(undefined4 *)(param_1[1] + lVar13 + 8) = 0xffffff;
        lVar1 = param_1[1] + lVar13;
        lVar9 = lVar9 + -2;
        lVar13 = lVar13 + 0x20;
        *(undefined4 *)(lVar1 + 0x18) = 0xffffff;
      } while (lVar9 != 0);
    }
  }
  return;
}


