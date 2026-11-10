/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346ed14; name: FUN_0346ed14
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0346ed14(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  MutexType *pMVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  undefined1 *puVar14;
  int *piVar15;
  ushort uVar16;
  undefined8 uVar17;
  long *plVar18;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 ******ppppppuVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  undefined4 *puVar31;
  long *plVar32;
  float *pfVar33;
  long lVar34;
  void *pvVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  void *__dest;
  long lVar39;
  undefined4 uVar40;
  ulong uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  uint uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auStack_c0 [8];
  ulong *local_b8;
  undefined8 ******local_b0;
  long local_a8;
  ulong local_a0;
  long *local_98;
  ulong local_90;
  undefined1 *local_88;
  
  if ((*(byte *)(param_1 + 0x33) >> 5 & 1) != 0) {
    FUN_0346da24(param_1);
    uVar16 = *(ushort *)(param_1 + 0x33);
    *(ushort *)(param_1 + 0x33) = uVar16 & 0xffdf;
    if ((uVar16 >> 6 & 1) == 0) {
      FUN_034b10d8(param_1[0x2e],param_1 + 2,param_1 + 0x20,param_1 + 0x25);
      if ((((*(byte *)(param_1 + 0x22) >> 3 & 1) != 0) &&
          ((ushort)((*(ushort *)((long)param_1 + 0x13c) & 7) - 1) < 2)) && (param_1[0x2d] == 0)) {
        lVar34 = param_1[0x2e];
        do {
          lVar39 = lVar34;
          lVar34 = *(long *)(lVar39 + 0x98);
        } while (*(long *)(lVar39 + 0x98) != 0 && (*(ulong *)(lVar39 + 0xb8) & 0x20020000ffe) == 0);
        if (*(long *)(lVar39 + 0x88) == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x38);
          if (puVar9 != (undefined8 *)0x0) {
            puVar9[5] = 0;
            puVar9[6] = 0;
            *puVar9 = 0;
            puVar9[3] = 0;
            puVar9[4] = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
            memcpy(puVar9,*(void **)(lVar39 + 0x88),0x38);
          }
        }
        param_1[0x2d] = (long)puVar9;
      }
    }
    else {
      param_1[0x20] = 0x3f8000003f000000;
      param_1[0x21] = 0x42c8000000000000;
      *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xf0;
    }
    if ((param_1[0x2d] != 0) && (param_1[0x1e] == 0)) {
      iVar8 = FUN_0346e2e0(param_1,0);
      puVar1 = PTR_DAT_047e7040;
      if ((iVar8 == 1) && (param_1[0x1e] != 0)) {
        iVar8 = FUN_034b27d0(*(undefined8 *)PTR_DAT_047e7040,param_1[0x1e],param_1);
        if (iVar8 == 2) {
          param_1[0x1e] = 0;
        }
        else {
          (**(code **)(*param_1 + 0x68))(param_1,param_1[0x1e]);
          if ((iVar8 == 1) && (param_1[0x1e] != 0)) {
            lVar34 = param_1[0x2e];
            do {
              if (*(long *)(lVar34 + 0x88) != 0) {
                lVar34 = *(long *)(lVar34 + 0x88) + 0x38;
                goto LAB_0346eed8;
              }
              lVar34 = *(long *)(lVar34 + 0x98);
            } while (lVar34 != 0);
            lVar34 = 0;
LAB_0346eed8:
            FUN_034b2e64(*(undefined8 *)puVar1,param_1[0x1e],lVar34);
          }
        }
      }
    }
    lVar34 = param_1[0x28];
    if (lVar34 == 0) {
      uVar49 = *(uint *)((long)param_1 + 300);
      if (uVar49 != 0) {
        lVar34 = *(long *)PTR_DAT_047e6f28;
        pMVar3 = (MutexType *)(lVar34 + 0x150);
        nn::os::LockMutex(pMVar3);
        uVar6 = *(uint *)(lVar34 + 0x178);
        if (uVar6 != 0) {
          uVar37 = 0;
          if (uVar6 != 0) {
            uVar37 = uVar49 / uVar6;
          }
          for (lVar34 = *(long *)(*(long *)(lVar34 + 0x170) + (ulong)(uVar49 - uVar37 * uVar6) * 8);
              lVar34 != 0; lVar34 = *(long *)(lVar34 + 8)) {
            if (*(uint *)(lVar34 + 0x10) == uVar49) {
              *(int *)(lVar34 + 0x14) = *(int *)(lVar34 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar3);
              param_1[0x28] = lVar34;
              goto LAB_0346eee4;
            }
          }
        }
        nn::os::UnlockMutex(pMVar3);
        param_1[0x28] = 0;
      }
    }
    else {
LAB_0346eee4:
      *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(lVar34 + 0x20);
      *(undefined4 *)((long)param_1 + 0x134) = *(undefined4 *)(lVar34 + 0x24);
      *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(lVar34 + 0x28);
      puVar1 = PTR_DAT_047e6fd8;
      if (((*(byte *)(param_1 + 0x33) >> 6 & 1) == 0) && (*(int *)(lVar34 + 0xe8) != 0)) {
        puVar31 = *(undefined4 **)(lVar34 + 0xe0);
        do {
          iVar8 = 0;
          if (puVar31[8] != 0) {
            iVar8 = puVar31[8] + -2;
          }
          iVar8 = FUN_034b5ad4(*(undefined8 *)puVar1,param_1,*puVar31,puVar31[1],puVar31[2],
                               puVar31[3],puVar31[4],puVar31[9],*(long *)(puVar31 + 6) + 0xc,iVar8,
                               param_1 + 2,0,1);
        } while ((iVar8 == 1) &&
                (puVar31 = puVar31 + 0xc,
                puVar31 !=
                (undefined4 *)(*(long *)(lVar34 + 0xe0) + (ulong)*(uint *)(lVar34 + 0xe8) * 0x30)));
      }
    }
  }
  puVar2 = PTR_DAT_047e6cb8;
  puVar1 = PTR_DAT_047e2fd0;
  if ((*(ushort *)((long)param_1 + 0x13c) & 7) == 2) {
    plVar32 = *(long **)(param_1[2] + 0x30);
    if ((plVar32 == (long *)0x0) && (plVar32 = *(long **)PTR_DAT_047e6cb8, plVar32 == (long *)0x0))
    {
      plVar32 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
      if (plVar32 == (long *)0x0) {
        *(undefined8 *)puVar2 = 0;
      }
      else {
        *plVar32 = (long)(PTR_DAT_047e6e40 + 0x10);
        plVar32[1] = 0;
        puVar1 = PTR_DAT_047e6958;
        lVar34 = *(long *)(PTR_DAT_047e6958 + 8);
        plVar32[2] = 0;
        plVar32[3] = lVar34;
        plVar25 = (long *)(puVar1 + 0x10);
        if (*(long *)(puVar1 + 0x10) != 0) {
          plVar25 = (long *)(lVar34 + 0x10);
        }
        *plVar25 = (long)plVar32;
        *(long **)(puVar1 + 8) = plVar32;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        puVar1 = PTR_DAT_047e6e48 + 0x10;
        plVar32[8] = 0;
        plVar32[9] = 0;
        *plVar32 = (long)puVar1;
        plVar32[0xc] = 0;
        plVar32[0xd] = 0;
        plVar32[0x12] = 0;
        plVar32[0x13] = 0;
        plVar32[0x16] = 0;
        plVar32[0x17] = 0;
        plVar32[0x1a] = 0;
        plVar32[0x1b] = 0;
        *(long **)puVar2 = plVar32;
        *(undefined2 *)(plVar32 + 0x1c) = 0x101;
      }
    }
    uVar11 = FUN_0346fc80(param_1 + 0x29,(int)plVar32[0x1b]);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    uVar49 = *(uint *)(plVar32 + 0x1b);
    if (uVar49 != 0) {
      plVar18 = (long *)plVar32[0x1a];
      iVar8 = 0;
      pvVar35 = (void *)param_1[0x29];
      lVar34 = *(long *)PTR_DAT_047e6cc0;
      plVar25 = plVar18;
LAB_0346f39c:
      uVar6 = *(uint *)(lVar34 + 0x38);
      if (uVar6 != 0) {
        lVar39 = *plVar25;
        uVar37 = 0;
        if (uVar6 != 0) {
          uVar37 = (uint)lVar39 / uVar6;
        }
        for (plVar20 = *(long **)(*(long *)(lVar34 + 0x30) +
                                 (ulong)((uint)lVar39 - uVar37 * uVar6) * 8); plVar20 != (long *)0x0
            ; plVar20 = (long *)*plVar20) {
          if (plVar20[1] == lVar39) {
            if ((plVar20[2] != 0) && (lVar36 = *(long *)(plVar20[2] + 0x40), lVar36 != 0)) {
              plVar18 = *(long **)(*(long *)(param_1[2] + 0x28) + 0x28);
              uVar49 = *(uint *)(*(long *)(param_1[2] + 0x28) + 0x30);
              if ((uVar49 != 0) && (*plVar18 != lVar39)) {
                lVar12 = (ulong)uVar49 * 0x18;
                plVar20 = plVar18;
                goto LAB_0346f440;
              }
              plVar22 = plVar18;
              goto LAB_0346f408;
            }
            break;
          }
        }
      }
      goto LAB_0346f4ac;
    }
    goto LAB_0346f8a0;
  }
  if ((*(ushort *)((long)param_1 + 0x13c) >> 7 & 1) != 0) {
    uVar16 = *(ushort *)(param_1 + 0x33);
    if ((uVar16 >> 3 & 1) == 0) {
      uVar7 = *(ushort *)(*(long *)(param_1[2] + 0x28) + 0x38);
      uVar11 = (ulong)uVar7;
      if (uVar7 != 0) {
        lVar34 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(uVar11 + (ulong)(uint)uVar7 * 4) * 8);
        param_1[0x2b] = lVar34;
        if (lVar34 == 0) {
          return 0;
        }
        *(uint *)((long)param_1 + 0x164) = (uint)uVar7;
        pvVar35 = *(void **)(*(long *)(param_1[2] + 0x28) + 0x20);
        uVar38 = uVar11;
        do {
          uVar38 = uVar38 - 1;
          uVar6 = *(uint *)(param_1 + 0x2c);
          uVar49 = (uint)uVar11;
          if (uVar6 < uVar49) {
LAB_0346f170:
            if (uVar6 < uVar49) {
              pvVar10 = (void *)(param_1[0x2b] + (ulong)*(uint *)(param_1 + 0x2c) * 0x28);
              *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
            }
            else {
              pvVar10 = (void *)0x0;
            }
          }
          else {
            iVar8 = uVar49 + (uVar49 >> 1);
            if (uVar49 == 0) {
              iVar8 = 1;
            }
            uVar49 = iVar8 + uVar49;
            lVar34 = (**(code **)(puVar1 + 0x20))(0,param_1[0x2b],(ulong)uVar49 * 0x28);
            pvVar10 = (void *)0x0;
            if (lVar34 != 0) {
              param_1[0x2b] = lVar34;
              *(uint *)((long)param_1 + 0x164) = uVar49;
              goto LAB_0346f170;
            }
          }
          memcpy(pvVar10,pvVar35,0x28);
          if (uVar38 == 0) goto LAB_0346f290;
          uVar11 = (ulong)*(uint *)((long)param_1 + 0x164);
          pvVar35 = (void *)((long)pvVar35 + 0x28);
        } while( true );
      }
      goto LAB_0346f294;
    }
    goto LAB_0346f29c;
  }
  lVar34 = param_1[2];
  plVar32 = *(long **)(lVar34 + 0x38);
  if (plVar32 != (long *)0x0) {
LAB_0346f0c8:
    uVar41 = FUN_034ec3a8(plVar32,param_1 + 0x29,param_1[0x2f]);
    goto LAB_0346f8ac;
  }
  plVar32 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x48);
  if (plVar32 != (long *)0x0) {
    plVar32[7] = 0;
    plVar32[8] = 0;
    plVar32[2] = 0;
    plVar32[5] = 0;
    plVar32[6] = 0;
    plVar32[3] = 0;
    plVar32[4] = 0;
    *plVar32 = (long)(PTR_DAT_047e6e88 + 0x10);
    plVar32[1] = 0;
    puVar2 = PTR_DAT_047e6e58;
    lVar39 = *(long *)(PTR_DAT_047e6e58 + 8);
    plVar32[2] = 0;
    plVar32[3] = lVar39;
    plVar25 = (long *)(puVar2 + 0x10);
    if (*(long *)(puVar2 + 0x10) != 0) {
      plVar25 = (long *)(lVar39 + 0x10);
    }
    *plVar25 = (long)plVar32;
    *(long **)(puVar2 + 8) = plVar32;
    *(int *)puVar2 = *(int *)puVar2 + 1;
    puVar2 = PTR_DAT_047e6e60;
    plVar32[4] = 0;
    plVar32[5] = 0;
    plVar32[8] = 0;
    plVar32[6] = 0;
    plVar32[7] = 0;
    *plVar32 = (long)(puVar2 + 0x10);
    *(long **)(lVar34 + 0x38) = plVar32;
    plVar32[1] = lVar34;
    iVar8 = (**(code **)(*plVar32 + 0x10))(plVar32,*(undefined8 *)(lVar34 + 0x78));
    if (iVar8 == 1) goto LAB_0346f0c8;
    (**(code **)*plVar32)(plVar32);
    (**(code **)(puVar1 + 0x30))(4,plVar32);
    *(undefined8 *)(lVar34 + 0x38) = 0;
  }
