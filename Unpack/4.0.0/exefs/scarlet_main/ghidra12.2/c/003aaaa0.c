/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003aaaa0; name: FUN_003aaaa0
 */


ulong FUN_003aaaa0(long param_1,undefined4 param_2,ulong param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  size_t sVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ushort *puVar11;
  uint local_24;
  
  iVar2 = 0;
  switch(param_2) {
  case 3:
    if (param_4 == (uint *)0x0) {
      uVar10 = 0x43;
      uVar8 = 0xd5c;
    }
    else {
      lVar9 = FUN_0043def0();
      iVar2 = FUN_0043e700(lVar9,param_4);
      if (iVar2 < 1) {
        FUN_0043e1f0(lVar9);
      }
      else if (lVar9 != 0) {
        uVar1 = FUN_0043dbd0(lVar9);
        iVar2 = FUN_003af490(param_1,0x40007,uVar1,0,lVar9);
        if (iVar2 == 0) {
          FUN_004806c0(0x14,0xd5,0x18a,"external/openssl/ssl/s3_lib.c",0xd66);
          FUN_0043e1f0(lVar9);
          return 0;
        }
        FUN_0043e1f0(*(undefined8 *)(*(long *)(param_1 + 0x550) + 8));
        *(long *)(*(long *)(param_1 + 0x550) + 8) = lVar9;
        iVar2 = 1;
        break;
      }
      uVar10 = 0x41;
      uVar8 = 0xd61;
    }
    goto LAB_003ab0b8;
  case 4:
    if (param_4 == (uint *)0x0) {
      uVar10 = 0x43;
      uVar8 = 0xd7f;
      goto LAB_003ab0b8;
    }
    lVar9 = FUN_0040c210(param_4);
    if (lVar9 == 0) {
      uVar8 = 0xd84;
      uVar10 = 0x7c;
      goto LAB_003ab0b8;
    }
    local_24 = FUN_0040d580();
    if (local_24 == 0) {
      return 0;
    }
    param_4 = &local_24;
    param_3 = 1;
    goto LAB_003aad14;
  case 6:
    uVar10 = 0x42;
    uVar8 = 0xd71;
    goto LAB_003ab0b8;
  case 10:
    iVar2 = *(int *)(*(long *)(param_1 + 0xa8) + 0x10c);
    break;
  case 0xb:
    iVar2 = *(int *)(*(long *)(param_1 + 0xa8) + 0x10c);
    *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x10c) = 0;
    break;
  case 0xc:
    iVar2 = *(int *)(*(long *)(param_1 + 0xa8) + 0x108);
    break;
  case 0xd:
    iVar2 = **(int **)(param_1 + 0xa8);
    break;
  case 0x37:
    if (param_3 == 0) {
      FUN_00452f80(*(undefined8 *)(param_1 + 0x700),"external/openssl/ssl/s3_lib.c",0xd9d);
      *(undefined8 *)(param_1 + 0x700) = 0;
      if (param_4 != (uint *)0x0) {
        sVar7 = strlen((char *)param_4);
        if (0xfe < sVar7 - 1) {
          uVar10 = 0x13f;
          uVar8 = 0xda5;
          goto LAB_003ab0b8;
        }
        lVar9 = FUN_0045abd0(param_4,"external/openssl/ssl/s3_lib.c",0xda8);
        *(long *)(param_1 + 0x700) = lVar9;
        if (lVar9 == 0) {
          uVar10 = 0x44;
          uVar8 = 0xda9;
          goto LAB_003ab0b8;
        }
      }
      iVar2 = 1;
      break;
    }
    uVar10 = 0x140;
    uVar8 = 0xdad;
LAB_003ab0b8:
    FUN_004806c0(0x14,0xd5,uVar10,"external/openssl/ssl/s3_lib.c",uVar8);
    return 0;
  case 0x39:
    *(uint **)(param_1 + 0x6f8) = param_4;
    iVar2 = 1;
    break;
  case 0x41:
    *(int *)(param_1 + 0x708) = (int)param_3;
    iVar2 = 1;
    break;
  case 0x42:
    uVar10 = *(undefined8 *)(param_1 + 0x728);
    goto LAB_003aaee8;
  case 0x43:
    *(uint **)(param_1 + 0x728) = param_4;
    iVar2 = 1;
    break;
  case 0x44:
    uVar10 = *(undefined8 *)(param_1 + 0x720);
    goto LAB_003aaee8;
  case 0x45:
    *(uint **)(param_1 + 0x720) = param_4;
    iVar2 = 1;
    break;
  case 0x46:
    *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x730);
    uVar4 = *(ulong *)(param_1 + 0x738);
    if ((long)uVar4 < 1) {
      uVar4 = 0xffffffffffffffff;
    }
    return uVar4;
  case 0x47:
    FUN_00452f80(*(undefined8 *)(param_1 + 0x730),"external/openssl/ssl/s3_lib.c",0xddb);
    *(uint **)(param_1 + 0x730) = param_4;
    iVar2 = 1;
    *(ulong *)(param_1 + 0x738) = param_3;
    break;
  case 0x58:
    if (param_3 == 0) {
      iVar2 = FUN_003ae490(param_1,0,param_4);
    }
    else {
      iVar2 = FUN_003ae570();
    }
    goto LAB_003ab054;
  case 0x59:
    if (param_3 == 0) {
      iVar2 = FUN_003ae5f0(param_1,0,param_4);
    }
    else {
      iVar2 = FUN_003ae690();
    }
    goto LAB_003ab054;
  case 0x5a:
    if (*(long *)(param_1 + 0x5d0) == 0) {
      return 0;
    }
    lVar9 = *(long *)(param_1 + 0x778);
    if ((param_4 != (uint *)0x0) && (lVar9 != 0)) {
      puVar11 = *(ushort **)(param_1 + 0x780);
      lVar6 = lVar9;
      do {
        while (puVar3 = (uint *)FUN_003d55e0(*puVar11), puVar3 == (uint *)0x0) {
          lVar6 = lVar6 + -1;
          *param_4 = *puVar11 | 0x1000000;
          param_4 = param_4 + 1;
          puVar11 = puVar11 + 1;
          if (lVar6 == 0) goto LAB_003aacf0;
        }
        lVar6 = lVar6 + -1;
        *param_4 = *puVar3;
        param_4 = param_4 + 1;
        puVar11 = puVar11 + 1;
      } while (lVar6 != 0);
    }
