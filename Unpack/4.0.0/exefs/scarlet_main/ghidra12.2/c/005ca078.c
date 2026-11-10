/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005ca078; name: FUN_005ca078
 */


void FUN_005ca078(int *param_1,undefined8 param_2,int *param_3)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  byte local_80;
  undefined7 uStack_7f;
  ulong local_70;
  long *plStack_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar4 = FUN_006c50c4();
  if ((*param_3 == 1) && ((uVar4 & 1) == 0)) {
    FUN_005bdb10(&local_80,
                 "Detected unintended \'Cancelled\'. It was replaced with Unknown. Original message: "
                 ,param_3 + 2);
    uVar3 = local_70;
    bVar2 = local_80;
    local_58 = 0;
    local_50 = FUN_01cf7e20();
    uStack_48 = 0;
                    /* try { // try from 005ca0e4 to 005ca0f3 has its CatchHandler @ 005ca1ec */
    local_60 = &local_58;
    FUN_00543620(auStack_a0,param_3 + 10,&local_60);
    uVar4 = (ulong)&local_80 | 1;
    if ((bVar2 & 1) != 0) {
      uVar4 = uVar3;
    }
    FUN_01cfa44c(&local_60,local_58);
    FUN_005434fc(param_1,param_3 + 0x14,2,uVar4,auStack_a0);
    FUN_01cfa44c(auStack_a0,local_98);
    if ((local_80 & 1) != 0) {
      (**(code **)(*plStack_68 + 0x18))
                (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
    }
  }
  else {
    *param_1 = *param_3;
    uVar7 = *(undefined8 *)(param_3 + 4);
    uVar6 = *(undefined8 *)(param_3 + 2);
    uVar8 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 6) = uVar8;
    *(undefined8 *)(param_1 + 4) = uVar7;
    *(undefined8 *)(param_1 + 2) = uVar6;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    if ((char)param_3[10] != '\0') {
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
      uVar6 = *(undefined8 *)(param_3 + 0xe);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_1 + 0xe) = uVar6;
      lVar5 = *(long *)(param_3 + 0x12);
      plVar1 = (long *)(param_1 + 0xe);
      *(long *)(param_1 + 0x12) = lVar5;
      if (lVar5 == 0) {
        *(long **)(param_1 + 0xc) = plVar1;
      }
      else {
        *(long **)(*plVar1 + 0x10) = plVar1;
        *(int **)(param_3 + 0xc) = param_3 + 0xe;
        param_3[0xe] = 0;
        param_3[0xf] = 0;
        param_3[0x12] = 0;
        param_3[0x13] = 0;
      }
      *(undefined1 *)(param_1 + 10) = 1;
    }
    uVar6 = *(undefined8 *)(param_3 + 0x14);
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_3 + 0x16);
    *(undefined8 *)(param_1 + 0x14) = uVar6;
    param_3[0x14] = 0;
    param_3[0x15] = 0;
    param_3[0x16] = 0;
    param_3[0x17] = 0;
  }
  return;
}