LAB_0346f8a0:
  uVar41 = 0x501502f9;
LAB_0346f8ac:
  if (((ushort)((*(ushort *)((long)param_1 + 0x13c) & 7) - 1) < 2) &&
     (lVar34 = param_1[0x2d], lVar34 != 0)) {
    if ((param_1[0x1e] != 0) &&
       (((iVar8 = *(int *)(lVar34 + 0x30),
         *(byte *)(param_1[0x1e] + 0x2d) = (byte)((uint)iVar8 >> 0x1f), iVar8 < 0 &&
         (piVar15 = (int *)param_1[0x1e], (*(byte *)(piVar15 + 10) >> 1 & 1) != 0)) &&
        (*piVar15 == 0)))) {
      lVar39 = param_1[0x2e];
      do {
        if (*(long *)(lVar39 + 0x88) != 0) {
          lVar39 = *(long *)(lVar39 + 0x88) + 0x38;
          goto LAB_0346f924;
        }
        lVar39 = *(long *)(lVar39 + 0x98);
      } while (lVar39 != 0);
      lVar39 = 0;
LAB_0346f924:
      FUN_034b2e64(*(undefined8 *)PTR_DAT_047e7040,piVar15,lVar39);
    }
    puVar1 = PTR_DAT_047e6cc0;
    if ((int)param_1[0x2a] != 0) {
      uVar41 = 0x501502f9;
      pfVar33 = (float *)param_1[0x29];
LAB_0346f950:
      uVar49 = *(uint *)(*(long *)puVar1 + 0x38);
      if (uVar49 != 0) {
        lVar39 = *(long *)(pfVar33 + 0x18);
        uVar6 = 0;
        if (uVar49 != 0) {
          uVar6 = (uint)lVar39 / uVar49;
        }
        for (plVar32 = *(long **)(*(long *)(*(long *)puVar1 + 0x30) +
                                 (ulong)((uint)lVar39 - uVar6 * uVar49) * 8); plVar32 != (long *)0x0
            ; plVar32 = (long *)*plVar32) {
          if (plVar32[1] == lVar39) {
            if ((plVar32[2] != 0) && (lVar36 = *(long *)(plVar32[2] + 0x40), lVar36 != 0)) {
              fVar52 = *(float *)(lVar34 + 0xc);
              fVar50 = *(float *)(lVar34 + 4);
              fVar51 = *(float *)(lVar34 + 8);
              if ((*(ushort *)((long)param_1 + 0x13c) & 7) == 2) {
                if (((*(ushort *)((long)param_1 + 0x13c) >> 8 & 1) == 0) ||
                   (lVar12 = param_1[0x1e], lVar12 == 0)) {
                  uVar17 = *(undefined8 *)(lVar36 + 0x60);
                  pfVar33[2] = *(float *)(lVar36 + 0x68);
                  *(undefined8 *)pfVar33 = uVar17;
                  uVar17 = *(undefined8 *)(lVar36 + 0x6c);
                  pfVar33[5] = *(float *)(lVar36 + 0x74);
                  *(undefined8 *)(pfVar33 + 3) = uVar17;
                  fVar52 = *(float *)(lVar34 + 4);
                  fVar42 = *(float *)(lVar34 + 8);
                  fVar43 = *(float *)(lVar34 + 0xc);
                  fVar50 = *(float *)(lVar36 + 0x3c) * fVar52 + fVar42 * *(float *)(lVar36 + 0x48) +
                           fVar43 * *(float *)(lVar36 + 0x54);
                  fVar51 = *(float *)(lVar36 + 0x40) * fVar52 + fVar42 * *(float *)(lVar36 + 0x4c) +
                           fVar43 * *(float *)(lVar36 + 0x58);
                  fVar52 = *(float *)(lVar36 + 0x44) * fVar52 + fVar42 * *(float *)(lVar36 + 0x50) +
                           fVar43 * *(float *)(lVar36 + 0x5c);
                  goto LAB_0346fb28;
                }
                plVar32 = *(long **)(lVar12 + 0x88);
                uVar49 = *(uint *)(lVar12 + 0x90);
                if ((uVar49 != 0) && (*plVar32 != lVar39)) {
                  lVar12 = (ulong)uVar49 * 0x30;
                  plVar25 = plVar32;
                  goto LAB_0346fb8c;
                }
                plVar20 = plVar32;
                goto LAB_0346f9dc;
              }
              fVar42 = pfVar33[4];
              fVar43 = pfVar33[5];
              fVar45 = *pfVar33;
              fVar44 = pfVar33[1];
              fVar46 = pfVar33[2];
              fVar47 = pfVar33[3];
              pfVar33[8] = fVar46 * fVar52 + fVar51 * fVar43 +
                           fVar50 * (fVar47 * fVar44 - fVar45 * fVar42) + pfVar33[8];
              pfVar33[6] = fVar45 * fVar52 + fVar50 * (fVar46 * fVar42 - fVar44 * fVar43) +
                           fVar51 * fVar47 + pfVar33[6];
              pfVar33[7] = pfVar33[7] + fVar51 * fVar42 + fVar52 * fVar44 +
                           fVar50 * (fVar45 * fVar43 - fVar47 * fVar46);
              uVar40 = FUN_03447c20(lVar36,*(undefined8 *)(param_1[2] + 0x28),pfVar33);
              uVar49 = NEON_fminnm(uVar40,(int)uVar41);
              uVar41 = (ulong)uVar49;
            }
            break;
          }
        }
      }
      goto LAB_0346fb64;
    }
    uVar41 = 0x501502f9;
  }