LAB_003aacf0:
    return (long)(int)lVar9;
  case 0x5b:
LAB_003aad14:
    iVar2 = FUN_003d5960(param_1 + 0x770,param_1 + 0x768,param_4,param_3);
    goto LAB_003ab054;
  case 0x5c:
    iVar2 = FUN_003d5a90(param_1 + 0x770,param_1 + 0x768,param_4);
    goto LAB_003ab054;
  case 0x5d:
    uVar4 = FUN_003d5710(param_1,param_3 & 0xffffffff);
    if (param_3 == 0xffffffffffffffff) {
      return uVar4 & 0xffff;
    }
    piVar5 = (int *)FUN_003d55e0();
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    return (long)*piVar5;
  case 0x61:
    uVar10 = *(undefined8 *)(param_1 + 0x550);
    uVar8 = 0;
    goto LAB_003aad94;
  case 0x62:
    uVar10 = *(undefined8 *)(param_1 + 0x550);
    uVar8 = 0;
    goto LAB_003aada8;
  case 0x65:
    uVar10 = *(undefined8 *)(param_1 + 0x550);
    uVar8 = 1;
LAB_003aad94:
    iVar2 = FUN_003d8910(uVar10,param_4,param_3,uVar8);
    goto LAB_003ab054;
  case 0x66:
    uVar10 = *(undefined8 *)(param_1 + 0x550);
    uVar8 = 1;
