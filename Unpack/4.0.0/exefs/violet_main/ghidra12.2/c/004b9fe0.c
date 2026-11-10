/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004b9fe0; name: FUN_004b9fe0
 */


void FUN_004b9fe0(long *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long *plVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar5;
  byte local_68 [16];
  undefined8 local_58;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  
  if (*(long *)(param_2 + 0x58) == 0) {
    uVar2 = FUN_004e0efc();
    *(undefined8 *)(param_2 + 0x58) = uVar2;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  iVar1 = FUN_004ab754(param_1,uVar5,*(undefined8 *)(param_2 + 8),0,
                       *(char *)(*param_1 + 0x29) == '\0');
  uVar2 = extraout_x1;
  if (iVar1 == 0) {
    if (*(char *)(*param_1 + 0x2a) != '\0') {
      iVar1 = FUN_004abe80(*param_1,uVar5,0);
      uVar2 = extraout_x1_00;
      goto joined_r0x004ba108;
    }
LAB_004ba114:
    if (*(char *)(*param_1 + 0x29) == '\0') {
      FUN_004aa92c(param_1,*(undefined8 *)(param_2 + 8),param_3,5,*(undefined8 *)(param_3 + 0x20));
    }
    else {
      FUN_004ba310(param_2 + 0x18,*(undefined8 *)(param_3 + 0x20),param_1[10]);
    }
  }
  else {
joined_r0x004ba108:
    if (iVar1 == 1) {
      *(undefined8 *)(param_2 + 0x18) = uVar2;
    }
    else {
      if (iVar1 == 0) goto LAB_004ba114;
      uVar2 = *(undefined8 *)(param_2 + 8);
      FUN_004a8ec0(local_68,&DAT_03c246d6,*(undefined8 *)(param_3 + 0x20));
                    /* try { // try from 004ba05c to 004ba06f has its CatchHandler @ 004ba2ec */
      puVar3 = (ulong *)FUN_0021d540(local_68,"\" is not a message type.",0x18);
      uStack_48 = puVar3[1];
      local_50 = *puVar3;
      local_40 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
                    /* try { // try from 004ba09c to 004ba0af has its CatchHandler @ 004ba2a4 */
        (**(code **)(*plVar4 + 0x10))(plVar4,param_1 + 7,uVar2,param_3,5,&local_50);
      }
      *(undefined1 *)(param_1 + 6) = 1;
      if ((local_50 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_40);
      }
      if ((local_68[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_58);
      }
    }
  }
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  iVar1 = FUN_004ab754(param_1,uVar5,*(undefined8 *)(param_2 + 8),0,
                       *(char *)(*param_1 + 0x29) == '\0');
  uVar2 = extraout_x1_01;
  if (iVar1 == 0) {
    if (*(char *)(*param_1 + 0x2a) == '\0') goto LAB_004ba254;
    iVar1 = FUN_004abe80(*param_1,uVar5,0);
    uVar2 = extraout_x1_02;
  }
  if (iVar1 == 1) {
    *(undefined8 *)(param_2 + 0x38) = uVar2;
    return;
  }
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    FUN_004a8ec0(local_68,&DAT_03c246d6,*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 004ba19c to 004ba1af has its CatchHandler @ 004ba2dc */
    puVar3 = (ulong *)FUN_0021d540(local_68,"\" is not a message type.",0x18);
    uStack_48 = puVar3[1];
    local_50 = *puVar3;
    local_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
                    /* try { // try from 004ba1dc to 004ba1ef has its CatchHandler @ 004ba2a0 */
      (**(code **)(*plVar4 + 0x10))(plVar4,param_1 + 7,uVar2,param_3,6,&local_50);
    }
    *(undefined1 *)(param_1 + 6) = 1;
    if ((local_50 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_40);
    }
    if ((local_68[0] & 1) == 0) {
      return;
    }
    FUN_0049e790(PTR_LAB_047cba48,local_58);
    return;
  }
LAB_004ba254:
  if (*(char *)(*param_1 + 0x29) == '\0') {
    FUN_004aa92c(param_1,*(undefined8 *)(param_2 + 8),param_3,6,*(undefined8 *)(param_3 + 0x28));
  }
  else {
    FUN_004ba310(param_2 + 0x38,*(undefined8 *)(param_3 + 0x28),param_1[10]);
  }
  return;
}