LAB_0346fbb8:
  lVar34 = param_1[0x28];
  if (lVar34 == 0) {
    uVar49 = *(uint *)((long)param_1 + 300);
    if (uVar49 != 0) {
      lVar34 = *(long *)PTR_DAT_047e6f28;
      pMVar3 = (MutexType *)(lVar34 + 0x150);
      nn::os::LockMutex(pMVar3);
      uVar6 = *(uint *)(lVar34 + 0x178);
      if (uVar6 != 0) {
        uVar37 = 0;
        if (uVar6 != 0) {
          uVar37 = uVar49 / uVar6;
        }
        for (lVar34 = *(long *)(*(long *)(lVar34 + 0x170) + (ulong)(uVar49 - uVar37 * uVar6) * 8);
            lVar34 != 0; lVar34 = *(long *)(lVar34 + 8)) {
          if (*(uint *)(lVar34 + 0x10) == uVar49) {
            *(int *)(lVar34 + 0x14) = *(int *)(lVar34 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar3);
            param_1[0x28] = lVar34;
            goto LAB_0346fbc0;
          }
        }
      }
      nn::os::UnlockMutex(pMVar3);
      param_1[0x28] = 0;
    }
  }
  else {
LAB_0346fbc0:
    (**(code **)(*param_1 + 0x70))(uVar41,param_1,lVar34);
  }
  return (int)param_1[0x2a];
  while( true ) {
    plVar22 = plVar20 + 3;
    plVar29 = plVar20 + 3;
    plVar20 = plVar22;
    if (*plVar29 == lVar39) break;
LAB_0346f440:
    lVar12 = lVar12 + -0x18;
    if (lVar12 == 0) goto LAB_0346f460;
  }
