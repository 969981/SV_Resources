/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012428a4; name: FUN_012428a4
 */


void FUN_012428a4(long param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  ulong uVar16;
  undefined1 auStack_68 [8];
  undefined2 local_60 [4];
  char local_58 [8];
  undefined2 local_50 [4];
  char local_48 [8];
  undefined2 local_40 [4];
  undefined1 auStack_38 [8];
  undefined2 local_18 [4];
  
  lVar4 = *(long *)(param_1 + 0x40);
  cVar5 = *(char *)(lVar4 + 0x88);
  cVar6 = '\x16';
  cVar8 = '\x15';
  cVar9 = '\x14';
  cVar10 = '\x10';
  cVar11 = '\r';
  cVar12 = '\f';
  cVar13 = '\v';
  cVar14 = '\n';
  cVar15 = '\t';
  switch(cVar5) {
  case '\0':
    FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xb2,0);
    *(char *)(*(long *)(param_1 + 0x40) + 0x88) =
         *(char *)(*(long *)(param_1 + 0x40) + 0x88) + '\x01';
    break;
  case '\x01':
    break;
  case '\x02':
    goto switchD_01242904_caseD_2;
  case '\x03':
    goto switchD_01242904_caseD_3;
  case '\x04':
    goto switchD_01242904_caseD_4;
  case '\x05':
    goto switchD_01242904_caseD_5;
  case '\x06':
    goto switchD_01242904_caseD_6;
  case '\a':
    goto switchD_01242904_caseD_7;
  case '\b':
    goto switchD_01242904_caseD_8;
  case '\t':
    goto switchD_01242904_caseD_9;
  case '\n':
    goto switchD_01242904_caseD_a;
  case '\v':
    goto switchD_01242904_caseD_b;
  case '\f':
    goto switchD_01242904_caseD_c;
  case '\r':
    goto switchD_01242904_caseD_d;
  case '\x0e':
    goto switchD_01242904_caseD_e;
  case '\x0f':
    goto switchD_01242904_caseD_f;
  case '\x10':
    goto switchD_01242904_caseD_10;
  case '\x11':
    goto switchD_01242904_caseD_11;
  case '\x12':
    goto switchD_01242904_caseD_12;
  case '\x13':
    goto switchD_01242904_caseD_13;
  case '\x14':
    goto switchD_01242904_caseD_14;
  case '\x15':
    goto switchD_01242904_caseD_15;
  case '\x16':
    goto switchD_01242904_caseD_16;
  default:
    goto switchD_01242904_default;
  }
  FUN_012502bc(param_1);
  *(char *)(*(long *)(param_1 + 0x40) + 0x88) = *(char *)(*(long *)(param_1 + 0x40) + 0x88) + '\x01'
  ;
  lVar4 = *(long *)(param_1 + 0x40);
  cVar5 = *(char *)(lVar4 + 0x88);
switchD_01242904_caseD_2:
  *(char *)(lVar4 + 0x88) = cVar5 + '\x01';
  uVar3 = FUN_01243624(param_1);
  if ((uVar3 & 1) == 0) {
switchD_01242904_caseD_3:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) {
      FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xc5,0);
    }
    *(char *)(*(long *)(param_1 + 0x40) + 0x88) =
         *(char *)(*(long *)(param_1 + 0x40) + 0x88) + '\x01';
    uVar3 = FUN_01242f98(param_1);
    if ((uVar3 & 1) != 0) {
LAB_01242c3c:
      uVar16 = 0;
      goto LAB_01242c40;
    }
    lVar4 = *(long *)(param_1 + 0x40);
    cVar5 = *(char *)(lVar4 + 0x88);
switchD_01242904_caseD_4:
    *(char *)(lVar4 + 0x88) = cVar5 + '\x01';
    uVar3 = FUN_0124a808(param_1);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x40);
      if (**(char **)(lVar4 + 0x28) == '\b') {
LAB_01242cf8:
        uVar16 = 4;
        goto LAB_01242c40;
      }
      cVar5 = *(char *)(lVar4 + 0x88);
