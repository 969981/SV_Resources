/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f94194; name: FUN_01f94194
 */


void FUN_01f94194(long param_1,undefined8 param_2,ulong param_3)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  
  if (*(char *)(param_1 + 0x2b4) != '\0') {
    if ((param_3 & 1) == 0) {
      pfVar2 = (float *)FUN_00da75d8();
    }
    else {
      pfVar2 = (float *)FUN_00d3ccd4();
    }
    lVar3 = FUN_00e06b88(param_1);
    if ((pfVar2 != (float *)0x0) && (lVar3 != 0)) {
      fVar4 = (float)FUN_00d5faf0(param_1,param_2);
      fVar8 = *pfVar2;
      local_80 = 6;
      local_78 = (long *)0x0;
      pfVar1 = (float *)(param_1 + 0x418);
      if ((param_3 & 1) == 0) {
        pfVar1 = (float *)(param_1 + 0x410);
      }
      local_b0 = 0xc49c0b5bf3c56b3d;
      pcStack_a8 = "rotationYawSpeed";
      local_90 = 0x2c5a63f0ffc0685b;
      pcStack_88 = "lockOn";
      local_a0 = 0x10;
      local_98 = (long *)0x0;
      fVar5 = (float)FUN_00e06d80(lVar3,&local_90,&local_b0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      fVar7 = pfVar2[1];
      local_90 = 0x2c5a63f0ffc0685b;
      pcStack_88 = "lockOn";
      local_80 = 6;
      local_78 = (long *)0x0;
      local_b0 = 0x9a691de104dc1bd6;
      pcStack_a8 = "rotationPitchSpeed";
      local_a0 = 0x12;
      local_98 = (long *)0x0;
      fVar6 = (float)FUN_00e06d80(lVar3,&local_90,&local_b0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      *pfVar1 = fVar4 * (fVar8 * ((fVar5 * 3.1415927) / 180.0) + *pfVar1);
      pfVar1[1] = fVar4 * -(fVar7 * ((fVar6 * 3.1415927) / 180.0) + pfVar1[1]);
    }
  }
  return;
}


