/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02914fb8; name: FUN_02914fb8
 */


uint FUN_02914fb8(long param_1,undefined1 param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  switch(param_2) {
  case 0:
    if (((*(char *)(param_1 + 0xb8) == '\a') || (*(char *)(param_1 + 0xb9) == '\a')) ||
       (uVar8 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7),
       (uVar8 & 1) != 0)) {
      return 0xfffffff6;
    }
    cVar2 = *(char *)(param_1 + 0xb8);
    if ((cVar2 == '\b') || (cVar2 == '\x05')) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = 0;
    }
    cVar1 = *(char *)(param_1 + 0xb9);
    if (cVar2 == cVar1) {
      return uVar7;
    }
    if ((cVar1 != '\b') && (cVar1 != '\x05')) {
      return uVar7;
    }
    goto LAB_02915754;
  case 1:
    if (*(char *)(param_1 + 0xb8) == '\a') {
      return 0xfffffff6;
    }
    if (*(char *)(param_1 + 0xb9) == '\a') {
      return 0xfffffff6;
    }
    uVar8 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7);
    if ((uVar8 & 1) != 0) {
      return 0xfffffff6;
    }
    bVar3 = *(byte *)(param_1 + 0xb8);
    if ((ulong)(long)(char)bVar3 < 0x12) {
      uVar7 = *(uint *)(&DAT_03d695ec + (long)(char)bVar3 * 4);
    }
    else {
      uVar7 = 0;
    }
    bVar4 = *(byte *)(param_1 + 0xb9);
    if (bVar4 == bVar3) {
      return uVar7;
    }
    if (0x11 < bVar4) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar4 & 0x1f);
    if ((uVar6 & 0x22148) != 0) goto LAB_02915754;
    uVar10 = 0x4021;
    goto LAB_029157e4;
  case 2:
    uVar7 = *(byte *)(param_1 + 0xb8) - 1;
    if (uVar7 < 0xc) {
      iVar11 = *(int *)(&DAT_03d69698 + (long)(char)uVar7 * 4);
    }
    else {
      iVar11 = 0;
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb);
    uVar7 = iVar11 + (uVar7 & 1);
    bVar3 = *(byte *)(param_1 + 0xb9);
    if (*(byte *)(param_1 + 0xb8) == bVar3) {
      return uVar7;
    }
    if (0xc < bVar3) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar3 & 0x1f);
    if ((uVar6 & 0x842) != 0) goto LAB_029157f0;
    uVar10 = 0x1120;
    goto LAB_0291562c;
  case 3:
    if (*(byte *)(param_1 + 0xb8) == 8) {
      return 0xfffffff6;
    }
    if (*(char *)(param_1 + 0xb9) == '\b') {
      return 0xfffffff6;
    }
    uVar7 = *(byte *)(param_1 + 0xb8) - 3;
    if (uVar7 < 0xf) {
      iVar11 = *(int *)(&DAT_03d69634 + (long)(char)uVar7 * 4);
    }
    else {
      iVar11 = 0;
    }
    uVar8 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb);
    if ((uVar8 & 1) == 0) {
      uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7);
      iVar9 = -(uVar7 & 1);
    }
    else {
      iVar9 = 1;
    }
    uVar7 = iVar11 + iVar9;
    bVar3 = *(byte *)(param_1 + 0xb9);
    if (*(byte *)(param_1 + 0xb8) == bVar3) {
      return uVar7;
    }
    if (0x11 < bVar3) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar3 & 0x1f);
    if ((uVar6 & 0xb8) != 0) goto LAB_02915754;
    uVar10 = 0x800;
    goto LAB_029156c4;
  case 4:
    if (*(byte *)(param_1 + 0xb8) == 8) {
      return 0xfffffff6;
    }
    if (*(char *)(param_1 + 0xb9) == '\b') {
      return 0xfffffff6;
    }
    if (*(short *)(param_1 + 0xb6) == 0x1a) {
      uVar7 = *(ushort *)(param_1 + 0x9e) - 0x68;
      if (0x3c < uVar7) {
        return 0xfffffff6;
      }
      if ((1L << ((ulong)uVar7 & 0x3f) & 0x1800000000000001U) == 0) {
        return 0xfffffff6;
      }
    }
    uVar7 = *(byte *)(param_1 + 0xb8) - 3;
    if (uVar7 < 10) {
      iVar11 = *(int *)(&DAT_03d69670 + (long)(char)uVar7 * 4);
    }
    else {
      iVar11 = 0;
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb);
    uVar7 = iVar11 - (uVar7 & 1);
    bVar3 = *(byte *)(param_1 + 0xb9);
    if (*(byte *)(param_1 + 0xb8) == bVar3) {
      return uVar7;
    }
    if (0xc < bVar3) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar3 & 0x1f);
    if ((uVar6 & 0x1328) != 0) goto LAB_029157f0;
    uVar10 = 0x840;
    goto LAB_0291562c;
  case 5:
    uVar7 = *(byte *)(param_1 + 0xb8) - 1;
    if (uVar7 < 0xe) {
      uVar7 = *(uint *)(&DAT_03d6970c + (long)(char)uVar7 * 4);
    }
    else {
      uVar7 = 0;
    }
    bVar3 = *(byte *)(param_1 + 0xb9);
    if ((uint)*(byte *)(param_1 + 0xb8) == (uint)bVar3) {
      return uVar7;
    }
    if (0xe < bVar3) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar3 & 0x1f);
    if ((uVar6 & 0x112) != 0) goto LAB_02915754;
    uVar10 = 0x4240;
    break;
  case 6:
    uVar7 = *(byte *)(param_1 + 0xb8) - 1;
    if (uVar7 < 0x11) {
      iVar11 = *(int *)(&DAT_03d696c8 + (long)(char)uVar7 * 4);
    }
    else {
      iVar11 = 0;
    }
    uVar8 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7);
    if ((uVar8 & 1) == 0) {
      uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb);
      uVar7 = uVar7 & 1;
    }
    else {
      uVar7 = 0xffffffff;
    }
    uVar7 = iVar11 + uVar7;
    bVar3 = *(byte *)(param_1 + 0xb9);
    if (*(byte *)(param_1 + 0xb8) == bVar3) {
      return uVar7;
    }
    if (0x11 < bVar3) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar3 & 0x1f);
    if ((uVar6 & 0x2038a) != 0) goto LAB_02915754;
    uVar10 = 0x2800;
    goto LAB_029157e4;
  case 7:
    cVar2 = *(char *)(param_1 + 0xb8);
    if (cVar2 == '\0') {
      return 0xfffffff6;
    }
    if (*(char *)(param_1 + 0xb9) == '\0') {
      return 0xfffffff6;
    }
    if (cVar2 == '\a') {
LAB_029151f4:
      iVar11 = 1;
    }
    else if (cVar2 == '\x10') {
      iVar11 = -1;
    }
    else {
      if (cVar2 == '\r') goto LAB_029151f4;
      iVar11 = 0;
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7);
    uVar7 = iVar11 + (uVar7 & 1);
    cVar2 = *(char *)(param_1 + 0xb9);
    if (*(char *)(param_1 + 0xb8) == cVar2) {
      return uVar7;
    }
    if ((cVar2 == '\a') || (cVar2 == '\r')) goto LAB_029157f0;
    if (cVar2 != '\x10') {
      return uVar7;
    }
    goto LAB_02915754;
  case 8:
    uVar7 = *(byte *)(param_1 + 0xb8) - 5;
    if (uVar7 < 0xd) {
      uVar7 = *(uint *)(&DAT_03d69744 + (long)(char)uVar7 * 4);
    }
    else {
      uVar7 = 0;
    }
    bVar3 = *(byte *)(param_1 + 0xb9);
    if ((uint)*(byte *)(param_1 + 0xb8) == (uint)bVar3) {
      return uVar7;
    }
    if (0x11 < bVar3) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar3 & 0x1f);
    if ((uVar6 & 0x1700) != 0) goto LAB_02915754;
    uVar10 = 0x4020;
