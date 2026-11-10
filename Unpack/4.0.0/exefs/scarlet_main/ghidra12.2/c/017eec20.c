/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017eec20; name: FUN_017eec20
 */


ulong FUN_017eec20(long param_1,undefined8 param_2)

{
  short *psVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ushort uVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  ushort *puVar19;
  uint local_24;
  
  psVar1 = (short *)(param_1 + 0x90);
  FUN_017f0318(param_1,psVar1,param_2);
  puVar17 = (undefined8 *)(param_1 + 0x30);
  iVar7 = (**(code **)(*(long *)*puVar17 + 0x4d8))();
  if ((iVar7 == 1) &&
     (uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x230))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0)), (uVar9 & 1) != 0)) {
    return 0;
  }
  uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x398))
                    (*(long **)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x90));
  if ((uVar9 & 1) != 0) {
    cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x60))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (cVar4 == '\v') {
      return 0xfffffff6;
    }
    cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x68))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (cVar4 == '\v') {
      return 0xfffffff6;
    }
    uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x148))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x8e);
    if (((uVar9 & 1) != 0) &&
       (uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x2a8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
       (uVar9 & 1) == 0)) {
      return 0xfffffff6;
    }
  }
  puVar18 = (undefined4 *)(param_1 + 0x98);
  uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x148))
                    (*(long **)(param_1 + 0x30),*puVar18,0x9e);
  if (((((uVar9 & 1) != 0) && (1 < *(byte *)(param_1 + 0x95) - 1)) &&
      (uVar8 = (**(code **)(**(long **)(param_1 + 0x30) + 0x2c8))
                         (*(long **)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x90)),
      (uVar8 & 0xff) < 10)) && ((1 << (ulong)(uVar8 & 0x1f) & 0x339U) != 0)) {
    cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x60))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (cVar4 == '\x10') {
      return 0xfffffff6;
    }
    cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x68))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (cVar4 == '\x10') {
      return 0xfffffff6;
    }
    uVar9 = (**(code **)(*(long *)*puVar17 + 0x3d0))((long *)*puVar17,4);
    if ((((uVar9 & 1) != 0) &&
        (cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x60))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
        cVar4 != '\x02')) &&
       ((cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x68))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
        cVar4 != '\x02' &&
        (sVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x150))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
        sVar6 != 0x1a)))) {
      return 0xfffffff6;
    }
    uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x148))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xdb);
    if ((uVar9 & 1) != 0) {
      return 0xfffffff6;
    }
    uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x148))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xd6);
    if ((uVar9 & 1) != 0) {
      return 0xfffffff6;
    }
  }
  uVar14 = *(ushort *)(param_1 + 0x92);
  uVar8 = (uint)uVar14;
  if (uVar14 < 0xf8) {
    if (((uVar8 == 0x67) || (uVar8 == 0x9e)) || (uVar14 == 0xdf)) goto LAB_017eee4c;
  }
  else if ((uVar14 == 0xf8) ||
          ((uVar8 - 0x168 < 0x1d && ((1 << (ulong)(uVar8 - 0x168 & 0x1f) & 0x10420011U) != 0)))) {
LAB_017eee4c:
    uVar9 = (**(code **)(*(long *)*puVar17 + 0x3d0))((long *)*puVar17,4);
    if (((uVar9 & 1) != 0) &&
       (((cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x60))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
         cVar4 != '\x02' &&
         (cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x68))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
         cVar4 != '\x02')) && (*(short *)(param_1 + 0xb6) != 0x1a)))) {
      return 0xfffffff6;
    }
    if (*(short *)(param_1 + 0xb6) == 0xdb) {
      return 0xfffffff6;
    }
    if (*(short *)(param_1 + 0xb6) == 0xd6) {
      return 0xfffffff6;
    }
  }
  puVar19 = (ushort *)(param_1 + 0x9e);
  if (((*puVar19 == 0xb1) &&
      (uVar9 = (**(code **)(*(long *)*puVar17 + 0x90))((long *)*puVar17,*puVar18), (uVar9 & 1) != 0)
      ) && ((*(char *)(param_1 + 0x94) == '\x02' &&
            ((uVar8 = (**(code **)(**(long **)(param_1 + 0x30) + 0x2c8))
                                (*(long **)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x90)),
             (uVar8 & 0xff) < 10 && ((1 << (ulong)(uVar8 & 0x1f) & 0x339U) != 0)))))) {
    uVar9 = (**(code **)(*(long *)*puVar17 + 0x3d0))((long *)*puVar17,4);
    if (((uVar9 & 1) != 0) &&
       (((cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x60))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
         cVar4 != '\x02' &&
         (cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x68))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
         cVar4 != '\x02')) && (*(short *)(param_1 + 0xb6) != 0x1a)))) {
      return 0xfffffff6;
    }
    if (*(short *)(param_1 + 0xb6) == 0xd6) {
      return 0xfffffff6;
    }
    if (*(short *)(param_1 + 0xb6) == 0xdb) {
      return 0xfffffff6;
    }
  }
  uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x148))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x2b);
  if ((((uVar9 & 1) != 0) &&
      (uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3a0))
                         (*(long **)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x90)),
      (uVar9 & 1) != 0)) &&
     (uVar9 = (**(code **)(*(long *)*puVar17 + 0x2a8))((long *)*puVar17,*puVar18), (uVar9 & 1) == 0)
     ) {
    return 0xfffffff6;
  }
  uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x148))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xab);
  if ((((uVar9 & 1) != 0) &&
      (uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3a8))
                         (*(long **)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x90)),
      (uVar9 & 1) != 0)) &&
     (uVar9 = (**(code **)(*(long *)*puVar17 + 0x2a8))((long *)*puVar17,*puVar18), (uVar9 & 1) == 0)
     ) {
    return 0xfffffff6;
  }
  uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x148))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x112);
  if ((((uVar9 & 1) != 0) &&
      (uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3b0))
                         (*(long **)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x90)),
      (uVar9 & 1) != 0)) &&
     (uVar9 = (**(code **)(*(long *)*puVar17 + 0x2a8))((long *)*puVar17,*puVar18), (uVar9 & 1) == 0)
     ) {
    return 0xfffffff6;
  }
  sVar6 = *(short *)(param_1 + 0x90);
  if (((sVar6 == 0x5a) || (sVar6 == 0x20)) || (*(char *)(param_1 + 0x95) != '\0')) {
    cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0));
    if (cVar4 == '\0') {
      if ((((*(char *)(param_1 + 0x94) != '\x04') ||
           (uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x148))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x1a),
           (uVar9 & 1) == 0)) ||
          (uVar9 = (**(code **)(*(long *)*puVar17 + 0x2a8))((long *)*puVar17,*puVar18),
          (uVar9 & 1) == 0)) &&
         (((sVar6 = *(short *)(param_1 + 0x92), sVar6 != 0x87 && (sVar6 != 0xad)) && (sVar6 != 0xde)
          ))) {
        return 0xfffffff6;
      }
    }
    else {
      sVar6 = *(short *)(param_1 + 0x90);
      if (sVar6 == 0x31e) {
        uVar9 = (**(code **)(*(long *)*puVar17 + 0x3d0))((long *)*puVar17,1);
        if ((((uVar9 & 1) == 0) &&
            (uVar9 = (**(code **)(*(long *)*puVar17 + 0x3d0))((long *)*puVar17,2), (uVar9 & 1) == 0)
            ) && ((uVar9 = (**(code **)(*(long *)*puVar17 + 0x3d0))((long *)*puVar17,3),
                  (uVar9 & 1) == 0 &&
                  (uVar9 = (**(code **)(*(long *)*puVar17 + 0x3d0))((long *)*puVar17,4),
                  (uVar9 & 1) == 0)))) {
          return 0xffffffe2;
        }
        sVar6 = *(short *)(param_1 + 0x90);
      }
      if ((sVar6 == 0x329) &&
         (uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f0))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
         (uVar9 & 1) == 0)) {
        return 0xffffffe2;
      }
      uVar9 = (**(code **)(*(long *)*puVar17 + 0x2a8))((long *)*puVar17,*puVar18);
      if ((uVar9 & 1) == 0) {
        uVar14 = *(ushort *)(param_1 + 0xb6);
        if (uVar14 < 0x12) {
          if (uVar14 == 0xb) {
LAB_017eeea0:
            if (*(char *)(param_1 + 0x94) == '\n') {
              return 0xfffffff4;
            }
          }
          else {
            if (uVar14 != 10) goto LAB_017eeebc;
LAB_017eee34:
            if (*(char *)(param_1 + 0x94) == '\f') {
              return 0xfffffff4;
            }
            if (uVar14 == 0xb) goto LAB_017eeea0;
          }
          if (uVar14 == 0x12) {
LAB_017eee90:
            if (*(char *)(param_1 + 0x94) == '\t') {
              return 0xfffffff4;
            }
          }
LAB_017eeeb4:
          if (uVar14 == 0x19) {
            bVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                               *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
            if (bVar5 < 8) {
              return 0xfffffff6;
            }
            uVar14 = *(ushort *)(param_1 + 0xb6);
          }
        }
        else {
          if (uVar14 < 0x4e) {
            if (uVar14 == 0x12) goto LAB_017eee90;
            if (uVar14 == 0x1f) goto LAB_017eee34;
            goto LAB_017eeeb4;
          }
          if (uVar14 < 0x72) {
            if (uVar14 == 0x4e) goto LAB_017eee34;
            if (uVar14 == 0x57) goto LAB_017eeea0;
          }
          else {
            if (uVar14 == 0x72) goto LAB_017eeea0;
            if (uVar14 == 0x111) goto LAB_017eee90;
          }
        }
LAB_017eeebc:
        if (uVar14 == 0x1a) {
          if (*(char *)(param_1 + 0x94) != '\x04') goto LAB_017eeed4;
          uVar9 = (**(code **)(*(long *)*puVar17 + 0x3d8))((long *)*puVar17,2);
          if ((uVar9 & 1) == 0) {
            return 0xfffffff6;
          }
          uVar14 = *(ushort *)(param_1 + 0xb6);
        }
        if (uVar14 == 0x129) {
          if (*(char *)(param_1 + 0x94) == '\x04') {
            return 0xfffffff4;
          }
        }
        else if ((uVar14 == 0x9d) && (*(char *)(param_1 + 0x94) == '\v')) {
          return 0xfffffff4;
        }
      }
    }
