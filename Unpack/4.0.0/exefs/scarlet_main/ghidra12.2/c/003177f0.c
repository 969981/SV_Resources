/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003177f0; name: FUN_003177f0
 */


undefined8 FUN_003177f0(long param_1,int param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  undefined1 auStack_60 [32];
  
  pbVar2 = (byte *)(param_1 + 0x1135);
  bVar3 = *pbVar2;
  if ((bVar3 >> 2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1138) = *(undefined4 *)(param_1 + 0x1140);
  }
  else {
    *(undefined4 *)(param_1 + 0x1138) = 0;
  }
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x1136) = bVar3 & 1;
  }
  *(undefined8 *)(param_1 + 0xe60) = 0x8000000000000000;
  lVar8 = FUN_003198f0(param_1 + 0xa0,*(undefined4 *)(param_1 + 0x1140));
  if (lVar8 == 0) {
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0xc48) != '\0') {
        *(undefined **)(param_1 + 0x1158) = PTR_LAB_047ccb60;
        *(undefined1 **)(param_1 + 0xef8) = &LAB_003182d0;
        *(undefined8 *)(param_1 + 0xf00) = 0;
        *(long *)(param_1 + 0x1148) = param_1 + 0xef8;
        *(bool *)(param_1 + 0xfc5) = *(int *)(param_1 + 0x1138) != 0;
        uVar11 = 0;
        if (*(int *)(param_1 + 0x1138) != 0) {
          uVar11 = *(undefined1 *)(param_1 + 0x1136);
        }
        *(undefined1 *)(param_1 + 0xfc6) = uVar11;
        bVar3 = *pbVar2;
        goto joined_r0x00317980;
      }
      if ((*(uint *)(param_1 + 0xe08) < *(uint *)(param_1 + 0x1140)) &&
         ((*(uint *)(param_1 + 0x1140) & 1) != 0)) {
        uVar9 = FUN_00319950(param_1 + 0xa0);
        if (*(uint *)(param_1 + 0xdf0) <= uVar9) {
          FUN_003673f0(auStack_60,"Max stream count exceeded");
          uVar10 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                                ,0x279,auStack_60,0,0);
          return uVar10;
        }
        *(undefined4 *)(param_1 + 0xe08) = *(undefined4 *)(param_1 + 0x1140);
        lVar8 = FUN_00307fc0(param_1);
        *(long *)(param_1 + 0x1150) = lVar8;
        if (lVar8 != 0) {
          if (*(long *)(param_1 + 0x1360) != 0) {
            FUN_003487c4();
          }
          goto LAB_00317864;
        }
      }
    }
    *(undefined **)(param_1 + 0x1158) = PTR_LAB_047ccb60;
    *(undefined1 **)(param_1 + 0xef8) = &LAB_003182d0;
    *(undefined8 *)(param_1 + 0xf00) = 0;
    *(long *)(param_1 + 0x1148) = param_1 + 0xef8;
    *(bool *)(param_1 + 0xfc5) = *(int *)(param_1 + 0x1138) != 0;
    if (*(int *)(param_1 + 0x1138) == 0) {
      uVar11 = 0;
      goto LAB_00317a9c;
    }
  }
  else {
    *(long *)(param_1 + 0x1150) = lVar8;
LAB_00317864:
    *(long *)(lVar8 + 0x180) = *(long *)(lVar8 + 0x180) + 9;
    puVar6 = PTR_LAB_047ccb60;
    if (*(char *)(lVar8 + 0x1b1) == '\0') {
      puVar1 = (undefined8 *)(param_1 + 0xef8);
      *(undefined8 **)(param_1 + 0x1148) = puVar1;
      *(undefined **)(param_1 + 0x1158) = puVar6;
      cVar4 = *(char *)(param_1 + 0x1136);
      if (cVar4 != '\0') {
        *(undefined1 *)(lVar8 + 0x1b5) = 1;
      }
      cVar5 = *(char *)(lVar8 + 0x900);
      if (cVar5 == '\x02') {
        *(undefined **)(param_1 + 0x1158) = puVar6;
        bVar7 = *(int *)(param_1 + 0x1138) != 0;
        *(undefined1 **)(param_1 + 0xef8) = &LAB_003182d0;
        if (!bVar7) {
          cVar4 = '\0';
        }
        *(undefined8 **)(param_1 + 0x1148) = puVar1;
        *(undefined8 *)(param_1 + 0xf00) = 0;
        *(bool *)(param_1 + 0xfc5) = bVar7;
        *(char *)(param_1 + 0xfc6) = cVar4;
        return 0;
      }
      if (cVar5 == '\x01') {
LAB_003178e0:
        puVar12 = &LAB_00317ae0;
LAB_003178e8:
        *puVar1 = puVar12;
      }
      else if (cVar5 == '\0') {
        puVar12 = &LAB_00317db0;
        if ((cVar4 != '\0') && (*(char *)(param_1 + 0xc48) != '\0')) {
          if (*(undefined1 **)(lVar8 + 0x150) != (undefined1 *)0x0) {
            **(undefined1 **)(lVar8 + 0x150) = 1;
          }
          goto LAB_003178e0;
        }
        goto LAB_003178e8;
      }
      cVar5 = '\0';
      if ((bVar3 & 4) != 0) {
        cVar5 = cVar4;
      }
      *(long *)(param_1 + 0xf00) = param_1;
      *(byte *)(param_1 + 0xfc5) = bVar3 >> 2 & 1;
      *(char *)(param_1 + 0xfc6) = cVar5;
      if (param_2 != 0) {
        return 0;
      }
      bVar3 = *pbVar2;
joined_r0x00317980:
      if ((bVar3 >> 5 & 1) != 0) {
        FUN_00312ed0();
      }
      return 0;
    }
    *(undefined **)(param_1 + 0x1158) = PTR_LAB_047ccb60;
    *(undefined8 *)(param_1 + 0x1150) = 0;
    *(long *)(param_1 + 0x1148) = param_1 + 0xef8;
    *(undefined8 *)(param_1 + 0xf00) = 0;
    *(undefined1 **)(param_1 + 0xef8) = &LAB_003182d0;
    *(bool *)(param_1 + 0xfc5) = *(int *)(param_1 + 0x1138) != 0;
    if (*(int *)(param_1 + 0x1138) == 0) {
      uVar11 = 0;
      goto LAB_00317a9c;
    }
  }
  uVar11 = *(undefined1 *)(param_1 + 0x1136);
LAB_00317a9c:
  *(undefined1 *)(param_1 + 0xfc6) = uVar11;
  return 0;
}


