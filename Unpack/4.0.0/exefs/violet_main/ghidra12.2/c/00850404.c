/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00850404; name: FUN_00850404
 */


ulong FUN_00850404(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long local_50;
  undefined8 local_48;
  
  if (*(int *)((long)param_2 + 0xc) == 0x10) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    uVar9 = *param_4;
    lVar4 = *param_2;
    lVar7 = param_2[1];
    *(undefined8 *)((long)puVar5 + 7) = *(undefined8 *)((long)param_4 + 7);
    *puVar5 = uVar9;
    uVar9 = param_4[2];
    puVar5[3] = param_4[3];
    puVar5[2] = uVar9;
    uVar9 = param_4[4];
    puVar5[5] = param_4[5];
    puVar5[4] = uVar9;
    uVar9 = *param_3;
    lVar6 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(lVar6 + 0x128) = param_3[1];
    *(undefined8 *)(lVar6 + 0x120) = uVar9;
    uVar2 = FUN_0085f114(*(undefined8 *)(param_1 + 0x18),lVar4,(int)lVar7,1,0);
    return uVar2;
  }
  puVar5 = (undefined8 *)*param_2;
  local_50 = 0;
  local_48 = 0x8000000000000000;
  uVar1 = *(uint *)(param_2 + 1);
  if ((int)uVar1 < 1) {
    uVar2 = 0;
    if (uVar1 == 0) goto LAB_008504d4;
  }
  else {
    FUN_02e8df28(&local_50,PTR_PTR_047d1a50,uVar1);
    uVar2 = local_48 & 0xffffffff;
    if ((uint)local_48 == uVar1) goto LAB_008504d4;
  }
  uVar2 = (ulong)uVar1;
  local_48 = CONCAT44(local_48._4_4_,uVar1);
LAB_008504d4:
  if (0 < (int)param_2[1]) {
    lVar7 = 0;
    do {
      uVar9 = *puVar5;
      lVar4 = lVar7 * 0x10;
      lVar7 = lVar7 + 1;
      ((undefined8 *)(local_50 + lVar4))[1] =
           CONCAT44(*(undefined4 *)(puVar5 + 1),*(undefined4 *)(puVar5 + 1));
      *(undefined8 *)(local_50 + lVar4) = uVar9;
      uVar9 = *(undefined8 *)(local_50 + lVar4);
      ((undefined8 *)(local_50 + lVar4))[1] = ((undefined8 *)(local_50 + lVar4))[1] & 0xffffffff;
      *(undefined8 *)(local_50 + lVar4) = uVar9;
      puVar5 = (undefined8 *)((long)*(int *)((long)param_2 + 0xc) + (long)puVar5);
    } while (lVar7 < (int)param_2[1]);
    uVar2 = local_48 & 0xffffffff;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  uVar9 = *param_4;
  *(undefined8 *)((long)puVar5 + 7) = *(undefined8 *)((long)param_4 + 7);
  *puVar5 = uVar9;
  uVar9 = param_4[2];
  lVar7 = 0;
  if ((int)uVar2 != 0) {
    lVar7 = local_50;
  }
  puVar5[3] = param_4[3];
  puVar5[2] = uVar9;
  uVar9 = param_4[4];
  puVar5[5] = param_4[5];
  puVar5[4] = uVar9;
  uVar9 = *param_3;
  lVar4 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(lVar4 + 0x128) = param_3[1];
  *(undefined8 *)(lVar4 + 0x120) = uVar9;
  uVar3 = FUN_0085f114(*(undefined8 *)(param_1 + 0x18),lVar7,uVar2,1,0);
  uVar2 = local_48;
  uVar8 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < (long)uVar2) && (local_50 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_50,uVar8 << 4);
  }
  return uVar3 & 0xffffffff;
}