LAB_017eeed4:
    sVar6 = *psVar1;
  }
  if (sVar6 == 0x32a) {
    lVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x210))
                       (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (lVar10 == 0) {
      return 0xffffffe2;
    }
    sVar6 = *psVar1;
  }
  if (((sVar6 == 0x37c) && (*(char *)(param_1 + 0xa0) != '\f')) &&
     (*(char *)(param_1 + 0xa1) != '\f')) {
    return 0xfffffff6;
  }
  local_24 = 0;
  uVar9 = FUN_0157d28c(param_1,&local_24,psVar1,0);
  if ((uVar9 & 1) != 0) {
    return (ulong)local_24;
  }
  switch(*(undefined2 *)(param_1 + 0x92)) {
  case 1:
  case 0xbb:
    uVar9 = FUN_017f3728(param_1);
    return uVar9;
  case 7:
    uVar9 = FUN_017f2748(param_1);
    return uVar9;
  case 8:
    uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
    if ((uVar9 & 1) == 0) {
      return 0xfffffff6;
    }
    uVar8 = 0xfffffff6;
    if (*(short *)(param_1 + 0xb6) != 0x62) {
      uVar8 = 0;
    }
    return (ulong)uVar8;
  case 10:
  case 0x32:
  case 0xd4:
  case 0x115:
  case 0x134:
  case 0x138:
  case 0x13c:
  case 0x142:
  case 0x147:
    if (*puVar19 == 0x7e) {
      return 0xfffffff4;
    }
    plVar11 = (long *)*puVar17;
    uVar12 = *puVar18;
    pcVar15 = *(code **)(*plVar11 + 0x100);
    goto LAB_017ef008;
  case 0xb:
  case 0x33:
  case 0x9c:
  case 0x148:
    if (*puVar19 == 0x7e) {
      return 0xfffffff4;
    }
    plVar11 = (long *)*puVar17;
    uVar12 = *puVar18;
    pcVar15 = *(code **)(*plVar11 + 0x108);
    goto LAB_017ef008;
  case 0xc:
  case 0x34:
  case 0x11c:
    uVar9 = FUN_017f0900(param_1);
    return uVar9;
  case 0xd:
  case 0x35:
  case 0x122:
  case 0x141:
  case 0x16d:
    if (*puVar19 == 0x7e) {
      return 0xfffffff4;
    }
    plVar11 = (long *)*puVar17;
    uVar12 = *puVar18;
    pcVar15 = *(code **)(*plVar11 + 0x110);
    goto LAB_017ef008;
  case 0xe:
  case 0x36:
    if (*puVar19 == 0x7e) {
      return 0xfffffff4;
    }
    plVar11 = (long *)*puVar17;
    uVar12 = *puVar18;
    pcVar15 = *(code **)(*plVar11 + 0x118);
LAB_017ef008:
    iVar7 = (*pcVar15)(plVar11,uVar12);
    bVar3 = iVar7 == 0xc;
    goto LAB_017ef010;
  case 0xf:
  case 0x37:
    uVar9 = FUN_017f0974(param_1);
    return uVar9;
  case 0x10:
  case 0x38:
  case 0x6c:
    uVar9 = FUN_017f0898(param_1);
    return uVar9;
  case 0x12:
  case 0x3a:
  case 0x157:
  case 0x15a:
  case 0x164:
  case 0x16c:
  case 0x19b:
    uVar9 = FUN_017f09dc(param_1);
    return uVar9;
  case 0x13:
  case 0x3b:
    uVar9 = FUN_017f2800(param_1);
    return uVar9;
  case 0x14:
  case 0x3c:
    uVar9 = FUN_017f2078(param_1);
    return uVar9;
  case 0x15:
  case 0x3d:
  case 0x165:
    uVar9 = FUN_017f1188(param_1);
    return uVar9;
  case 0x16:
  case 0x3e:
    uVar9 = FUN_017f21cc(param_1);
    return uVar9;
  case 0x17:
  case 0x3f:
    uVar9 = FUN_017f2b98(param_1);
    return uVar9;
  case 0x18:
  case 0x40:
    uVar9 = FUN_017f2970(param_1);
    return uVar9;
  case 0x19:
  case 0x8f:
    uVar9 = FUN_017f2f60(param_1);
    return uVar9;
  case 0x1c:
    uVar9 = FUN_017f13dc(param_1);
    return uVar9;
  case 0x20:
  case 0x84:
  case 0x17d:
    uVar9 = (**(code **)(*(long *)*puVar17 + 0x90))((long *)*puVar17,*puVar18);
    uVar8 = 0xfffffff8;
    goto LAB_017f014c;
  case 0x21:
  case 0x42:
    uVar9 = FUN_017f3920(param_1);
    return uVar9;
  case 0x23:
    plVar11 = (long *)*puVar17;
    uVar13 = 1;
    goto LAB_017f0134;
  case 0x25:
    uVar9 = FUN_017f25e0(param_1);
    return uVar9;
  case 0x26:
    uVar9 = FUN_017f1acc(param_1);
    return uVar9;
  case 0x2e:
    plVar11 = (long *)*puVar17;
    uVar13 = 3;
    goto LAB_017f0134;
  case 0x2f:
    plVar11 = (long *)*puVar17;
    uVar13 = 9;
    uVar12 = *puVar18;
    pcVar15 = *(code **)(*plVar11 + 600);
    goto LAB_017f0140;
  case 0x31:
  case 0x76:
  case 0xa6:
  case 199:
    uVar9 = FUN_017f0b50(param_1);
    return uVar9;
  case 0x41:
    plVar11 = (long *)*puVar17;
    uVar13 = 0;
    goto LAB_017f0134;
  case 0x43:
    uVar9 = FUN_017f49d4(param_1);
    return uVar9;
  case 0x4f:
    uVar9 = FUN_017f0ca0(param_1);
    return uVar9;
  case 0x54:
    uVar9 = FUN_017f3398(param_1);
    return uVar9;
  case 0x56:
    uVar9 = FUN_017f3558(param_1);
    return uVar9;
  case 0x5a:
    uVar9 = FUN_017f3640(param_1);
    return uVar9;
  case 0x5c:
  case 0x61:
    uVar9 = (**(code **)(*(long *)*puVar17 + 0x1c8))((long *)*puVar17,*puVar18,2);
    goto LAB_017ef0d0;
  case 0x5e:
    uVar9 = FUN_017f190c(param_1);
    return uVar9;
  case 0x66:
    uVar9 = FUN_017f16dc(param_1);
    return uVar9;
  case 0x6a:
    uVar9 = FUN_017f2dd4(param_1);
    return uVar9;
  case 0x6b:
    uVar9 = FUN_017f19a0(param_1);
    return uVar9;
  case 0x6d:
    uVar9 = FUN_017f2320(param_1);
    return uVar9;
  case 0x70:
    uVar9 = FUN_017f1ca0(param_1);
    return uVar9;
  case 0x71:
    uVar9 = FUN_017f145c(param_1);
    return uVar9;
  case 0x72:
    plVar11 = *(long **)(param_1 + 0x30);
    uVar13 = 0x14;
    goto LAB_017f0208;
  case 0x73:
    uVar8 = (**(code **)(*(long *)*puVar17 + 0x3c8))();
    bVar3 = (uVar8 & 0xfc) == 4;
    goto LAB_017efb2c;
  case 0x78:
    uVar9 = FUN_017f3d60(param_1);
    return uVar9;
  case 0x7c:
    plVar11 = (long *)*puVar17;
    uVar13 = 2;
    goto LAB_017f0134;
  case 0x7f:
  case 0x140:
    plVar11 = (long *)*puVar17;
    uVar12 = *puVar18;
    pcVar15 = *(code **)(*plVar11 + 0x498);
    goto LAB_017ef2ac;
  case 0x88:
    cVar4 = (**(code **)(*(long *)*puVar17 + 0x3c8))();
    if ((byte)(cVar4 - 2U) < 6) {
      lVar10 = (long)(char)(cVar4 - 2U);
      puVar16 = &DAT_03d69088;
LAB_017efa50:
      return (ulong)*(uint *)(puVar16 + lVar10 * 4);
    }
    break;
  case 0x89:
    cVar4 = (**(code **)(*(long *)*puVar17 + 0x3c8))();
    if ((byte)(cVar4 - 1U) < 7) {
      lVar10 = (long)(char)(cVar4 - 1U);
      puVar16 = &DAT_03d690a0;
      goto LAB_017efa50;
    }
    break;
  case 0x8e:
    uVar9 = FUN_017f0ee8(param_1);
    return uVar9;
  case 0x94:
    plVar11 = *(long **)(param_1 + 0x30);
    uVar12 = *(undefined4 *)(param_1 + 0xb0);
    pcVar15 = *(code **)(*plVar11 + 0x418);
    goto LAB_017f00f4;
  case 0x9e:
  case 0x178:
  case 0x17e:
    plVar11 = (long *)*puVar17;
    uVar12 = *puVar18;
    pcVar15 = *(code **)(*plVar11 + 0x1a0);
    goto LAB_017ef0cc;
  case 0xa0:
    if (*puVar19 == 0x7e) {
      return 0xfffffff4;
    }
    iVar7 = (**(code **)(*(long *)*puVar17 + 0x280))((long *)*puVar17,*puVar18);
    bVar3 = iVar7 == 3;
    goto LAB_017ef010;
  case 0xa1:
  case 0xa2:
    plVar11 = (long *)*puVar17;
    uVar12 = *puVar18;
    pcVar15 = *(code **)(*plVar11 + 0x280);
LAB_017ef2ac:
    iVar7 = (*pcVar15)(plVar11,uVar12);
LAB_017eeff0:
    bVar3 = iVar7 == 0;
    goto LAB_017ef010;
  case 0xa4:
    cVar4 = (**(code **)(*(long *)*puVar17 + 0x3c8))();
    if ((byte)(cVar4 - 3U) < 5) {
      lVar10 = (long)(char)(cVar4 - 3U);
      puVar16 = &DAT_03d690bc;
      goto LAB_017efa50;
    }
    break;
  case 0xa5:
    uVar9 = FUN_017f23d0(param_1);
    return uVar9;
  case 0xa7:
    uVar9 = FUN_017f47b0(param_1);
    return uVar9;
  case 0xa8:
    uVar9 = FUN_017f4370(param_1);
    return uVar9;
  case 0xac:
  case 0x116:
  case 300:
  case 0x135:
  case 0x182:
    iVar7 = (**(code **)(*(long *)*puVar17 + 0x4d8))();
    goto LAB_017eeff0;
  case 0xaf:
    uVar9 = FUN_017f2e98(param_1);
    return uVar9;
  case 0xb0:
  case 0x172:
  case 0x184:
    iVar7 = (**(code **)(*(long *)*puVar17 + 0x4d8))();
    bVar3 = iVar7 == 0;
    uVar8 = 0xffffffec;
    goto LAB_017ef014;
  case 0xb1:
    uVar9 = FUN_017f3110(param_1);
    return uVar9;
  case 0xb2:
    uVar9 = FUN_017f1de0(param_1);
    return uVar9;
  case 0xb3:
    sVar6 = (**(code **)(*(long *)*puVar17 + 0x188))((long *)*puVar17,*puVar18);
    bVar3 = sVar6 == 0x111;
    goto LAB_017ef010;
  case 0xb5:
    plVar11 = (long *)*puVar17;
    uVar13 = 0x15;
    goto LAB_017efd84;
  case 0xb8:
    lVar10 = (**(code **)(*(long *)*puVar17 + 0x220))((long *)*puVar17,*puVar18);
    bVar3 = lVar10 == 0;
LAB_017efb2c:
    uVar8 = 0xfffffff8;
    goto LAB_017ef014;
  case 0xbc:
    uVar9 = FUN_017f1e84(param_1);
    return uVar9;
  case 0xbf:
    uVar9 = FUN_017f31e8(param_1);
    return uVar9;
  case 0xc0:
    plVar11 = (long *)*puVar17;
    pcVar15 = *(code **)(*plVar11 + 0x3d8);
    goto LAB_017f006c;
  case 0xc1:
    plVar11 = (long *)*puVar17;
    uVar12 = *puVar18;
    goto LAB_017f0120;
  case 0xcd:
    uVar9 = FUN_017f44b8(param_1);
    return uVar9;
  case 0xce:
    uVar9 = FUN_017f0f58(param_1);
    return uVar9;
  case 0xd0:
    uVar9 = FUN_017f0fc8(param_1);
    return uVar9;
  case 0xd3:
    uVar9 = FUN_017f1038(param_1);
    return uVar9;
  case 0xd7:
    plVar11 = (long *)*puVar17;
    pcVar15 = *(code **)(*plVar11 + 0x3d8);
    goto LAB_017effe0;
  case 0xd8:
    uVar9 = FUN_017f14dc(param_1);
    return uVar9;
  case 0xdc:
    uVar9 = FUN_017f0c48(param_1);
    return uVar9;
  case 0xde:
    lVar10 = (**(code **)(*(long *)*puVar17 + 0x210))((long *)*puVar17,*puVar18);
    bVar3 = lVar10 == 0;
    goto LAB_017ef010;
  case 0xe1:
    uVar9 = FUN_017f0db4(param_1);
    return uVar9;
  case 0xe3:
    uVar9 = FUN_017f0e14(param_1);
    return uVar9;
  case 0xe8:
    uVar9 = FUN_017f2480(param_1);
    return uVar9;
  case 0xe9:
    uVar9 = FUN_017f32c0(param_1);
    return uVar9;
  case 0xea:
    uVar9 = FUN_017f3b2c(param_1);
    return uVar9;
  case 0xec:
    uVar9 = FUN_017f2694(param_1);
    return uVar9;
  case 0xee:
  case 0xf3:
  case 0xf4:
    uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (((uVar9 & 1) != 0) && (*puVar19 != 0x97)) {
      return 0xfffffff6;
    }
    break;
  case 0xef:
    uVar9 = FUN_017f3c44(param_1);
    return uVar9;
  case 0xf0:
    plVar11 = (long *)*puVar17;
    uVar13 = 5;
    goto LAB_017f0134;
  case 0xf1:
    uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                       *(undefined4 *)(param_1 + 0x98));
    if ((uVar9 & 1) != 0) {
      uVar8 = 0;
      if (*puVar19 != 0x9e) {
        uVar8 = 0xfffffff6;
      }
      return (ulong)uVar8;
    }
    break;
  case 0xf2:
    uVar9 = FUN_017f0cfc(param_1);
    return uVar9;
  case 0xf6:
    plVar11 = (long *)*puVar17;
    uVar12 = *puVar18;
    pcVar15 = *(code **)(*plVar11 + 0x198);
    goto LAB_017ef0cc;
  case 0xf7:
    uVar9 = FUN_017f40f8(param_1);
    return uVar9;
  case 0xf9:
    uVar9 = FUN_017f1d40(param_1);
    return uVar9;
  case 0xfb:
    plVar11 = (long *)*puVar17;
    uVar13 = 0x24;
