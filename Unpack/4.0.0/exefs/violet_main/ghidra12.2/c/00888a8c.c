/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00888a8c; name: FUN_00888a8c
 */


ulong FUN_00888a8c(long param_1,uint param_2,uint param_3,int param_4,undefined2 param_5)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined1 auStack_68 [4];
  int local_64;
  uint local_58;
  uint local_54;
  
  if (param_2 == 0) {
    uVar3 = FUN_00888360(param_1,&local_54,param_5,param_3);
    if ((((uVar3 & 1) != 0) &&
        (uVar3 = (ulong)local_54, *(char *)(*(long *)(param_1 + 0x1c08) + uVar3) == '\0')) &&
       (*(char *)(*(long *)(param_1 + 0x1c18) + uVar3) == '\0')) {
      if (*(char *)(param_1 + 0x1bd1) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(param_1 + 0x1bd8))();
        uVar4 = uVar4 & 0xffffffff;
      }
      FUN_008889b0(param_1,uVar3,uVar4);
      nn::fontll::ScalableFontEngine::SetScale
                ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar4 * 0xb8,param_4 << 0x10,0,0);
      nn::fontll::ScalableFontEngine::GetError();
      lVar5 = *(long *)(*(long *)(param_1 + 0x1c48) + uVar3 * 8);
      if (lVar5 != 0) {
        fVar6 = *(float *)(*(long *)(param_1 + 0x1bf0) + uVar3 * 0x1c + 0x10);
        iVar2 = nn::fontll::ScalableFontEngine::AcquireOtfKerningFirst
                          ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar4 * 0xb8),(uint)lVar5
                           ,param_3);
LAB_00888ccc:
        return (ulong)(uint)(int)(fVar6 * (float)iVar2);
      }
    }
  }
  else if (param_3 == 0) {
    uVar3 = FUN_00888360(param_1,&local_54,param_5,param_2);
    if ((((uVar3 & 1) != 0) &&
        (uVar3 = (ulong)local_54, *(char *)(*(long *)(param_1 + 0x1c08) + uVar3) == '\0')) &&
       (*(char *)(*(long *)(param_1 + 0x1c18) + uVar3) == '\0')) {
      if (*(char *)(param_1 + 0x1bd1) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(param_1 + 0x1bd8))();
        uVar4 = uVar4 & 0xffffffff;
      }
      FUN_008889b0(param_1,uVar3,uVar4);
      nn::fontll::ScalableFontEngine::SetScale
                ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar4 * 0xb8,param_4 << 0x10,0,0);
      nn::fontll::ScalableFontEngine::GetError();
      lVar5 = *(long *)(*(long *)(param_1 + 0x1c48) + uVar3 * 8);
      if (lVar5 != 0) {
        fVar6 = *(float *)(*(long *)(param_1 + 0x1bf0) + uVar3 * 0x1c + 0x10);
        iVar2 = nn::fontll::ScalableFontEngine::AcquireOtfKerningLast
                          ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar4 * 0xb8),(uint)lVar5
                           ,param_2);
        goto LAB_00888ccc;
      }
    }
  }
  else {
    uVar3 = FUN_00888360(param_1,&local_54,param_5,param_2);
    if ((((uVar3 & 1) != 0) &&
        (uVar3 = FUN_00888360(param_1,&local_58,param_5,param_3), (uVar3 & 1) != 0)) &&
       ((uVar3 = (ulong)local_54, local_54 == local_58 &&
        ((*(char *)(*(long *)(param_1 + 0x1c08) + uVar3) == '\0' &&
         (*(char *)(*(long *)(param_1 + 0x1c18) + uVar3) == '\0')))))) {
      if (*(char *)(param_1 + 0x1bd1) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(param_1 + 0x1bd8))();
        uVar4 = uVar4 & 0xffffffff;
      }
      FUN_008889b0(param_1,local_54,uVar4);
      nn::fontll::ScalableFontEngine::SetScale
                ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar4 * 0xb8,param_4 << 0x10,0,0);
      nn::fontll::ScalableFontEngine::GetError();
      lVar5 = *(long *)(*(long *)(param_1 + 0x1c48) + uVar3 * 8);
      if ((lVar5 == 0) ||
         (iVar2 = nn::fontll::ScalableFontEngine::AcquireOtfKerning
                            ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar4 * 0xb8),
                             (uint)lVar5,param_2,param_3), iVar2 == 0)) {
        uVar4 = nn::fontll::ScalableFontEngine::GetKerning
                          ((int *)(*(long *)(param_1 + 0x10) + uVar4 * 0xb8),&local_64,
                           (uint)auStack_68,param_2);
        if ((int)uVar4 == 0) {
          bVar1 = false;
          uVar4 = (ulong)(uint)((int)(*(float *)(*(long *)(param_1 + 0x1bf0) + uVar3 * 0x1c + 0x10)
                                     * (float)local_64) >> 0x10);
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = false;
        uVar4 = (ulong)(uint)(int)(*(float *)(*(long *)(param_1 + 0x1bf0) + uVar3 * 0x1c + 0x10) *
                                  (float)iVar2);
      }
      if (!bVar1) {
        return uVar4;
      }
    }
  }
  return 0;
}


