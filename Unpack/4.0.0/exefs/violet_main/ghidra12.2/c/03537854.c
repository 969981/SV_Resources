/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03537854; name: FUN_03537854
 */


void FUN_03537854(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  long *plVar27;
  long *plVar28;
  float fVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  long local_98;
  undefined8 *local_90;
  undefined1 local_88;
  
  plVar28 = (long *)(param_2 + 0x70);
  plVar22 = (long *)*plVar28;
  if ((plVar22 == (long *)0x0) || (param_4 = param_4 + param_3, param_4 < (int)plVar22[2])) {
    return;
  }
  plVar15 = (long *)(param_2 + 0x68);
  if (plVar22[1] == 0) {
    *plVar15 = 0;
    *plVar28 = 0;
  }
  else {
    *plVar28 = plVar22[1];
  }
  plVar2 = (long *)(param_2 + 0x78);
  do {
    iVar11 = (int)plVar22[2] - param_3;
    iVar10 = (**(code **)(*plVar22 + 0x10))(plVar22);
    if (iVar10 == 0) {
      lVar25 = plVar22[3];
      local_90 = (undefined8 *)0x400000000;
      local_88 = 0;
      lVar23 = *(long *)(param_2 + 0x80);
      piVar13 = *(int **)(lVar23 + 0xf8);
      uVar17 = *(uint *)(lVar23 + 0x100);
      if ((uVar17 == 0) || (*piVar13 == *(int *)(lVar25 + 4))) {
        piVar18 = piVar13;
      }
      else {
        lVar14 = (ulong)uVar17 * 0x10;
        piVar20 = piVar13;
        do {
          lVar14 = lVar14 + -0x10;
          if (lVar14 == 0) goto LAB_03537f4c;
          piVar18 = piVar20 + 4;
          piVar1 = piVar20 + 4;
          piVar20 = piVar18;
        } while (*piVar1 != *(int *)(lVar25 + 4));
      }
      if ((piVar18 != piVar13 + (ulong)uVar17 * 4) && (lVar14 = *(long *)(piVar18 + 2), lVar14 != 0)
         ) {
        if (*(short *)(lVar14 + 0x1a) == 0x10) {
          lVar16 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x60);
          iVar11 = FUN_0351f770(lVar16 + 0x58,param_2,lVar23,lVar14,*(undefined8 *)(lVar16 + 0x30),
                                &local_90,lVar16 + 0x18,lVar25,(int)plVar22[4],
                                *(undefined4 *)((long)plVar22 + 0x24),iVar11,&local_98);
          puVar12 = (undefined8 *)(local_98 + 0x58);
        }
        else {
          lVar16 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x60);
          iVar11 = FUN_03517538(param_1,param_2,lVar23,lVar14,*(undefined8 *)(lVar16 + 0x30),
                                &local_90,lVar16 + 0x18,*(undefined1 *)(lVar16 + 0x38),lVar25,
                                *(undefined4 *)((long)plVar22 + 0x24),(int)plVar22[5] + iVar11,
                                &local_98);
          puVar12 = (undefined8 *)(local_98 + 800);
        }
        puVar26 = (undefined8 *)0x0;
        if (local_98 != 0) {
          puVar26 = puVar12;
        }
        if (iVar11 == 1) {
          if ((*(byte *)(param_2 + 0x5a) >> 1 & 1) == 0) {
            iVar10 = *(int *)(lVar25 + 0xc);
            iVar11 = *(int *)(lVar25 + 0x10);
            puVar12 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x28);
            if (puVar12 == (undefined8 *)0x0) {
              (**(code **)*puVar26)(puVar26,0);
            }
            else {
              iVar11 = iVar11 + iVar10;
              *(int *)(puVar12 + 2) = iVar11;
              *puVar12 = &PTR_LAB_047c9810;
              puVar12[3] = puVar26;
              *(undefined1 *)(puVar12 + 4) = 0;
              lVar23 = *plVar28;
              if (lVar23 == 0) {
LAB_03537df8:
                puVar12[1] = 0;
                if (*plVar28 == 0) {
                  plVar24 = plVar28;
                }
                else {
                  plVar24 = (long *)(*plVar15 + 8);
                }
                *plVar24 = (long)puVar12;
                plVar24 = plVar15;
              }
              else if (iVar11 < *(int *)(lVar23 + 0x10)) {
                puVar12[1] = lVar23;
                plVar24 = plVar28;
              }
              else {
                do {
                  plVar24 = (long *)(lVar23 + 8);
                  lVar23 = *plVar24;
                  if (lVar23 == 0) goto LAB_03537df8;
                } while (*(int *)(lVar23 + 0x10) <= iVar11);
                puVar12[1] = lVar23;
              }
              *plVar24 = (long)puVar12;
              plVar24 = (long *)plVar22[6];
              if (plVar24 != (long *)0x0) {
                fVar29 = (float)NEON_ucvtf((uint)*(ushort *)PTR_DAT_047e6d08);
                puVar6 = (undefined8 *)0x0;
                if (puVar26 != (undefined8 *)0x0) {
                  puVar6 = puVar26 + -100;
                }
                puVar3 = (uint *)((long)puVar6 + 699);
                do {
                  if (plVar24[3] == 0) {
                    plVar22[6] = 0;
                  }
                  else {
                    plVar22[6] = plVar24[3];
                  }
                  plVar24[1] = (long)puVar6;
                  *(undefined1 *)(puVar12 + 4) = 1;
                  if (*(long *)(param_2 + 0x78) == 0) {
                    *(long **)(param_2 + 0x78) = plVar24;
                    plVar24[3] = 0;
                  }
                  else {
                    plVar24[3] = *(long *)(param_2 + 0x78);
                    *(long **)(param_2 + 0x78) = plVar24;
                  }
                  if (*(int *)(*plVar24 + 4) == 4) {
                    *(byte *)(puVar6 + 0x69) = *(byte *)(puVar6 + 0x69) | 1;
                  }
                  else if (*(int *)(*plVar24 + 4) == 3) {
                    uVar17 = *puVar3;
                    if (((uVar17 >> 0x16 & 1) != 0) ||
                       ((*(byte *)(puVar6[0x49] + 0xc) >> 1 & 1) == 0)) {
                      fVar32 = *(float *)((long)puVar6 + 0x264) * fVar29;
                      fVar31 = 0.5;
                      if (fVar32 <= 0.0) {
                        fVar31 = -0.5;
                      }
                      iVar11 = *(int *)(puVar6 + 0x5b);
                      iVar19 = (int)(fVar31 + fVar32);
                      iVar10 = 0;
                      if (iVar19 != 0) {
                        iVar10 = iVar11 / iVar19;
                      }
                      iVar8 = *(int *)((long)puVar6 + 0x2b4);
                      iVar4 = iVar19;
                      if (iVar19 < 0) {
                        iVar4 = iVar19 + 1;
                      }
                      iVar10 = iVar11 - iVar10 * iVar19;
                      if (iVar8 < iVar10 || iVar4 >> 1 < iVar10) {
                        *(int *)(puVar6 + 0x5b) = (iVar19 - iVar10) + iVar11;
                        *(int *)((long)puVar6 + 0x2b4) = (iVar19 - iVar10) + iVar8;
                      }
                      else {
                        if (iVar10 < 1) goto LAB_03537f3c;
                        *(int *)(puVar6 + 0x5b) = iVar11 - iVar10;
                        *(int *)((long)puVar6 + 0x2b4) = iVar8 - iVar10;
                      }
                      uVar17 = uVar17 & 0xfe3fffff | 0x400000;
                      *puVar3 = uVar17;
                    }
LAB_03537f3c:
                    *puVar3 = uVar17 | 0x8000000;
                  }
                  plVar24 = (long *)plVar22[6];
                } while (plVar24 != (long *)0x0);
              }
            }
          }
          else {
            (**(code **)*puVar26)(puVar26,*(undefined4 *)(param_2 + 0x54));
            plVar24 = (long *)plVar22[6];
            if (plVar24 != (long *)0x0) {
              puVar12 = puVar26 + -100;
              do {
                if (plVar24[3] == 0) {
                  plVar22[6] = 0;
                }
                else {
                  plVar22[6] = plVar24[3];
                }
                lVar23 = *plVar24;
                plVar24[1] = (long)puVar12;
                uVar17 = *(uint *)(lVar23 + 4);
                local_90 = (undefined8 *)CONCAT44(local_90._4_4_,*(undefined4 *)(lVar23 + 0x18));
                uVar30 = FUN_03447dcc((float)(param_4 - (int)plVar24[2]),lVar23 + 8,&local_90);
                *(undefined4 *)(lVar23 + 0x18) = local_90._0_4_;
                fVar29 = (float)uVar30;
                switch((ulong)uVar17) {
                case 0:
                  uVar30 = (ulong)(uint)(fVar29 + 1.0);
                  local_90 = puVar12;
                  goto LAB_03537d70;
                case 1:
                  fVar31 = *(float *)(puVar26 + 4);
                  *(float *)(puVar26 + 4) = fVar29;
                  *(float *)(puVar26 + -0x54) = (fVar29 - fVar31) + *(float *)(puVar26 + -0x54);
                  break;
                case 2:
                  fVar31 = *(float *)((long)puVar26 + 0x24);
                  *(float *)((long)puVar26 + 0x24) = fVar29;
                  *(float *)((long)puVar26 + -0x29c) =
                       (fVar29 - fVar31) + *(float *)((long)puVar26 + -0x29c);
                  break;
                case 3:
                case 4:
                  local_90 = (undefined8 *)((long)puVar12 + (ulong)uVar17);
LAB_03537d70:
                  local_88 = 0x66;
                  FUN_034a4694(uVar30,puVar12,&local_90);
                }
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar24);
                plVar24 = (long *)plVar22[6];
              } while (plVar24 != (long *)0x0);
            }
          }
        }
      }
    }
    else if (iVar10 == 1) {
      (*(code *)**(undefined8 **)plVar22[3])((undefined8 *)plVar22[3],iVar11);
      if (((char)plVar22[4] != '\0') && ((long *)*plVar2 != (long *)0x0)) {
        plVar27 = (long *)0x0;
        plVar24 = (long *)*plVar2;
        do {
          puVar26 = (undefined8 *)plVar24[1];
          puVar12 = (undefined8 *)0x0;
          if (puVar26 != (undefined8 *)0x0) {
            puVar12 = puVar26 + 100;
          }
          if (puVar12 != (undefined8 *)plVar22[3]) {
            plVar21 = (long *)plVar24[3];
            plVar27 = plVar24;
            goto LAB_03537b54;
          }
          lVar23 = *plVar24;
          uVar17 = *(uint *)(lVar23 + 4);
          local_90 = (undefined8 *)CONCAT44(local_90._4_4_,*(undefined4 *)(lVar23 + 0x18));
          uVar30 = FUN_03447dcc((float)(param_4 - (int)plVar24[2]),lVar23 + 8,&local_90);
          *(undefined4 *)(lVar23 + 0x18) = local_90._0_4_;
          fVar29 = (float)uVar30;
          switch((ulong)uVar17) {
          case 0:
            uVar30 = (ulong)(uint)(fVar29 + 1.0);
            local_90 = puVar26;
            goto LAB_03537ad8;
          case 1:
            fVar31 = *(float *)(puVar26 + 0x68);
            *(float *)(puVar26 + 0x68) = fVar29;
            *(float *)(puVar26 + 0x10) = (fVar29 - fVar31) + *(float *)(puVar26 + 0x10);
            break;
          case 2:
            fVar31 = *(float *)((long)puVar26 + 0x344);
            *(float *)((long)puVar26 + 0x344) = fVar29;
            *(float *)((long)puVar26 + 0x84) = (fVar29 - fVar31) + *(float *)((long)puVar26 + 0x84);
            break;
          case 3:
          case 4:
            local_90 = (undefined8 *)((long)puVar26 + (ulong)uVar17);
LAB_03537ad8:
            local_88 = 0x66;
            FUN_034a4694(uVar30,puVar26,&local_90);
          }
          plVar21 = (long *)plVar24[3];
          plVar5 = plVar2;
          if ((long *)*plVar2 != plVar24) {
            plVar5 = plVar27 + 3;
          }
          *plVar5 = (long)plVar21;
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar24);
LAB_03537b54:
          plVar24 = plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
    else if (iVar10 == 3) {
      lVar23 = *(long *)PTR_DAT_047e6f28;
      uVar17 = *(uint *)((long)plVar22 + 0x14);
      nn::os::LockMutex((MutexType *)(lVar23 + 0xa8));
      uVar7 = *(uint *)(lVar23 + 0xd0);
      if (uVar7 == 0) {
        plVar24 = (long *)0x0;
      }
      else {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar17 / uVar7;
        }
        for (plVar24 = *(long **)(*(long *)(lVar23 + 200) + (ulong)(uVar17 - uVar9 * uVar7) * 8);
            plVar24 != (long *)0x0; plVar24 = (long *)plVar24[1]) {
          if (*(uint *)(plVar24 + 2) == uVar17) {
            *(int *)((long)plVar24 + 0x14) = *(int *)((long)plVar24 + 0x14) + 1;
            break;
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(lVar23 + 0xa8));
      if (plVar24 != (long *)0x0) {
        lVar23 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x60);
        FUN_03452768(plVar24,*(long *)(lVar23 + 0x30),
                     *(undefined8 *)(*(long *)(lVar23 + 0x30) + 0x78),*(undefined4 *)(lVar23 + 0x2c)
                     ,0,lVar23 + 0x18,iVar11,1);
        (**(code **)(*plVar24 + 0x18))(plVar24);
      }
    }
LAB_03537f4c:
    (**(code **)*plVar22)(plVar22);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar22);
    plVar22 = (long *)*plVar28;
    if (plVar22 == (long *)0x0) {
      return;
    }
    if (param_4 < (int)plVar22[2]) {
      return;
    }
    if (plVar22[1] == 0) {
      *plVar15 = 0;
      *(undefined8 *)(param_2 + 0x70) = 0;
    }
    else {
      *plVar28 = plVar22[1];
    }
  } while( true );
}


