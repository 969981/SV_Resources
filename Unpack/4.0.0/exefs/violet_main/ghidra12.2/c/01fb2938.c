/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb2938; name: FUN_01fb2938
 */


ulong FUN_01fb2938(ulong param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    return param_1;
  }
  pcVar3 = (char *)(param_1 + 0x31c0);
  if (*pcVar3 != '\0') {
    lVar2 = *param_2;
    if (*(long *)(param_1 + 0x31c8) == lVar2) {
LAB_01fb29d8:
      local_30 = 0;
      uStack_28 = 0;
      local_40 = 0;
      uStack_38 = 0;
      uVar1 = snprintf((char *)&local_40,0x20,"%s",param_3);
      *(undefined8 *)(pcVar3 + 0x20) = local_30;
      *(undefined8 *)(pcVar3 + 0x28) = uStack_28;
      *(undefined8 *)(pcVar3 + 0x10) = local_40;
      *(undefined8 *)(pcVar3 + 0x18) = uStack_38;
      return (ulong)uVar1;
    }
    pcVar3 = (char *)(param_1 + 0x31f0);
    if (*pcVar3 != '\0') {
      if (*(long *)(param_1 + 0x31f8) == lVar2) goto LAB_01fb29d8;
      pcVar3 = (char *)(param_1 + 0x3220);
      if (*pcVar3 != '\0') {
        if (*(long *)(param_1 + 0x3228) == lVar2) goto LAB_01fb29d8;
        pcVar3 = (char *)(param_1 + 0x3250);
        if (*pcVar3 != '\0') {
          if (*(long *)(param_1 + 0x3258) == lVar2) goto LAB_01fb29d8;
          pcVar3 = (char *)(param_1 + 0x3280);
          if (*pcVar3 != '\0') {
            if (*(long *)(param_1 + 0x3288) == lVar2) goto LAB_01fb29d8;
            pcVar3 = (char *)(param_1 + 0x32b0);
            if (*pcVar3 != '\0') {
              if (*(long *)(param_1 + 0x32b8) == lVar2) goto LAB_01fb29d8;
              pcVar3 = (char *)(param_1 + 0x32e0);
              if (*pcVar3 != '\0') {
                if (*(long *)(param_1 + 0x32e8) == lVar2) goto LAB_01fb29d8;
                pcVar3 = (char *)(param_1 + 0x3310);
                if (*pcVar3 != '\0') {
                  if (*(long *)(param_1 + 0x3318) == lVar2) goto LAB_01fb29d8;
                  pcVar3 = (char *)(param_1 + 0x3340);
                  if (*pcVar3 != '\0') {
                    if (*(long *)(param_1 + 0x3348) == lVar2) goto LAB_01fb29d8;
                    pcVar3 = (char *)(param_1 + 0x3370);
                    if (*pcVar3 != '\0') {
                      if (*(long *)(param_1 + 0x3378) == lVar2) goto LAB_01fb29d8;
                      pcVar3 = (char *)(param_1 + 0x33a0);
                      if (*pcVar3 != '\0') {
                        if (*(long *)(param_1 + 0x33a8) == lVar2) goto LAB_01fb29d8;
                        pcVar3 = (char *)(param_1 + 0x33d0);
                        if (*pcVar3 != '\0') {
                          if (*(long *)(param_1 + 0x33d8) == lVar2) goto LAB_01fb29d8;
                          pcVar3 = (char *)(param_1 + 0x3400);
                          if (*pcVar3 != '\0') {
                            if (*(long *)(param_1 + 0x3408) == lVar2) goto LAB_01fb29d8;
                            pcVar3 = (char *)(param_1 + 0x3430);
                            if (*pcVar3 != '\0') {
                              if (*(long *)(param_1 + 0x3438) == lVar2) goto LAB_01fb29d8;
                              pcVar3 = (char *)(param_1 + 0x3460);
                              if (*pcVar3 != '\0') {
                                if (*(long *)(param_1 + 0x3468) == lVar2) goto LAB_01fb29d8;
                                pcVar3 = (char *)(param_1 + 0x3490);
                                if (*pcVar3 != '\0') {
                                  if (*(long *)(param_1 + 0x3498) == lVar2) goto LAB_01fb29d8;
                                  pcVar3 = (char *)(param_1 + 0x34c0);
                                  if (*pcVar3 != '\0') {
                                    if (*(long *)(param_1 + 0x34c8) == lVar2) goto LAB_01fb29d8;
                                    pcVar3 = (char *)(param_1 + 0x34f0);
                                    if (*pcVar3 != '\0') {
                                      if (*(long *)(param_1 + 0x34f8) == lVar2) goto LAB_01fb29d8;
                                      pcVar3 = (char *)(param_1 + 0x3520);
                                      if (*pcVar3 != '\0') {
                                        if (*(long *)(param_1 + 0x3528) == lVar2) goto LAB_01fb29d8;
                                        pcVar3 = (char *)(param_1 + 0x3550);
                                        if (*pcVar3 != '\0') {
                                          if (*(long *)(param_1 + 0x3558) == lVar2)
                                          goto LAB_01fb29d8;
                                          pcVar3 = (char *)(param_1 + 0x3580);
                                          if (*pcVar3 != '\0') {
                                            if (*(long *)(param_1 + 0x3588) == lVar2)
                                            goto LAB_01fb29d8;
                                            pcVar3 = (char *)(param_1 + 0x35b0);
                                            if (*pcVar3 != '\0') {
                                              if (*(long *)(param_1 + 0x35b8) == lVar2)
                                              goto LAB_01fb29d8;
                                              pcVar3 = (char *)(param_1 + 0x35e0);
                                              if (*pcVar3 != '\0') {
                                                if (*(long *)(param_1 + 0x35e8) == lVar2)
                                                goto LAB_01fb29d8;
                                                pcVar3 = (char *)(param_1 + 0x3610);
                                                if (*pcVar3 != '\0') {
                                                  if (*(long *)(param_1 + 0x3618) == lVar2)
                                                  goto LAB_01fb29d8;
                                                  pcVar3 = (char *)(param_1 + 0x3640);
                                                  if (*pcVar3 != '\0') {
                                                    if (*(long *)(param_1 + 0x3648) == lVar2)
                                                    goto LAB_01fb29d8;
                                                    pcVar3 = (char *)(param_1 + 0x3670);
                                                    if (*pcVar3 != '\0') {
                                                      if (*(long *)(param_1 + 0x3678) == lVar2)
                                                      goto LAB_01fb29d8;
                                                      pcVar3 = (char *)(param_1 + 0x36a0);
                                                      if (*pcVar3 != '\0') {
                                                        if (*(long *)(param_1 + 0x36a8) == lVar2)
                                                        goto LAB_01fb29d8;
                                                        pcVar3 = (char *)(param_1 + 0x36d0);
                                                        if (*pcVar3 != '\0') {
                                                          if (*(long *)(param_1 + 0x36d8) == lVar2)
                                                          goto LAB_01fb29d8;
                                                          pcVar3 = (char *)(param_1 + 0x3700);
                                                          if (*pcVar3 != '\0') {
                                                            if (*(long *)(param_1 + 0x3708) == lVar2
                                                               ) goto LAB_01fb29d8;
                                                            pcVar3 = (char *)(param_1 + 0x3730);
                                                            if (*pcVar3 != '\0') {
                                                              if (*(long *)(param_1 + 0x3738) ==
                                                                  lVar2) goto LAB_01fb29d8;
                                                              pcVar3 = (char *)(param_1 + 0x3760);
                                                              if (*pcVar3 != '\0') {
                                                                if (*(long *)(param_1 + 0x3768) ==
                                                                    lVar2) goto LAB_01fb29d8;
                                                                pcVar3 = (char *)(param_1 + 0x3790);
                                                                if (*pcVar3 != '\0') {
                                                                  if (*(long *)(param_1 + 0x3798) ==
                                                                      lVar2) goto LAB_01fb29d8;
                                                                  pcVar3 = (char *)(param_1 + 0x37c0
                                                                                   );
                                                                  if (*pcVar3 != '\0') {
                                                                    if (*(long *)(param_1 + 0x37c8)
                                                                        == lVar2) goto LAB_01fb29d8;
                                                                    pcVar3 = (char *)(param_1 +
                                                                                     0x37f0);
                                                                    if (*pcVar3 != '\0') {
                                                                      if (*(long *)(param_1 + 0x37f8
                                                                                   ) == lVar2)
                                                                      goto LAB_01fb29d8;
                                                                      pcVar3 = (char *)(param_1 +
                                                                                       0x3820);
                                                                      if (*pcVar3 != '\0') {
                                                                        if (*(long *)(param_1 +
                                                                                     0x3828) ==
                                                                            lVar2)
                                                                        goto LAB_01fb29d8;
                                                                        pcVar3 = (char *)(param_1 +
                                                                                         0x3850);
                                                                        if (*pcVar3 != '\0') {
                                                                          if (*(long *)(param_1 +
                                                                                       0x3858) ==
                                                                              lVar2)
                                                                          goto LAB_01fb29d8;
                                                                          pcVar3 = (char *)(param_1 
                                                  + 0x3880);
                                                  if (*pcVar3 != '\0') {
                                                    if (*(long *)(param_1 + 0x3888) == lVar2)
                                                    goto LAB_01fb29d8;
                                                    pcVar3 = (char *)(param_1 + 0x38b0);
                                                    if (*pcVar3 != '\0') {
                                                      if (*(long *)(param_1 + 0x38b8) == lVar2)
                                                      goto LAB_01fb29d8;
                                                      pcVar3 = (char *)(param_1 + 0x38e0);
                                                      if (*pcVar3 != '\0') {
                                                        if (*(long *)(param_1 + 0x38e8) == lVar2)
                                                        goto LAB_01fb29d8;
                                                        pcVar3 = (char *)(param_1 + 0x3910);
                                                        if (*pcVar3 != '\0') {
                                                          if (*(long *)(param_1 + 0x3918) == lVar2)
                                                          goto LAB_01fb29d8;
                                                          pcVar3 = (char *)(param_1 + 0x3940);
                                                          if (*pcVar3 != '\0') {
                                                            if (*(long *)(param_1 + 0x3948) == lVar2
                                                               ) goto LAB_01fb29d8;
                                                            pcVar3 = (char *)(param_1 + 0x3970);
                                                            if (*pcVar3 != '\0') {
                                                              if (*(long *)(param_1 + 0x3978) ==
                                                                  lVar2) goto LAB_01fb29d8;
                                                              pcVar3 = (char *)(param_1 + 0x39a0);
                                                              if (*pcVar3 != '\0') {
                                                                if (*(long *)(param_1 + 0x39a8) ==
                                                                    lVar2) goto LAB_01fb29d8;
                                                                pcVar3 = (char *)(param_1 + 0x39d0);
                                                                if (*pcVar3 != '\0') {
                                                                  if (*(long *)(param_1 + 0x39d8) ==
                                                                      lVar2) goto LAB_01fb29d8;
                                                                  pcVar3 = (char *)(param_1 + 0x3a00
                                                                                   );
                                                                  if (*pcVar3 != '\0') {
                                                                    if (*(long *)(param_1 + 0x3a08)
                                                                        == lVar2) goto LAB_01fb29d8;
                                                                    pcVar3 = (char *)(param_1 +
                                                                                     0x3a30);
                                                                    if (*pcVar3 != '\0') {
                                                                      if (*(long *)(param_1 + 0x3a38
                                                                                   ) == lVar2)
                                                                      goto LAB_01fb29d8;
                                                                      pcVar3 = (char *)(param_1 +
                                                                                       0x3a60);
                                                                      if (*pcVar3 != '\0') {
                                                                        if (*(long *)(param_1 +
                                                                                     0x3a68) ==
                                                                            lVar2)
                                                                        goto LAB_01fb29d8;
                                                                        pcVar3 = (char *)(param_1 +
                                                                                         0x3a90);
                                                                        if (*pcVar3 != '\0') {
                                                                          if (*(long *)(param_1 +
                                                                                       15000) ==
                                                                              lVar2)
                                                                          goto LAB_01fb29d8;
                                                                          pcVar3 = (char *)(param_1 
                                                  + 0x3ac0);
                                                  while (*pcVar3 != '\0') {
                                                    if (*(long *)(pcVar3 + 8) == lVar2)
                                                    goto LAB_01fb29d8;
                                                    if (pcVar3[0x30] == '\0') {
                                                      pcVar3 = pcVar3 + 0x30;
                                                      break;
                                                    }
                                                    if (*(long *)(pcVar3 + 0x38) == lVar2) {
                                                      pcVar3 = pcVar3 + 0x30;
                                                      goto LAB_01fb29d8;
                                                    }
                                                    pcVar3 = pcVar3 + 0x60;
                                                    if (pcVar3 == (char *)(param_1 + 0x46c0)) {
                                                      return param_1;
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
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = snprintf((char *)&local_40,0x20,"%s",param_3);
  *(long *)(pcVar3 + 8) = *param_2;
  *(undefined8 *)(pcVar3 + 0x10) = local_40;
  *(undefined8 *)(pcVar3 + 0x18) = uStack_38;
  *(undefined8 *)(pcVar3 + 0x20) = local_30;
  *(undefined8 *)(pcVar3 + 0x28) = uStack_28;
  if (*pcVar3 == '\0') {
    *pcVar3 = '\x01';
  }
  return (ulong)uVar1;
}


