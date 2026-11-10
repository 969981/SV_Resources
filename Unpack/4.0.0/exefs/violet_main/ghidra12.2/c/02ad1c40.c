/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ad1c40; name: FUN_02ad1c40
 */


bool FUN_02ad1c40(uint *param_1,uint *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 extraout_x10;
  undefined8 uVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  uint *puVar19;
  uint *puVar20;
  
  switch(((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    puVar19 = param_2 + -0xc;
    if (*puVar19 < *param_1) {
      uVar13 = *(undefined8 *)param_1;
      uVar17 = *(undefined8 *)(param_1 + 2);
      uVar15 = *(undefined8 *)(param_1 + 4);
      uVar2 = *(undefined8 *)(param_1 + 6);
      cVar8 = (char)param_1[8];
      uVar3 = *(undefined8 *)(param_2 + -6);
      uVar12 = *(undefined8 *)(param_1 + 9);
      uVar16 = *(undefined8 *)puVar19;
      uVar4 = *(undefined8 *)(param_2 + -10);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_1 + 6) = uVar3;
      uVar5 = param_1[0xb];
      *(undefined8 *)param_1 = uVar16;
      *(undefined8 *)(param_1 + 2) = uVar4;
      if (cVar8 == '\0') {
        if ((char)param_2[-4] != '\0') {
          *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + -3);
          *(undefined1 *)(param_1 + 8) = 1;
        }
      }
      else if ((char)param_2[-4] == '\0') {
        *(undefined1 *)(param_1 + 8) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + -3);
      }
      *(char *)(param_1 + 0xb) = (char)param_2[-1];
      *(undefined8 *)(param_2 + -8) = uVar15;
      *(undefined8 *)(param_2 + -6) = uVar2;
      *(undefined8 *)puVar19 = uVar13;
      *(undefined8 *)(param_2 + -10) = uVar17;
      if ((char)param_2[-4] == '\0') {
        if (cVar8 != '\0') {
          *(undefined8 *)(param_2 + -3) = uVar12;
          *(undefined1 *)(param_2 + -4) = 1;
        }
      }
      else if (cVar8 == '\0') {
        *(undefined1 *)(param_2 + -4) = 0;
      }
      else {
        *(undefined8 *)(param_2 + -3) = uVar12;
      }
      *(char *)(param_2 + -1) = (char)uVar5;
    }
    break;
  case 3:
    FUN_02ad12c0(param_1,param_1 + 0xc,param_2 + -0xc,param_3);
    break;
  case 4:
    FUN_02ad1670(param_1,param_1 + 0xc,param_1 + 0x18,param_2 + -0xc,param_3);
    break;
  case 5:
    FUN_02ad18f0(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,param_2 + -0xc);
    break;
  default:
    FUN_02ad12c0(param_1,param_1 + 0xc,param_1 + 0x18,param_3);
    if (param_1 + 0x24 == param_2) {
      return true;
    }
    lVar10 = 0;
    iVar11 = 0;
    uVar13 = extraout_x10;
    puVar19 = param_1 + 0x24;
    puVar20 = param_1 + 0x18;
    do {
      puVar14 = puVar19;
      uVar5 = *puVar14;
      if (uVar5 < *puVar20) {
        uVar15 = *(undefined8 *)(puVar14 + 1);
        uVar16 = *(undefined8 *)(puVar14 + 3);
        uVar17 = *(undefined8 *)(puVar14 + 5);
        uVar6 = puVar14[7];
        cVar8 = (char)puVar14[8];
        bVar1 = cVar8 != '\0';
        if (bVar1) {
          uVar13 = *(undefined8 *)(puVar14 + 9);
        }
        uVar9 = puVar14[0xb];
        lVar18 = lVar10;
        while( true ) {
          cVar7 = *(char *)((long)param_1 + lVar18 + 0x80);
          *(undefined8 *)((long)param_1 + lVar18 + 0x90) =
               *(undefined8 *)((long)param_1 + lVar18 + 0x60);
          *(undefined8 *)((long)param_1 + lVar18 + 0x98) =
               *(undefined8 *)((long)param_1 + lVar18 + 0x68);
          *(undefined8 *)((long)param_1 + lVar18 + 0xa0) =
               *(undefined8 *)((long)param_1 + lVar18 + 0x70);
          *(undefined8 *)((long)param_1 + lVar18 + 0xa8) =
               *(undefined8 *)((long)param_1 + lVar18 + 0x78);
          if (cVar8 == '\0') {
            if (cVar7 != '\0') {
              *(undefined8 *)((long)param_1 + lVar18 + 0xb4) =
                   *(undefined8 *)((long)param_1 + lVar18 + 0x84);
              *(undefined1 *)((long)param_1 + lVar18 + 0xb0) = 1;
            }
          }
          else if (cVar7 == '\0') {
            *(undefined1 *)((long)param_1 + lVar18 + 0xb0) = 0;
          }
          else {
            *(undefined8 *)((long)param_1 + lVar18 + 0xb4) =
                 *(undefined8 *)((long)param_1 + lVar18 + 0x84);
          }
          *(undefined1 *)((long)param_1 + lVar18 + 0xbc) =
               *(undefined1 *)((long)param_1 + lVar18 + 0x8c);
          if (lVar18 == -0x60) {
            puVar19 = param_1;
            goto LAB_02ad1dec;
          }
          if (*(uint *)((long)param_1 + lVar18 + 0x30) <= uVar5) break;
          cVar8 = *(char *)((long)param_1 + lVar18 + 0x80);
          lVar18 = lVar18 + -0x30;
        }
        puVar19 = (uint *)((long)param_1 + lVar18 + 0x60);
LAB_02ad1dec:
        *puVar19 = uVar5;
        *(undefined8 *)(puVar19 + 1) = uVar15;
        puVar19[7] = uVar6;
        *(undefined8 *)(puVar19 + 5) = uVar17;
        *(undefined8 *)(puVar19 + 3) = uVar16;
        if ((char)puVar19[8] == '\0') {
          if (bVar1) {
            *(undefined8 *)(puVar19 + 9) = uVar13;
            *(undefined1 *)(puVar19 + 8) = 1;
          }
        }
        else if (bVar1) {
          *(undefined8 *)(puVar19 + 9) = uVar13;
        }
        else {
          *(undefined1 *)(puVar19 + 8) = 0;
        }
        iVar11 = iVar11 + 1;
        *(char *)(puVar19 + 0xb) = (char)uVar9;
        if (iVar11 == 8) {
          return puVar14 + 0xc == param_2;
        }
      }
      lVar10 = lVar10 + 0x30;
      puVar19 = puVar14 + 0xc;
      puVar20 = puVar14;
    } while (puVar14 + 0xc != param_2);
  }
  return true;
}