LAB_0346f408:
  if ((plVar22 == plVar18 + (ulong)uVar49 * 3) || ((int)plVar22[2] == 0)) {
LAB_0346f460:
    fVar52 = 0.0;
    fVar42 = 0.0;
    fVar50 = 0.0;
    fVar51 = 100.0;
  }
  else {
    pfVar33 = (float *)plVar22[1];
    fVar52 = *pfVar33;
    fVar42 = pfVar33[1];
    fVar50 = pfVar33[2];
    fVar51 = pfVar33[3];
  }
  memcpy(pvVar35,(void *)(lVar36 + 0x60),0x24);
  *(float *)((long)pvVar35 + 0x4c) = fVar50;
  *(float *)((long)pvVar35 + 0x50) = fVar51;
  *(undefined8 *)((long)pvVar35 + 0x44) = 0;
  *(long *)((long)pvVar35 + 0x60) = lVar39;
  *(undefined4 *)((long)pvVar35 + 0x58) = 0xffffffff;
  *(int *)((long)pvVar35 + 0x5c) = iVar8;
  *(float *)((long)pvVar35 + 0x3c) = fVar52 * 100.0;
  *(float *)((long)pvVar35 + 0x40) = fVar42 * 100.0;
  plVar18 = (long *)plVar32[0x1a];
  uVar49 = *(uint *)(plVar32 + 0x1b);
