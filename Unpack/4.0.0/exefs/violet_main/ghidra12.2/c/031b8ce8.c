/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031b8ce8; name: FUN_031b8ce8
 */


undefined8 FUN_031b8ce8(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  size_t __n;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  byte *pbVar6;
  long *plVar7;
  ulong uVar8;
  float *__dest;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  float *pfVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  long lVar21;
  uint uVar22;
  byte *pbVar23;
  byte bVar24;
  float fVar25;
  float fVar26;
  uint local_124;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  byte *local_c8;
  byte *local_c0;
  byte *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  char local_98;
  long *local_90;
  ulong local_78;
  
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_c8 = (byte *)0x0;
  local_c0 = (byte *)0x0;
  local_b8 = (byte *)0x0;
  uStack_b0 = 0;
  local_90 = (long *)*param_2;
  *param_2 = 0;
  if (local_90 == (long *)0x0) {
    local_c8 = (byte *)param_2[1];
    local_c0 = local_c8 + param_2[2];
    local_98 = '\x01';
    local_b8 = local_c8;
  }
  else {
    (**(code **)(*local_90 + 0x10))(local_90,&local_c8);
    local_98 = '\x01';
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x28))(local_90,&local_c8);
    }
  }
  local_d0 = 0;
  local_e8 = 0x100000001;
  uStack_e0 = 1;
  local_d8 = 0x100000000;
  uVar8 = FUN_031b8ac0(&local_c8,&local_e8);
  if ((uVar8 & 1) == 0) {
    uVar20 = 0x80040200;
  }
  else {
    *(undefined4 *)(param_3 + 3) = local_d0;
    param_3[1] = uStack_e0;
    param_3[2] = local_d8;
    *param_3 = local_e8;
    uVar8 = FUN_031a8080(param_3);
    puVar5 = PTR_DAT_047d1a08;
    if ((ulong)param_3[0x28] < uVar8) {
      local_78 = uVar8;
      __dest = (float *)(**(code **)PTR_DAT_047d1a08)(0,&local_78,0);
      __n = param_3[0x27];
      if (uVar8 <= (ulong)param_3[0x27]) {
        __n = uVar8;
      }
      memcpy(__dest,(void *)param_3[0x26],__n);
      if (*(char *)(param_3 + 0x29) == '\0') {
        (**(code **)(puVar5 + 8))(0,param_3[0x26],0);
      }
      param_3[0x26] = __dest;
      param_3[0x28] = uVar8;
      *(undefined1 *)(param_3 + 0x29) = 0;
    }
    else {
      __dest = (float *)param_3[0x26];
    }
    param_3[0x27] = uVar8;
    uVar3 = uStack_e0._4_4_;
    if (uStack_e0._4_4_ < 2) {
      uVar3 = 1;
    }
    uVar22 = (uint)local_d8;
    if ((uint)local_d8 < 2) {
      uVar22 = 1;
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x28))(local_90,&local_c8);
    }
    if ((int)uVar3 < 1) {
      pbVar9 = (byte *)0x0;
      local_124 = 0x80000000;
    }
    else {
      pbVar9 = (byte *)(**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                                 (PTR_PTR_047d1a50 + 0x20,(ulong)uVar3 << 2);
      local_124 = uVar3;
    }
    if (0 < (int)uVar22) {
      do {
        pbVar10 = local_c0;
        if ((uVar3 - 8 >> 3 < 0xfff) && (*local_c8 == 2)) {
          if ((long)local_c0 - (long)local_c8 == 0 || (long)local_c0 < (long)local_c8) {
            if (local_90 == (long *)0x0) {
              memcpy(&local_78,local_c8,(long)local_c0 - (long)local_c8);
              local_c8 = pbVar10;
            }
            else {
              (**(code **)(*local_90 + 0x38))(local_90,&local_c8,&local_78,1);
              pbVar10 = local_c0;
            }
          }
          else {
            local_c8 = local_c8 + 1;
            local_78 = CONCAT71(local_78._1_7_,2);
          }
          if ((long)pbVar10 - (long)local_c8 == 0 || (long)pbVar10 < (long)local_c8) {
            if (local_90 == (long *)0x0) {
              memcpy(&local_78,local_c8,(long)pbVar10 - (long)local_c8);
              local_c8 = pbVar10;
            }
            else {
              (**(code **)(*local_90 + 0x38))(local_90,&local_c8,&local_78,1);
            }
          }
          else {
            local_78 = CONCAT71(local_78._1_7_,*local_c8);
            local_c8 = local_c8 + 1;
          }
          pbVar10 = local_c0;
          pbVar9[1] = (byte)local_78;
          if ((long)local_c0 - (long)local_c8 == 0 || (long)local_c0 < (long)local_c8) {
            if (local_90 == (long *)0x0) {
              memcpy(&local_78,local_c8,(long)local_c0 - (long)local_c8);
              local_c8 = pbVar10;
            }
            else {
              (**(code **)(*local_90 + 0x38))(local_90,&local_c8,&local_78,1);
            }
          }
          else {
            local_78 = CONCAT71(local_78._1_7_,*local_c8);
            local_c8 = local_c8 + 1;
          }
          pbVar10 = local_c0;
          pbVar9[2] = (byte)local_78;
          if ((long)local_c0 - (long)local_c8 == 0 || (long)local_c0 < (long)local_c8) {
            if (local_90 == (long *)0x0) {
              memcpy(&local_78,local_c8,(long)local_c0 - (long)local_c8);
              local_c8 = pbVar10;
            }
            else {
              (**(code **)(*local_90 + 0x38))(local_90,&local_c8,&local_78,1);
            }
          }
          else {
            local_78 = CONCAT71(local_78._1_7_,*local_c8);
            local_c8 = local_c8 + 1;
          }
          if ((pbVar9[1] != 2) || ((char)pbVar9[2] < '\0')) {
            *pbVar9 = 2;
            pbVar9[3] = (byte)local_78;
            pbVar10 = pbVar9 + 4;
            uVar14 = uVar3 - 1;
            goto LAB_031b8f4c;
          }
          lVar21 = 0;
          pbVar10 = pbVar9;
          pbVar23 = pbVar9 + 8;
          do {
            uVar8 = 0;
            do {
              pbVar11 = local_c0;
              if ((long)local_c0 - (long)local_c8 == 0 || (long)local_c0 < (long)local_c8) {
                if (local_90 == (long *)0x0) {
                  memcpy(&local_78,local_c8,(long)local_c0 - (long)local_c8);
                  local_c8 = pbVar11;
                }
                else {
                  (**(code **)(*local_90 + 0x38))(local_90,&local_c8,&local_78,1);
                }
                bVar24 = (byte)local_78;
              }
              else {
                local_78 = CONCAT71(local_78._1_7_,*local_c8);
                bVar24 = *local_c8;
                local_c8 = local_c8 + 1;
              }
              pbVar11 = local_c0;
              if (bVar24 < 0x81) {
                if (bVar24 != 0) {
                  pbVar11 = pbVar10 + (long)(int)uVar8 * 4;
                  do {
                    pbVar6 = local_c0;
                    bVar24 = bVar24 - 1;
                    if ((long)local_c0 - (long)local_c8 == 0 || (long)local_c0 < (long)local_c8) {
                      if (local_90 == (long *)0x0) {
                        memcpy(&local_78,local_c8,(long)local_c0 - (long)local_c8);
                        local_c8 = pbVar6;
                      }
                      else {
                        (**(code **)(*local_90 + 0x38))(local_90,&local_c8,&local_78,1);
                      }
                    }
                    else {
                      local_78 = CONCAT71(local_78._1_7_,*local_c8);
                      local_c8 = local_c8 + 1;
                    }
                    uVar8 = (ulong)((int)uVar8 + 1);
                    *pbVar11 = (byte)local_78;
                    pbVar11 = pbVar11 + 4;
                  } while (bVar24 != 0);
                }
              }
              else {
                bVar17 = bVar24 & 0x7f;
                if ((long)local_c0 - (long)local_c8 == 0 || (long)local_c0 < (long)local_c8) {
                  if (local_90 == (long *)0x0) {
                    memcpy(&local_78,local_c8,(long)local_c0 - (long)local_c8);
                    local_c8 = pbVar11;
                  }
                  else {
                    (**(code **)(*local_90 + 0x38))(local_90,&local_c8,&local_78,1);
                  }
                }
                else {
                  local_78 = CONCAT71(local_78._1_7_,*local_c8);
                  local_c8 = local_c8 + 1;
                }
                if ((bVar24 & 0x7f) != 0) {
                  uVar8 = (ulong)(int)uVar8;
                  bVar4 = bVar17 - 1;
                  bVar12 = bVar24 & 3;
                  if ((bVar24 & 3) != 0) {
                    lVar15 = uVar8 << 2;
                    do {
                      bVar12 = bVar12 - 1;
                      bVar17 = bVar17 - 1;
                      uVar8 = uVar8 + 1;
                      pbVar10[lVar15] = (byte)local_78;
                      lVar15 = lVar15 + 4;
                    } while (bVar12 != 0);
                  }
                  if (2 < bVar4) {
                    pbVar11 = pbVar23 + uVar8 * 4;
                    do {
                      bVar17 = bVar17 - 4;
                      pbVar11[-8] = (byte)local_78;
                      uVar8 = uVar8 + 4;
                      pbVar11[-4] = (byte)local_78;
                      *pbVar11 = (byte)local_78;
                      pbVar11[4] = (byte)local_78;
                      pbVar11 = pbVar11 + 0x10;
                    } while (bVar17 != 0);
                  }
                }
              }
            } while ((int)uVar8 < (int)uVar3);
            lVar21 = lVar21 + 1;
            pbVar10 = pbVar10 + 1;
            pbVar23 = pbVar23 + 1;
          } while (lVar21 != 4);
        }
        else {
          pbVar10 = pbVar9;
          uVar14 = uVar3;
LAB_031b8f4c:
          FUN_031b9560(pbVar10,uVar14,&local_c8);
        }
        if (0 < (int)uVar3) {
          pbVar10 = pbVar9;
          pfVar13 = __dest;
          uVar14 = uVar3;
          do {
            bVar24 = pbVar10[3];
            uVar16 = bVar24 - 0x80;
            if ((char)bVar24 < '\0') {
              fVar26 = 2.0;
              uVar18 = uVar16;
              if (uVar16 != 0) goto LAB_031b8f9c;
              *pfVar13 = (float)*pbVar10 * 0.00390625;
              bVar17 = pbVar10[1];
LAB_031b9098:
              fVar25 = 1.0;
            }
            else {
              fVar26 = 0.5;
              uVar18 = -uVar16;
LAB_031b8f9c:
              fVar25 = 1.0;
              uVar2 = uVar18 & 7;
              if (6 < uVar18 - 1) {
                fVar25 = 1.0;
                iVar19 = -(uVar18 & 0xfffffff8);
                do {
                  fVar25 = fVar26 * fVar26 * fVar26 * fVar26 * fVar26 * fVar26 * fVar26 * fVar26 * 
                                                  fVar25;
                  iVar19 = iVar19 + 8;
                } while (iVar19 != 0);
              }
              for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                fVar25 = fVar26 * fVar25;
              }
              *pfVar13 = (float)*pbVar10 * 0.00390625 * fVar25;
              bVar17 = pbVar10[1];
              if ((char)bVar24 < '\0') {
                fVar26 = 2.0;
                uVar18 = uVar16;
                if (uVar16 == 0) goto LAB_031b9098;
              }
              else {
                fVar26 = 0.5;
                uVar18 = -uVar16;
              }
              fVar25 = 1.0;
              uVar2 = uVar18 & 7;
              if (6 < uVar18 - 1) {
                fVar25 = 1.0;
                iVar19 = -(uVar18 & 0xfffffff8);
                do {
                  fVar25 = fVar26 * fVar26 * fVar26 * fVar26 * fVar26 * fVar26 * fVar26 * fVar26 * 
                                                  fVar25;
                  iVar19 = iVar19 + 8;
                } while (iVar19 != 0);
              }
              for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                fVar25 = fVar26 * fVar25;
              }
            }
            pfVar13[1] = fVar25 * (float)bVar17 * 0.00390625;
            pbVar23 = pbVar10 + 2;
            if ((char)bVar24 < '\0') {
              fVar25 = 2.0;
              fVar26 = 1.0;
              if (uVar16 != 0) goto LAB_031b90d4;
            }
            else {
              uVar16 = -uVar16;
              fVar25 = 0.5;
LAB_031b90d4:
              fVar26 = 1.0;
              uVar18 = uVar16 & 7;
              if (6 < uVar16 - 1) {
                fVar26 = 1.0;
                iVar19 = -(uVar16 & 0xfffffff8);
                do {
                  fVar26 = fVar25 * fVar25 * fVar25 * fVar25 * fVar25 * fVar25 * fVar25 * fVar25 * 
                                                  fVar26;
                  iVar19 = iVar19 + 8;
                } while (iVar19 != 0);
              }
              for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                fVar26 = fVar25 * fVar26;
              }
            }
            pbVar10 = pbVar10 + 4;
            pfVar13[2] = (float)*pbVar23 * 0.00390625 * fVar26;
            pfVar13 = pfVar13 + 3;
            bVar1 = 1 < (int)uVar14;
            uVar14 = uVar14 - 1;
          } while (bVar1);
        }
        __dest = __dest + (int)(uVar3 * 3);
        bVar1 = 1 < (int)uVar22;
        uVar22 = uVar22 - 1;
      } while (bVar1);
    }
    uVar20 = 0;
    if ((pbVar9 != (byte *)0x0) && (-1 < (int)local_124)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,pbVar9,(ulong)local_124 << 2);
      uVar20 = 0;
    }
  }
  if (local_98 != '\0') {
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x18))(local_90,&local_c8);
      plVar7 = local_90;
      local_90 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    local_98 = '\0';
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 8))();
  }
  return uVar20;
}


