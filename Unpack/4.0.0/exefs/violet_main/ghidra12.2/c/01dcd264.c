/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dcd264; name: FUN_01dcd264
 */


ulong FUN_01dcd264(long param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x19d) != '\0') {
    local_18 = FUN_01195974(param_1);
    FUN_014e85a0(param_1,&local_18,0);
  }
  uVar4 = *param_3;
  uVar2 = uVar4 >> 0x20;
  uVar3 = *(uint *)(param_1 + 0x108);
  if (uVar3 == 0) {
    uVar2 = (ulong)(uint)((int)uVar4 + (int)(uVar4 >> 0x20) * 6);
  }
  else if (1 < uVar3 - 1) {
    uVar2 = 1;
  }
  if (2 < uVar3) {
    uVar3 = 3;
  }
  FUN_01888ab8(*(undefined8 *)(param_1 + 0x1a8),uVar3,uVar2,0);
  uVar4 = *param_2;
  uVar2 = uVar4 >> 0x20;
  uVar3 = *(uint *)(param_1 + 0x108);
  if (uVar3 == 0) {
    uVar2 = (ulong)(uint)((int)uVar4 + (int)(uVar4 >> 0x20) * 6);
  }
  else if (1 < uVar3 - 1) {
    uVar2 = 1;
  }
  if (2 < uVar3) {
    uVar3 = 3;
  }
  FUN_01888ab8(*(undefined8 *)(param_1 + 0x1a8),uVar3,uVar2,1);
  if (*(int *)(param_1 + 0x29c) != 2) goto LAB_01dcd354;
  local_18 = FUN_01195974(param_1);
  if (*(char *)(param_1 + 500) != '\0') {
    FUN_01dd1990(param_1,&local_18);
  }
  if (*(char *)(param_1 + 0x19c) == '\0') goto LAB_01dcd354;
  if (*(int *)(param_1 + 0x108) == 0) {
switchD_01dcd3c0_caseD_2:
    bVar1 = *(int *)((long)param_2 + 4) != 0;
  }
  else {
    bVar1 = true;
    switch(*(int *)(param_1 + 0x108)) {
    case 1:
      break;
    case 2:
      goto switchD_01dcd3c0_caseD_2;
    default:
      bVar1 = false;
    }
  }
  FUN_01dd18b0(param_1,bVar1);
LAB_01dcd354:
  FUN_0119544c(param_1,*(undefined4 *)(param_1 + 0x27c));
  return *param_2;
}


