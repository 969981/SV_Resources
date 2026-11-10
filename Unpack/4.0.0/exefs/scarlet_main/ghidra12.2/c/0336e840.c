/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336e840; name: FUN_0336e840
 */


void FUN_0336e840(ulong *param_1,ulong *param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  size_t sVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_48;
  
  *param_1 = 0;
  puVar4 = PTR_PTR_047d1a50;
  pcVar1 = (char *)(*param_2 & 0xfffffffffffffffe);
  if (pcVar1 != (char *)0x0) {
    sVar5 = strlen(pcVar1);
    sVar5 = (size_t)((int)sVar5 + 1);
    pvVar6 = (void *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,sVar5);
    memcpy(pvVar6,pcVar1,sVar5);
    *param_1 = (ulong)pvVar6 | 1;
  }
  param_1[1] = 0;
  pcVar1 = (char *)(param_2[1] & 0xfffffffffffffffe);
  if (pcVar1 != (char *)0x0) {
    sVar5 = strlen(pcVar1);
    sVar5 = (size_t)((int)sVar5 + 1);
    pvVar6 = (void *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,sVar5);
    memcpy(pvVar6,pcVar1,sVar5);
    param_1[1] = (ulong)pvVar6 | 1;
  }
  uVar8 = param_2[2];
  param_1[2] = uVar8;
  *(int *)(param_1 + 3) = (int)param_2[3];
  uVar3 = *(uint *)((long)param_2 + 0x1c);
  *(uint *)((long)param_1 + 0x1c) = uVar3;
  uVar7 = param_1[4];
  bVar2 = (byte)param_2[4] & 1;
  *(byte *)(param_1 + 4) = (byte)uVar7 & 0xfe | bVar2;
  *(byte *)(param_1 + 4) = (byte)uVar7 & 0xfc | bVar2 | (byte)param_2[4] & 2;
  puVar4 = PTR_DAT_047d1a08;
  if (((uVar3 < 6) && ((1 << (ulong)(uVar3 & 0x1f) & 0x32U) != 0)) && (uVar8 != 0)) {
    local_48 = 0x28;
    uVar7 = (**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(uVar7,"Field");
    }
    FUN_0336e840(uVar7,uVar8);
    param_1[2] = uVar7;
  }
  return;
}