LAB_029156c4:
    uVar10 = uVar10 | 0x20000;
    break;
  case 9:
    sVar5 = *(short *)(param_1 + 0xb6);
    if ((sVar5 == 0x55) || (sVar5 == 0x2f)) {
      iVar11 = -1;
    }
    else {
      if (sVar5 == 0x12) {
        uVar7 = *(ushort *)(param_1 + 0x9e) - 0x68;
        if (0x3c < uVar7) {
          return 0xfffffff6;
        }
        if ((1L << ((ulong)uVar7 & 0x3f) & 0x1800000000000001U) == 0) {
          return 0xfffffff6;
        }
      }
      iVar11 = 0;
    }
    if (*(byte *)(param_1 + 0xb8) < 0x10) {
      uVar7 = 1 << (ulong)(*(byte *)(param_1 + 0xb8) & 0x1f);
      if ((uVar7 & 0x4940) == 0) {
        if ((uVar7 & 0x8620) != 0) {
          iVar11 = iVar11 + -1;
        }
      }
      else {
        iVar11 = iVar11 + 1;
      }
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb);
    uVar7 = iVar11 + (uVar7 & 1);
    bVar3 = *(byte *)(param_1 + 0xb9);
    if (*(byte *)(param_1 + 0xb8) == bVar3) {
      return uVar7;
    }
    if (0xf < bVar3) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar3 & 0x1f);
    if ((uVar6 & 0x4940) != 0) goto LAB_029157f0;
    uVar10 = 0x8620;
    goto LAB_0291562c;
  case 10:
    sVar5 = *(short *)(param_1 + 0xb6);
    if (((sVar5 == 0xb) || (sVar5 == 0x72)) || (sVar5 == 0x57)) {
      uVar7 = *(ushort *)(param_1 + 0x9e) - 0x68;
      if (0x3c < uVar7) {
        return 0xfffffff6;
      }
      if ((1L << ((ulong)uVar7 & 0x3f) & 0x1800000000000001U) == 0) {
        return 0xfffffff6;
      }
    }
    uVar7 = *(byte *)(param_1 + 0xb8) - 4;
    if (uVar7 < 0xc) {
      iVar11 = *(int *)(&DAT_03d69588 + (long)(char)uVar7 * 4);
    }
    else {
      iVar11 = 0;
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb);
    uVar7 = iVar11 - (uVar7 & 1);
    bVar3 = *(byte *)(param_1 + 0xb9);
    if (*(byte *)(param_1 + 0xb8) == bVar3) {
      return uVar7;
    }
    if (0xf < bVar3) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar3 & 0x1f);
    if ((uVar6 & 0x230) != 0) goto LAB_029157f0;
    uVar10 = 0x8c00;