LAB_0346f4ac:
  plVar25 = plVar25 + 1;
  pvVar35 = (void *)((long)pvVar35 + 0x78);
  iVar8 = iVar8 + 1;
  if (plVar25 == plVar18 + uVar49) goto LAB_0346f8a0;
  goto LAB_0346f39c;
LAB_0346f290:
  uVar16 = *(ushort *)(param_1 + 0x33);
LAB_0346f294:
  *(ushort *)(param_1 + 0x33) = uVar16 | 8;
LAB_0346f29c:
  puVar1 = PTR_DAT_047e6cb8;
  uVar49 = *(uint *)(param_1 + 0x2c);
  uVar11 = (ulong)uVar49;
  plVar32 = *(long **)(param_1[2] + 0x30);
  if ((plVar32 == (long *)0x0) && (plVar32 = *(long **)PTR_DAT_047e6cb8, plVar32 == (long *)0x0)) {
    plVar32 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
    if (plVar32 == (long *)0x0) {
      *(undefined8 *)puVar1 = 0;
    }
    else {
      *plVar32 = (long)(PTR_DAT_047e6e40 + 0x10);
      plVar32[1] = 0;
      puVar2 = PTR_DAT_047e6958;
      lVar34 = *(long *)(PTR_DAT_047e6958 + 8);
      plVar32[2] = 0;
      plVar32[3] = lVar34;
      plVar25 = (long *)(puVar2 + 0x10);
      if (*(long *)(puVar2 + 0x10) != 0) {
        plVar25 = (long *)(lVar34 + 0x10);
      }
      *plVar25 = (long)plVar32;
      *(long **)(puVar2 + 8) = plVar32;
      *(int *)puVar2 = *(int *)puVar2 + 1;
      puVar2 = PTR_DAT_047e6e48 + 0x10;
      plVar32[8] = 0;
      plVar32[9] = 0;
      *plVar32 = (long)puVar2;
      plVar32[0xc] = 0;
      plVar32[0xd] = 0;
      plVar32[0x12] = 0;
      plVar32[0x13] = 0;
      plVar32[0x16] = 0;
      plVar32[0x17] = 0;
      plVar32[0x1a] = 0;
      plVar32[0x1b] = 0;
      *(long **)puVar1 = plVar32;
      *(undefined2 *)(plVar32 + 0x1c) = 0x101;
    }
  }
  uVar38 = FUN_0346fc80(param_1 + 0x29,(int)plVar32[0x1b] * uVar49);
  if ((uVar38 & 1) == 0) {
    return 0;
  }
  puVar14 = auStack_c0 + uVar11 * -0x10;
  uVar49 = *(uint *)(plVar32 + 0x1b);
  if (uVar49 != 0) {
    local_b8 = &local_a0 + uVar11 * -2;
    plVar20 = (long *)plVar32[0x1a];
    local_b0 = &local_b0 + uVar11 * -2;
    uVar41 = 0x501502f9;
    pvVar35 = (void *)param_1[0x29];
    uVar38 = uVar11 & 0xfffffffe;
    local_a8 = uVar11 * 0x28 + -0x28;
    plVar18 = (long *)PTR_DAT_047e6cc0;
    plVar25 = plVar20;
    local_a0 = uVar38;
    local_98 = plVar32;
    local_90 = uVar11;
    local_88 = puVar14;
LAB_0346f560:
    uVar6 = *(uint *)(*plVar18 + 0x38);
    if (uVar6 != 0) {
      uVar37 = 0;
      uVar19 = (uint)*plVar25;
      if (uVar6 != 0) {
        uVar37 = uVar19 / uVar6;
      }
      for (plVar32 = *(long **)(*(long *)(*plVar18 + 0x30) + (ulong)(uVar19 - uVar37 * uVar6) * 8);
          plVar32 != (long *)0x0; plVar32 = (long *)*plVar32) {
        if (plVar32[1] == *plVar25) {
          if (plVar32[2] != 0) {
            lVar34 = *(long *)(plVar32[2] + 0x40);
            if (lVar34 != 0) {
              lVar39 = *(long *)(*(long *)(lVar34 + 8) + 0x78);
              plVar32 = *(long **)(*(long *)(param_1[2] + 0x28) + 0x28);
              uVar6 = *(uint *)(*(long *)(param_1[2] + 0x28) + 0x30);
              uVar37 = (uint)uVar11;
              if ((uVar6 != 0) && (*plVar32 != lVar39)) {
                lVar36 = (ulong)uVar6 * 0x18;
                plVar29 = plVar32;
                goto LAB_0346f620;
              }
              plVar21 = plVar32;
              goto LAB_0346f5d8;
            }
          }
          break;
        }
      }
    }
    goto LAB_0346f884;
  }
  goto LAB_0346f8a0;
  while( true ) {
    plVar21 = plVar29 + 3;
    plVar22 = plVar29 + 3;
    plVar29 = plVar21;
    if (*plVar22 == lVar39) break;
LAB_0346f620:
    lVar36 = lVar36 + -0x18;
    if (lVar36 == 0) goto LAB_0346f640;
  }