LAB_017efd84:
    uVar12 = *puVar18;
    goto LAB_017f020c;
  case 0xfc:
    uVar9 = FUN_017f1764(param_1);
    return uVar9;
  case 0x102:
    uVar9 = FUN_017f2d14(param_1);
    return uVar9;
  case 0x109:
    uVar9 = FUN_017f1360(param_1);
    return uVar9;
  case 0x10a:
    uVar9 = FUN_017f1b68(param_1);
    return uVar9;
  case 0x10e:
    uVar9 = FUN_017f17ec(param_1);
    return uVar9;
  case 0x119:
    plVar11 = (long *)*puVar17;
    pcVar15 = *(code **)(*plVar11 + 0x3d8);
    goto LAB_017f00f0;
  case 0x11d:
    uVar9 = FUN_017f1f28(param_1);
    return uVar9;
  case 0x11e:
    plVar11 = (long *)*puVar17;
    uVar12 = 5;
    pcVar15 = *(code **)(*plVar11 + 0x3d8);
    goto LAB_017f00f4;
  case 0x124:
    uVar9 = FUN_017f1a34(param_1);
    return uVar9;
  case 0x126:
    uVar9 = FUN_017f1fd0(param_1);
    return uVar9;
  case 0x12a:
    uVar9 = FUN_017f4234(param_1);
    return uVar9;
  case 299:
    uVar9 = FUN_017f3e88(param_1);
    return uVar9;
  case 0x133:
    uVar9 = FUN_017f187c(param_1);
    return uVar9;
  case 0x137:
    uVar9 = FUN_017f155c(param_1);
    return uVar9;
  case 0x13b:
    uVar9 = FUN_017f12e8(param_1);
    return uVar9;
  case 0x13e:
    if (*(char *)(param_1 + 0xb8) == *(char *)(param_1 + 0xa0)) {
      cVar4 = *(char *)(param_1 + 0xa1);
      if (*(char *)(param_1 + 0xb9) == cVar4) {
        return 0xfffffff6;
      }
    }
    else {
      cVar4 = *(char *)(param_1 + 0xa1);
    }
    if (*(char *)(param_1 + 0xb8) != cVar4) {
      return 0;
    }
    bVar3 = *(char *)(param_1 + 0xb9) == *(char *)(param_1 + 0xa0);
    goto LAB_017ef010;
  case 0x143:
    uVar9 = FUN_017f2ae0(param_1);
    return uVar9;
  case 0x152:
    uVar9 = (**(code **)(*(long *)*puVar17 + 0x208))((long *)*puVar17,*puVar18);
    uVar8 = 0xfffffff8;
    goto LAB_017ef0d8;
  case 0x153:
    uVar9 = FUN_017f462c(param_1);
    return uVar9;
  case 0x154:
    uVar9 = FUN_017f1c04(param_1);
    return uVar9;
  case 0x156:
    uVar9 = FUN_017f15dc(param_1);
    return uVar9;
  case 0x15d:
    iVar7 = (**(code **)(*(long *)*puVar17 + 0x4d8))();
    bVar3 = iVar7 == 0;
    uVar8 = 0xfffffffb;
    goto LAB_017ef014;
  case 0x15e:
    uVar9 = FUN_017f3474(param_1);
    return uVar9;
  case 0x15f:
    plVar11 = (long *)*puVar17;
    uVar12 = 1;
    pcVar15 = *(code **)(*plVar11 + 0x3d0);
    goto LAB_017f00f4;
  case 0x160:
    plVar11 = (long *)*puVar17;
    pcVar15 = *(code **)(*plVar11 + 0x3d0);