LAB_0291562c:
    if ((uVar6 & uVar10) == 0) {
      return uVar7;
    }
LAB_02915754:
    return uVar7 - 1;
  case 0xb:
    if (*(short *)(param_1 + 0xb6) == 0x9d) {
      uVar7 = *(ushort *)(param_1 + 0x9e) - 0x68;
      if (0x3c < uVar7) {
        return 0xfffffff6;
      }
      if ((1L << ((ulong)uVar7 & 0x3f) & 0x1800000000000001U) == 0) {
        return 0xfffffff6;
      }
    }
    uVar7 = *(byte *)(param_1 + 0xb8) - 3;
    if (uVar7 < 0xd) {
      iVar11 = *(int *)(&DAT_03d695b8 + (long)(char)uVar7 * 4);
    }
    else {
      iVar11 = 0;
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb);
    uVar7 = iVar11 - (uVar7 & 1);
    bVar3 = *(byte *)(param_1 + 0xb9);
    if (*(byte *)(param_1 + 0xb8) == bVar3) {
      return uVar7;
    }
    if (0xf < bVar3) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar3 & 0x1f);
    if ((uVar6 & 0x8b48) != 0) goto LAB_02915754;
    uVar10 = 0x430;
    break;
  case 0xc:
    if (*(byte *)(param_1 + 0xb8) == 4) {
      return 0xfffffff6;
    }
    if (*(char *)(param_1 + 0xb9) == '\x04') {
      return 0xfffffff6;
    }
    sVar5 = *(short *)(param_1 + 0xb6);
    if (((sVar5 == 10) || (sVar5 == 0x4e)) || (sVar5 == 0x1f)) {
      uVar7 = *(ushort *)(param_1 + 0x9e) - 0x68;
      if (0x3c < uVar7) {
        return 0xfffffff6;
      }
      if ((1L << ((ulong)uVar7 & 0x3f) & 0x1800000000000001U) == 0) {
        return 0xfffffff6;
      }
    }
    uVar7 = *(byte *)(param_1 + 0xb8) - 8;
    if (uVar7 < 8) {
      iVar11 = *(int *)(&DAT_03cbef60 + (long)(char)uVar7 * 4);
    }
    else {
      iVar11 = 0;
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb);
    uVar7 = iVar11 - (uVar7 & 1);
    bVar3 = *(byte *)(param_1 + 0xb9);
    if (*(byte *)(param_1 + 0xb8) == bVar3) {
      return uVar7;
    }
    if (0xf < bVar3) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar3 & 0x1f);
    if ((uVar6 & 0x9800) != 0) goto LAB_02915754;
    uVar10 = 0x500;
    break;
  case 0xd:
    bVar3 = *(byte *)(param_1 + 0xb8);
    if (bVar3 == 0x10) {
      return 0xfffffff6;
    }
    bVar4 = *(byte *)(param_1 + 0xb9);
    if (bVar4 == 0x10) {
      return 0xfffffff6;
    }
    if (bVar3 < 8) {
      if ((bVar3 == 1) || (bVar3 == 3)) {
        uVar7 = 1;
      }
      else {
LAB_0291593c:
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0xffffffff;
      if ((bVar3 != 8) && (bVar3 != 0xd)) goto LAB_0291593c;
    }
    if (bVar3 == bVar4) {
      return uVar7;
    }
    if (bVar4 < 8) {
      if ((bVar4 != 1) && (bVar4 != 3)) {
        return uVar7;
      }
      goto LAB_029157f0;
    }
    if (bVar4 == 0xd) goto LAB_02915754;
    goto LAB_029158dc;
  case 0xe:
    sVar5 = *(short *)(param_1 + 0xb6);
    uVar7 = 1 << (ulong)(*(byte *)(param_1 + 0xb8) & 0x1f);
    uVar6 = 0xfffffffe;
    if (sVar5 != 0x2f) {
      uVar6 = 0xffffffff;
    }
    uVar10 = (uint)(sVar5 != 0x2f);
    if ((uVar7 & 0x8810) == 0) {
      uVar10 = -(uint)(sVar5 == 0x2f);
    }
    if ((uVar7 & 0x4700) == 0) {
      uVar6 = uVar10;
    }
    uVar7 = -(uint)(sVar5 == 0x2f);
    if (*(byte *)(param_1 + 0xb8) < 0x10) {
      uVar7 = uVar6;
    }
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb);
    uVar7 = uVar7 + (uVar6 & 1);
    bVar3 = *(byte *)(param_1 + 0xb9);
    if (*(byte *)(param_1 + 0xb8) == bVar3) {
      return uVar7;
    }
    if (0xf < bVar3) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar3 & 0x1f);
    if ((uVar6 & 0x4700) != 0) goto LAB_02915754;
    uVar6 = uVar6 & 0x8810;
    goto joined_r0x029154ec;
  case 0xf:
    bVar3 = *(byte *)(param_1 + 0xb8);
    if (bVar3 == 0x11) {
      return 0xfffffff6;
    }
    bVar4 = *(byte *)(param_1 + 0xb9);
    if (bVar4 == 0x11) {
      return 0xfffffff6;
    }
    uVar7 = (uint)(bVar3 == 0xf);
    if (bVar3 == 8) {
      uVar7 = 0xffffffff;
    }
    if (bVar3 == bVar4) {
      return uVar7;
    }
    if (bVar4 == 0xf) goto LAB_029157f0;
