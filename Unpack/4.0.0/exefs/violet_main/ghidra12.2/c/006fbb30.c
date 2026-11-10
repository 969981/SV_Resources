/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006fbb30; name: FUN_006fbb30
 */


void FUN_006fbb30(long *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  char *__nptr;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  byte local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  long *plStack_48;
  byte local_40;
  undefined7 uStack_3f;
  long local_38;
  char *local_30;
  long *plStack_28;
  
  puVar1 = PTR_DAT_047cff40;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  lVar3 = FUN_01cf7e20();
  param_1[5] = 0;
  param_1[6] = lVar3;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar3 = FUN_01cf7e20();
  param_1[9] = 0;
  param_1[10] = lVar3;
  param_1[7] = 0;
  param_1[8] = 0;
  pbVar6 = *(byte **)(param_2 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_006fdc40(&local_80,pbVar6);
  if ((local_40 & 1) == 0) {
    if (local_40 < 2) goto LAB_006fbbd4;
    __nptr = (char *)&uStack_3f;
  }
  else {
    if (local_38 == 0) goto LAB_006fbbd4;
    __nptr = local_30;
  }
  lVar3 = strtol(__nptr,(char **)0x0,10);
  *(int *)(param_1 + 1) = (int)lVar3;
LAB_006fbbd4:
  uVar2 = *(uint *)(param_2 + 0x30);
  if (2 < uVar2) {
    uVar2 = 0;
  }
  *(uint *)((long)param_1 + 0xc) = uVar2;
  puVar1 = PTR_DAT_047cbe60;
  if (*(undefined **)(param_2 + 0x28) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x28);
  }
  lVar3 = FUN_0025da00(puVar1);
  param_1[2] = lVar3;
  pbVar6 = *(byte **)(param_2 + 0x18);
  if ((*pbVar6 & 1) == 0) {
    pbVar4 = pbVar6 + 1;
    uVar5 = (ulong)(*pbVar6 >> 1);
  }
  else {
    uVar5 = *(ulong *)(pbVar6 + 8);
    pbVar4 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_01e9ed4c(param_1,pbVar4,uVar5);
  pbVar6 = *(byte **)(param_2 + 0x20);
  if ((*pbVar6 & 1) == 0) {
    FUN_01e9edc8(param_1,pbVar6 + 1,*pbVar6 >> 1);
  }
  else {
    FUN_01e9edc8(param_1,*(undefined8 *)(pbVar6 + 0x10),*(undefined8 *)(pbVar6 + 8));
  }
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  if ((local_80 & 1) == 0) {
    return;
  }
  (**(code **)(*plStack_68 + 0x18))
            (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  return;
}


