/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e04fd4; name: FUN_02e04fd4
 */


uint FUN_02e04fd4(long param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x9e);
  uVar3 = (uint)uVar1;
  if (uVar1 < 0x4e) {
    if (0x3a < uVar3 || (1L << ((ulong)uVar1 & 0x3f) & 0x780800684100c00U) == 0) {
      return 0;
    }
  }
  else if (uVar3 == 0x98 || uVar1 < 0x98) {
    uVar6 = (ulong)(uVar3 - 0x4e);
    if (0x3f < uVar3 - 0x4e) {
      return 0;
    }
    if ((1L << (uVar6 & 0x3f) & 0x8000002006880840U) == 0) {
      if (uVar6 != 0) {
        if (uVar6 != 0xf) {
          return 0;
        }
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
        if (cVar2 == '\x02') {
          uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                            (*(long **)(param_1 + 0x30),0x32);
          return uVar3 & 1;
        }
        return 0;
      }
      uVar1 = *(ushort *)(param_1 + 0xa8);
      if (uVar1 < 0x117) {
        if ((uVar1 != 0x82) && (uVar1 != 0xe2)) {
          return 0;
        }
      }
      else if ((uVar1 != 0x245) && (uVar1 != 0x117)) {
        return 0;
      }
      plVar4 = *(long **)(param_1 + 0x30);
      uVar5 = 0x32;
      goto LAB_02e050cc;
    }
  }
  else {
    if (uVar3 == 0xb2) {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),399);
      if (((((uVar6 & 1) == 0) &&
           (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x18c),
           (uVar6 & 1) == 0)) &&
          (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x160),
          (uVar6 & 1) == 0)) &&
         ((uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x196),
          (uVar6 & 1) == 0 &&
          (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1f9),
          (uVar6 & 1) == 0)))) {
        return 0;
      }
      plVar4 = *(long **)(param_1 + 0x30);
      uVar5 = 0x4e;
      goto LAB_02e050cc;
    }
    if (uVar3 == 0x9d) {
      uVar1 = *(ushort *)(param_1 + 0xa8);
      uVar3 = (uint)uVar1;
      if (uVar1 < 0x171) {
        if (uVar3 == 0x103 || uVar1 < 0x103) {
          if (((0x38 < uVar3 - 0x8b) ||
              ((1L << ((ulong)(uVar3 - 0x8b) & 0x3f) & 0x100000000000005U) == 0)) && (uVar3 != 0x4c)
             ) {
            return 0;
          }
        }
        else if ((uVar3 != 0x104) && (uVar3 != 0x154)) {
          return 0;
        }
      }
      else if (uVar3 == 0x218 || uVar1 < 0x218) {
        if (((uVar3 != 0x171) && (uVar3 != 0x1a7)) && (uVar3 != 0x1d0)) {
          return 0;
        }
      }
      else if (((uVar3 != 0x219) && (uVar3 != 0x2b1)) && (uVar3 != 0x235)) {
        return 0;
      }
      plVar4 = *(long **)(param_1 + 0x30);
      uVar5 = 0x5a;
      goto LAB_02e050cc;
    }
    if (uVar3 != 0x99) {
      return 0;
    }
  }
  uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  plVar4 = *(long **)(param_1 + 0x30);
  uVar5 = 0x46;
LAB_02e050cc:
  uVar6 = (**(code **)(*plVar4 + 0x4c8))(plVar4,uVar5);
  uVar3 = 2;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3;
}


