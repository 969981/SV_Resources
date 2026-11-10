/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053e85c; name: FUN_0053e85c
 */


void FUN_0053e85c(ulong *param_1,undefined8 param_2,long *param_3)

{
  char *__s;
  ulong uVar1;
  size_t sVar2;
  byte *pbVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 auStack_a8 [8];
  byte local_a0;
  undefined1 uStack_9f;
  undefined6 uStack_9e;
  ulong uStack_98;
  ulong local_90;
  long *local_88;
  byte local_80;
  undefined1 uStack_7f;
  undefined6 uStack_7e;
  ulong uStack_78;
  ulong local_70;
  long *local_68;
  byte local_60;
  undefined7 uStack_5f;
  char *local_50;
  long *plStack_48;
  
  uVar1 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[3] = uVar1;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_01cf7e20();
  param_1[5] = 0;
  puVar4 = param_1 + 4;
  *puVar4 = 0;
  param_1[6] = 0;
  param_1[7] = uVar1;
  uVar1 = FUN_01cf7e20();
  puVar6 = param_1 + 8;
  *puVar6 = 0;
  param_1[10] = 0;
  param_1[0xb] = uVar1;
  param_1[9] = 0;
  uVar1 = FUN_002490c0();
  param_1[0xc] = 0;
  param_1[0xd] = uVar1;
  FUN_01e74fb0(param_1 + 0xe);
  FUN_0056dbd0(&local_60,param_2);
  __s = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    __s = local_50;
  }
  sVar2 = strlen(__s);
                    /* try { // try from 0053e8f4 to 0053e8ff has its CatchHandler @ 0053ec1c */
  FUN_01f77cc0(puVar6,__s,sVar2);
  if ((*puVar6 & 1) == 0) {
    pbVar3 = (byte *)((long)param_1 + 0x41);
  }
  else {
    pbVar3 = (byte *)param_1[10];
  }
  FUN_00250bf0(&local_a0,pbVar3);
  if (((long *)param_1[3] == local_88) ||
     (uVar1 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar1 & 1) != 0)) {
    if ((*param_1 & 1) != 0) {
      (**(code **)(*(long *)param_1[3] + 0x18))
                ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
      *(undefined2 *)param_1 = 0;
    }
    param_1[2] = local_90;
    param_1[1] = uStack_98;
    *param_1 = CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0));
    local_a0 = 0;
    uStack_9f = 0;
  }
  else {
                    /* try { // try from 0053e97c to 0053e987 has its CatchHandler @ 0053eb3c */
    FUN_01d0e1a8(param_1,&local_a0);
  }
  if (((long *)param_1[7] == local_68) ||
     (uVar1 = (**(code **)(*(long *)param_1[7] + 0x20))(), (uVar1 & 1) != 0)) {
    if ((*puVar4 & 1) != 0) {
      (**(code **)(*(long *)param_1[7] + 0x18))
                ((long *)param_1[7],param_1[6],param_1[4] & 0xfffffffffffffffe,1);
      *(undefined2 *)(param_1 + 4) = 0;
    }
    param_1[6] = local_70;
    param_1[5] = uStack_78;
    *puVar4 = CONCAT62(uStack_7e,CONCAT11(uStack_7f,local_80));
    local_80 = 0;
    uStack_7f = 0;
  }
  else {
                    /* try { // try from 0053e9f0 to 0053e9fb has its CatchHandler @ 0053eb3c */
    FUN_01d0e1a8(puVar4,&local_80);
  }
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3,0x38,8);
  FUN_0053c3cc(uVar1,param_2);
  uVar7 = param_1[0xc];
  param_1[0xc] = uVar1;
  if (uVar7 != 0) {
    plVar8 = (long *)param_1[0xd];
    FUN_00577168(uVar7);
    (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0x38,8);
    uVar1 = param_1[0xc];
  }
  param_1[0xd] = (ulong)param_3;
  if (*(long *)(uVar1 + 0x18) == 0) {
    puVar4 = (ulong *)(*(ulong *)(uVar1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
                    /* try { // try from 0053ea70 to 0053ea77 has its CatchHandler @ 0053eb38 */
    uVar5 = FUN_0026b02c(puVar4);
    *(undefined8 *)(uVar1 + 0x18) = uVar5;
  }
  FUN_002587ac(auStack_a8);
  FUN_00258adc(param_1 + 0xe,auStack_a8);
  FUN_01cfa410(auStack_a8);
  if ((local_80 & 1) != 0) {
    (**(code **)(*local_68 + 0x18))
              (local_68,local_70,
               CONCAT62(uStack_7e,CONCAT11(uStack_7f,local_80)) & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(*local_88 + 0x18))
              (local_88,local_90,
               CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0)) & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  return;
}


