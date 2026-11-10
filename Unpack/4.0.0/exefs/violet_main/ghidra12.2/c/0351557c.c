/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351557c; name: FUN_0351557c
 */


undefined8
FUN_0351557c(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5,
            undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  HardwareOpusDecoder *this;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  
  pcVar12 = (char *)(param_1 + 8);
  if (*pcVar12 == '\0') {
    lVar11 = 0;
  }
  else {
    pcVar12 = (char *)(param_1 + 9);
    if (*pcVar12 == '\0') {
      lVar11 = 1;
    }
    else {
      pcVar12 = (char *)(param_1 + 10);
      if (*pcVar12 == '\0') {
        lVar11 = 2;
      }
      else {
        pcVar12 = (char *)(param_1 + 0xb);
        if (*pcVar12 == '\0') {
          lVar11 = 3;
        }
        else {
          pcVar12 = (char *)(param_1 + 0xc);
          if (*pcVar12 == '\0') {
            lVar11 = 4;
          }
          else {
            pcVar12 = (char *)(param_1 + 0xd);
            if (*pcVar12 == '\0') {
              lVar11 = 5;
            }
            else {
              pcVar12 = (char *)(param_1 + 0xe);
              if (*pcVar12 == '\0') {
                lVar11 = 6;
              }
              else {
                pcVar12 = (char *)(param_1 + 0xf);
                if (*pcVar12 == '\0') {
                  lVar11 = 7;
                }
                else {
                  pcVar12 = (char *)(param_1 + 0x10);
                  if (*pcVar12 == '\0') {
                    lVar11 = 8;
                  }
                  else {
                    pcVar12 = (char *)(param_1 + 0x11);
                    if (*pcVar12 == '\0') {
                      lVar11 = 9;
                    }
                    else {
                      pcVar12 = (char *)(param_1 + 0x12);
                      if (*pcVar12 == '\0') {
                        lVar11 = 10;
                      }
                      else {
                        pcVar12 = (char *)(param_1 + 0x13);
                        if (*pcVar12 == '\0') {
                          lVar11 = 0xb;
                        }
                        else {
                          pcVar12 = (char *)(param_1 + 0x14);
                          if (*pcVar12 == '\0') {
                            lVar11 = 0xc;
                          }
                          else {
                            pcVar12 = (char *)(param_1 + 0x15);
                            if (*pcVar12 == '\0') {
                              lVar11 = 0xd;
                            }
                            else {
                              pcVar12 = (char *)(param_1 + 0x16);
                              if (*pcVar12 == '\0') {
                                lVar11 = 0xe;
                              }
                              else {
                                pcVar12 = (char *)(param_1 + 0x17);
                                if (*pcVar12 == '\0') {
                                  lVar11 = 0xf;
                                }
                                else {
                                  pcVar12 = (char *)(param_1 + 0x18);
                                  if (*pcVar12 == '\0') {
                                    lVar11 = 0x10;
                                  }
                                  else {
                                    pcVar12 = (char *)(param_1 + 0x19);
                                    if (*pcVar12 == '\0') {
                                      lVar11 = 0x11;
                                    }
                                    else {
                                      pcVar12 = (char *)(param_1 + 0x1a);
                                      if (*pcVar12 == '\0') {
                                        lVar11 = 0x12;
                                      }
                                      else {
                                        pcVar12 = (char *)(param_1 + 0x1b);
                                        if (*pcVar12 == '\0') {
                                          lVar11 = 0x13;
                                        }
                                        else {
                                          pcVar12 = (char *)(param_1 + 0x1c);
                                          if (*pcVar12 == '\0') {
                                            lVar11 = 0x14;
                                          }
                                          else {
                                            pcVar12 = (char *)(param_1 + 0x1d);
                                            if (*pcVar12 == '\0') {
                                              lVar11 = 0x15;
                                            }
                                            else {
                                              pcVar12 = (char *)(param_1 + 0x1e);
                                              if (*pcVar12 == '\0') {
                                                lVar11 = 0x16;
                                              }
                                              else {
                                                pcVar12 = (char *)(param_1 + 0x1f);
                                                if (*pcVar12 != '\0') {
                                                  return 2;
                                                }
                                                lVar11 = 0x17;
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
  lVar8 = param_1 + lVar11 * 0x58;
  *(uint *)(lVar8 + 0x70) = param_4;
  *(int *)(lVar8 + 0x68) = param_2;
  *(int *)(lVar8 + 0x6c) = param_3;
  puVar4 = PTR_DAT_047e2fd0;
  plVar13 = (long *)(lVar8 + 0x20);
  this = (HardwareOpusDecoder *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x40);
  if (this == (HardwareOpusDecoder *)0x0) {
    *plVar13 = 0;
  }
  else {
    nn::codec::HardwareOpusDecoder::HardwareOpusDecoder(this,0);
    *plVar13 = (long)this;
    uVar7 = *(undefined8 *)(&DAT_048b1770 + (long)param_3 * 8);
    lVar10 = param_1 + lVar11 * 0x58;
    *(undefined8 *)(lVar10 + 0x30) = uVar7;
    lVar5 = (**(code **)(puVar4 + 0x18))(5,uVar7,0x1000);
    *(long *)(lVar10 + 0x28) = lVar5;
    if (lVar5 == 0) {
      uVar7 = 0x34;
      goto LAB_03515918;
    }
    uVar2 = 0;
    if (*(uint *)PTR_DAT_047e6fa0 != 0) {
      uVar2 = ((uint)*(ushort *)PTR_DAT_047e6d08 * param_2) / *(uint *)PTR_DAT_047e6fa0;
    }
    uVar1 = *(uint *)(lVar8 + 0x70);
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = ((uVar1 + uVar2 * 5) - 1) / uVar1;
    }
    lVar8 = (**(code **)(puVar4 + 0x10))(5,(ulong)uVar3 * 0x5f0);
    *(long *)(param_1 + lVar11 * 0x58 + 0x38) = lVar8;
    if (lVar8 != 0) {
      lVar5 = param_1 + lVar11 * 0x58;
      *(undefined4 *)(lVar5 + 0x40) = 0;
      *(undefined4 *)(lVar5 + 0x44) = 0;
      *(uint *)(lVar5 + 0x48) = uVar3;
      lVar8 = (**(code **)(puVar4 + 0x10))(5,(ulong)uVar3 * 0xf08);
      *(long *)(lVar5 + 0x50) = lVar8;
      if (lVar8 != 0) {
        param_1 = param_1 + lVar11 * 0x58;
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(uint *)(param_1 + 0x60) = uVar3;
        *param_5 = (int)lVar11;
        *param_6 = plVar13;
        *pcVar12 = '\x01';
        return 1;
      }
    }
  }
  uVar7 = 2;
LAB_03515918:
  if ((long *)*plVar13 != (long *)0x0) {
    uVar6 = (**(code **)(*(long *)*plVar13 + 0x18))();
    if ((uVar6 & 1) != 0) {
      (**(code **)(*(long *)*plVar13 + 0x28))();
    }
    puVar9 = (undefined8 *)*plVar13;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9);
      (**(code **)(puVar4 + 0x30))(5,puVar9);
    }
    *plVar13 = 0;
  }
  plVar13 = (long *)(param_1 + lVar11 * 0x58 + 0x28);
  if (*plVar13 != 0) {
    (**(code **)(puVar4 + 0x30))(5);
    *plVar13 = 0;
  }
  plVar13 = (long *)(param_1 + lVar11 * 0x58 + 0x38);
  if (*plVar13 != 0) {
    (**(code **)(puVar4 + 0x30))(5);
    *plVar13 = 0;
  }
  lVar8 = param_1 + lVar11 * 0x58;
  plVar13 = (long *)(lVar8 + 0x50);
  *(undefined4 *)(lVar8 + 0x48) = 0;
  if (*plVar13 != 0) {
    (**(code **)(puVar4 + 0x30))(5);
    *plVar13 = 0;
  }
  *(undefined4 *)(param_1 + lVar11 * 0x58 + 0x60) = 0;
  return uVar7;
}


