/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03503f9c; name: FUN_03503f9c
 */


undefined8
FUN_03503f9c(float param_1,float param_2,undefined8 param_3,undefined1 param_4 [16],
            undefined8 param_5,undefined8 param_6,uint param_7,undefined4 param_8,uint param_9,
            void *param_10)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  
  uVar5 = 0x1f;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  fVar6 = (float)param_3;
  if (param_4._0_4_ <= 1.0) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar6)) {
      bVar2 = fVar6 < 1.0;
      bVar3 = fVar6 == 1.0;
      bVar4 = false;
    }
  }
  if (((bVar3 || bVar2 != bVar4) && (0.0 <= fVar6)) && (0.0 <= param_4._0_4_)) {
    iVar1 = ((param_9 & 0xff) + 3 & 0x1fc) * (param_7 & 0xff);
    if (iVar1 != 0) {
      memset(param_10,0,(ulong)(uint)(iVar1 * 4));
    }
    fVar6 = cosf(param_2);
    fVar7 = sinf(param_1);
    fVar8 = sinf(param_2);
    local_78 = cosf(param_1);
    local_78 = fVar6 * local_78;
    local_98 = 0;
    uStack_90 = 0x3f800000;
    local_88 = 0x3f800000;
    local_80 = fVar6 * fVar7;
    fStack_7c = fVar8;
    uVar5 = FUN_03503d68(param_5,param_3,param_4._0_8_,param_6,&local_98,param_10,param_7,param_8,
                         param_9);
  }
  return uVar5;
}


