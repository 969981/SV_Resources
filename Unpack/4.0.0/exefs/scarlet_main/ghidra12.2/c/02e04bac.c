/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e04bac; name: FUN_02e04bac
 */


undefined8 FUN_02e04bac(long param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  short sVar5;
  uint uVar6;
  
  sVar5 = *(short *)(param_1 + 0x9e);
  if (sVar5 == 0x36) {
    return 0xfffffff4;
  }
  if (sVar5 == 0x70) {
    return 0xfffffff4;
  }
  if ((*(short *)(param_1 + 0xaa) == 0x70) || (*(short *)(param_1 + 0xaa) == 0x36)) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32);
    if ((uVar4 & 1) != 0) {
      return 2;
    }
    sVar5 = *(short *)(param_1 + 0x9e);
  }
  if (sVar5 == 0x1a) {
    uVar6 = (uint)*(ushort *)(param_1 + 0xa8);
    if (*(ushort *)(param_1 + 0xa8) < 0x1ce) {
      if ((uVar6 == 0xdb) || ((uVar6 == 0x132 || (uVar6 == 0x19b)))) {
LAB_02e04c6c:
        uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32);
        if ((uVar4 & 1) != 0) {
          return 2;
        }
        sVar5 = *(short *)(param_1 + 0x9e);
        goto LAB_02e04c88;
      }
    }
    else if ((uVar6 - 0x1ce < 0x18) && ((1 << (ulong)(uVar6 - 0x1ce & 0x1f) & 0x804001U) != 0))
    goto LAB_02e04c6c;
  }
  else {
LAB_02e04c88:
    if ((sVar5 == 0x9d) && (*(short *)(param_1 + 0xaa) != 0x9d)) {
      uVar1 = *(ushort *)(param_1 + 0xa8);
      uVar6 = (uint)uVar1;
      if (uVar1 < 0x154) {
        if (uVar6 == 0xdd || uVar1 < 0xdd) {
          if (((uVar6 - 0x8b < 0x39) &&
              ((1L << ((ulong)(uVar6 - 0x8b) & 0x3f) & 0x100000000000005U) != 0)) || (uVar6 == 0x4c)
             ) {
LAB_02e04e30:
            uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                              (*(long **)(param_1 + 0x30),0x4e);
            if ((uVar4 & 1) != 0) {
              return 2;
            }
          }
        }
        else if ((uVar6 == 0xde) || (uVar6 == 0x104)) goto LAB_02e04e30;
      }
      else if (uVar1 < 0x1d0) {
        if (((uVar6 == 0x154) || (uVar6 == 0x171)) || (uVar6 == 0x1a7)) goto LAB_02e04e30;
      }
      else if (uVar6 == 0x234 || uVar1 < 0x234) {
        if ((uVar6 == 0x1d0) || (uVar6 == 0x219)) goto LAB_02e04e30;
      }
      else if ((uVar6 == 0x2b1) || (uVar6 == 0x235)) goto LAB_02e04e30;
    }
  }
  cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
  if (cVar2 == '\x02') {
LAB_02e04cbc:
    if (((*(short *)(param_1 + 0x9e) == 0x46) || (*(short *)(param_1 + 0xaa) == 0x46)) &&
       (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32),
       (uVar4 & 1) != 0)) {
      return 2;
    }
    if (cVar2 != '\x04') goto LAB_02e04da0;
  }
  else {
    if (((*(short *)(param_1 + 0x9e) == 2) || (*(short *)(param_1 + 0xaa) == 2)) &&
       (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32),
       (uVar4 & 1) != 0)) {
      return 2;
    }
    if (cVar2 != '\x01') goto LAB_02e04cbc;
LAB_02e04da0:
    sVar5 = *(short *)(param_1 + 0x9e);
    if ((sVar5 != 0x2d) && (*(short *)(param_1 + 0xaa) != 0x2d)) goto LAB_02e04cfc;
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32);
    if ((uVar4 & 1) != 0) {
      return 2;
    }
  }
  sVar5 = *(short *)(param_1 + 0x9e);
LAB_02e04cfc:
  if ((sVar5 == 0x16) || (*(short *)(param_1 + 0xaa) == 0x16)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar3);
    if ((cVar2 == '\x01') &&
       (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32),
       (uVar4 & 1) != 0)) {
      return 2;
    }
  }
  return 0;
}


