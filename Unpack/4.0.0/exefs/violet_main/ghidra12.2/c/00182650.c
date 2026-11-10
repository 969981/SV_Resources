/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00182650; name: FUN_00182650
 */


long FUN_00182650(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,long param_4,
                 long param_5,long param_6,uint param_7,undefined8 param_8,float *param_9,
                 undefined8 param_10,int param_11)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  float fVar6;
  float local_74;
  
  uVar1 = param_7 & 0xffffffdf;
  if (7 < param_11) {
    uVar1 = param_7;
  }
  if (param_2 < param_3) {
    puVar4 = param_2 + 1;
    *param_2 = 0x80;
    if (param_6 < 1) {
      fVar6 = 1.0;
    }
    else {
      fVar6 = 1.0;
      lVar3 = 0;
      iVar5 = 1;
      do {
        local_74 = 1.0737418e+09;
        lVar2 = FUN_00174f30(param_1,0x53800000,puVar4,param_3,*(undefined8 *)(param_4 + lVar3 * 8),
                             *(undefined8 *)(param_5 + lVar3 * 8),uVar1,param_8,&local_74,param_10,
                             param_11,0);
        if (lVar2 < 0) {
          lVar3 = -1;
          goto joined_r0x001827c0;
        }
        fVar6 = fVar6 + local_74;
        lVar3 = (long)iVar5;
        puVar4 = puVar4 + lVar2;
        iVar5 = iVar5 + 1;
      } while (lVar3 < param_6);
    }
    lVar3 = (long)puVar4 - (long)param_2;
    *param_9 = fVar6;
  }
  else {
    lVar3 = -1;
  }
joined_r0x001827c0:
  if ((param_7 >> 5 & 1) != 0) {
    lVar2 = FUN_0017fc70(param_1,param_2,param_3,param_4,param_5,param_6,uVar1,param_8,param_9,
                         param_10,param_11);
    if (lVar2 < 1) {
      lVar2 = lVar3;
    }
    lVar3 = lVar2;
  }
  return lVar3;
}