LAB_017effe0:
    uVar12 = 2;
    goto LAB_017f00f4;
  case 0x162:
    iVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    bVar3 = *(short *)(param_1 + 0x9e) == 0x17 || iVar7 == 0;
LAB_017ef010:
    uVar8 = 0xfffffff6;
LAB_017ef014:
    if (!bVar3) {
      uVar8 = 0;
    }
    return (ulong)uVar8;
  case 0x16a:
    uVar9 = FUN_017f0e7c(param_1);
    return uVar9;
  case 0x16b:
    uVar9 = FUN_017f10a8(param_1);
    return uVar9;
  case 0x16e:
    if ((1 < *puVar19 - 0x39) && (1 < *(ushort *)(param_1 + 0xaa) - 0x39)) {
      return 0xfffffff6;
    }
    break;
  case 0x170:
    plVar11 = (long *)*puVar17;
    pcVar15 = *(code **)(*plVar11 + 0x3d0);
LAB_017f006c:
    uVar12 = 3;
    goto LAB_017f00f4;
  case 0x177:
    uVar9 = FUN_017f165c(param_1);
    return uVar9;
  case 0x183:
    uVar9 = FUN_017f3fc0(param_1);
    return uVar9;
  case 0x185:
    uVar9 = FUN_017f4c20(param_1);
    return uVar9;
  case 0x187:
    if (1 < *puVar19 - 0x39) {
      uVar8 = 0;
      if (1 < *(ushort *)(param_1 + 0xb6) - 0x39) {
        uVar8 = 0xfffffff6;
      }
      return (ulong)uVar8;
    }
    break;
  case 0x18a:
    plVar11 = (long *)*puVar17;
    pcVar15 = *(code **)(*plVar11 + 0x3d0);
