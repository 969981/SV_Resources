/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02916d24; name: FUN_02916d24
 */


undefined4 FUN_02916d24(long param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x88))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x78);
  if (((uVar5 & 1) != 0) ||
     (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x99),
     (uVar5 & 1) != 0)) {
    if (*(char *)(param_1 + 0xb8) == '\a') {
      return 0;
    }
    if (*(char *)(param_1 + 0xb9) == '\a') {
      return 0;
    }
    if (*(char *)(param_1 + 0xc4) == '\a') {
      return 0;
    }
    if (*(char *)(param_1 + 0xc5) == '\a') {
      return 0;
    }
    if (*(short *)(param_1 + 0xb6) == 6) {
      return 0;
    }
    if (*(short *)(param_1 + 0xc2) == 6) {
      return 0;
    }
    if (*(short *)(param_1 + 0xaa) == 6) {
      return 0;
    }
    uVar3 = uVar3 & 0xffff;
    if (uVar3 < 0x1f5) {
      if (uVar3 == 0xb6) {
        return 0;
      }
      if (uVar3 == 0xc5) {
        return 0;
      }
      if (uVar3 == 0x1d5) {
        return 0;
      }
    }
    else {
      if ((uVar3 - 0x231 < 0x24) && ((1L << ((ulong)(uVar3 - 0x231) & 0x3f) & 0x808000001U) != 0)) {
        return 0;
      }
      if (uVar3 == 0x1f5) {
        return 0;
      }
    }
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x26);
    if ((uVar5 & 1) == 0) {
      return 0xffffffff;
    }
    return 3;
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x59);
  if (((uVar5 & 1) == 0) &&
     (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x20b),
     (uVar5 & 1) == 0)) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x39);
    if ((uVar5 & 1) == 0) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1b3);
      if (((uVar5 & 1) == 0) &&
         (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x23a),
         (uVar5 & 1) == 0)) {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1b4);
        if (((uVar5 & 1) == 0) &&
           (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x221),
           (uVar5 & 1) == 0)) {
          uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x23c);
          if ((uVar5 & 1) != 0) {
            uVar3 = uVar3 & 0xffff;
            if (uVar3 < 0x1f5) {
              if (uVar3 == 0xb6) {
                return 0;
              }
              if (uVar3 == 0xc5) {
                return 0;
              }
              if (uVar3 == 0x1d5) {
                return 0;
              }
            }
            else {
              if ((uVar3 - 0x231 < 0x24) &&
                 ((1L << ((ulong)(uVar3 - 0x231) & 0x3f) & 0x808000001U) != 0)) {
                return 0;
              }
              if (uVar3 == 0x1f5) {
                return 0;
              }
            }
            if ((*(short *)(param_1 + 0x9e) != 0x8c) && (*(short *)(param_1 + 0x9e) != 0x9d))
            goto LAB_02916f20;
            goto LAB_02917064;
          }
          uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1e2);
          if (((uVar5 & 1) == 0) &&
             (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x24a),
             (uVar5 & 1) == 0)) {
            uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xcf);
            if ((uVar5 & 1) == 0) {
              return 0;
            }
            uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),2);
            if (((((uVar5 & 1) == 0) &&
                 (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                                     0xfd3846567a2485a3), (uVar5 & 1) == 0)) &&
                (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                                   (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                                    0x240b99f40359d329), (uVar5 & 1) == 0)) &&
               (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x148))
                                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x14),
               (uVar5 & 1) == 0)) {
              return 0;
            }
            uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xd8))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
            if ((uVar5 & 1) == 0) {
              return 0;
            }
            iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
            if (iVar4 < 0x47) {
              return 0;
            }
            uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                              (*(long **)(param_1 + 0x30),0x27);
            if ((uVar5 & 1) == 0) {
              return 0;
            }
            return 0xfffffffe;
          }
          uVar3 = uVar3 & 0xffff;
          if (uVar3 < 0x1f5) {
            if (uVar3 == 0xb6) {
              return 0;
            }
            if (uVar3 == 0xc5) {
              return 0;
            }
            if (uVar3 == 0x1d5) {
              return 0;
            }
          }
          else {
            if ((uVar3 - 0x231 < 0x24) &&
               ((1L << ((ulong)(uVar3 - 0x231) & 0x3f) & 0x808000001U) != 0)) {
              return 0;
            }
            if (uVar3 == 0x1f5) {
              return 0;
            }
          }
          sVar2 = *(short *)(param_1 + 0x9e);
        }
        else {
          uVar3 = uVar3 & 0xffff;
          if (uVar3 < 0x1f5) {
            if (uVar3 == 0xb6) {
              return 0;
            }
            if (uVar3 == 0xc5) {
              return 0;
            }
            if (uVar3 == 0x1d5) {
              return 0;
            }
          }
          else {
            if ((uVar3 - 0x231 < 0x24) &&
               ((1L << ((ulong)(uVar3 - 0x231) & 0x3f) & 0x808000001U) != 0)) {
              return 0;
            }
            if (uVar3 == 0x1f5) {
              return 0;
            }
          }
          sVar2 = *(short *)(param_1 + 0x9e);
          if (sVar2 == 0x12) goto LAB_02917064;
        }
        if (sVar2 != 0x8c) goto LAB_02916f20;
      }
      else {
        uVar3 = uVar3 & 0xffff;
        if (uVar3 < 0x1f5) {
          if (uVar3 == 0xb6) {
            return 0;
          }
          if (uVar3 == 0xc5) {
            return 0;
          }
          if (uVar3 == 0x1d5) {
            return 0;
          }
        }
        else {
          if ((uVar3 - 0x231 < 0x24) &&
             ((1L << ((ulong)(uVar3 - 0x231) & 0x3f) & 0x808000001U) != 0)) {
            return 0;
          }
          if (uVar3 == 0x1f5) {
            return 0;
          }
        }
        uVar1 = *(ushort *)(param_1 + 0x9e);
        if (uVar1 < 0x4e) {
          if ((uVar1 == 10) || (uVar1 == 0x1f)) goto LAB_02917064;
        }
        else if ((uVar1 == 0x4e) || (uVar1 == 0x8c)) goto LAB_02917064;
        if ((*(char *)(param_1 + 0xc4) != '\x04') && (*(char *)(param_1 + 0xc5) != '\x04'))
        goto LAB_02916f20;
      }
    }
    else {
      uVar3 = uVar3 & 0xffff;
      if (uVar3 < 0x1f5) {
        if (uVar3 == 0xb6) {
          return 0;
        }
        if (uVar3 == 0xc5) {
          return 0;
        }
        if (uVar3 == 0x1d5) {
          return 0;
        }
      }
      else {
        if ((uVar3 - 0x231 < 0x24) && ((1L << ((ulong)(uVar3 - 0x231) & 0x3f) & 0x808000001U) != 0))
        {
          return 0;
        }
        if (uVar3 == 0x1f5) {
          return 0;
        }
      }
      uVar3 = *(ushort *)(param_1 + 0x9e) - 0x57;
      if (((0x35 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x20000008000001U) == 0)) &&
         (*(ushort *)(param_1 + 0x9e) != 0xb)) goto LAB_02916f20;
    }
  }
  else {
    uVar3 = uVar3 & 0xffff;
    if (uVar3 < 0x1f5) {
      if (uVar3 == 0xb6) {
        return 0;
      }
      if (uVar3 == 0xc5) {
        return 0;
      }
      if (uVar3 == 0x1d5) {
        return 0;
      }
    }
    else {
      if ((uVar3 - 0x231 < 0x24) && ((1L << ((ulong)(uVar3 - 0x231) & 0x3f) & 0x808000001U) != 0)) {
        return 0;
      }
      if (uVar3 == 0x1f5) {
        return 0;
      }
    }
    if ((((*(short *)(param_1 + 0x9e) != 0x1a) && (*(short *)(param_1 + 0x9e) != 0x8c)) &&
        (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x1f),
        (uVar5 & 1) == 0)) &&
       ((*(char *)(param_1 + 0xa0) != '\x02' && (*(char *)(param_1 + 0xa1) != '\x02')))) {
LAB_02916f20:
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x26);
      uVar6 = 3;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
      }
      return uVar6;
    }
  }
LAB_02917064:
  uVar3 = *(ushort *)(param_1 + 0xaa) - 0x68;
  if (0x3c < uVar3) {
    return 0;
  }
  if ((1L << ((ulong)uVar3 & 0x3f) & 0x1800000000000001U) == 0) {
    return 0;
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x26);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  return 3;
}


