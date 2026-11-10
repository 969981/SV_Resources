/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034d2278; name: FUN_034d2278
 */


void FUN_034d2278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,uint param_6,ulong param_7,float *param_8,undefined8 param_9)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  uint uVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_a0;
  
  uVar19 = param_7 & 0xff;
  uVar17 = (uint)uVar19;
  uVar14 = param_6 & 0xff;
  uVar4 = uVar17 + 3 & 0x1fc;
  iVar16 = uVar4 * uVar14;
  if (iVar16 != 0) {
    memset(param_8,0,(ulong)(uint)(iVar16 * 4));
  }
  uVar21 = param_6 >> 8 & 0xf;
  uVar20 = (uint)param_7;
  uVar7 = uVar20 >> 8 & 0xf;
  if (uVar21 == uVar7) {
    if (uVar21 == 1) {
      uVar21 = uVar20 - (uVar20 >> 0xf & 1);
      if ((param_5 == 0) || ((uVar21 & 0xff) == 1)) {
        if ((param_6 - (param_6 >> 0xf & 1) & 0xff) == 1) {
          if (uVar17 != 0) {
            memset(param_8,0,(ulong)(uVar17 << 2));
          }
          if ((uVar21 & 0xfe) == 0) {
            *param_8 = 1.0;
          }
          else if ((~uVar20 & 0x7000) == 0) {
            fVar23 = SQRT(0.5 - (float)param_4 * 0.5);
            *param_8 = fVar23;
            param_8[1] = fVar23;
            param_8[2] = SQRT((float)param_4);
          }
          else {
            param_8[0] = 0.70710677;
            param_8[1] = 0.70710677;
          }
          if ((param_6 >> 0xf & 1) != 0) {
            if (uVar17 != 0) {
              memset(param_8 + uVar4 * (uVar14 - 1),0,(ulong)(uVar17 << 2));
            }
            if ((uVar20 >> 0xf & 1) != 0) {
              (param_8 + uVar4 * (uVar14 - 1))[uVar19 - 1] = 1.0;
            }
          }
        }
        else {
          uVar21 = uVar20 >> 0xc & 0x737;
          uVar7 = (param_6 & 0xffff7f00) >> 0xc;
          local_a0 = param_6 & 0xffff7f00;
          if (uVar21 < 0x603) {
            if (uVar21 == 3) {
              if (uVar7 != 0) {
                if (uVar17 == 0) {
                  uVar13 = 0;
                  uVar21 = 1;
                  do {
                    if ((uVar21 & uVar7) != 0) {
                      *(undefined8 *)param_8 = *(undefined8 *)(&DAT_03d99fe8 + uVar13 * 2);
                    }
                    uVar21 = uVar21 * 2;
                    uVar13 = (ulong)((int)uVar13 + 1);
                  } while (uVar21 <= uVar7);
                }
                else if (uVar17 < 3) {
                  iVar16 = 0;
                  uVar13 = 0;
                  uVar21 = 1;
                  do {
                    if ((uVar21 & uVar7) != 0) {
                      uVar3 = iVar16 * uVar4;
                      memset(param_8 + uVar3 + 2,0,0);
                      iVar16 = iVar16 + 1;
                      *(undefined8 *)(param_8 + uVar3) = *(undefined8 *)(&DAT_03d99fe8 + uVar13 * 2)
                      ;
                    }
                    uVar21 = uVar21 * 2;
                    uVar13 = (ulong)((int)uVar13 + 1);
                  } while (uVar21 <= uVar7);
                }
                else {
                  iVar16 = 0;
                  uVar13 = 0;
                  uVar21 = 1;
                  do {
                    if ((uVar21 & uVar7) != 0) {
                      memset(param_8 + iVar16 * uVar4 + 2,0,(ulong)(uVar17 << 2) - 8);
                      *(undefined8 *)(param_8 + iVar16 * uVar4) =
                           *(undefined8 *)(&DAT_03d99fe8 + uVar13 * 2);
                      memset(param_8 + (ulong)(iVar16 * uVar4) + 2,0,(ulong)(uVar17 - 3) * 4 + 4);
                      iVar16 = iVar16 + 1;
                    }
                    uVar21 = uVar21 * 2;
                    uVar13 = (ulong)((int)uVar13 + 1);
                  } while (uVar21 <= uVar7);
                }
              }
            }
            else if (uVar21 == 4) {
              if (uVar7 != 0) {
                if (uVar17 == 0) {
                  uVar13 = 0;
                  uVar21 = 1;
                  do {
                    if ((uVar21 & uVar7) != 0) {
                      *param_8 = (float)(&DAT_03d99fa0)[uVar13];
                    }
                    uVar21 = uVar21 * 2;
                    uVar13 = (ulong)((int)uVar13 + 1);
                  } while (uVar21 <= uVar7);
                }
                else if (uVar17 == 1) {
                  iVar16 = 0;
                  uVar13 = 0;
                  uVar21 = 1;
                  do {
                    if ((uVar21 & uVar7) != 0) {
                      uVar3 = iVar16 * 4;
                      memset(param_8 + uVar3,0,4);
                      iVar16 = iVar16 + 1;
                      param_8[uVar3] = (float)(&DAT_03d99fa0)[uVar13];
                    }
                    uVar21 = uVar21 * 2;
                    uVar13 = (ulong)((int)uVar13 + 1);
                  } while (uVar21 <= uVar7);
                }
                else {
                  iVar16 = 0;
                  uVar13 = 0;
                  uVar21 = 1;
                  do {
                    if ((uVar21 & uVar7) != 0) {
                      memset(param_8 + iVar16 * uVar4,0,(ulong)(uVar17 << 2));
                      param_8[iVar16 * uVar4] = (float)(&DAT_03d99fa0)[uVar13];
                      memset(param_8 + (ulong)(iVar16 * uVar4) + 1,0,(ulong)(uVar17 - 2) * 4 + 4);
                      iVar16 = iVar16 + 1;
                    }
                    uVar21 = uVar21 * 2;
                    uVar13 = (ulong)((int)uVar13 + 1);
                  } while (uVar21 <= uVar7);
                }
              }
            }
            else if ((uVar21 == 7) && (uVar7 != 0)) {
              if (uVar17 == 0) {
                uVar13 = 0;
                uVar21 = 1;
                do {
                  if ((uVar21 & uVar7) != 0) {
                    uVar10 = *(undefined8 *)(&DAT_03d9a078 + uVar13 * 3);
                    param_8[2] = (float)(&DAT_03d9a080)[uVar13 * 3];
                    *(undefined8 *)param_8 = uVar10;
                  }
                  uVar21 = uVar21 * 2;
                  uVar13 = (ulong)((int)uVar13 + 1);
                } while (uVar21 <= uVar7);
              }
              else if (uVar17 < 4) {
                uVar13 = 0;
                iVar16 = 0;
                uVar21 = 1;
                do {
                  if ((uVar21 & uVar7) != 0) {
                    pfVar12 = param_8 + iVar16 * uVar4;
                    memset(pfVar12 + 3,0,0);
                    *(undefined8 *)pfVar12 = *(undefined8 *)(&DAT_03d9a078 + uVar13 * 3);
                    iVar16 = iVar16 + 1;
                    pfVar12[2] = (float)(&DAT_03d9a080)[uVar13 * 3];
                  }
                  uVar21 = uVar21 * 2;
                  uVar13 = (ulong)((int)uVar13 + 1);
                } while (uVar21 <= uVar7);
              }
              else {
                uVar13 = 0;
                iVar16 = 0;
                uVar21 = 1;
                do {
                  if ((uVar21 & uVar7) != 0) {
                    pfVar12 = param_8 + iVar16 * uVar4;
                    memset(pfVar12 + 3,0,(ulong)(uVar17 << 2) - 0xc);
                    pfVar12[2] = (float)(&DAT_03d9a080)[uVar13 * 3];
                    *(undefined8 *)pfVar12 = *(undefined8 *)(&DAT_03d9a078 + uVar13 * 3);
                    memset(param_8 + (ulong)(iVar16 * uVar4) + 3,0,(ulong)(uVar17 - 4) * 4 + 4);
                    iVar16 = iVar16 + 1;
                  }
                  uVar21 = uVar21 * 2;
                  uVar13 = (ulong)((int)uVar13 + 1);
                } while (uVar21 <= uVar7);
              }
            }
          }
          else if (uVar21 < 0x633) {
            if (uVar21 == 0x603) {
              if (uVar7 != 0) {
                if (uVar17 == 0) {
                  uVar13 = 0;
                  uVar21 = 1;
                  do {
                    if ((uVar21 & uVar7) != 0) {
                      uVar10 = *(undefined8 *)(&DAT_03d9a158 + uVar13 * 4);
                      *(undefined8 *)param_8 = *(undefined8 *)(&DAT_03d9a150 + uVar13 * 4);
                      *(undefined8 *)(param_8 + 2) = uVar10;
                    }
                    uVar21 = uVar21 * 2;
                    uVar13 = (ulong)((int)uVar13 + 1);
                  } while (uVar21 <= uVar7);
                }
                else if (uVar17 < 5) {
                  uVar13 = 0;
                  iVar16 = 0;
                  uVar21 = 1;
                  do {
                    if ((uVar21 & uVar7) != 0) {
                      pfVar12 = param_8 + iVar16 * uVar4;
                      memset(pfVar12 + 4,0,0);
                      uVar10 = *(undefined8 *)(&DAT_03d9a158 + uVar13 * 4);
                      iVar16 = iVar16 + 1;
                      *(undefined8 *)pfVar12 = *(undefined8 *)(&DAT_03d9a150 + uVar13 * 4);
                      *(undefined8 *)(pfVar12 + 2) = uVar10;
                    }
                    uVar21 = uVar21 * 2;
                    uVar13 = (ulong)((int)uVar13 + 1);
                  } while (uVar21 <= uVar7);
                }
                else {
                  uVar13 = 0;
                  iVar16 = 0;
                  uVar21 = 1;
                  do {
                    if ((uVar21 & uVar7) != 0) {
                      pfVar12 = param_8 + iVar16 * uVar4;
                      memset(pfVar12 + 4,0,(ulong)(uVar17 << 2) - 0x10);
                      uVar10 = *(undefined8 *)(&DAT_03d9a158 + uVar13 * 4);
                      *(undefined8 *)pfVar12 = *(undefined8 *)(&DAT_03d9a150 + uVar13 * 4);
                      *(undefined8 *)(pfVar12 + 2) = uVar10;
                      memset(param_8 + (ulong)(iVar16 * uVar4) + 4,0,(ulong)(uVar17 - 5) * 4 + 4);
                      iVar16 = iVar16 + 1;
                    }
                    uVar21 = uVar21 * 2;
                    uVar13 = (ulong)((int)uVar13 + 1);
                  } while (uVar21 <= uVar7);
                }
              }
            }
            else if ((uVar21 == 0x607) && (uVar7 != 0)) {
              if (uVar17 == 0) {
                uVar13 = 0;
                uVar21 = 1;
                do {
                  if ((uVar21 & uVar7) != 0) {
                    param_8[4] = (float)(&DAT_03d9a280)[uVar13 * 5];
                    uVar10 = *(undefined8 *)(&DAT_03d9a278 + uVar13 * 5);
                    *(undefined8 *)param_8 = *(undefined8 *)(&DAT_03d9a270 + uVar13 * 5);
                    *(undefined8 *)(param_8 + 2) = uVar10;
                  }
                  uVar21 = uVar21 * 2;
                  uVar13 = (ulong)((int)uVar13 + 1);
                } while (uVar21 <= uVar7);
              }
              else if (uVar17 < 6) {
                uVar13 = 0;
                iVar16 = 0;
                uVar21 = 1;
                do {
                  if ((uVar21 & uVar7) != 0) {
                    pfVar12 = param_8 + iVar16 * uVar4;
                    memset(pfVar12 + 5,0,0);
                    uVar10 = *(undefined8 *)(&DAT_03d9a278 + uVar13 * 5);
                    iVar16 = iVar16 + 1;
                    *(undefined8 *)pfVar12 = *(undefined8 *)(&DAT_03d9a270 + uVar13 * 5);
                    *(undefined8 *)(pfVar12 + 2) = uVar10;
                    pfVar12[4] = (float)(&DAT_03d9a280)[uVar13 * 5];
                  }
                  uVar21 = uVar21 * 2;
                  uVar13 = (ulong)((int)uVar13 + 1);
                } while (uVar21 <= uVar7);
              }
              else {
                uVar13 = 0;
                iVar16 = 0;
                uVar21 = 1;
                do {
                  if ((uVar21 & uVar7) != 0) {
                    pfVar12 = param_8 + iVar16 * uVar4;
                    memset(pfVar12 + 5,0,(ulong)(uVar17 << 2) - 0x14);
                    pfVar12[4] = (float)(&DAT_03d9a280)[uVar13 * 5];
                    uVar10 = *(undefined8 *)(&DAT_03d9a278 + uVar13 * 5);
                    *(undefined8 *)pfVar12 = *(undefined8 *)(&DAT_03d9a270 + uVar13 * 5);
                    *(undefined8 *)(pfVar12 + 2) = uVar10;
                    memset(param_8 + (ulong)(iVar16 * uVar4) + 5,0,(ulong)(uVar17 - 6) * 4 + 4);
                    iVar16 = iVar16 + 1;
                  }
                  uVar21 = uVar21 * 2;
                  uVar13 = (ulong)((int)uVar13 + 1);
                } while (uVar21 <= uVar7);
              }
            }
          }
          else if (uVar21 == 0x633) {
            if (uVar7 != 0) {
              if (uVar17 == 0) {
                uVar13 = 0;
                uVar21 = 1;
                do {
                  if ((uVar21 & uVar7) != 0) {
                    *(undefined8 *)(param_8 + 4) = *(undefined8 *)(&DAT_03d9a3e8 + uVar13 * 6);
                    uVar10 = *(undefined8 *)(&DAT_03d9a3e0 + uVar13 * 6);
                    *(undefined8 *)param_8 = *(undefined8 *)(&DAT_03d9a3d8 + uVar13 * 6);
                    *(undefined8 *)(param_8 + 2) = uVar10;
                  }
                  uVar21 = uVar21 * 2;
                  uVar13 = (ulong)((int)uVar13 + 1);
                } while (uVar21 <= uVar7);
              }
              else if (uVar17 < 7) {
                uVar13 = 0;
                iVar16 = 0;
                uVar21 = 1;
                do {
                  if ((uVar21 & uVar7) != 0) {
                    pfVar12 = param_8 + iVar16 * uVar4;
                    memset(pfVar12 + 6,0,0);
                    uVar10 = *(undefined8 *)(&DAT_03d9a3e0 + uVar13 * 6);
                    iVar16 = iVar16 + 1;
                    *(undefined8 *)pfVar12 = *(undefined8 *)(&DAT_03d9a3d8 + uVar13 * 6);
                    *(undefined8 *)(pfVar12 + 2) = uVar10;
                    *(undefined8 *)(pfVar12 + 4) = *(undefined8 *)(&DAT_03d9a3e8 + uVar13 * 6);
                  }
                  uVar21 = uVar21 * 2;
                  uVar13 = (ulong)((int)uVar13 + 1);
                } while (uVar21 <= uVar7);
              }
              else {
                uVar13 = 0;
                iVar16 = 0;
                uVar21 = 1;
                do {
                  if ((uVar21 & uVar7) != 0) {
                    pfVar12 = param_8 + iVar16 * uVar4;
                    memset(pfVar12 + 6,0,(ulong)(uVar17 << 2) - 0x18);
                    uVar10 = *(undefined8 *)(&DAT_03d9a3e0 + uVar13 * 6);
                    *(undefined8 *)(pfVar12 + 4) = *(undefined8 *)(&DAT_03d9a3e8 + uVar13 * 6);
                    *(undefined8 *)pfVar12 = *(undefined8 *)(&DAT_03d9a3d8 + uVar13 * 6);
                    *(undefined8 *)(pfVar12 + 2) = uVar10;
                    memset(param_8 + (ulong)(iVar16 * uVar4) + 6,0,(ulong)(uVar17 - 7) * 4 + 4);
                    iVar16 = iVar16 + 1;
                  }
                  uVar21 = uVar21 * 2;
                  uVar13 = (ulong)((int)uVar13 + 1);
                } while (uVar21 <= uVar7);
              }
            }
          }
          else if ((uVar21 == 0x637) && (uVar7 != 0)) {
            if (uVar17 == 0) {
              uVar13 = 0;
              uVar21 = 1;
              do {
                if ((uVar21 & uVar7) != 0) {
                  fVar23 = (float)(&DAT_03d9a5a0)[uVar13 * 7];
                  *(undefined8 *)(param_8 + 4) = *(undefined8 *)(&DAT_03d9a598 + uVar13 * 7);
                  uVar10 = *(undefined8 *)(&DAT_03d9a588 + uVar13 * 7);
                  uVar5 = *(undefined8 *)(&DAT_03d9a590 + uVar13 * 7);
                  param_8[6] = fVar23;
                  *(undefined8 *)param_8 = uVar10;
                  *(undefined8 *)(param_8 + 2) = uVar5;
                }
                uVar21 = uVar21 * 2;
                uVar13 = (ulong)((int)uVar13 + 1);
              } while (uVar21 <= uVar7);
            }
            else if (uVar17 < 8) {
              uVar13 = 0;
              iVar16 = 0;
              uVar21 = 1;
              do {
                if ((uVar21 & uVar7) != 0) {
                  pfVar12 = param_8 + iVar16 * uVar4;
                  memset(pfVar12 + 7,0,0);
                  *(undefined8 *)(pfVar12 + 4) = *(undefined8 *)(&DAT_03d9a598 + uVar13 * 7);
                  pfVar12[6] = (float)(&DAT_03d9a5a0)[uVar13 * 7];
                  uVar10 = *(undefined8 *)(&DAT_03d9a590 + uVar13 * 7);
                  iVar16 = iVar16 + 1;
                  *(undefined8 *)pfVar12 = *(undefined8 *)(&DAT_03d9a588 + uVar13 * 7);
                  *(undefined8 *)(pfVar12 + 2) = uVar10;
                }
                uVar21 = uVar21 * 2;
                uVar13 = (ulong)((int)uVar13 + 1);
              } while (uVar21 <= uVar7);
            }
            else {
              uVar13 = 0;
              iVar16 = 0;
              uVar21 = 1;
              do {
                if ((uVar21 & uVar7) != 0) {
                  pfVar12 = param_8 + iVar16 * uVar4;
                  memset(pfVar12 + 7,0,(ulong)(uVar17 << 2) - 0x1c);
                  *(undefined8 *)(pfVar12 + 4) = *(undefined8 *)(&DAT_03d9a598 + uVar13 * 7);
                  pfVar12[6] = (float)(&DAT_03d9a5a0)[uVar13 * 7];
                  uVar10 = *(undefined8 *)(&DAT_03d9a590 + uVar13 * 7);
                  *(undefined8 *)pfVar12 = *(undefined8 *)(&DAT_03d9a588 + uVar13 * 7);
                  *(undefined8 *)(pfVar12 + 2) = uVar10;
                  memset(param_8 + (ulong)(iVar16 * uVar4) + 7,0,(ulong)(uVar17 - 8) * 4 + 4);
                  iVar16 = iVar16 + 1;
                }
                uVar21 = uVar21 * 2;
                uVar13 = (ulong)((int)uVar13 + 1);
              } while (uVar21 <= uVar7);
            }
          }
          if (((param_6 & 0xff9c0000) != 0) && ((param_7 & 0xff9c0000) != 0)) {
            uVar21 = (uVar7 & 0x637) - ((uVar7 & 0x637) >> 1 & 0x55555555);
            uVar3 = (uVar21 & 0x33333333) + (uVar21 >> 2 & 0x33333333);
            uVar21 = 0;
            if ((uVar7 & 0x637) != 0) {
              uVar21 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
            }
            if (0x7fffff < local_a0) {
              uVar3 = uVar20 >> 0xc & 0xffff7;
              if (uVar17 == 0) {
                uVar21 = 1;
                uVar18 = 0x800;
                uVar13 = uVar19;
                do {
                  if (((uVar18 & uVar7) != 0) && ((uVar18 & uVar3) != 0)) {
                    for (; (uVar21 & uVar18) == 0; uVar21 = uVar21 << 1) {
                      uVar8 = (uint)uVar13;
                      if ((uVar21 & uVar3) != 0) {
                        uVar8 = uVar8 + 1;
                      }
                      uVar13 = (ulong)uVar8;
                    }
                    param_8[uVar13] = 1.0;
                  }
                  uVar18 = uVar18 * 2;
                } while (uVar18 <= uVar7);
              }
              else {
                uVar8 = 0;
                uVar18 = 1;
                uVar22 = 0x800;
                do {
                  if ((uVar22 & uVar7) != 0) {
                    memset(param_8 + uVar21 * uVar4,0,(ulong)(uVar17 << 2));
                    if ((uVar22 & uVar3) != 0) {
                      for (; (uVar18 & uVar22) == 0; uVar18 = uVar18 << 1) {
                        if ((uVar18 & uVar3) != 0) {
                          uVar8 = uVar8 + 1;
                        }
                      }
                      (param_8 + uVar21 * uVar4)[uVar8] = 1.0;
                    }
                    uVar21 = uVar21 + 1;
                  }
                  uVar22 = uVar22 * 2;
                } while (uVar22 <= uVar7);
              }
            }
          }
        }
        if ((param_6 >> 0xf & 1) == 0) {
          return;
        }
        param_8 = param_8 + uVar4 * (uVar14 - 1);
        if (uVar17 != 0) {
          memset(param_8,0,(ulong)(uVar17 << 2));
        }
      }
      else {
        if (param_5 == 2) {
          FUN_034d34c0(param_1,param_2,param_3,param_4,param_6,param_7 & 0xffffffff,param_8);
        }
        else if (param_5 == 1) {
          FUN_034d62c0(param_1,param_2,param_4,param_6,param_7 & 0xffffffff,param_8);
        }
        if ((param_6 >> 0xf & 1) == 0) {
          return;
        }
        param_8 = param_8 + uVar4 * (uVar14 - 1);
        if (uVar17 != 0) {
          memset(param_8,0,(ulong)(uVar17 << 2));
        }
      }
      if ((uVar20 >> 0xf & 1) != 0) {
        (param_8 + uVar19)[-1] = 1.0;
      }
    }
    else {
      if (iVar16 != 0) {
        memset(param_8,0,(ulong)(uint)(iVar16 * 4));
      }
      if ((param_6 & 0xf00) == 0x200) {
        if ((uVar14 != 0) && (uVar17 != 0)) {
          if (uVar14 < 0xc) {
            uVar13 = 0;
            uVar21 = *(uint *)(&DAT_03d99ae0 + (ulong)(uVar14 - 1) * 4);
            uVar17 = 0;
            do {
              if ((uVar21 >> (ulong)((uint)uVar13 & 0x1f) & 1) == 0) {
                uVar7 = uVar17 * uVar4;
                uVar17 = uVar17 + 1;
                param_8[uVar7 + uVar13] = 1.0;
              }
              uVar13 = uVar13 + 1;
            } while ((uVar13 < uVar19) && (uVar17 < uVar14));
          }
          else {
            if (uVar17 - 1 <= uVar14 - 1) {
              uVar14 = uVar17;
            }
            uVar13 = (ulong)uVar14;
            uVar19 = uVar13 & 3;
            if (uVar13 - 1 < 3) {
              lVar9 = 0;
            }
            else {
              uVar1 = (param_7 & 0xff) + 3;
              uVar11 = uVar1 >> 2;
              lVar2 = 1;
              pfVar12 = param_8;
              do {
                lVar9 = lVar2;
                lVar2 = lVar9 + 4;
                *pfVar12 = 1.0;
                *(undefined4 *)((long)pfVar12 + (uVar11 << 4 | 4)) = 0x3f800000;
                *(undefined4 *)((long)pfVar12 + (uVar11 << 5 | 8)) = 0x3f800000;
                *(undefined4 *)((long)pfVar12 + ((uVar11 * 2 + (uVar1 >> 2)) * 0x10 | 0xc)) =
                     0x3f800000;
                pfVar12 = (float *)((long)pfVar12 + (uVar11 << 6 | 0x10));
              } while (lVar2 - (uVar13 & 0xfc) != 1);
              lVar9 = lVar9 + 3;
            }
            if ((uVar14 & 3) != 0) {
              uVar13 = (ulong)((uVar20 & 0xff) * 4 + 0xc) & 0x7f0 | 4;
              param_8 = (float *)((long)param_8 + lVar9 * uVar13);
              do {
                *param_8 = 1.0;
                uVar19 = uVar19 - 1;
                param_8 = (float *)((long)param_8 + uVar13);
              } while (uVar19 != 0);
            }
          }
        }
      }
      else {
        if (uVar17 <= uVar14) {
          uVar14 = uVar17;
        }
        uVar19 = (ulong)uVar14;
        if (uVar14 != 0) {
          uVar13 = uVar19 & 3;
          if (uVar19 - 1 < 3) {
            lVar9 = 0;
          }
          else {
            uVar1 = (param_7 & 0xff) + 3;
            uVar11 = uVar1 >> 2;
            lVar2 = 1;
            pfVar12 = param_8;
            do {
              lVar9 = lVar2;
              lVar2 = lVar9 + 4;
              *pfVar12 = 1.0;
              *(undefined4 *)((long)pfVar12 + (uVar11 << 4 | 4)) = 0x3f800000;
              *(undefined4 *)((long)pfVar12 + (uVar11 << 5 | 8)) = 0x3f800000;
              *(undefined4 *)((long)pfVar12 + ((uVar11 * 2 + (uVar1 >> 2)) * 0x10 | 0xc)) =
                   0x3f800000;
              pfVar12 = (float *)((long)pfVar12 + (uVar11 << 6 | 0x10));
            } while (lVar2 - (uVar19 & 0xfc) != 1);
            lVar9 = lVar9 + 3;
          }
          if ((uVar14 & 3) != 0) {
            uVar19 = (ulong)((uVar20 & 0xff) * 4 + 0xc) & 0x7f0 | 4;
            param_8 = (float *)((long)param_8 + lVar9 * uVar19);
            do {
              *param_8 = 1.0;
              uVar13 = uVar13 - 1;
              param_8 = (float *)((long)param_8 + uVar19);
            } while (uVar13 != 0);
          }
        }
      }
    }
  }
  else {
    if ((uVar21 == 2) && (uVar7 != 2)) {
      FUN_034d439c(param_6,param_7 & 0xffffffff,param_8,param_9);
      return;
    }
    if (((param_6 & 0xf00) == 0x100) && (uVar7 == 2)) {
      if ((param_6 - (param_6 >> 0xf & 1) & 0xff) == 1) {
        *param_8 = 1.0;
      }
      else {
        uVar21 = param_6 >> 0xc & 0x637;
        uVar14 = uVar21 - (uVar21 >> 1 & 0xf1f1f1f1);
        uVar14 = (uVar14 & 0x33333333) + (uVar14 >> 2 & 0x33333333);
        uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        if (uVar21 != 0) {
          cVar6 = (&DAT_03d984b4)[uVar19];
          uVar21 = uVar14;
          if (uVar14 < 2) {
            uVar21 = 1;
          }
          uVar13 = (ulong)uVar21;
          pfVar12 = param_8;
          pfVar15 = (float *)(&DAT_03d98f28 + (ulong)uVar14 * 0x1c);
          do {
            fVar25 = *pfVar15;
            fVar23 = cosf(fVar25);
            fVar25 = sinf(fVar25);
            FUN_034ce9c0(fVar23,fVar25,0,cVar6 + 1,1,pfVar12);
            pfVar12 = (float *)((long)pfVar12 + ((ulong)((uVar20 & 0xff) * 4 + 0xc) & 0x7f0));
            uVar13 = uVar13 - 1;
            pfVar15 = pfVar15 + 1;
          } while (uVar13 != 0);
        }
        uVar21 = param_6 >> 0xc & 0xff9c0;
        if (uVar21 != 0) {
          uVar21 = uVar21 - (uVar21 >> 1 & 0x55555555);
          uVar21 = (uVar21 & 0x33333333) + (uVar21 >> 2 & 0x33333333);
          cVar6 = (&DAT_03d984b4)[uVar19];
          uVar7 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
          uVar21 = uVar7;
          if (uVar7 < 2) {
            uVar21 = 1;
          }
          uVar19 = (ulong)uVar21;
          uVar14 = uVar14 * (uVar17 + 3 >> 2) * 4;
          pfVar12 = (float *)(&DAT_03d99080 + (ulong)uVar7 * 0x18);
          pfVar15 = (float *)(&DAT_03d98ff0 + (ulong)uVar7 * 0x18);
          do {
            fVar24 = *pfVar15;
            fVar26 = *pfVar12;
            fVar23 = cosf(fVar26);
            fVar25 = cosf(fVar24);
            fVar24 = sinf(fVar24);
            fVar26 = sinf(fVar26);
            FUN_034ce9c0(fVar23 * fVar25,fVar23 * fVar24,fVar26,cVar6 + 1,1,param_8 + uVar14);
            uVar14 = uVar14 + uVar4;
            uVar19 = uVar19 - 1;
            pfVar12 = pfVar12 + 1;
            pfVar15 = pfVar15 + 1;
          } while (uVar19 != 0);
        }
      }
    }
    else {
      if (uVar17 <= uVar14) {
        uVar14 = uVar17;
      }
      uVar19 = (ulong)uVar14;
      if (uVar14 != 0) {
        uVar13 = uVar19 & 3;
        if (uVar19 - 1 < 3) {
          lVar9 = 0;
        }
        else {
          uVar1 = (param_7 & 0xff) + 3;
          uVar11 = uVar1 >> 2;
          lVar2 = 1;
          pfVar12 = param_8;
          do {
            lVar9 = lVar2;
            lVar2 = lVar9 + 4;
            *pfVar12 = 1.0;
            *(undefined4 *)((long)pfVar12 + (uVar11 << 4 | 4)) = 0x3f800000;
            *(undefined4 *)((long)pfVar12 + (uVar11 << 5 | 8)) = 0x3f800000;
            *(undefined4 *)((long)pfVar12 + ((uVar11 * 2 + (uVar1 >> 2)) * 0x10 | 0xc)) = 0x3f800000
            ;
            pfVar12 = (float *)((long)pfVar12 + (uVar11 << 6 | 0x10));
          } while (lVar2 - (uVar19 & 0xfc) != 1);
          lVar9 = lVar9 + 3;
        }
        if ((uVar14 & 3) != 0) {
          uVar19 = (ulong)((uVar20 & 0xff) * 4 + 0xc) & 0x7f0 | 4;
          param_8 = (float *)((long)param_8 + lVar9 * uVar19);
          do {
            *param_8 = 1.0;
            uVar13 = uVar13 - 1;
            param_8 = (float *)((long)param_8 + uVar19);
          } while (uVar13 != 0);
        }
      }
    }
  }
  return;
}


