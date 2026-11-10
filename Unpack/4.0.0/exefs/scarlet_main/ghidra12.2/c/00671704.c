/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00671704; name: FUN_00671704
 */


void FUN_00671704(ulong *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined7 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  byte local_b0;
  undefined1 uStack_af;
  undefined6 uStack_ae;
  ulong uStack_a8;
  ulong local_a0;
  long *local_98;
  byte local_90;
  undefined1 uStack_8f;
  undefined6 uStack_8e;
  ulong uStack_88;
  ulong local_80;
  long *local_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  long *plStack_58;
  byte local_50;
  undefined7 uStack_4f;
  undefined7 *local_40;
  long *plStack_38;
  
  uVar4 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[3] = uVar4;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = FUN_01cf7e20();
  puVar7 = param_1 + 4;
  *puVar7 = 0;
  param_1[6] = 0;
  param_1[7] = uVar4;
  param_1[5] = 0;
  if (*(long *)(param_2 + 0x18) == 0) {
    puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
                    /* try { // try from 00671750 to 00671757 has its CatchHandler @ 0067196c */
    uVar6 = FUN_0026b02c(puVar5);
    *(undefined8 *)(param_2 + 0x18) = uVar6;
  }
  FUN_002587ac(param_1 + 8);
  puVar2 = PTR_DAT_047cbe60;
  puVar1 = PTR_DAT_047cbe60;
  if (*(undefined **)(param_2 + 0x20) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x20);
  }
  uVar4 = FUN_0025da00(puVar1);
  param_1[9] = uVar4;
  if (*(undefined **)(param_2 + 0x28) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_2 + 0x28);
  }
  uVar4 = FUN_0025da00(puVar2);
  param_1[10] = uVar4;
  *(byte *)(param_1 + 0xb) = 1;
  FUN_00684030(&local_70,param_2);
  puVar3 = &uStack_4f;
  if ((local_50 & 1) != 0) {
    puVar3 = local_40;
  }
  FUN_00250bf0(&local_b0,puVar3);
  if (((long *)param_1[3] == local_98) ||
     (uVar4 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar4 & 1) != 0)) {
    if ((*param_1 & 1) != 0) {
      (**(code **)(*(long *)param_1[3] + 0x18))
                ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
      *(undefined2 *)param_1 = 0;
    }
    param_1[2] = local_a0;
    param_1[1] = uStack_a8;
    *param_1 = CONCAT62(uStack_ae,CONCAT11(uStack_af,local_b0));
    local_b0 = 0;
    uStack_af = 0;
  }
  else {
                    /* try { // try from 0067182c to 00671837 has its CatchHandler @ 00671974 */
    FUN_01d0e1a8(param_1,&local_b0);
  }
  if (((long *)param_1[7] == local_78) ||
     (uVar4 = (**(code **)(*(long *)param_1[7] + 0x20))(), (uVar4 & 1) != 0)) {
    if ((*puVar7 & 1) != 0) {
      (**(code **)(*(long *)param_1[7] + 0x18))
                ((long *)param_1[7],param_1[6],param_1[4] & 0xfffffffffffffffe,1);
      *(undefined2 *)(param_1 + 4) = 0;
    }
    param_1[6] = local_80;
    param_1[5] = uStack_88;
    *puVar7 = CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
    local_90 = 0;
    uStack_8f = 0;
  }
  else {
                    /* try { // try from 00671930 to 0067193b has its CatchHandler @ 00671974 */
    FUN_01d0e1a8(puVar7,&local_90);
    if ((local_90 & 1) != 0) {
      (**(code **)(*local_78 + 0x18))
                (local_78,local_80,
                 CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90)) & 0xfffffffffffffffe,1);
    }
  }
  if ((local_b0 & 1) != 0) {
    (**(code **)(*local_98 + 0x18))
              (local_98,local_a0,
               CONCAT62(uStack_ae,CONCAT11(uStack_af,local_b0)) & 0xfffffffffffffffe,1);
  }
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))
              (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
  }
  return;
}