LAB_0346f5d8:
  if ((plVar21 == plVar32 + (ulong)uVar6 * 3) || (uVar6 = *(uint *)(plVar21 + 2), uVar6 == 0)) {
LAB_0346f640:
    if (uVar37 == 0) goto LAB_0346f884;
    if (uVar37 == 1) {
      uVar26 = 0;
    }
    else {
      uVar26 = 0;
      ppppppuVar23 = local_b0;
      do {
        uVar26 = uVar26 + 2;
        ppppppuVar23[-2] = (undefined8 *****)0x0;
        ppppppuVar23[-1] = (undefined8 *****)0x42c8000000000000;
        *ppppppuVar23 = (undefined8 *****)0x0;
        ppppppuVar23[1] = (undefined8 *****)0x42c8000000000000;
        ppppppuVar23 = ppppppuVar23 + 4;
      } while (uVar38 != uVar26);
    }
    if ((uVar11 & 1) != 0) {
      *(undefined8 *)(puVar14 + uVar26 * 0x10) = 0;
      *(undefined8 *)((long)(puVar14 + uVar26 * 0x10) + 8) = 0x42c8000000000000;
    }
  }
  else {
    uVar19 = uVar37;
    if (uVar6 <= uVar37) {
      uVar19 = uVar6;
    }
    if (uVar19 != 0) {
      uVar30 = (ulong)uVar19;
      uVar26 = uVar30 & 3;
      if (uVar30 - 1 < 3) {
        uVar28 = 0;
      }
      else {
        lVar36 = 0;
        uVar28 = 0;
        do {
          puVar9 = (undefined8 *)(puVar14 + lVar36);
          uVar17 = ((undefined8 *)(plVar21[1] + lVar36))[1];
          uVar28 = uVar28 + 4;
          *puVar9 = *(undefined8 *)(plVar21[1] + lVar36);
          puVar9[1] = uVar17;
          uVar17 = *(undefined8 *)(plVar21[1] + lVar36 + 0x18);
          puVar9[2] = *(undefined8 *)(plVar21[1] + lVar36 + 0x10);
          puVar9[3] = uVar17;
          uVar17 = *(undefined8 *)(plVar21[1] + lVar36 + 0x28);
          puVar9[4] = *(undefined8 *)(plVar21[1] + lVar36 + 0x20);
          puVar9[5] = uVar17;
          lVar12 = plVar21[1] + lVar36;
          lVar36 = lVar36 + 0x40;
          uVar17 = *(undefined8 *)(lVar12 + 0x38);
          puVar9[6] = *(undefined8 *)(lVar12 + 0x30);
          puVar9[7] = uVar17;
        } while ((uVar30 & 0xfffffffc) != uVar28);
      }
      if ((uVar19 & 3) != 0) {
        lVar36 = uVar28 << 4;
        do {
          puVar9 = (undefined8 *)(plVar21[1] + lVar36);
          puVar4 = (undefined8 *)(puVar14 + lVar36);
          uVar17 = puVar9[1];
          uVar26 = uVar26 - 1;
          lVar36 = lVar36 + 0x10;
          *puVar4 = *puVar9;
          puVar4[1] = uVar17;
        } while (uVar26 != 0);
      }
    }
    if (uVar6 < uVar37) {
      uVar26 = (ulong)uVar19;
      uVar24 = (ulong)(uVar19 - 1);
      uVar28 = ~uVar26;
      uVar30 = (ulong)(uVar37 - uVar19) & 3;
      if ((uVar37 - uVar19 & 3) != 0) {
        puVar9 = (undefined8 *)(puVar14 + uVar26 * 0x10);
        do {
          puVar4 = (undefined8 *)(plVar21[1] + uVar24 * 0x10);
          uVar26 = uVar26 + 1;
          uVar17 = puVar4[1];
          uVar30 = uVar30 - 1;
          *puVar9 = *puVar4;
          puVar9[1] = uVar17;
          puVar9 = puVar9 + 2;
        } while (uVar30 != 0);
      }
      if (2 < uVar28 + uVar11) {
        lVar36 = uVar11 - uVar26;
        puVar27 = local_b8 + uVar26 * 2;
        do {
          puVar5 = (ulong *)(plVar21[1] + uVar24 * 0x10);
          lVar36 = lVar36 + -4;
          uVar26 = puVar5[1];
          puVar27[-4] = *puVar5;
          puVar27[-3] = uVar26;
          puVar5 = (ulong *)(plVar21[1] + uVar24 * 0x10);
          uVar26 = puVar5[1];
          puVar27[-2] = *puVar5;
          puVar27[-1] = uVar26;
          puVar5 = (ulong *)(plVar21[1] + uVar24 * 0x10);
          uVar26 = puVar5[1];
          *puVar27 = *puVar5;
          puVar27[1] = uVar26;
          puVar5 = (ulong *)(plVar21[1] + uVar24 * 0x10);
          uVar26 = puVar5[1];
          puVar27[2] = *puVar5;
          puVar27[3] = uVar26;
          puVar27 = puVar27 + 8;
        } while (lVar36 != 0);
      }
    }
  }
  if (uVar37 != 0) {
    pvVar10 = (void *)param_1[0x2b];
    uVar11 = 0;
    lVar36 = local_a8;
    __dest = pvVar35;
    while( true ) {
      pvVar35 = (void *)((long)__dest + 0x78);
      uVar40 = *(undefined4 *)((long)pvVar10 + 0x24);
      memcpy(__dest,pvVar10,0x24);
      pfVar33 = (float *)(local_88 + uVar11 * 0x10);
      *(float *)((long)__dest + 0x40) = pfVar33[1] * 100.0;
      *(float *)((long)__dest + 0x3c) = *pfVar33 * 100.0;
      *(float *)((long)__dest + 0x4c) = pfVar33[2];
      *(float *)((long)__dest + 0x50) = pfVar33[3];
      *(undefined8 *)((long)__dest + 0x44) = 0;
      *(long *)((long)__dest + 0x60) = lVar39;
      *(undefined4 *)((long)__dest + 0x58) = uVar40;
      *(int *)((long)__dest + 0x5c) = (int)uVar11;
      uVar40 = FUN_03447c20(lVar34,*(undefined8 *)(param_1[2] + 0x28),__dest);
      uVar49 = NEON_fminnm(uVar40,(int)uVar41);
      uVar41 = (ulong)uVar49;
      if (lVar36 == 0) break;
      pvVar10 = (void *)((long)pvVar10 + 0x28);
      uVar11 = (ulong)((int)uVar11 + 1);
      lVar36 = lVar36 + -0x28;
      lVar39 = *(long *)(*(long *)(lVar34 + 8) + 0x78);
      __dest = pvVar35;
    }
    plVar20 = (long *)local_98[0x1a];
    uVar49 = *(uint *)(local_98 + 0x1b);
    puVar14 = local_88;
    uVar38 = local_a0;
    uVar11 = local_90;
  }
  plVar18 = (long *)PTR_DAT_047e6cc0;
