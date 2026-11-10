/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002dc0ec; name: FUN_002dc0ec
 */


ulong FUN_002dc0ec(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,ulong *param_5,
                  uint param_6)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  ostream *this;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  int *piVar14;
  int *piVar15;
  undefined1 auStack_150 [8];
  ostream aoStack_148 [264];
  
  puVar3 = PTR_LAB_047cba48;
  if (*(char *)(param_1 + 0x48) != '\0') {
    return 0;
  }
  uVar12 = 0;
  switch(*param_2) {
  case 1:
    break;
  case 3:
    uVar12 = FUN_002dc008(param_1,*(undefined4 *)(param_2 + 0x18),*(ushort *)(param_2 + 2) & 1);
    return uVar12;
  case 4:
    if (*(int *)(param_2 + 0x18) != 0) {
      if (*(int *)(param_2 + 0x18) < 1) {
        return 0;
      }
      uVar12 = FUN_002dc008(param_1,**(undefined4 **)(param_2 + 0x20),*(ushort *)(param_2 + 2) & 1);
      uVar9 = uVar12 & 0xffffffff00000000;
      uVar12 = uVar12 & 0xffffffff;
      if (1 < *(int *)(param_2 + 0x18)) {
        lVar11 = 1;
        do {
          uVar4 = FUN_002dc008(param_1,*(undefined4 *)(*(long *)(param_2 + 0x20) + lVar11 * 4),
                               *(ushort *)(param_2 + 2) & 1);
          uVar12 = FUN_002d9f68(param_1,uVar12 | uVar9,uVar4);
          lVar11 = lVar11 + 1;
          uVar9 = uVar12 & 0xffffffff00000000;
          uVar12 = uVar12 & 0xffffffff;
        } while (lVar11 < *(int *)(param_2 + 0x18));
      }
      return uVar12 | uVar9;
    }
  case 2:
    uVar12 = FUN_002da5c8(param_1);
    return uVar12;
  case 5:
    uVar12 = *param_5;
    if (1 < (int)param_6) {
      lVar11 = (ulong)param_6 - 1;
      do {
        param_5 = param_5 + 1;
        uVar12 = FUN_002d9f68(param_1,uVar12,*param_5);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    break;
  case 6:
    uVar12 = *param_5;
    if (1 < (int)param_6) {
      lVar11 = (ulong)param_6 - 1;
      do {
        param_5 = param_5 + 1;
        uVar12 = FUN_002da0b8(param_1,uVar12,*param_5);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    break;
  case 7:
    uVar12 = FUN_002da268(param_1,*param_5,*(ushort *)(param_2 + 2) >> 6 & 1);
    return uVar12;
  case 8:
    uVar9 = *param_5;
    uVar12 = FUN_002da268(param_1,uVar9,*(ushort *)(param_2 + 2) >> 6 & 1);
    uVar12 = uVar12 & 0xffffffff00000000 | uVar9 & 0xffffffff;
    break;
  case 9:
    uVar12 = FUN_002da408(param_1,*param_5,*(ushort *)(param_2 + 2) >> 6 & 1);
    return uVar12;
  default:
    FUN_002cc810(auStack_150,"external/com_github_google_re2/re2/compile.cc",0x3df);
                    /* try { // try from 002dc328 to 002dc33f has its CatchHandler @ 002dc724 */
    this = std::__put_character_sequence<char,std::char_traits<char>>
                     (aoStack_148,"Missing case in Compiler: ",0x1a);
    std::ostream::operator<<(this,(uint)*param_2);
    goto LAB_002dc544;
  case 0xb:
    uVar12 = *param_5;
    if (-1 < *(int *)(param_2 + 0x18)) {
      uVar12 = FUN_002da9f0(param_1,uVar12);
      return uVar12;
    }
    break;
  case 0xc:
    if (*(long *)(param_1 + 0x90) != 0) {
      plVar5 = *(long **)(param_1 + 0x88);
      while (plVar5 != (long *)0x0) {
        plVar5 = (long *)*plVar5;
        FUN_0049e790(puVar3);
      }
      uVar12 = *(ulong *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (uVar12 != 0) {
        uVar9 = uVar12 & 3;
        if (uVar12 - 1 < 3) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          do {
            lVar11 = uVar10 * 8;
            uVar10 = uVar10 + 4;
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar11) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar11 + 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar11 + 0x10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar11 + 0x18) = 0;
          } while ((uVar12 & 0xfffffffffffffffc) != uVar10);
        }
        if (uVar9 != 0) {
          lVar11 = uVar10 << 3;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar11) = 0;
            uVar9 = uVar9 - 1;
            lVar11 = lVar11 + 8;
          } while (uVar9 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_002db70c(param_1,0,&DAT_0010ffff,0);
    uVar12 = *(ulong *)(param_1 + 0xa0);
    break;
  case 0xd:
    uVar12 = FUN_002da6c4(param_1,0,0xff,0);
    return uVar12;
  case 0xe:
    uVar6 = 1;
    if (*(char *)(param_1 + 0x50) != '\0') {
      uVar6 = 2;
    }
    goto LAB_002dc454;
  case 0xf:
    uVar6 = 1;
    if (*(char *)(param_1 + 0x50) == '\0') {
      uVar6 = 2;
    }
    goto LAB_002dc454;
  case 0x10:
    uVar6 = 0x10;
    goto LAB_002dc454;
  case 0x11:
    uVar6 = 0x20;
    goto LAB_002dc454;
  case 0x12:
    cVar2 = *(char *)(param_1 + 0x50);
    uVar7 = 8;
    uVar6 = 4;
    goto LAB_002dc44c;
  case 0x13:
    cVar2 = *(char *)(param_1 + 0x50);
    uVar7 = 4;
    uVar6 = 8;
LAB_002dc44c:
    if (cVar2 != '\0') {
      uVar6 = uVar7;
    }
LAB_002dc454:
    uVar12 = FUN_002da8e4(param_1,uVar6);
    return uVar12;
  case 0x14:
    pcVar13 = *(char **)(param_2 + 0x18);
    if (*(int *)(pcVar13 + 4) != 0) {
      cVar2 = *pcVar13;
      if (*(long *)(param_1 + 0x90) != 0) {
        plVar5 = *(long **)(param_1 + 0x88);
        while (plVar5 != (long *)0x0) {
          plVar5 = (long *)*plVar5;
          FUN_0049e790(puVar3);
        }
        uVar12 = *(ulong *)(param_1 + 0x80);
        *(undefined8 *)(param_1 + 0x88) = 0;
        if (uVar12 != 0) {
          uVar9 = uVar12 & 3;
          if (uVar12 - 1 < 3) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              lVar11 = uVar10 * 8;
              uVar10 = uVar10 + 4;
              *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar11) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar11 + 8) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar11 + 0x10) = 0;
              *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar11 + 0x18) = 0;
            } while ((uVar12 & 0xfffffffffffffffc) != uVar10);
          }
          if (uVar9 != 0) {
            lVar11 = uVar10 << 3;
            do {
              *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar11) = 0;
              uVar9 = uVar9 - 1;
              lVar11 = lVar11 + 8;
            } while (uVar9 != 0);
          }
        }
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
      *(undefined8 *)(param_1 + 0xa0) = 0;
      iVar8 = *(int *)(pcVar13 + 0x10);
      if (iVar8 != 0) {
        piVar14 = *(int **)(pcVar13 + 8);
        if (cVar2 == '\0') {
          do {
            piVar15 = piVar14 + 2;
            FUN_002db70c(param_1,*piVar14,piVar14[1],0);
            piVar14 = piVar15;
          } while (piVar15 != (int *)(*(long *)(pcVar13 + 8) + (long)*(int *)(pcVar13 + 0x10) * 8));
        }
        else {
          piVar15 = piVar14;
          do {
            iVar1 = *piVar14;
            if (iVar1 < 0x41) {
LAB_002dc6b0:
              iVar8 = piVar14[1];
              if ((iVar8 < 0x7a) && (iVar1 < 0x7b)) {
LAB_002dc6d4:
                if ((iVar8 < 0x41) || ((uVar4 = 1, 0x5a < iVar1 && (iVar8 < 0x61))))
                goto LAB_002dc66c;
              }
              else {
LAB_002dc66c:
                uVar4 = 0;
              }
              FUN_002db70c(param_1,iVar1,iVar8,uVar4);
              piVar15 = *(int **)(pcVar13 + 8);
              iVar8 = *(int *)(pcVar13 + 0x10);
            }
            else if (0x5a < piVar14[1]) {
              if (iVar1 < 0x42) goto LAB_002dc6b0;
              iVar8 = piVar14[1];
              if (iVar1 < 0x7b) goto LAB_002dc6d4;
              goto LAB_002dc66c;
            }
            piVar14 = piVar14 + 2;
          } while (piVar14 != piVar15 + (long)iVar8 * 2);
        }
      }
      return *(ulong *)(param_1 + 0xa0);
    }
    FUN_002cc810(auStack_150,"external/com_github_google_re2/re2/compile.cc",0x3a5);
                    /* try { // try from 002dc534 to 002dc543 has its CatchHandler @ 002dc720 */
    std::__put_character_sequence<char,std::char_traits<char>>
              (aoStack_148,"No ranges in char class",0x17);
LAB_002dc544:
    FUN_002cc97c(auStack_150);
    uVar12 = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
    break;
  case 0x15:
    uVar12 = FUN_002da7e8(param_1,*(undefined4 *)(param_2 + 0x18));
    if (*(int *)(param_1 + 0xa8) == 2) {
      uVar4 = FUN_002da8e4(param_1,8);
      uVar12 = FUN_002d9f68(param_1,uVar4,uVar12);
      return uVar12;
    }
  }
  return uVar12;
}