LAB_017f00f0:
    uVar12 = 4;
LAB_017f00f4:
    uVar9 = (*pcVar15)(plVar11,uVar12);
    goto LAB_017f0144;
  case 0x18d:
    if ((*(char *)(param_1 + 0xa0) != '\t') && (*(char *)(param_1 + 0xa1) != '\t')) {
      return 0xfffffff6;
    }
    break;
  case 399:
    plVar11 = *(long **)(param_1 + 0x30);
    uVar12 = *(undefined4 *)(param_1 + 0xb0);
LAB_017f0120:
    pcVar15 = *(code **)(*plVar11 + 0x1c0);
    goto LAB_017ef0cc;
  case 0x196:
    plVar11 = (long *)*puVar17;
    uVar13 = 0x11;
LAB_017f0134:
    uVar12 = *puVar18;
    pcVar15 = *(code **)(*plVar11 + 0x3f8);
LAB_017f0140:
    uVar9 = (*pcVar15)(plVar11,uVar12,uVar13);
LAB_017f0144:
    uVar8 = 0xfffffff6;
LAB_017f014c:
    if ((uVar9 & 1) == 0) {
      uVar8 = 0;
    }
    return (ulong)uVar8;
  case 0x1a3:
    iVar7 = (**(code **)(*(long *)*puVar17 + 0xa0))((long *)*puVar17,*puVar18);
    uVar8 = 0xfffffff6;
    if (0x31 < iVar7) {
      uVar8 = 0;
    }
    return (ulong)uVar8;
  case 0x1a4:
    plVar11 = (long *)*puVar17;
    uVar12 = *puVar18;
    pcVar15 = *(code **)(*plVar11 + 0x200);
