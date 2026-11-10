/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00333de0; name: FUN_00333de0
 */


undefined8
FUN_00333de0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],int *param_5,long *param_6)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  long lVar7;
  char *__s;
  char *pcVar8;
  size_t sVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  int iVar21;
  int iVar20;
  int iVar22;
  undefined1 auVar19 [16];
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar29;
  undefined8 uVar28;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined8 uVar35;
  int iVar36;
  int iVar37;
  undefined8 uVar38;
  int iVar39;
  int iVar40;
  
  iVar30 = param_4._12_4_;
  iVar6 = param_4._8_4_;
  uVar28 = param_4._0_8_;
  iVar26 = param_3._12_4_;
  iVar25 = param_3._8_4_;
  uVar12 = param_3._0_8_;
  if (*param_5 != 4) {
    return 0;
  }
  bVar2 = *(byte *)(param_5 + 2);
  if ((bVar2 & 1) == 0) {
    uVar13 = (ulong)(bVar2 >> 1);
    if (*(byte *)((long)(param_5 + 2) + uVar13) != 0x73) {
      return 0;
    }
    lVar7 = (long)param_5 + 9;
  }
  else {
    uVar13 = *(ulong *)(param_5 + 4);
    lVar7 = *(long *)(param_5 + 6);
    if (*(char *)(uVar13 + lVar7 + -1) != 's') {
      return 0;
    }
  }
  __s = (char *)FUN_0038ccb0(lVar7);
  __s[uVar13 - 1] = '\0';
  pcVar8 = strchr(__s,0x2e);
  if (pcVar8 == (char *)0x0) {
    iVar5 = 0;
    goto LAB_00333ec0;
  }
  *pcVar8 = '\0';
                    /* try { // try from 00333e5c to 00333e63 has its CatchHandler @ 00333ffc */
  iVar5 = FUN_0038d390(pcVar8 + 1);
  if (iVar5 != -1) {
    sVar9 = strlen(pcVar8 + 1);
    iVar17 = (int)sVar9;
    if (iVar17 < 10) {
      if (iVar17 != 9) {
        uVar3 = 9 - iVar17;
        if ((int)uVar3 < 2) {
          uVar3 = 1;
        }
        if (uVar3 < 0x10) {
          uVar10 = 0;
        }
        else {
          iVar21 = 1;
          iVar17 = 1;
          iVar20 = 1;
          iVar22 = 1;
          iVar15 = 1;
          iVar16 = 1;
          uVar18 = 0x100000001;
          iVar14 = 1;
          uVar10 = uVar3 & 0x7ffffff0;
          uVar1 = (uVar10 - 0x10 >> 4) + 1;
          if (uVar10 - 0x10 == 0) {
            iVar31 = 10;
            iVar32 = 10;
            iVar33 = 10;
            iVar34 = 10;
            iVar36 = 10;
            iVar37 = 10;
            uVar35 = 0xa0000000a;
            iVar39 = 10;
            iVar40 = 10;
            uVar38 = 0xa0000000a;
          }
          else {
            iVar11 = -(uVar1 & 0x1ffffffe);
            uVar28 = uVar18;
            iVar6 = 1;
            iVar30 = 1;
            iVar25 = 1;
            iVar26 = 1;
            do {
              iVar37 = iVar26;
              iVar36 = iVar25;
              iVar40 = iVar30;
              iVar39 = iVar6;
              iVar34 = iVar22;
              iVar33 = iVar21;
              iVar32 = iVar20;
              iVar31 = iVar17;
              iVar5 = iVar5 * 100;
              iVar14 = iVar14 * 100;
              iVar15 = iVar15 * 100;
              iVar16 = iVar16 * 100;
              iVar11 = iVar11 + 2;
              iVar17 = iVar31 * 100;
              iVar20 = iVar32 * 100;
              iVar21 = iVar33 * 100;
              iVar22 = iVar34 * 100;
              iVar23 = (int)uVar18;
              iVar24 = (int)((ulong)uVar18 >> 0x20);
              uVar18 = CONCAT44(iVar24 * 100,iVar23 * 100);
              iVar25 = iVar36 * 100;
              iVar26 = iVar37 * 100;
              iVar27 = (int)uVar28;
              iVar29 = (int)((ulong)uVar28 >> 0x20);
              uVar28 = CONCAT44(iVar29 * 100,iVar27 * 100);
              iVar6 = iVar39 * 100;
              iVar30 = iVar40 * 100;
            } while (iVar11 != 0);
            iVar31 = iVar31 * 1000;
            iVar32 = iVar32 * 1000;
            iVar33 = iVar33 * 1000;
            iVar34 = iVar34 * 1000;
            uVar35 = CONCAT44(iVar24 * 1000,iVar23 * 1000);
            iVar36 = iVar36 * 1000;
            iVar37 = iVar37 * 1000;
            uVar38 = CONCAT44(iVar29 * 1000,iVar27 * 1000);
            iVar39 = iVar39 * 1000;
            iVar40 = iVar40 * 1000;
            uVar12 = uVar18;
          }
          if ((uVar1 & 1) != 0) {
            iVar5 = iVar5 * 10;
            iVar14 = iVar14 * 10;
            iVar15 = iVar15 * 10;
            iVar16 = iVar16 * 10;
            uVar12 = uVar35;
            uVar28 = uVar38;
            iVar17 = iVar31;
            iVar20 = iVar32;
            iVar21 = iVar33;
            iVar22 = iVar34;
            iVar6 = iVar39;
            iVar30 = iVar40;
            iVar25 = iVar36;
            iVar26 = iVar37;
          }
          iVar5 = (int)uVar28 * (int)uVar12 * iVar17 * iVar5;
          iVar17 = (int)((ulong)uVar28 >> 0x20) * (int)((ulong)uVar12 >> 0x20) * iVar20 * iVar14;
          iVar6 = iVar6 * iVar25 * iVar21 * iVar15;
          iVar30 = iVar30 * iVar26 * iVar22 * iVar16;
          auVar19._4_4_ = iVar17;
          auVar19._0_4_ = iVar5;
          auVar19._8_4_ = iVar6;
          auVar19._12_4_ = iVar30;
          auVar4._4_4_ = iVar17;
          auVar4._0_4_ = iVar5;
          auVar4._8_4_ = iVar6;
          auVar4._12_4_ = iVar30;
          auVar19 = NEON_ext(auVar19,auVar4,8,1);
          iVar5 = iVar5 * auVar19._0_4_ * iVar17 * auVar19._4_4_;
          if (uVar3 == uVar10) goto LAB_00333ec0;
        }
        iVar6 = uVar3 - uVar10;
        do {
          iVar5 = iVar5 * 10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
LAB_00333ec0:
      if (pcVar8 == __s) {
        iVar6 = 0;
      }
      else {
                    /* try { // try from 00333ec8 to 00333ecf has its CatchHandler @ 00333ff4 */
        iVar6 = FUN_0038d390(__s);
        if (iVar6 == -1) goto LAB_00333ed8;
      }
      *param_6 = (long)(iVar5 / 1000000 + iVar6 * 1000);
      uVar12 = 1;
      goto joined_r0x00333edc;
    }
  }
LAB_00333ed8:
  uVar12 = 0;
joined_r0x00333edc:
  if (__s != (char *)0x0) {
                    /* try { // try from 00333f18 to 00333f1f has its CatchHandler @ 00333ff8 */
    free(__s);
  }
  return uVar12;
}