switchD_01242904_caseD_5:
      *(char *)(lVar4 + 0x88) = cVar5 + '\x01';
      if (*(char *)(*(long *)(param_1 + 0x50) + 0x1b) != '\0') {
        FUN_01245240(param_1);
LAB_01242d18:
        bVar2 = true;
        uVar16 = 1;
        goto LAB_01242c44;
      }
switchD_01242904_caseD_6:
      FUN_01243158(param_1);
      *(char *)(*(long *)(param_1 + 0x40) + 0x88) =
           *(char *)(*(long *)(param_1 + 0x40) + 0x88) + '\x01';
      lVar4 = *(long *)(param_1 + 0x40);
      cVar5 = *(char *)(lVar4 + 0x88);
switchD_01242904_caseD_7:
      *(char *)(lVar4 + 0x88) = cVar5 + '\x01';
      local_50[0] = 0x99;
      FUN_012449f4(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x18c0),local_58,local_50);
      if (local_58[0] != '\0') goto LAB_01242c3c;
      lVar4 = *(long *)(param_1 + 0x40);
      cVar15 = *(char *)(lVar4 + 0x88) + '\x01';
switchD_01242904_caseD_8:
      *(char *)(lVar4 + 0x88) = cVar15;
      uVar3 = FUN_0124a808(param_1);
      if ((uVar3 & 1) == 0) {
        lVar4 = *(long *)(param_1 + 0x40);
        if (**(char **)(lVar4 + 0x28) == '\b') goto LAB_01242cf8;
        cVar14 = *(char *)(lVar4 + 0x88) + '\x01';
switchD_01242904_caseD_9:
        *(char *)(lVar4 + 0x88) = cVar14;
        if (*(char *)(*(long *)(param_1 + 0x50) + 0x1b) != '\0') goto LAB_01242d18;
        lVar4 = *(long *)(param_1 + 0x40);
        cVar13 = *(char *)(lVar4 + 0x88) + '\x01';
switchD_01242904_caseD_a:
        *(char *)(lVar4 + 0x88) = cVar13;
        uVar3 = FUN_0124335c(param_1);
        if ((uVar3 & 1) != 0) goto LAB_01242c3c;
        lVar4 = *(long *)(param_1 + 0x40);
        cVar12 = *(char *)(lVar4 + 0x88) + '\x01';
switchD_01242904_caseD_b:
        *(char *)(lVar4 + 0x88) = cVar12;
        uVar3 = FUN_0124a808(param_1);
        if ((uVar3 & 1) == 0) {
          lVar4 = *(long *)(param_1 + 0x40);
          if (**(char **)(lVar4 + 0x28) == '\b') goto LAB_01242cf8;
          cVar11 = *(char *)(lVar4 + 0x88) + '\x01';
switchD_01242904_caseD_c:
          *(char *)(lVar4 + 0x88) = cVar11;
          if (*(char *)(*(long *)(param_1 + 0x50) + 0x1b) != '\0') goto LAB_01242d18;
switchD_01242904_caseD_d:
          FUN_0124318c(param_1);
          *(char *)(*(long *)(param_1 + 0x40) + 0x88) =
               *(char *)(*(long *)(param_1 + 0x40) + 0x88) + '\x01';
switchD_01242904_caseD_e:
          FUN_01242f64(param_1);
          *(char *)(*(long *)(param_1 + 0x40) + 0x88) =
               *(char *)(*(long *)(param_1 + 0x40) + 0x88) + '\x01';
          lVar4 = *(long *)(param_1 + 0x40);
          cVar10 = *(char *)(lVar4 + 0x88) + '\x01';
switchD_01242904_caseD_f:
          *(char *)(lVar4 + 0x88) = cVar10;
          uVar1 = *(uint *)(*(long *)(param_1 + 0x68) + 0x7c);
          if (uVar1 != 0) {
            uVar3 = 0;
            pcVar7 = (char *)(*(long *)(param_1 + 0x68) + 0x5c);
            do {
              if ((uVar3 < 4) && (*pcVar7 == '\x01')) goto LAB_01242d90;
              uVar3 = uVar3 + 1;
              pcVar7 = pcVar7 + 8;
            } while (uVar1 != uVar3);
          }
switchD_01242904_caseD_10:
          *(char *)(*(long *)(param_1 + 0x40) + 0x88) =
               *(char *)(*(long *)(param_1 + 0x40) + 0x88) + '\x01';
switchD_01242904_caseD_11:
          FUN_01242d98(param_1);
          *(char *)(*(long *)(param_1 + 0x40) + 0x88) =
               *(char *)(*(long *)(param_1 + 0x40) + 0x88) + '\x01';
switchD_01242904_caseD_12:
          if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) &&
             (uVar3 = FUN_01249510(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x330)),
             (uVar3 & 1) != 0)) {
            FUN_012519ac(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1f80));
          }
          *(char *)(*(long *)(param_1 + 0x40) + 0x88) =
               *(char *)(*(long *)(param_1 + 0x40) + 0x88) + '\x01';
          lVar4 = *(long *)(param_1 + 0x40);
          cVar9 = *(char *)(lVar4 + 0x88) + '\x01';
