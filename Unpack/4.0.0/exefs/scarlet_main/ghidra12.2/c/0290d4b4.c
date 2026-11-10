/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290d4b4; name: FUN_0290d4b4
 */


undefined8 FUN_0290d4b4(long param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x20);
  if ((((uVar4 & 1) != 0) ||
      (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x84),
      (uVar4 & 1) != 0)) ||
     (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xd6),
     (uVar4 & 1) != 0)) {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    plVar5 = *(long **)(param_1 + 0x30);
    if (iVar3 < 0x1e) {
      lVar9 = *plVar5;
      uVar6 = 0x46;
    }
    else {
      iVar3 = (**(code **)(*plVar5 + 0xa0))(plVar5,*(undefined4 *)(param_1 + 0xb0));
      if (0x31 < iVar3) goto LAB_0290d588;
      plVar5 = *(long **)(param_1 + 0x30);
      uVar6 = 0x27;
      lVar9 = *plVar5;
    }
    uVar4 = (**(code **)(lVar9 + 0x4c0))(plVar5,uVar6);
    if ((uVar4 & 1) != 0) {
      return 2;
    }
  }
LAB_0290d588:
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar7 = (uint)uVar1;
  if (uVar1 < 0x1b7) {
    uVar8 = (uint)uVar1;
    if (uVar8 < 0x123) {
      if (((uVar7 - 0x59 < 0x38) &&
          ((1L << ((ulong)(uVar7 - 0x59) & 0x3f) & 0x80000001000005U) != 0)) ||
         ((uVar7 < 0x25 && ((1L << ((ulong)uVar1 & 0x3f) & 0x1800001000U) != 0)))) {
LAB_0290d648:
        uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
        if (((uVar4 & 1) != 0) &&
           (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                              (*(long **)(param_1 + 0x30),0x32), (uVar4 & 1) != 0)) {
          return 2;
        }
        uVar7 = (uint)*(ushort *)(param_1 + 0xb4);
      }
    }
    else if (((uVar8 - 0x123 < 0x2c) &&
             ((1L << ((ulong)(uVar8 - 0x123) & 0x3f) & 0x80000400001U) != 0)) || (uVar8 == 0x1aa))
    goto LAB_0290d648;
  }
  else if (uVar7 == 0x2a3 || uVar1 < 0x2a3) {
    if (((uVar7 - 0x252 < 0x2c) && ((1L << ((ulong)(uVar7 - 0x252) & 0x3f) & 0x81000000081U) != 0))
       || ((uVar7 == 0x1b7 || (uVar7 == 0x210)))) goto LAB_0290d648;
  }
  else if ((uVar7 - 0x2a4 < 0xe) && ((1 << (ulong)(uVar7 - 0x2a4 & 0x1f) & 0x2225U) != 0))
  goto LAB_0290d648;
  if (uVar7 < 0x180) {
    if (((uVar7 - 0x82 < 0x1f) && ((1 << (ulong)(uVar7 - 0x82 & 0x1f) & 0x40080001U) != 0)) ||
       (uVar7 == 0x14e)) goto LAB_0290d6a8;
  }
  else if (uVar7 < 0x2b9) {
    if ((uVar7 == 0x180) || (uVar7 == 0x264)) {
LAB_0290d6a8:
      uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0));
      if ((uVar4 & 1) == 0) {
        uVar6 = 0xb;
      }
      else {
        uVar6 = 0x32;
      }
      uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),uVar6);
      if ((uVar4 & 1) != 0) {
        return 2;
      }
    }
  }
  else if ((uVar7 == 0x2ce) || (uVar7 == 0x2b9)) goto LAB_0290d6a8;
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar7 = (uint)uVar1;
  uVar8 = (uint)uVar1;
  if (uVar1 < 0x152) {
    if ((((uVar7 - 0xa6 < 0x2f) && ((1L << ((ulong)(uVar7 - 0xa6) & 0x3f) & 0x401404041001U) != 0))
        || ((uVar8 - 0xc < 0x3c && ((1L << ((ulong)(uVar8 - 0xc) & 0x3f) & 0x804002000011001U) != 0)
            ))) ||
       ((uVar8 - 0xf5 < 0x28 && ((1L << ((ulong)(uVar8 - 0xf5) & 0x3f) & 0x8001480001U) != 0))))
    goto LAB_0290d880;
LAB_0290d7c0:
    if (uVar1 < 0x264) {
      if ((uVar7 - 0x223 < 0x3a) &&
         ((1L << ((ulong)(uVar7 - 0x223) & 0x3f) & 0x200000000000901U) != 0)) goto LAB_0290d880;
    }
    else if (((uVar7 - 0x264 < 0x37) &&
             ((1L << ((ulong)(uVar7 - 0x264) & 0x3f) & 0x4840001c000001U) != 0)) ||
            ((uVar8 == 0x2c3 || (uVar8 == 0x2bf)))) goto LAB_0290d880;
LAB_0290d8c4:
    cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
    if (cVar2 != '\x01') goto LAB_0290d968;
    uVar1 = *(ushort *)(param_1 + 0xb4);
    if (uVar1 < 0x1d1) {
      if (uVar1 < 0x113) {
        if ((uVar1 == 3) || (uVar1 == 0xc0)) goto LAB_0290d950;
      }
      else if ((uVar1 == 0x113) || (uVar1 == 0x185)) goto LAB_0290d950;
    }
    else if (uVar1 < 0x225) {
      if ((uVar1 == 0x1d1) || (uVar1 == 0x1ec)) goto LAB_0290d950;
    }
    else if ((uVar1 == 0x225) || ((uVar1 == 0x2c5 || (uVar1 == 0x2a1)))) {
LAB_0290d950:
      uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
      if ((uVar4 & 1) != 0) goto LAB_0290d898;
    }
LAB_0290d968:
    uVar6 = 0;
  }
  else {
    if ((((0x2a < uVar8 - 0x152) || ((1L << ((ulong)(uVar8 - 0x152) & 0x3f) & 0x68100000441U) == 0))
        && ((0x3e < uVar8 - 0x1e0 ||
            ((1L << ((ulong)(uVar8 - 0x1e0) & 0x3f) & 0x4000000000002107U) == 0)))) &&
       (uVar7 != 0x1d6)) goto LAB_0290d7c0;
LAB_0290d880:
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    if ((uVar4 & 1) == 0) goto LAB_0290d8c4;
LAB_0290d898:
    uVar6 = 1;
  }
  return uVar6;
}


