/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eb7744; name: FUN_02eb7744
 */


void FUN_02eb7744(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,long param_6,undefined8 *param_7,byte param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_6 + 0x30) == '\0') {
    fVar2 = (float)*(undefined8 *)(param_3 + 0x40);
    local_a0 = CONCAT44((float)((ulong)*param_7 >> 0x20) * fVar2,(float)*param_7 * fVar2);
    uStack_98 = CONCAT44((float)((ulong)param_7[1] >> 0x20) * fVar2,(float)param_7[1] * fVar2);
    fVar2 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
    uStack_90 = CONCAT44((float)((ulong)param_7[2] >> 0x20) * fVar2,(float)param_7[2] * fVar2);
    uStack_88 = CONCAT44((float)((ulong)param_7[3] >> 0x20) * fVar2,(float)param_7[3] * fVar2);
    fVar2 = (float)*(undefined8 *)(param_3 + 0x48);
    local_80 = CONCAT44((float)((ulong)param_7[4] >> 0x20) * fVar2,(float)param_7[4] * fVar2);
    uStack_78 = CONCAT44((float)((ulong)param_7[5] >> 0x20) * fVar2,(float)param_7[5] * fVar2);
    uVar4 = param_7[7];
    uVar3 = param_7[6];
  }
  else {
    puVar1 = *(undefined8 **)(param_3 + 0x20);
    fVar2 = (float)*(undefined8 *)(param_3 + 0x40);
    local_a0 = CONCAT44((float)((ulong)*puVar1 >> 0x20) * fVar2,(float)*puVar1 * fVar2);
    uStack_98 = CONCAT44((float)((ulong)puVar1[1] >> 0x20) * fVar2,(float)puVar1[1] * fVar2);
    fVar2 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
    uStack_90 = CONCAT44((float)((ulong)puVar1[2] >> 0x20) * fVar2,(float)puVar1[2] * fVar2);
    uStack_88 = CONCAT44((float)((ulong)puVar1[3] >> 0x20) * fVar2,(float)puVar1[3] * fVar2);
    fVar2 = (float)*(undefined8 *)(param_3 + 0x48);
    local_80 = CONCAT44((float)((ulong)puVar1[4] >> 0x20) * fVar2,(float)puVar1[4] * fVar2);
    uStack_78 = CONCAT44((float)((ulong)puVar1[5] >> 0x20) * fVar2,(float)puVar1[5] * fVar2);
    uVar4 = puVar1[7];
    uVar3 = puVar1[6];
  }
  local_70 = CONCAT44((float)((ulong)uVar3 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20),
                      (float)uVar3 + (float)*(undefined8 *)(param_3 + 0x50));
  uStack_68 = CONCAT44((float)((ulong)uVar4 >> 0x20) +
                       (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20),
                       (float)uVar4 + (float)*(undefined8 *)(param_3 + 0x58));
  (**(code **)(*(long *)PTR_DAT_047d19f0 +
               (ulong)*(byte *)(*(long *)(param_2 + 0x38) + 0x18) * 0x200 + 0x18))
            (*(long *)(param_2 + 0x38),&local_a0,&local_c0);
  fVar2 = (float)local_c0;
  fVar5 = (float)((ulong)local_c0 >> 0x20);
  fVar8 = (float)((ulong)uStack_b0 >> 0x20);
  fVar6 = (float)uStack_b8;
  fVar7 = (float)((ulong)uStack_b8 >> 0x20);
  fVar9 = (float)((ulong)uStack_a8 >> 0x20);
  local_c0 = CONCAT44((fVar8 - fVar5) * 0.5,((float)uStack_b0 - fVar2) * 0.5);
  uStack_b8 = CONCAT44((fVar9 - fVar7) * 0.5,((float)uStack_a8 - fVar6) * 0.5);
  local_a0 = CONCAT44((fVar5 + fVar8) * 0.5,(fVar2 + (float)uStack_b0) * 0.5);
  uStack_98 = CONCAT44((fVar7 + fVar9) * 0.5,(fVar6 + (float)uStack_a8) * 0.5);
  FUN_02eb7890(*(undefined1 *)(param_6 + 0x30),param_1,param_2,param_3,&local_a0,&local_c0,param_4,
               param_5,param_6,param_7,param_8 & 1,param_9);
  return;
}


