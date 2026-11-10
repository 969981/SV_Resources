/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03061468; name: FUN_03061468
 */


uint FUN_03061468(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  undefined8 local_110;
  float *pfStack_108;
  undefined8 *local_100;
  undefined1 local_f8;
  float local_f0 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar3 = nn::os::GetSystemTick();
  lVar4 = nn::os::GetSystemTick();
  fVar7 = *(float *)(param_1 + 0x3c);
  if (*(float *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x38) * 4 + 0x60) +
      *(float *)(param_1 + 0x40) < fVar7) {
    local_e0 = CONCAT44(fVar7,fVar7);
    iVar1 = FUN_030741d0(*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),param_2,param_3,
                         param_4,param_5,param_6,param_7,param_1,&local_e0,param_1 + 0x88);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_03061594;
    }
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 == (long *)0x0) {
    uVar2 = 1;
  }
  else {
    local_e0 = CONCAT44(local_e0._4_4_,0xffffffff);
    local_c8 = 0;
    pfStack_108 = local_f0;
    local_b0 = 0xffffffff;
    local_98 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_f0[0] = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
    local_e8 = *(undefined8 *)(param_1 + 0x48);
    local_110 = *(undefined8 *)(param_1 + 0x30);
    local_100 = &local_e0;
    local_f8 = 0x80;
    local_80 = param_3;
    local_78 = param_4;
    uStack_70 = param_5;
    local_68 = param_6;
    uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,&local_110);
  }
LAB_03061594:
  lVar6 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x78) = (lVar6 - lVar4) + *(long *)(param_1 + 0x78);
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  lVar4 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x60) = (lVar4 - lVar3) + *(long *)(param_1 + 0x60);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return uVar2 & 1;
}