LAB_0346f884:
  plVar25 = plVar25 + 1;
  if (plVar25 == plVar20 + uVar49) goto LAB_0346f8ac;
  goto LAB_0346f560;
  while( true ) {
    plVar20 = plVar25 + 6;
    plVar18 = plVar25 + 6;
    plVar25 = plVar20;
    if (*plVar18 == lVar39) break;
LAB_0346fb8c:
    lVar12 = lVar12 + -0x30;
    if (lVar12 == 0) goto LAB_0346f9f0;
  }
LAB_0346f9dc:
  pfVar13 = (float *)(plVar20 + 1);
  if (plVar20 == plVar32 + (ulong)uVar49 * 6) {
LAB_0346f9f0:
    pfVar13 = (float *)FUN_034b219c();
  }
  if (pfVar13 != (float *)0x0) {
    fVar52 = *(float *)(lVar34 + 4);
    fVar42 = *(float *)(lVar34 + 8);
    fVar48 = *(float *)(lVar34 + 0xc);
    fVar51 = pfVar13[1];
    fVar46 = pfVar13[2];
    fVar45 = pfVar13[3];
    fVar53 = pfVar13[7];
    fVar50 = *pfVar13 * fVar52 + fVar42 * fVar45 + fVar48 * pfVar13[6];
    fVar44 = pfVar13[4];
    fVar47 = pfVar13[5];
    fVar43 = pfVar13[8];
    *pfVar33 = pfVar13[6];
    pfVar33[1] = fVar53;
    pfVar33[2] = fVar43;
    pfVar33[3] = fVar45;
    fVar51 = fVar51 * fVar52 + fVar42 * fVar44 + fVar48 * fVar53;
    fVar52 = fVar46 * fVar52 + fVar42 * fVar47 + fVar48 * fVar43;
    pfVar33[4] = fVar44;
    pfVar33[5] = fVar47;
  }
LAB_0346fb28:
  pfVar33[6] = pfVar33[6] + fVar50;
  pfVar33[7] = pfVar33[7] + fVar51;
  pfVar33[8] = pfVar33[8] + fVar52;
  uVar40 = FUN_03447c20(lVar36,*(undefined8 *)(param_1[2] + 0x28),pfVar33);
  uVar49 = NEON_fminnm(uVar40,(int)uVar41);
  uVar41 = (ulong)uVar49;
  pfVar33[10] = pfVar33[0xb];
LAB_0346fb64:
  pfVar33 = pfVar33 + 0x1e;
  if (pfVar33 == (float *)(param_1[0x29] + (ulong)*(uint *)(param_1 + 0x2a) * 0x78))
  goto LAB_0346fbb8;
  goto LAB_0346f950;
}


