/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013ed00; name: FUN_0013ed00
 */


long FUN_0013ed00(long param_1,long *param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte *pbVar8;
  long *plVar9;
  long local_48;
  long *local_40;
  char *pcStack_38;
  short local_30;
  char cStack_2e;
  undefined1 uStack_2d;
  short sStack_2c;
  undefined2 uStack_2a;
  
  cVar1 = *param_3;
  if (cVar1 == '\x1b') {
    param_3 = "binary string";
  }
  else if ((cVar1 == '@') || (cVar1 == '=')) {
    param_3 = param_3 + 1;
  }
  local_48 = param_1;
  local_40 = param_2;
  pcStack_38 = param_3;
  lVar4 = FUN_001457a0(param_2,&local_30,3);
  if (lVar4 != 0) goto LAB_0013f014;
  if (local_30 == 0x754c && cStack_2e == 'a') {
    lVar4 = *local_40;
    *local_40 = lVar4 + -1;
    if (lVar4 == 0) {
      uVar3 = FUN_00145730();
      if (uVar3 == 0xffffffff) goto LAB_0013f014;
    }
    else {
      pbVar8 = (byte *)local_40[1];
      local_40[1] = (long)(pbVar8 + 1);
      uVar3 = (uint)*pbVar8;
    }
    if ((uVar3 & 0xff) != 0x54) goto LAB_0013f034;
    lVar4 = *local_40;
    *local_40 = lVar4 + -1;
    if (lVar4 == 0) {
      uVar3 = FUN_00145730();
      if (uVar3 == 0xffffffff) goto LAB_0013f014;
    }
    else {
      pbVar8 = (byte *)local_40[1];
      local_40[1] = (long)(pbVar8 + 1);
      uVar3 = (uint)*pbVar8;
    }
    if ((uVar3 & 0xff) != 0) goto LAB_0013f044;
    lVar4 = FUN_001457a0(local_40,&local_30,6);
    if (lVar4 != 0) goto LAB_0013f014;
    if (CONCAT13(uStack_2d,CONCAT12(cStack_2e,local_30)) != 0xa0d9319 || sStack_2c != 0xa1a)
    goto LAB_0013f054;
    lVar4 = *local_40;
    *local_40 = lVar4 + -1;
    if (lVar4 == 0) {
      uVar3 = FUN_00145730();
      if (uVar3 == 0xffffffff) goto LAB_0013f014;
    }
    else {
      pbVar8 = (byte *)local_40[1];
      local_40[1] = (long)(pbVar8 + 1);
      uVar3 = (uint)*pbVar8;
    }
    if ((uVar3 & 0xff) != 4) goto LAB_0013f064;
    lVar4 = *local_40;
    *local_40 = lVar4 + -1;
    if (lVar4 == 0) {
      uVar3 = FUN_00145730();
      if (uVar3 == 0xffffffff) goto LAB_0013f014;
    }
    else {
      pbVar8 = (byte *)local_40[1];
      local_40[1] = (long)(pbVar8 + 1);
      uVar3 = (uint)*pbVar8;
    }
    if ((uVar3 & 0xff) != 8) {
      pcVar7 = "lua_Integer";
      goto LAB_0013f0a8;
    }
    lVar4 = *local_40;
    *local_40 = lVar4 + -1;
    if (lVar4 == 0) {
      uVar3 = FUN_00145730();
      if (uVar3 == 0xffffffff) goto LAB_0013f014;
    }
    else {
      pbVar8 = (byte *)local_40[1];
      local_40[1] = (long)(pbVar8 + 1);
      uVar3 = (uint)*pbVar8;
    }
    if ((uVar3 & 0xff) != 8) {
      pcVar7 = "lua_Number";
      goto LAB_0013f0a8;
    }
    lVar4 = FUN_001457a0(local_40,&local_30,8);
    if (lVar4 != 0) {
LAB_0013f014:
      FUN_0013fc50(&local_48,"truncated chunk");
      goto LAB_0013f024;
    }
    if (CONCAT26(uStack_2a,CONCAT24(sStack_2c,CONCAT13(uStack_2d,CONCAT12(cStack_2e,local_30)))) ==
        0x5678) {
      lVar4 = FUN_001457a0(local_40,&local_30,8);
      if (lVar4 == 0) {
        if ((double)CONCAT26(uStack_2a,
                             CONCAT24(sStack_2c,CONCAT13(uStack_2d,CONCAT12(cStack_2e,local_30))))
            != 370.5) goto LAB_0013f0c8;
        lVar4 = *local_40;
        *local_40 = lVar4 + -1;
        if (lVar4 != 0) {
          pbVar8 = (byte *)local_40[1];
          local_40[1] = (long)(pbVar8 + 1);
          uVar3 = (uint)*pbVar8;
LAB_0013ef94:
          lVar4 = FUN_00129640(param_1,uVar3 & 0xff);
          plVar9 = *(long **)(param_1 + 0x10);
          *plVar9 = lVar4;
          *(undefined1 *)(plVar9 + 1) = 0x46;
          FUN_00126fc0(param_1);
          lVar5 = FUN_00129c10(param_1);
          *(long *)(lVar4 + 0x18) = lVar5;
          if (((*(byte *)(lVar4 + 9) >> 5 & 1) != 0) && ((*(byte *)(lVar5 + 9) & 0x18) != 0)) {
            FUN_00129d70(param_1,lVar4);
            lVar5 = *(long *)(lVar4 + 0x18);
          }
          FUN_0013f0e0(&local_48,lVar5,0);
          return lVar4;
        }
        uVar3 = FUN_00145730();
        if (uVar3 != 0xffffffff) goto LAB_0013ef94;
      }
      goto LAB_0013f014;
    }
  }
  else {
LAB_0013f024:
    FUN_0013fc50(&local_48,"not a binary chunk");
LAB_0013f034:
    FUN_0013fc50(&local_48,"version mismatch");
LAB_0013f044:
    FUN_0013fc50(&local_48,"format mismatch");
LAB_0013f054:
    FUN_0013fc50(&local_48,"corrupted chunk");
LAB_0013f064:
    pcVar7 = "Instruction";
LAB_0013f0a8:
    uVar6 = FUN_0012e860(local_48,"%s size mismatch",pcVar7);
    FUN_0013fc50(&local_48,uVar6);
  }
  FUN_0013fc50(&local_48,"integer format mismatch");
LAB_0013f0c8:
  FUN_0013fc50(&local_48,"float format mismatch");
                    /* WARNING: Does not return */
  pcVar2 = (code *)UndefinedInstructionException(0,0x13f0d8);
  (*pcVar2)();
}


