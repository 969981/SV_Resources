/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03525280; name: FUN_03525280
 */


undefined8 FUN_03525280(long *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong __n;
  undefined4 local_44;
  char *local_28;
  
  local_44 = param_3;
  local_28 = param_2;
  iVar6 = (**(code **)(*param_1 + 0x88))();
  if (iVar6 != 9) {
    (**(code **)(*param_1 + 0x88))(param_1);
    return 0x5b;
  }
  uVar7 = FUN_0352d798(param_1,&local_28,&local_44,0);
  if ((int)uVar7 != 1) {
    return uVar7;
  }
  *(bool *)(param_1 + 0x2e) = *local_28 != '\0';
  puVar5 = PTR_DAT_047e2fd0;
  pcVar1 = local_28 + 5;
  uVar4 = *(uint *)(local_28 + 1);
  __n = (ulong)(uVar4 << 2);
  local_28 = pcVar1;
  if (param_1[0x2f] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2);
    param_1[0x2f] = 0;
  }
  if (param_1[0x30] != 0) {
    (**(code **)(puVar5 + 0x30))(2);
    param_1[0x30] = 0;
  }
  pvVar8 = (void *)(**(code **)(puVar5 + 0x10))(2,__n);
  param_1[0x2f] = (long)pvVar8;
  if (pvVar8 == (void *)0x0) {
    if (uVar4 != 0) {
      return 0x34;
    }
  }
  else {
    memcpy(pvVar8,pcVar1,__n);
    pvVar8 = (void *)(**(code **)(puVar5 + 0x10))(2,(ulong)uVar4);
    param_1[0x30] = (long)pvVar8;
    if (pvVar8 == (void *)0x0) {
      return 0x34;
    }
    memcpy(pvVar8,pcVar1 + __n,(ulong)uVar4);
  }
  puVar2 = (uint *)(local_28 + uVar4 * 5);
  uVar3 = *puVar2;
  pcVar1 = (char *)((long)puVar2 + 5);
  *(char *)((long)param_1 + 0x16a) = (char)puVar2[1];
  local_28 = pcVar1;
  if (param_1[0x2c] != 0) {
    (**(code **)(puVar5 + 0x30))(1);
    param_1[0x2c] = 0;
  }
  if (uVar3 != 0) {
    pvVar8 = (void *)(**(code **)(puVar5 + 0x10))(1,(ulong)uVar3);
    param_1[0x2c] = (long)pvVar8;
    if (pvVar8 == (void *)0x0) {
      return 0x34;
    }
    memcpy(pvVar8,pcVar1,(ulong)uVar3);
  }
  *(uint *)(param_1 + 0x2b) = uVar4;
  return 1;
}


