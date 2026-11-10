/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00850208; name: FUN_00850208
 */


ulong FUN_00850208(long param_1,ulong *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long local_50;
  undefined8 local_48;
  
  puVar8 = (undefined8 *)*param_2;
  if (*(int *)((long)param_2 + 0xc) == 0x10 && ((ulong)puVar8 & 0xf) == 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    uVar9 = *param_3;
    uVar3 = param_2[1];
    *(undefined8 *)((long)puVar6 + 7) = *(undefined8 *)((long)param_3 + 7);
    *puVar6 = uVar9;
    uVar9 = param_3[2];
    puVar6[3] = param_3[3];
    puVar6[2] = uVar9;
    uVar9 = param_3[4];
    puVar6[5] = param_3[5];
    puVar6[4] = uVar9;
    uVar3 = FUN_0085f114(*(undefined8 *)(param_1 + 0x18),puVar8,(int)uVar3,0,0);
    return uVar3;
  }
  local_50 = 0;
  local_48 = 0x8000000000000000;
  uVar1 = (uint)param_2[1];
  if ((int)uVar1 < 1) {
    uVar3 = 0;
    if (uVar1 == 0) goto LAB_00850280;
  }
  else {
    FUN_02e8df28(&local_50,PTR_PTR_047d1a50,uVar1);
    uVar3 = local_48 & 0xffffffff;
    if ((uint)local_48 == uVar1) goto LAB_00850280;
  }
  uVar3 = (ulong)uVar1;
  local_48 = CONCAT44(local_48._4_4_,uVar1);
LAB_00850280:
  if (0 < (int)param_2[1]) {
    lVar4 = 0;
    do {
      uVar9 = *puVar8;
      lVar7 = lVar4 * 0x10;
      lVar4 = lVar4 + 1;
      ((undefined8 *)(local_50 + lVar7))[1] =
           CONCAT44(*(undefined4 *)(puVar8 + 1),*(undefined4 *)(puVar8 + 1));
      *(undefined8 *)(local_50 + lVar7) = uVar9;
      uVar9 = *(undefined8 *)(local_50 + lVar7);
      ((undefined8 *)(local_50 + lVar7))[1] = ((undefined8 *)(local_50 + lVar7))[1] & 0xffffffff;
      *(undefined8 *)(local_50 + lVar7) = uVar9;
      puVar8 = (undefined8 *)((long)*(int *)((long)param_2 + 0xc) + (long)puVar8);
    } while (lVar4 < (int)param_2[1]);
    uVar3 = local_48 & 0xffffffff;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x18);
  uVar9 = *param_3;
  *(undefined8 *)((long)puVar8 + 7) = *(undefined8 *)((long)param_3 + 7);
  *puVar8 = uVar9;
  uVar9 = param_3[2];
  lVar4 = 0;
  if ((int)uVar3 != 0) {
    lVar4 = local_50;
  }
  puVar8[3] = param_3[3];
  puVar8[2] = uVar9;
  uVar9 = param_3[4];
  puVar8[5] = param_3[5];
  puVar8[4] = uVar9;
  uVar2 = FUN_0085f114(*(undefined8 *)(param_1 + 0x18),lVar4,uVar3,0,0);
  uVar3 = local_48;
  uVar5 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < (long)uVar3) && (local_50 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_50,uVar5 << 4);
  }
  return uVar2 & 0xffffffff;
}