LAB_017ef0cc:
    uVar9 = (*pcVar15)(plVar11,uVar12);
LAB_017ef0d0:
    uVar8 = 0xfffffff6;
LAB_017ef0d8:
    uVar2 = 0;
    if ((uVar9 & 1) == 0) {
      uVar2 = uVar8;
    }
    return (ulong)uVar2;
  case 0x1a9:
    plVar11 = *(long **)(param_1 + 0x30);
    uVar13 = 0x2a;
    goto LAB_017f0208;
  case 0x1aa:
    if (*(short *)(param_1 + 0xb6) == 0x8e) {
      if (0x3c < *puVar19 - 0x68) {
        return 0;
      }
      if ((1L << ((ulong)(*puVar19 - 0x68) & 0x3f) & 0x1800000000000001U) == 0) {
        return 0;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    break;
  case 0x1ac:
    uVar9 = FUN_017f2530(param_1);
    return uVar9;
  case 0x1ad:
    plVar11 = *(long **)(param_1 + 0x30);
    uVar13 = 0x2b;
LAB_017f0208:
    uVar12 = *(undefined4 *)(param_1 + 0xb0);
LAB_017f020c:
    pcVar15 = *(code **)(*plVar11 + 0x1c8);
    goto LAB_017f0140;
  case 0x1af:
    uVar9 = FUN_017f0d58(param_1);
    return uVar9;
  case 0x1b0:
    uVar9 = FUN_017f1118(param_1);
    return uVar9;
  case 0x1b2:
    iVar7 = (**(code **)(*(long *)*puVar17 + 0x4d8))();
    if ((iVar7 == 0) ||
       ((iVar7 = (**(code **)(*(long *)*puVar17 + 0x4d8))(), iVar7 == 1 &&
        (uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x228))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                            *(undefined4 *)(param_1 + 0xb0)), (uVar9 & 1) == 0)))) {
      return 0xffffffec;
    }
    iVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
    if ((iVar7 == 0xc) &&
       (iVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)), iVar7 == 0xc
       )) {
      return 0xfffffff6;
    }
    bVar3 = *(short *)(param_1 + 0xaa) == 0x7e;
    uVar8 = 0xfffffff4;
    goto LAB_017ef014;
  case 0x1de:
    if ((*(short *)(param_1 + 0x90) == 0x391) &&
       (iVar7 = (**(code **)(*(long *)*puVar17 + 0x4d8))(), iVar7 == 0)) {
      return 0xffffffec;
    }
  }
  return 0;
}


