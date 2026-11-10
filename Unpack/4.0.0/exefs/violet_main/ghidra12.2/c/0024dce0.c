/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024dce0; name: FUN_0024dce0
 */


undefined4 FUN_0024dce0(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint3 uVar4;
  uint uVar5;
  uint5 uVar6;
  uint6 uVar7;
  uint7 uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  byte local_2c [28];
  
  local_2c[0x14] = 0;
  local_2c[0x15] = 0;
  local_2c[0x16] = 0;
  local_2c[0x17] = 0;
  local_2c[0x18] = 0;
  local_2c[0x19] = 0;
  local_2c[0x1a] = 0;
  local_2c[0x1b] = 0;
  local_2c[0x10] = 0;
  local_2c[0x11] = 0;
  local_2c[0x12] = 0;
  local_2c[0x13] = 0;
  local_2c[8] = 0;
  local_2c[9] = 0;
  local_2c[10] = 0;
  local_2c[0xb] = 0;
  local_2c[0xc] = 0;
  local_2c[0xd] = 0;
  local_2c[0xe] = 0;
  local_2c[0xf] = 0;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_2c[3] = 0;
  local_2c[4] = 0;
  local_2c[5] = 0;
  local_2c[6] = 0;
  local_2c[7] = 0;
  local_50 = 0x316c706e;
  uStack_34 = 0;
  local_3c = 0;
  uStack_44 = 0;
  local_4c = 0;
  pbVar10 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar10 = param_2 + 1;
  }
  bVar2 = *pbVar10;
  if (bVar2 == 0) {
    pbVar11 = (byte *)((ulong)&local_50 | 4);
  }
  else {
    local_4c = (ulong)bVar2;
    bVar1 = pbVar10[1];
    if (bVar1 == 0) {
      pbVar11 = (byte *)((ulong)&local_50 | 5);
      pbVar10 = pbVar10 + 1;
    }
    else {
      local_4c._0_2_ = CONCAT11(bVar1,bVar2);
      uVar3 = (ushort)local_4c;
      local_4c = (ulong)(ushort)local_4c;
      bVar2 = pbVar10[2];
      if (bVar2 == 0) {
        pbVar11 = (byte *)((ulong)&local_50 | 6);
        pbVar10 = pbVar10 + 2;
      }
      else {
        local_4c._0_3_ = CONCAT12(bVar2,uVar3);
        uVar4 = (uint3)local_4c;
        local_4c = (ulong)(uint3)local_4c;
        bVar2 = pbVar10[3];
        if (bVar2 == 0) {
          pbVar11 = (byte *)((ulong)&local_50 | 7);
          pbVar10 = pbVar10 + 3;
        }
        else {
          local_4c._0_4_ = CONCAT13(bVar2,uVar4);
          uVar5 = (uint)local_4c;
          local_4c = (ulong)(uint)local_4c;
          bVar2 = pbVar10[4];
          if (bVar2 == 0) {
            pbVar11 = (byte *)((long)&local_4c + 4);
            pbVar10 = pbVar10 + 4;
          }
          else {
            local_4c._0_5_ = CONCAT14(bVar2,uVar5);
            uVar6 = (uint5)local_4c;
            local_4c = (ulong)(uint5)local_4c;
            bVar2 = pbVar10[5];
            if (bVar2 == 0) {
              pbVar11 = (byte *)((long)&local_4c + 5);
              pbVar10 = pbVar10 + 5;
            }
            else {
              local_4c._0_6_ = CONCAT15(bVar2,uVar6);
              uVar7 = (uint6)local_4c;
              local_4c = (ulong)(uint6)local_4c;
              bVar2 = pbVar10[6];
              if (bVar2 == 0) {
                pbVar11 = (byte *)((long)&local_4c + 6);
                pbVar10 = pbVar10 + 6;
              }
              else {
                local_4c._0_7_ = CONCAT16(bVar2,uVar7);
                uVar8 = (uint7)local_4c;
                local_4c = (ulong)(uint7)local_4c;
                bVar2 = pbVar10[7];
                if (bVar2 == 0) {
                  pbVar11 = (byte *)((long)&local_4c + 7);
                  pbVar10 = pbVar10 + 7;
                }
                else {
                  local_4c = CONCAT17(bVar2,uVar8);
                  bVar2 = pbVar10[8];
                  if (bVar2 == 0) {
                    pbVar11 = (byte *)&uStack_44;
                    pbVar10 = pbVar10 + 8;
                  }
                  else {
                    uStack_44 = (ulong)bVar2;
                    bVar1 = pbVar10[9];
                    if (bVar1 == 0) {
                      pbVar11 = (byte *)((long)&uStack_44 + 1);
                      pbVar10 = pbVar10 + 9;
                    }
                    else {
                      uStack_44._0_2_ = CONCAT11(bVar1,bVar2);
                      uVar3 = (ushort)uStack_44;
                      uStack_44 = (ulong)(ushort)uStack_44;
                      bVar2 = pbVar10[10];
                      if (bVar2 == 0) {
                        pbVar11 = (byte *)((long)&uStack_44 + 2);
                        pbVar10 = pbVar10 + 10;
                      }
                      else {
                        uStack_44._0_3_ = CONCAT12(bVar2,uVar3);
                        uVar4 = (uint3)uStack_44;
                        uStack_44 = (ulong)(uint3)uStack_44;
                        bVar2 = pbVar10[0xb];
                        if (bVar2 == 0) {
                          pbVar11 = (byte *)((long)&uStack_44 + 3);
                          pbVar10 = pbVar10 + 0xb;
                        }
                        else {
                          uStack_44._0_4_ = CONCAT13(bVar2,uVar4);
                          uVar5 = (uint)uStack_44;
                          uStack_44 = (ulong)(uint)uStack_44;
                          bVar2 = pbVar10[0xc];
                          if (bVar2 == 0) {
                            pbVar11 = (byte *)((long)&uStack_44 + 4);
                            pbVar10 = pbVar10 + 0xc;
                          }
                          else {
                            uStack_44._0_5_ = CONCAT14(bVar2,uVar5);
                            uVar6 = (uint5)uStack_44;
                            uStack_44 = (ulong)(uint5)uStack_44;
                            bVar2 = pbVar10[0xd];
                            if (bVar2 == 0) {
                              pbVar11 = (byte *)((long)&uStack_44 + 5);
                              pbVar10 = pbVar10 + 0xd;
                            }
                            else {
                              uStack_44._0_6_ = CONCAT15(bVar2,uVar6);
                              uVar7 = (uint6)uStack_44;
                              uStack_44 = (ulong)(uint6)uStack_44;
                              bVar2 = pbVar10[0xe];
                              if (bVar2 == 0) {
                                pbVar11 = (byte *)((long)&uStack_44 + 6);
                                pbVar10 = pbVar10 + 0xe;
                              }
                              else {
                                uStack_44._0_7_ = CONCAT16(bVar2,uVar7);
                                uVar8 = (uint7)uStack_44;
                                uStack_44 = (ulong)(uint7)uStack_44;
                                bVar2 = pbVar10[0xf];
                                if (bVar2 == 0) {
                                  pbVar11 = (byte *)((long)&uStack_44 + 7);
                                  pbVar10 = pbVar10 + 0xf;
                                }
                                else {
                                  uStack_44 = CONCAT17(bVar2,uVar8);
                                  bVar2 = pbVar10[0x10];
                                  if (bVar2 == 0) {
                                    pbVar11 = (byte *)&local_3c;
                                    pbVar10 = pbVar10 + 0x10;
                                  }
                                  else {
                                    local_3c = (ulong)bVar2;
                                    bVar1 = pbVar10[0x11];
                                    if (bVar1 == 0) {
                                      pbVar11 = (byte *)((long)&local_3c + 1);
                                      pbVar10 = pbVar10 + 0x11;
                                    }
                                    else {
                                      local_3c._0_2_ = CONCAT11(bVar1,bVar2);
                                      uVar3 = (ushort)local_3c;
                                      local_3c = (ulong)(ushort)local_3c;
                                      bVar2 = pbVar10[0x12];
                                      if (bVar2 == 0) {
                                        pbVar11 = (byte *)((long)&local_3c + 2);
                                        pbVar10 = pbVar10 + 0x12;
                                      }
                                      else {
                                        local_3c._0_3_ = CONCAT12(bVar2,uVar3);
                                        uVar4 = (uint3)local_3c;
                                        local_3c = (ulong)(uint3)local_3c;
                                        bVar2 = pbVar10[0x13];
                                        if (bVar2 == 0) {
                                          pbVar11 = (byte *)((long)&local_3c + 3);
                                          pbVar10 = pbVar10 + 0x13;
                                        }
                                        else {
                                          local_3c._0_4_ = CONCAT13(bVar2,uVar4);
                                          uVar5 = (uint)local_3c;
                                          local_3c = (ulong)(uint)local_3c;
                                          bVar2 = pbVar10[0x14];
                                          if (bVar2 == 0) {
                                            pbVar11 = (byte *)((long)&local_3c + 4);
                                            pbVar10 = pbVar10 + 0x14;
                                          }
                                          else {
                                            local_3c._0_5_ = CONCAT14(bVar2,uVar5);
                                            uVar6 = (uint5)local_3c;
                                            local_3c = (ulong)(uint5)local_3c;
                                            bVar2 = pbVar10[0x15];
                                            if (bVar2 == 0) {
                                              pbVar11 = (byte *)((long)&local_3c + 5);
                                              pbVar10 = pbVar10 + 0x15;
                                            }
                                            else {
                                              local_3c._0_6_ = CONCAT15(bVar2,uVar6);
                                              uVar7 = (uint6)local_3c;
                                              local_3c = (ulong)(uint6)local_3c;
                                              bVar2 = pbVar10[0x16];
                                              if (bVar2 == 0) {
                                                pbVar11 = (byte *)((long)&local_3c + 6);
                                                pbVar10 = pbVar10 + 0x16;
                                              }
                                              else {
                                                local_3c._0_7_ = CONCAT16(bVar2,uVar7);
                                                uVar8 = (uint7)local_3c;
                                                local_3c = (ulong)(uint7)local_3c;
                                                bVar2 = pbVar10[0x17];
                                                if (bVar2 == 0) {
                                                  pbVar11 = (byte *)((long)&local_3c + 7);
                                                  pbVar10 = pbVar10 + 0x17;
                                                }
                                                else {
                                                  local_3c = CONCAT17(bVar2,uVar8);
                                                  bVar2 = pbVar10[0x18];
                                                  if (bVar2 == 0) {
                                                    pbVar11 = (byte *)&uStack_34;
                                                    pbVar10 = pbVar10 + 0x18;
                                                  }
                                                  else {
                                                    uStack_34 = (ulong)bVar2;
                                                    bVar1 = pbVar10[0x19];
                                                    if (bVar1 == 0) {
                                                      pbVar11 = (byte *)((long)&uStack_34 + 1);
                                                      pbVar10 = pbVar10 + 0x19;
                                                    }
                                                    else {
                                                      uStack_34._0_2_ = CONCAT11(bVar1,bVar2);
                                                      uVar3 = (ushort)uStack_34;
                                                      uStack_34 = (ulong)(ushort)uStack_34;
                                                      bVar2 = pbVar10[0x1a];
                                                      if (bVar2 == 0) {
                                                        pbVar11 = (byte *)((long)&uStack_34 + 2);
                                                        pbVar10 = pbVar10 + 0x1a;
                                                      }
                                                      else {
                                                        uStack_34._0_3_ = CONCAT12(bVar2,uVar3);
                                                        uVar4 = (uint3)uStack_34;
                                                        uStack_34 = (ulong)(uint3)uStack_34;
                                                        bVar2 = pbVar10[0x1b];
                                                        if (bVar2 == 0) {
                                                          pbVar11 = (byte *)((long)&uStack_34 + 3);
                                                          pbVar10 = pbVar10 + 0x1b;
                                                        }
                                                        else {
                                                          uStack_34._0_4_ = CONCAT13(bVar2,uVar4);
                                                          uVar5 = (uint)uStack_34;
                                                          uStack_34 = (ulong)(uint)uStack_34;
                                                          bVar2 = pbVar10[0x1c];
                                                          if (bVar2 == 0) {
                                                            pbVar11 = (byte *)((long)&uStack_34 + 4)
                                                            ;
                                                            pbVar10 = pbVar10 + 0x1c;
                                                          }
                                                          else {
                                                            uStack_34._0_5_ = CONCAT14(bVar2,uVar5);
                                                            uVar6 = (uint5)uStack_34;
                                                            uStack_34 = (ulong)(uint5)uStack_34;
                                                            bVar2 = pbVar10[0x1d];
                                                            if (bVar2 == 0) {
                                                              pbVar11 = (byte *)((long)&uStack_34 +
                                                                                5);
                                                              pbVar10 = pbVar10 + 0x1d;
                                                            }
                                                            else {
                                                              uStack_34._0_6_ =
                                                                   CONCAT15(bVar2,uVar6);
                                                              uVar7 = (uint6)uStack_34;
                                                              uStack_34 = (ulong)(uint6)uStack_34;
                                                              bVar2 = pbVar10[0x1e];
                                                              if (bVar2 == 0) {
                                                                pbVar11 = (byte *)((long)&uStack_34
                                                                                  + 6);
                                                                pbVar10 = pbVar10 + 0x1e;
                                                              }
                                                              else {
                                                                uStack_34._0_7_ =
                                                                     CONCAT16(bVar2,uVar7);
                                                                uVar8 = (uint7)uStack_34;
                                                                uStack_34 = (ulong)(uint7)uStack_34;
                                                                bVar2 = pbVar10[0x1f];
                                                                if (bVar2 == 0) {
                                                                  pbVar11 = (byte *)((long)&
                                                  uStack_34 + 7);
                                                  pbVar10 = pbVar10 + 0x1f;
                                                  }
                                                  else {
                                                    uStack_34 = CONCAT17(bVar2,uVar8);
                                                    pbVar11 = local_2c;
                                                    pbVar10 = pbVar10 + 0x20;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *pbVar11 = 0;
  do {
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar2 != 0);
  local_60 = nn::err::NplnContext::Make(&local_50,0x40);
  uVar9 = nn::err::UpdateResultWithContext<nn::err::NplnContext>(param_1,local_60);
  return uVar9;
}


