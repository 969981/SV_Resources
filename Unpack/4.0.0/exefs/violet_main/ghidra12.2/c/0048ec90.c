/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048ec90; name: FUN_0048ec90
 */


uint FUN_0048ec90(void *param_1,void *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong __n;
  
  __n = (ulong)param_3;
  iVar6 = memcmp(param_1,param_2,__n);
  if (0 < iVar6) {
    if ((int)param_3 < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        if (*(char *)((long)param_1 + uVar8) != *(char *)((long)param_2 + uVar8)) goto LAB_0048ed04;
        uVar8 = uVar8 + 1;
      } while (__n != uVar8);
      uVar8 = __n;
    }
LAB_0048ed04:
    uVar9 = param_3 & (int)param_3 >> 0x1f;
    iVar6 = uVar9 - 1;
    lVar10 = (long)(int)param_3;
    do {
      lVar3 = lVar10 + -1;
      iVar7 = (int)uVar8;
      if (lVar10 < 1) goto joined_r0x0048ed68;
      if (*(char *)((long)param_1 + lVar10 + -1) != '\0') {
        uVar9 = (uint)lVar10;
        iVar6 = uVar9 - 1;
        goto joined_r0x0048ed68;
      }
      lVar5 = lVar10 + -1;
      lVar10 = lVar3;
    } while (*(char *)((long)param_2 + lVar5) == -1);
    iVar6 = (int)lVar3;
    uVar9 = iVar6 + 1;
joined_r0x0048ed68:
    if (iVar7 < iVar6) {
      return 0xffffffff;
    }
    if ((int)uVar9 <= iVar7) {
      return iVar7 << 3;
    }
    bVar1 = *(byte *)((long)param_1 + (uVar8 & 0xffffffff));
    bVar2 = *(byte *)((long)param_2 + (uVar8 & 0xffffffff));
    bVar4 = bVar2 ^ bVar1;
    uVar9 = 7;
    switch(bVar4) {
    case 1:
      break;
    case 2:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
      goto switchD_0048edac_caseD_2;
    case 3:
      uVar9 = 6;
      break;
    case 7:
      uVar9 = 5;
      break;
    case 0xf:
      uVar9 = 4;
      break;
    case 0x1f:
      uVar9 = 3;
      break;
    default:
      if (bVar4 == 0x3f) {
        uVar9 = 2;
      }
      else {
        if (bVar4 != 0x7f) {
          return 0xffffffff;
        }
        uVar9 = 1;
      }
    }
    if (((bVar4 & bVar1) == 0) && ((bVar4 & bVar2) == bVar4)) {
      return uVar9 | iVar7 << 3;
    }
  }
switchD_0048edac_caseD_2:
  return 0xffffffff;
}


