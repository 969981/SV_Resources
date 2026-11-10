/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0017fa60; name: FUN_0017fa60
 */


undefined1 *
FUN_0017fa60(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4,long param_5,
            ulong param_6,undefined8 param_7,float *param_8,undefined8 param_9,undefined4 param_10,
            long param_11,long param_12)

{
  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  float local_78;
  float fStack_74;
  
  if (((param_12 == 0) || (param_5 < 0x21)) || (param_5 - param_12 == 0)) {
    puVar4 = (undefined1 *)
             FUN_00174a40(param_1,0x53800000,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                          ,param_9);
    return puVar4;
  }
  local_78 = 1.0737418e+09;
  fStack_74 = 1.0737418e+09;
  param_2[5] = 2;
  puVar4 = param_2 + 6;
  uVar3 = (uint)param_6 & 0xffffffef;
  lVar1 = FUN_00174f30(param_1,0x53800000,puVar4,param_3,param_4,param_12,uVar3,param_7,&fStack_74,
                       param_9,param_10,0);
  puVar4 = puVar4 + lVar1;
  lVar1 = FUN_00174f30(param_1,0x53800000,puVar4,param_3,param_4 + param_12,param_5 - param_12,uVar3
                       ,param_7,&local_78,param_9,param_10,0);
  puVar4 = puVar4 + (lVar1 - (long)param_2);
  uVar3 = (uint)(puVar4 + param_5 * 0x40000 + 0x4ffffbfffb);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  *param_2 = (char)((ulong)(puVar4 + param_5 * 0x40000 + 0x4ffffbfffb) >> 0x20);
  *(uint *)(param_2 + 1) = uVar3 >> 0x10 | uVar3 << 0x10;
  *param_8 = fStack_74 + local_78 + 6.0;
  puVar2 = (undefined1 *)
           FUN_00174a40(param_1,0x53800000,param_2,param_3,param_4,param_5,param_6 & 0xffffffff,
                        param_7,param_8,param_9,param_10,param_11);
  if ((long)puVar2 < 1) {
    if (param_11 != 0) {
      FUN_0015edc0(param_4,param_5,param_11,0x100,0);
    }
    puVar2 = puVar4;
  }
  return puVar2;
}