switchD_01242904_caseD_13:
          *(char *)(lVar4 + 0x88) = cVar9;
          local_40[0] = 0x9a;
          FUN_012449f4(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x18c0),local_48,local_40);
          if (local_48[0] != '\0') goto LAB_01242c3c;
          lVar4 = *(long *)(param_1 + 0x40);
          cVar8 = *(char *)(lVar4 + 0x88) + '\x01';
switchD_01242904_caseD_14:
          *(char *)(lVar4 + 0x88) = cVar8;
          uVar3 = FUN_0124a808(param_1);
          if ((uVar3 & 1) == 0) {
            lVar4 = *(long *)(param_1 + 0x40);
            if (**(char **)(lVar4 + 0x28) == '\b') goto LAB_01242cf8;
            cVar6 = *(char *)(lVar4 + 0x88) + '\x01';
switchD_01242904_caseD_15:
            *(char *)(lVar4 + 0x88) = cVar6;
            if (*(char *)(*(long *)(param_1 + 0x50) + 0x1b) != '\0') goto LAB_01242d18;
switchD_01242904_caseD_16:
            local_18[0] = 0x9b;
            FUN_012449f4(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x18c0),auStack_38,local_18);
            *(char *)(*(long *)(param_1 + 0x40) + 0x88) =
                 *(char *)(*(long *)(param_1 + 0x40) + 0x88) + '\x01';
          }
        }
      }
    }
  }
  else {
    local_60[0] = 0xf4;
    FUN_012449f4(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x18c0),auStack_68,local_60);
    if (*(char *)(*(long *)(param_1 + 0x50) + 0x1b) != '\0') goto LAB_01242d18;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x68) + 0x7c);
    if (uVar1 != 0) {
      uVar3 = 0;
      pcVar7 = (char *)(*(long *)(param_1 + 0x68) + 0x5c);
      uVar16 = 0xffffffff;
      do {
        if ((uVar3 < 4) && (*pcVar7 == '\x01')) goto LAB_01242d90;
        uVar3 = uVar3 + 1;
        bVar2 = false;
        pcVar7 = pcVar7 + 8;
      } while (uVar1 != uVar3);
      goto LAB_01242c44;
    }
  }
switchD_01242904_default:
  bVar2 = false;
  uVar16 = 0xffffffff;
  goto LAB_01242c44;
LAB_01242d90:
  uVar16 = 2;
LAB_01242c40:
  bVar2 = true;
LAB_01242c44:
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) {
    FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xc5,1);
  }
  uVar3 = FUN_0124a808(param_1);
  if ((uVar3 & 1) == 0) {
    if (!bVar2) {
      return;
    }
    uVar3 = 0x805060104 >> ((uVar16 & 7) << 3);
  }
  else {
    uVar3 = 7;
  }
  FUN_0123fa5c(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x28),uVar3);
  return;
}


