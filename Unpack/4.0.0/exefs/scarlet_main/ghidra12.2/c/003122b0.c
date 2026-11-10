/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003122b0; name: FUN_003122b0
 */


void FUN_003122b0(int *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  if (*param_2 == 0) {
    uVar5 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar5 = param_2[1];
  }
  if (uVar5 == 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 10);
  uVar1 = (*(long *)(param_1 + 2) - *(long *)(lVar9 + 0x20)) + *(long *)(param_1 + 0xc);
  if (uVar5 <= uVar1) {
    *(ulong *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + uVar5;
    lStack_58 = param_2[1];
    local_60 = *param_2;
    lStack_48 = param_2[3];
    lStack_50 = param_2[2];
    FUN_003686e0(lVar9,&local_60);
    return;
  }
  *(ulong *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + uVar1;
  FUN_00367f00(auStack_80,param_2);
  FUN_003686e0(lVar9,auStack_80);
  if (*param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)((long)param_1 + 0x39);
  }
  lVar9 = *(long *)(param_1 + 4);
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 8);
  if (*(long *)(lVar7 + lVar9 * 0x20) == 0) {
    puVar8 = (undefined1 *)(lVar7 + lVar9 * 0x20 + 9);
  }
  else {
    puVar8 = *(undefined1 **)(lVar7 + lVar9 * 0x20 + 0x10);
  }
  iVar2 = param_1[6];
  lVar7 = *(long *)(param_1 + 2);
  uVar6 = 9;
  if (*param_1 != 0) {
    uVar6 = 1;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x20);
  puVar8[4] = uVar4;
  lVar9 = lVar9 - lVar7;
  puVar8[5] = (char)((uint)iVar2 >> 0x18);
  puVar8[6] = (char)((uint)iVar2 >> 0x10);
  *puVar8 = (char)((ulong)lVar9 >> 0x10);
  puVar8[2] = (char)lVar9;
  puVar8[3] = uVar6;
  puVar8[7] = (char)((uint)iVar2 >> 8);
  puVar8[1] = (char)((ulong)lVar9 >> 8);
  puVar8[8] = (char)iVar2;
  **(long **)(param_1 + 10) = **(long **)(param_1 + 10) + 9;
  *param_1 = 0;
  local_40 = 0;
  local_38 = 9;
  uVar3 = FUN_00368650(*(undefined8 *)(param_1 + 8),&local_40);
  *(undefined8 *)(param_1 + 4) = uVar3;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x20);
  lStack_98 = param_2[1];
  local_a0 = *param_2;
  lStack_88 = param_2[3];
  lStack_90 = param_2[2];
  FUN_003122b0(param_1,&local_a0);
  return;
}


