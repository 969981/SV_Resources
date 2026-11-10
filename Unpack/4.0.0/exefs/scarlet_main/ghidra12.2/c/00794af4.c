/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00794af4; name: FUN_00794af4
 */


uint FUN_00794af4(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint extraout_var;
  uint extraout_var_00;
  ushort extraout_var_01;
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_40[0] = 0xa466;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
    if (*param_1 == local_40[0]) {
      uVar1 = nn::err::ErrorResultVariant::operator_cast_to_Result
                        ((ErrorResultVariant *)(param_1 + 1));
      uVar1 = uVar1 & 0x3fffff;
    }
    else {
      local_40[0] = 0xc47e;
      uVar1 = 0x161b7f4;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
      if (*param_1 == local_40[0]) {
        iVar2 = nn::err::ErrorResultVariant::GetState();
        if (iVar2 == 2) {
          nn::err::ErrorResultVariant::operator_cast_to_ErrorCode
                    ((ErrorResultVariant *)(param_1 + 1));
          uVar1 = (extraout_var & 0xff) + 0x161b7f4;
        }
      }
      else {
        local_40[0] = 0x10401;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
        if (*param_1 == local_40[0]) {
          uVar1 = 0x161b2e1;
        }
        else {
          local_40[0] = 0x10402;
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
          if (*param_1 == local_40[0]) {
            uVar1 = 0x161b2e2;
          }
          else {
            local_40[0] = 0x10404;
            local_28[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
            if (*param_1 == local_40[0]) {
              uVar1 = 0x161b2e3;
            }
            else {
              local_40[0] = 0x2c03;
              local_28[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
              if (*param_1 == local_40[0]) {
                uVar1 = 0x161b2e4;
              }
              else {
                local_40[0] = 0x6c05;
                local_28[0] = 0;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
                if (*param_1 == local_40[0]) {
                  uVar1 = 0x161b2e5;
                }
                else {
                  local_40[0] = 0xc406;
                  local_28[0] = 0;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
                  if (*param_1 == local_40[0]) {
                    uVar1 = 0x161b2e6;
                  }
                  else {
                    local_40[0] = 0x10407;
                    local_28[0] = 0;
                    nn::err::ErrorResultVariant::ErrorResultVariant
                              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
                    if (*param_1 == local_40[0]) {
                      uVar1 = 0x161b2e7;
                    }
                    else {
                      local_40[0] = 0x10408;
                      local_28[0] = 0;
                      nn::err::ErrorResultVariant::ErrorResultVariant
                                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
                      if (*param_1 == local_40[0]) {
                        uVar1 = 0x161b2e8;
                      }
                      else {
                        local_40[0] = 0x2c09;
                        local_28[0] = 0;
                        nn::err::ErrorResultVariant::ErrorResultVariant
                                  ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
                        if (*param_1 == local_40[0]) {
                          uVar1 = 0x161b2e9;
                        }
                        else {
                          local_40[0] = 0x2c0a;
                          local_28[0] = 0;
                          nn::err::ErrorResultVariant::ErrorResultVariant
                                    ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28)
                          ;
                          if (*param_1 == local_40[0]) {
                            uVar1 = 0x161b2ea;
                          }
                          else {
                            local_40[0] = 0xc0b;
                            local_28[0] = 0;
                            nn::err::ErrorResultVariant::ErrorResultVariant
                                      ((ErrorResultVariant *)((ulong)local_40 | 4),
                                       (Result *)local_28);
                            if (*param_1 == local_40[0]) {
                              uVar1 = 0x161b2eb;
                            }
                            else {
                              local_40[0] = 0x1040c;
                              local_28[0] = 0;
                              nn::err::ErrorResultVariant::ErrorResultVariant
                                        ((ErrorResultVariant *)((ulong)local_40 | 4),
                                         (Result *)local_28);
                              if (*param_1 == local_40[0]) {
                                uVar1 = 0x161b2ec;
                              }
                              else {
                                local_40[0] = 0x4c0d;
                                local_28[0] = 0;
                                nn::err::ErrorResultVariant::ErrorResultVariant
                                          ((ErrorResultVariant *)((ulong)local_40 | 4),
                                           (Result *)local_28);
                                if (*param_1 == local_40[0]) {
                                  uVar1 = 0x161b2ed;
                                }
                                else {
                                  local_40[0] = 0x6c0e;
                                  local_28[0] = 0;
                                  nn::err::ErrorResultVariant::ErrorResultVariant
                                            ((ErrorResultVariant *)((ulong)local_40 | 4),
                                             (Result *)local_28);
                                  if (*param_1 == local_40[0]) {
                                    uVar1 = 0x161b2ee;
                                  }
                                  else {
                                    local_40[0] = 0x1040f;
                                    local_28[0] = 0;
                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                              ((ErrorResultVariant *)((ulong)local_40 | 4),
                                               (Result *)local_28);
                                    if (*param_1 == local_40[0]) {
                                      uVar1 = 0x161b2ef;
                                    }
                                    else {
                                      local_40[0] = 0xc10;
                                      local_28[0] = 0;
                                      nn::err::ErrorResultVariant::ErrorResultVariant
                                                ((ErrorResultVariant *)((ulong)local_40 | 4),
                                                 (Result *)local_28);
                                      if (*param_1 == local_40[0]) {
                                        uVar1 = 0x161b2f0;
                                      }
                                      else {
                                        local_40[0] = 0x4c11;
                                        local_28[0] = 0;
                                        nn::err::ErrorResultVariant::ErrorResultVariant
                                                  ((ErrorResultVariant *)((ulong)local_40 | 4),
                                                   (Result *)local_28);
                                        if (*param_1 == local_40[0]) {
                                          uVar1 = 0x161b2f1;
                                        }
                                        else {
                                          local_40[0] = 0x10413;
                                          local_28[0] = 0;
                                          nn::err::ErrorResultVariant::ErrorResultVariant
                                                    ((ErrorResultVariant *)((ulong)local_40 | 4),
                                                     (Result *)local_28);
                                          if (*param_1 == local_40[0]) {
                                            uVar1 = 0x161b2f3;
                                          }
                                          else {
                                            local_40[0] = 0xc47f;
                                            local_28[0] = 0;
                                            nn::err::ErrorResultVariant::ErrorResultVariant
                                                      ((ErrorResultVariant *)((ulong)local_40 | 4),
                                                       (Result *)local_28);
                                            if (*param_1 == local_40[0]) {
                                              uVar1 = 0x161b2fe;
                                            }
                                            else {
                                              local_40[0] = 0xc480;
                                              local_28[0] = 0;
                                              nn::err::ErrorResultVariant::ErrorResultVariant
                                                        ((ErrorResultVariant *)((ulong)local_40 | 4)
                                                         ,(Result *)local_28);
                                              if (*param_1 == local_40[0]) {
                                                uVar1 = 0x161b2ff;
                                              }
                                              else {
                                                local_40[0] = 0x10414;
                                                local_28[0] = 0;
                                                nn::err::ErrorResultVariant::ErrorResultVariant
                                                          ((ErrorResultVariant *)
                                                           ((ulong)local_40 | 4),(Result *)local_28)
                                                ;
                                                if (*param_1 == local_40[0]) {
                                                  uVar1 = 0x161b345;
                                                }
                                                else {
                                                  local_40[0] = 0x6c8a;
                                                  local_28[0] = 0;
                                                  nn::err::ErrorResultVariant::ErrorResultVariant
                                                            ((ErrorResultVariant *)
                                                             ((ulong)local_40 | 4),
                                                             (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b346;
                                                  }
                                                  else {
                                                    local_40[0] = 0x6c93;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b347;
                                                    }
                                                    else {
                                                      local_40[0] = 0xc434;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b3a9;
                                                      }
                                                      else {
                                                        local_40[0] = 0xc35;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b3aa;
                                                        }
                                                        else {
                                                          local_40[0] = 0xc436;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b3ab;
                                                          }
                                                          else {
                                                            local_40[0] = 0x6485;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b3ac;
                                                            }
                                                            else {
                                                              local_40[0] = 0xc16;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b40e;
                                                              }
                                                              else {
                                                                local_40[0] = 0x2c18;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b410;
                                                  }
                                                  else {
                                                    local_40[0] = 0x6c19;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b411;
                                                    }
                                                    else {
                                                      local_40[0] = 0x6c1b;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b414;
                                                      }
                                                      else {
                                                        local_40[0] = 0x6c1c;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b415;
                                                        }
                                                        else {
                                                          local_40[0] = 0x6c1d;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b416;
                                                          }
                                                          else {
                                                            local_40[0] = 0x641e;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b417;
                                                            }
                                                            else {
                                                              local_40[0] = 0x641f;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b418;
                                                              }
                                                              else {
                                                                local_40[0] = 0xc420;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b419;
                                                  }
                                                  else {
                                                    local_40[0] = 0xc421;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b41a;
                                                    }
                                                    else {
                                                      local_40[0] = 0x6422;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b41b;
                                                      }
                                                      else {
                                                        local_40[0] = 0x6c86;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b41d;
                                                        }
                                                        else {
                                                          local_40[0] = 0xc24;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b471;
                                                          }
                                                          else {
                                                            local_40[0] = 0xc25;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b472;
                                                            }
                                                            else {
                                                              local_40[0] = 0x10426;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b473;
                                                              }
                                                              else {
                                                                local_40[0] = 0x2c27;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b474;
                                                  }
                                                  else {
                                                    local_40[0] = 0xc28;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b475;
                                                    }
                                                    else {
                                                      local_40[0] = 0x2c89;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b476;
                                                      }
                                                      else {
                                                        local_40[0] = 0x6c38;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b4d5;
                                                        }
                                                        else {
                                                          local_40[0] = 0x6439;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b4d6;
                                                          }
                                                          else {
                                                            local_40[0] = 0x6c3d;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b4da;
                                                            }
                                                            else {
                                                              local_40[0] = 0x1043e;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b4db;
                                                              }
                                                              else {
                                                                local_40[0] = 0x643f;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b4de;
                                                  }
                                                  else {
                                                    local_40[0] = 0x6443;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b4e1;
                                                    }
                                                    else {
                                                      local_40[0] = 0x6442;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b4e2;
                                                      }
                                                      else {
                                                        local_40[0] = 0x6445;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b4e3;
                                                        }
                                                        else {
                                                          local_40[0] = 0x6444;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b4e4;
                                                          }
                                                          else {
                                                            local_40[0] = 0x6446;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b4e9;
                                                            }
                                                            else {
                                                              local_40[0] = 0x6475;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b4f3;
                                                              }
                                                              else {
                                                                local_40[0] = 0x6476;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b4f4;
                                                  }
                                                  else {
                                                    local_40[0] = 0x6477;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b4f5;
                                                    }
                                                    else {
                                                      local_40[0] = 0x6478;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b4f6;
                                                      }
                                                      else {
                                                        local_40[0] = 0x6479;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b4f7;
                                                        }
                                                        else {
                                                          local_40[0] = 0x647a;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b4f8;
                                                          }
                                                          else {
                                                            local_40[0] = 0x647b;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b4f9;
                                                            }
                                                            else {
                                                              local_40[0] = 0x647c;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b4fb;
                                                              }
                                                              else {
                                                                local_40[0] = 0x647d;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b4fc;
                                                  }
                                                  else {
                                                    local_40[0] = 0x6c47;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b4fd;
                                                    }
                                                    else {
                                                      local_40[0] = 0x6c48;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b4fe;
                                                      }
                                                      else {
                                                        local_40[0] = 0x6c49;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b4ff;
                                                        }
                                                        else {
                                                          local_40[0] = 0x6c4a;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b500;
                                                          }
                                                          else {
                                                            local_40[0] = 0x6c4d;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b501;
                                                            }
                                                            else {
                                                              local_40[0] = 0x6c4e;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b502;
                                                              }
                                                              else {
                                                                local_40[0] = 0x6c4c;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b503;
                                                  }
                                                  else {
                                                    local_40[0] = 0x6c4f;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b504;
                                                    }
                                                    else {
                                                      local_40[0] = 0x6c50;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b505;
                                                      }
                                                      else {
                                                        local_40[0] = 0x6c51;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b506;
                                                        }
                                                        else {
                                                          local_40[0] = 0x8c52;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b507;
                                                          }
                                                          else {
                                                            local_40[0] = 0x6c53;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b508;
                                                            }
                                                            else {
                                                              local_40[0] = 0x6c55;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b50a;
                                                              }
                                                              else {
                                                                local_40[0] = 0x6c57;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b50b;
                                                  }
                                                  else {
                                                    local_40[0] = 0xa44b;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b511;
                                                    }
                                                    else {
                                                      local_40[0] = 0xac56;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b512;
                                                      }
                                                      else {
                                                        local_40[0] = 0x8c70;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b513;
                                                        }
                                                        else {
                                                          local_40[0] = 0x8c6e;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b514;
                                                          }
                                                          else {
                                                            local_40[0] = 0x8c6f;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b515;
                                                            }
                                                            else {
                                                              local_40[0] = 0x8c72;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b516;
                                                              }
                                                              else {
                                                                local_40[0] = 0x8c71;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b517;
                                                  }
                                                  else {
                                                    local_40[0] = 0x6c5b;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b51b;
                                                    }
                                                    else {
                                                      local_40[0] = 0x6c5c;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b51c;
                                                      }
                                                      else {
                                                        local_40[0] = 0x6c5d;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b51d;
                                                        }
                                                        else {
                                                          local_40[0] = 0x6c5e;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b51e;
                                                          }
                                                          else {
                                                            local_40[0] = 0x6c5f;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b51f;
                                                            }
                                                            else {
                                                              local_40[0] = 0x6c62;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b520;
                                                              }
                                                              else {
                                                                local_40[0] = 0x2c60;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b521;
                                                  }
                                                  else {
                                                    local_40[0] = 0x6c61;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b522;
                                                    }
                                                    else {
                                                      local_40[0] = 0xa469;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b523;
                                                      }
                                                      else {
                                                        local_40[0] = 0xa46a;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b52e;
                                                        }
                                                        else {
                                                          local_40[0] = 0xa46b;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b52f;
                                                          }
                                                          else {
                                                            local_40[0] = 0xa46c;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b530;
                                                            }
                                                            else {
                                                              local_40[0] = 0xa46d;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b531;
                                                              }
                                                              else {
                                                                local_40[0] = 0x4c2c;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b53a;
                                                  }
                                                  else {
                                                    local_40[0] = 0x10432;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b53e;
                                                    }
                                                    else {
                                                      local_40[0] = 0x6467;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b59d;
                                                      }
                                                      else {
                                                        local_40[0] = 0x6468;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b59e;
                                                        }
                                                        else {
                                                          local_40[0] = 0x6c88;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b602;
                                                          }
                                                          else {
                                                            local_40[0] = 0xec63;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b6c9;
                                                            }
                                                            else {
                                                              local_40[0] = 0xac65;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b6cb;
                                                              }
                                                              else {
                                                                local_40[0] = 0xec73;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b72d;
                                                  }
                                                  else {
                                                    local_40[0] = 0xac74;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b72e;
                                                    }
                                                    else {
                                                      local_40[0] = 0x4c8b;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b72f;
                                                      }
                                                      else {
                                                        local_40[0] = 0x1048f;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b730;
                                                        }
                                                        else {
                                                          local_40[0] = 0xa490;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b731;
                                                          }
                                                          else {
                                                            local_40[0] = 0x10491;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b732;
                                                            }
                                                            else {
                                                              local_40[0] = 0x10492;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b733;
                                                              }
                                                              else {
                                                                local_40[0] = 0x6487;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    uVar1 = 0x161b790;
                                                  }
                                                  else {
                                                    local_40[0] = 0x648c;
                                                    local_28[0] = 0;
                                                    nn::err::ErrorResultVariant::ErrorResultVariant
                                                              ((ErrorResultVariant *)
                                                               ((ulong)local_40 | 4),
                                                               (Result *)local_28);
                                                    if (*param_1 == local_40[0]) {
                                                      uVar1 = 0x161b791;
                                                    }
                                                    else {
                                                      local_40[0] = 0x648d;
                                                      local_28[0] = 0;
                                                      nn::err::ErrorResultVariant::
                                                      ErrorResultVariant((ErrorResultVariant *)
                                                                         ((ulong)local_40 | 4),
                                                                         (Result *)local_28);
                                                      if (*param_1 == local_40[0]) {
                                                        uVar1 = 0x161b792;
                                                      }
                                                      else {
                                                        local_40[0] = 0x6c8e;
                                                        local_28[0] = 0;
                                                        nn::err::ErrorResultVariant::
                                                        ErrorResultVariant((ErrorResultVariant *)
                                                                           ((ulong)local_40 | 4),
                                                                           (Result *)local_28);
                                                        if (*param_1 == local_40[0]) {
                                                          uVar1 = 0x161b793;
                                                        }
                                                        else {
                                                          local_40[0] = 0xc481;
                                                          local_28[0] = 0;
                                                          nn::err::ErrorResultVariant::
                                                          ErrorResultVariant((ErrorResultVariant *)
                                                                             ((ulong)local_40 | 4),
                                                                             (Result *)local_28);
                                                          if (*param_1 == local_40[0]) {
                                                            uVar1 = 0x161b8bc;
                                                          }
                                                          else {
                                                            local_40[0] = 0x8c82;
                                                            local_28[0] = 0;
                                                            nn::err::ErrorResultVariant::
                                                            ErrorResultVariant((ErrorResultVariant *
                                                                               )((ulong)local_40 | 4
                                                                                ),(Result *)local_28
                                                                              );
                                                            if (*param_1 == local_40[0]) {
                                                              uVar1 = 0x161b8bd;
                                                            }
                                                            else {
                                                              local_40[0] = 0xa483;
                                                              local_28[0] = 0;
                                                              nn::err::ErrorResultVariant::
                                                              ErrorResultVariant((ErrorResultVariant
                                                                                  *)((ulong)local_40
                                                                                    | 4),(Result *)
                                                                                         local_28);
                                                              if (*param_1 == local_40[0]) {
                                                                uVar1 = 0x161b8be;
                                                              }
                                                              else {
                                                                local_40[0] = 0xc484;
                                                                local_28[0] = 0;
                                                                nn::err::ErrorResultVariant::
                                                                ErrorResultVariant((
                                                  ErrorResultVariant *)((ulong)local_40 | 4),
                                                  (Result *)local_28);
                                                  if (*param_1 == local_40[0]) {
                                                    nn::err::ErrorResultVariant::
                                                    operator_cast_to_ErrorCode
                                                              ((ErrorResultVariant *)(param_1 + 1));
                                                    nn::err::ErrorResultVariant::
                                                    operator_cast_to_ErrorCode
                                                              ((ErrorResultVariant *)(param_1 + 1));
                                                    uVar1 = (extraout_var_00 & 0xff) +
                                                            (extraout_var_01 & 0x1f) * 200 +
                                                            0x161b9e8;
                                                  }
                                                  else {
                                                    uVar1 = 0x161b2e0;
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
  return uVar1;
}


