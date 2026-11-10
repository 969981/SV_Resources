/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01813fe0; name: FUN_01813fe0
 */


void FUN_01813fe0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  SixAxisSensorHandle *pSVar5;
  undefined8 uVar6;
  SixAxisSensorHandle *pSVar7;
  
  uVar3 = nn::hid::GetNpadStyleSet((uint *)(param_1 + 8));
  uVar1 = 4;
  if ((uVar3 & 8) == 0) {
    uVar1 = (int)(uVar3 << 0x1b) >> 0x1f & 5;
  }
  uVar2 = 2;
  if ((uVar3 & 2) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = 3;
  if ((uVar3 & 4) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = 1;
  if ((uVar3 & 1) == 0) {
    uVar2 = uVar1;
  }
  if (*(uint *)(param_1 + 0x3c) == uVar2) {
    return;
  }
  if (*(uint *)(param_1 + 0x3c) == uVar2) {
    return;
  }
  pSVar7 = (SixAxisSensorHandle *)(param_1 + 0x18);
  *(undefined8 *)pSVar7 = 0;
  *(uint *)(param_1 + 0x3c) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (uVar2 - 1 < 5) {
    uVar6 = *(undefined8 *)(&DAT_03d635b0 + (long)(int)(uVar2 - 1) * 8);
  }
  else {
    uVar6 = 2;
  }
  iVar4 = nn::hid::GetSixAxisSensorHandles(pSVar7,8,param_1 + 8,uVar6);
  *(long *)(param_1 + 0x10) = (long)iVar4;
  if (*(char *)(param_1 + 0x38) == '\0') {
    if ((*(uint *)(param_1 + 0x3c) < 6) &&
       ((1 << (ulong)(*(uint *)(param_1 + 0x3c) & 0x1f) & 0x34U) != 0)) {
      nn::hid::StopSixAxisSensor(pSVar7);
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  else {
    FUN_0226ee78(param_1,0);
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    if (*(int *)(param_1 + 0x3c) - 3U < 2) {
      nn::hid::StopSixAxisSensor(pSVar7);
    }
    *(undefined1 *)(param_1 + 0x39) = 0;
  }
  else {
    FUN_0226ee78(param_1,1);
  }
  if (*(char *)(param_1 + 0x3a) != '\0') {
    FUN_0226ee78(param_1,2);
    goto LAB_01814138;
  }
  pSVar5 = pSVar7;
  if (*(int *)(param_1 + 0x3c) == 5) {
LAB_018141a4:
    nn::hid::StopSixAxisSensor(pSVar5);
  }
  else if (*(int *)(param_1 + 0x3c) == 3) {
    pSVar5 = (SixAxisSensorHandle *)(param_1 + 0x1c);
    goto LAB_018141a4;
  }
  *(undefined1 *)(param_1 + 0x3a) = 0;
LAB_01814138:
  if (*(char *)(param_1 + 0x3b) != '\0') {
    FUN_0226ee78(param_1,3);
    return;
  }
  if (*(int *)(param_1 + 0x3c) == 2) {
    nn::hid::StopSixAxisSensor(pSVar7);
  }
  *(undefined1 *)(param_1 + 0x3b) = 0;
  return;
}


