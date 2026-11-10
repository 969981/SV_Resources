/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016be980; name: FUN_016be980
 */


void FUN_016be980(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  *param_2 = *(undefined8 *)(param_1 + 0x68);
  param_2[1] = *(undefined8 *)(param_1 + 0x70);
  param_2[2] = *(undefined8 *)(param_1 + 0x78);
  uVar1 = (**(code **)PTR_DAT_047e1dd0)(*(undefined8 *)(param_1 + 0x40));
  *(undefined4 *)(param_2 + 4) = uVar1;
  (**(code **)PTR_DAT_047e1dd8)(*(undefined8 *)(param_1 + 0x40));
  uVar1 = FUN_016beaf0();
  *(undefined4 *)((long)param_2 + 0x2c) = uVar1;
  uVar2 = (**(code **)PTR_DAT_047e1de0)(*(undefined8 *)(param_1 + 0x40));
  if (uVar2 < 0xb) {
    uVar1 = *(undefined4 *)(&DAT_03d68640 + (long)(int)uVar2 * 4);
  }
  else {
    uVar1 = 2;
  }
  *(undefined4 *)(param_2 + 5) = uVar1;
  uVar1 = (**(code **)PTR_DAT_047e1de8)(*(undefined8 *)(param_1 + 0x40));
  *(undefined4 *)(param_2 + 6) = uVar1;
  uVar1 = (**(code **)PTR_DAT_047e1df0)(*(undefined8 *)(param_1 + 0x40));
  *(undefined4 *)((long)param_2 + 0x44) = uVar1;
  lVar3 = (**(code **)PTR_DAT_047e1da8)(*(undefined8 *)(param_1 + 0x40));
  param_2[3] = lVar3;
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x68);
    uVar4 = FUN_00c75660(*(undefined4 *)(param_2 + 6));
    param_2[3] = lVar3 * (uVar4 & 0xffffffff);
  }
  (**(code **)PTR_DAT_047e1df8)
            (*(undefined8 *)(param_1 + 0x40),&local_40,(ulong)&local_40 | 4,&local_38,&local_34);
  *(undefined4 *)((long)param_2 + 0x34) = local_40;
  *(undefined4 *)(param_2 + 7) = local_3c;
  *(undefined4 *)((long)param_2 + 0x3c) = local_38;
  *(undefined4 *)(param_2 + 8) = local_34;
  uVar1 = (**(code **)PTR_DAT_047e1e00)(*(undefined8 *)(param_1 + 0x40));
  *(undefined4 *)(param_2 + 9) = uVar1;
  return;
}