LAB_003aada8:
    iVar2 = FUN_003d7ff0(uVar10,param_4,uVar8);
    goto LAB_003ab054;
  case 0x67:
    if (*(int *)(param_1 + 0x38) != 0) {
      return 0;
    }
    lVar9 = *(long *)(param_1 + 0xa8);
    if (*(int *)(lVar9 + 0x248) == 0) {
      return 0;
    }
    if (param_4 != (uint *)0x0) {
      *(undefined8 *)param_4 = *(undefined8 *)(lVar9 + 0x250);
      lVar9 = *(long *)(param_1 + 0xa8);
    }
    return *(ulong *)(lVar9 + 600);
  case 0x68:
    if (*(int *)(param_1 + 0x38) == 0) {
      return 0;
    }
    lVar9 = *(long *)(param_1 + 0x550);
    FUN_00452f80(*(undefined8 *)(lVar9 + 0x188),"external/openssl/ssl/s3_lib.c",0x1120);
    *(undefined8 *)(lVar9 + 0x188) = 0;
    *(undefined8 *)(lVar9 + 400) = 0;
    if (param_3 == 0) {
      return 1;
    }
    if (param_4 == (uint *)0x0) {
      return 1;
    }
    if (0xff < param_3) {
      return 0;
    }
    lVar6 = FUN_0045ace0(param_4,param_3,"external/openssl/ssl/s3_lib.c",0x1127);
    *(long *)(lVar9 + 0x188) = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    *(ulong *)(lVar9 + 400) = param_3;
    return 1;
  case 0x69:
    iVar2 = FUN_003af090(param_1,0,param_3 & 0xffffffff);
    goto LAB_003ab054;
  case 0x6a:
    uVar10 = *(undefined8 *)(param_1 + 0x550);
    uVar8 = 0;
    goto LAB_003aae7c;
  case 0x6b:
    uVar10 = *(undefined8 *)(param_1 + 0x550);
    uVar8 = 1;
LAB_003aae7c:
    iVar2 = FUN_003af3e0(uVar10,param_4,uVar8,param_3 & 0xffffffff);
    goto LAB_003ab054;
  case 0x6c:
    lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + 0x308);
    goto joined_r0x003aaf6c;
  case 0x6d:
    if (*(long *)(param_1 + 0x5d0) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 0xa8) + 0x408) == 0) {
      return 0;
    }
    FUN_0043dfc0();
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x408);
    goto LAB_003aaf9c;
  case 0x6f:
    if (*(long *)(param_1 + 0x760) == 0) {
      return 0;
    }
    *(long *)param_4 = *(long *)(param_1 + 0x760);
    return (long)*(int *)(param_1 + 0x758);
  case 0x73:
    uVar10 = *(undefined8 *)(**(long **)(param_1 + 0x550) + 0x10);
LAB_003aaee8:
    *(undefined8 *)param_4 = uVar10;
    iVar2 = 1;
    break;
  case 0x74:
    iVar2 = FUN_003ae740(*(undefined8 *)(param_1 + 0x550),param_4);
    goto LAB_003ab054;
  case 0x75:
    if (param_3 == 3) {
      if (*(int *)(param_1 + 0x38) == 0) {
        return 0;
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
      if (lVar9 == 0) {
        return 0;
      }
      if ((*(byte *)(lVar9 + 0x20) & 0x44) != 0) {
        return 2;
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2e0);
      if (lVar9 == 0) {
        return 0;
      }
      **(long **)(param_1 + 0x550) = lVar9;
      return 1;
    }
    iVar2 = FUN_003ae9c0(*(undefined8 *)(param_1 + 0x550),param_3);
LAB_003ab054:
    return (long)iVar2;
  case 0x76:
    *(int *)(*(long *)(param_1 + 0x550) + 0x18) = (int)param_3;
    return 1;
  case 0x7f:
    iVar2 = *(int *)(param_1 + 0x708);
    break;
  case 0x84:
    lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2d8);
joined_r0x003aaf6c:
    if (lVar9 == 0) {
      return 0;
    }
    *param_4 = *(uint *)(lVar9 + 0xc);
    return 1;
  case 0x85:
    if (*(long *)(param_1 + 0x5d0) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 0xa8) + 0x240) == 0) {
      return 0;
    }
    FUN_0043dfc0();
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x240);
LAB_003aaf9c:
    *(undefined8 *)param_4 = uVar10;
    return 1;
  }
  return (long)iVar2;
}


