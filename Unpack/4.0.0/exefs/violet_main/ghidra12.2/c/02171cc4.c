/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02171cc4; name: FUN_02171cc4
 */


undefined8 FUN_02171cc4(undefined8 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar7 = FUN_021718e4(*param_2,1);
  bVar6 = (uVar7 & 1) == 0;
  puVar1 = param_2 + 1;
  if (bVar6) {
    puVar1 = param_2;
  }
  lVar2 = 2;
  if (bVar6) {
    lVar2 = 0;
  }
  uVar8 = FUN_02171f64(param_1,puVar1);
  if ((int)uVar8 == 1) {
    return 0;
  }
  if ((int)uVar8 == 2) {
    return uVar8;
  }
  uVar4 = *(ushort *)((long)param_2 + lVar2);
  if (uVar4 == 0) {
    return 0;
  }
  uVar3 = puVar1[1];
  uVar10 = (uint)uVar4;
  if (uVar4 < 0x100) {
    uVar7 = (ulong)(uVar4 >> 5);
    uVar5 = 1 << (ulong)(uVar10 & 0x1f);
    if ((*(uint *)(&DAT_03cbf760 + uVar7 * 4) & uVar5) != 0) {
      return 3;
    }
    if ((*(uint *)(&DAT_03cbf6e0 + uVar7 * 4) & uVar5) != 0) {
      return 4;
    }
    if ((*(uint *)(&DAT_03cbf2c0 + uVar7 * 4) & uVar5) != 0) {
      return 1;
    }
  }
  uVar5 = uVar10 - 0x58;
  uVar9 = (uint)uVar3;
  if (uVar5 < 0x23) {
    if ((1L << ((ulong)uVar5 & 0x3f) & 0x500000005U) != 0) {
      return 2;
    }
    if ((1L << ((ulong)uVar5 & 0x3f) & 0x200000002U) != 0) {
      if (uVar3 == 0) {
        return 2;
      }
      if (uVar3 == 0x59) {
        return 2;
      }
      if (uVar3 == 0x79) {
        return 2;
      }
      if (0xff < uVar3) {
        return 1;
      }
      if ((*(uint *)(&DAT_03cbf2c0 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) == 0) {
        return 1;
      }
      return 2;
    }
  }
  if (uVar9 == 0) {
    return 0;
  }
  if (uVar4 < 0x67) {
    if (uVar4 < 0x50) {
      if (uVar4 != 0x47) {
        if (uVar4 == 0x48) {
          return 1;
        }
        return 0;
      }
LAB_02171e9c:
      if ((uVar9 | 0x20) == 0x6e) {
        return 2;
      }
      if (0x52 < uVar4) goto LAB_02171e04;
      if (uVar4 == 0x48) {
        return 1;
      }
      if (uVar4 != 0x50) {
        return 0;
      }
LAB_02171ec0:
      if ((uVar9 | 0x20) == 0x6e) {
        return 2;
      }
      if (uVar4 < 0x54) {
        if (uVar10 != 0x50) {
          if (uVar10 != 0x53) {
            return 0;
          }
          goto LAB_02171f00;
        }
      }
      else {
        if (uVar4 == 0x54) goto LAB_02171e14;
        if (uVar4 == 0x68) {
          return 1;
        }
        if (uVar4 != 0x70) {
          return 0;
        }
      }
      if ((uVar9 | 0x20) == 0x73) {
        return 2;
      }
      if (uVar4 == 0x53) goto LAB_02171f00;
      if (uVar10 == 0x68) {
        return 1;
      }
    }
    else {
      if (uVar4 == 0x50) goto LAB_02171ec0;
LAB_02171e04:
      if (uVar10 == 0x53) goto LAB_02171f00;
    }
    if (uVar10 != 0x54) {
      return 0;
    }
  }
  else {
    if (uVar4 < 0x70) {
      if (uVar4 != 0x67) {
        if (uVar4 == 0x68) {
          return 1;
        }
        return 0;
      }
      goto LAB_02171e9c;
    }
    if (uVar4 == 0x70) goto LAB_02171ec0;
    if (uVar4 == 0x73) goto LAB_02171f00;
    if (uVar10 != 0x74) {
      return 0;
    }
  }
LAB_02171e14:
  if ((uVar9 | 0x20) == 0x73) {
    return 2;
  }
  if (uVar10 == 0x68) {
    return 1;
  }
  if (uVar4 != 0x73) {
    return 0;
  }
LAB_02171f00:
  if (((uVar9 | 0x20) == 0x79) ||
     ((uVar9 < 0x100 &&
      ((*(uint *)(&DAT_03cbf2c0 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0)))) {
    return 0;
  }
  return 2;
}


