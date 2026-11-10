/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e56928; name: FUN_01e56928
 */


void FUN_01e56928(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  *(undefined4 *)(param_1 + 0x40) = param_3;
  local_40 = 0x364e45d97333c1ce;
  pcStack_38 = "TriggerID";
  local_30 = 9;
  local_28 = (long *)0x0;
  piVar2 = (int *)FUN_00d27b5c(param_2,&local_40);
  if ((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = *(undefined4 *)((long)piVar2 + uVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xc692f8b5cdbd530b;
  pcStack_38 = "WeatherType";
  local_30 = 0xb;
  local_28 = (long *)0x0;
  piVar2 = (int *)FUN_00d27b5c(param_2,&local_40);
  if ((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = *(undefined4 *)((long)piVar2 + uVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x4d917ebecbc4a95c;
  pcStack_38 = "ComparisonOperatorType";
  local_30 = 0x16;
  local_28 = (long *)0x0;
  piVar2 = (int *)FUN_00d27b5c(param_2,&local_40);
  if (((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) ||
     (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar4 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)((long)piVar2 + uVar4);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (uVar7 < 6) {
    pbVar6 = *(byte **)(PTR_PTR_047da5e8 + (ulong)uVar7 * 8);
  }
  else {
    pbVar6 = &DAT_03c886bc;
  }
  puVar5 = &DAT_cbf29ce484222645;
  bVar1 = *pbVar6;
  while (bVar1 != 0) {
    pbVar6 = pbVar6 + 1;
    puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar6;
  }
  *(undefined1 **)(param_1 + 0x48) = puVar5;
  return;
}


