/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00889a60; name: FUN_00889a60
 */


void FUN_00889a60(undefined8 *param_1,float *param_2,long param_3,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_28;
  
  if (param_3 == 0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
  }
  else {
    local_b8 = *param_1;
    lVar1 = param_3 + param_4;
    uStack_b0 = param_1[1];
    uStack_98 = param_1[4];
    local_a8 = (undefined4)param_1[2];
    uStack_a4 = (undefined4)((ulong)param_1[2] >> 0x20);
    local_a0 = (undefined4)param_1[3];
    uStack_9c = (undefined4)((ulong)param_1[3] >> 0x20);
    local_90 = param_1[5];
    uStack_88 = param_1[6];
    local_80 = param_1[7];
    uStack_78 = param_1[8];
    local_70 = param_1[9];
    uStack_68 = param_1[10];
    local_60 = param_1[0xb];
    uStack_58 = param_1[0xc];
    (**(code **)(*(long *)param_1[0xb] + 0x60))((long *)param_1[0xb],param_1,param_3,lVar1);
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    uStack_a4 = 0;
    local_a0 = 0;
    local_28 = param_3;
    do {
      local_50 = 0;
      local_48 = 0;
      FUN_00889b98(&local_b8,&local_50,&local_28,param_4);
      fVar3 = (float)local_50;
      if (*param_2 <= (float)local_50) {
        fVar3 = *param_2;
      }
      fVar2 = local_50._4_4_;
      if (param_2[1] <= local_50._4_4_) {
        fVar2 = param_2[1];
      }
      *param_2 = fVar3;
      param_2[1] = fVar2;
      fVar3 = (float)local_48;
      if ((float)local_48 <= param_2[2]) {
        fVar3 = param_2[2];
      }
      fVar2 = local_48._4_4_;
      if (local_48._4_4_ <= param_2[3]) {
        fVar2 = param_2[3];
      }
      param_4 = (int)lVar1 - (int)local_28;
      param_2[2] = fVar3;
      param_2[3] = fVar2;
    } while (0 < param_4);
    (**(code **)(*(long *)param_1[0xb] + 0x68))((long *)param_1[0xb],param_1,param_3,lVar1);
    FUN_00884284(&local_b8);
  }
  return;
}