LAB_029158dc:
    if (bVar4 != 8) {
      return uVar7;
    }
    goto LAB_02915754;
  case 0x10:
    if (*(byte *)(param_1 + 0xb8) < 0x12) {
      uVar7 = 1 << (ulong)(*(byte *)(param_1 + 0xb8) & 0x1f);
      if ((uVar7 & 0x30002) == 0) {
        if ((uVar7 & 0x2080) == 0) goto LAB_029158f0;
        iVar11 = 1;
      }
      else {
        iVar11 = -1;
      }
    }
    else {
LAB_029158f0:
      iVar11 = 0;
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7);
    uVar7 = iVar11 + (uVar7 & 1);
    bVar3 = *(byte *)(param_1 + 0xb9);
    if (*(byte *)(param_1 + 0xb8) == bVar3) {
      return uVar7;
    }
    if (0x11 < bVar3) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar3 & 0x1f);
    if ((uVar6 & 0x30002) != 0) goto LAB_02915754;
    uVar10 = 0x2080;
    break;
  case 0x11:
    bVar3 = *(byte *)(param_1 + 0xb8);
    if (bVar3 < 0x11) {
      uVar7 = 1 << (ulong)(bVar3 & 0x1f);
      if ((uVar7 & 0x308) == 0) {
        if ((uVar7 & 0x18002) == 0) goto LAB_029158f8;
        uVar7 = 1;
      }
      else {
        uVar7 = 0xffffffff;
      }
    }
    else {
LAB_029158f8:
      uVar7 = 0;
    }
    bVar4 = *(byte *)(param_1 + 0xb9);
    if ((uint)bVar3 == (uint)bVar4) {
      return uVar7;
    }
    if (0x10 < bVar4) {
      return uVar7;
    }
    uVar6 = 1 << (ulong)(bVar4 & 0x1f);
    if ((uVar6 & 0x308) != 0) goto LAB_02915754;
    uVar10 = 0x8002;
LAB_029157e4:
    uVar10 = uVar10 | 0x10000;
    break;
  default:
    return 0;
  }
  uVar6 = uVar6 & uVar10;
joined_r0x029154ec:
  if (uVar6 == 0) {
    return uVar7;
  }
LAB_029157f0:
  return uVar7 + 1;
}


