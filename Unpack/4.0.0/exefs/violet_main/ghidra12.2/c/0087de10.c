/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087de10; name: FUN_0087de10
 */


undefined8 FUN_0087de10(uint *param_1,void *param_2,void *param_3,long param_4,uint param_5)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (param_1 == (uint *)0x0) {
    return 0x80260201;
  }
  if (param_2 == (void *)0x0) {
    return 0x80260201;
  }
  if (param_3 == (void *)0x0) {
    return 0x80260201;
  }
  if (param_4 == 0) {
    return 0x80260201;
  }
  if ((param_1[0x12] & 1) == 0) {
    return 0x80260203;
  }
  if (*param_1 < param_5) {
    return 0x80260201;
  }
  pvVar3 = *(void **)(param_4 + 0x20);
  pvVar2 = param_2;
  if (param_1[0x16] == 0xffffffff) {
joined_r0x0087df1c:
    pvVar4 = pvVar2;
    if (pvVar3 != param_3) goto LAB_0087df3c;
  }
  else {
    if (param_1[0x26] == 1) {
      pvVar4 = pvVar3;
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x1e))
                        (*(undefined8 *)(param_1 + 0x18),param_2,pvVar3,param_4,param_5);
      if (iVar1 != 0) {
        return 0x80800005;
      }
      pvVar2 = pvVar3;
      pvVar4 = param_3;
      if (pvVar3 == param_3) {
        pvVar4 = *(void **)(param_4 + 0x20);
        pvVar2 = param_3;
      }
    }
    pvVar3 = pvVar4;
    if (param_1[0x28] == 0xffffffff) goto joined_r0x0087df1c;
    if (param_1[0x38] != 1) {
      iVar1 = (**(code **)(param_1 + 0x30))
                        (*(undefined8 *)(param_1 + 0x2a),pvVar2,pvVar4,param_4,param_5);
      if (iVar1 != 0) {
        return 0x80800005;
      }
      pvVar2 = pvVar4;
      pvVar3 = param_3;
      if (pvVar4 == param_3) {
        pvVar3 = *(void **)(param_4 + 0x20);
        pvVar2 = param_3;
      }
    }
    if (param_1[0x3a] == 0xffffffff) goto joined_r0x0087df1c;
    pvVar4 = pvVar3;
    if (param_1[0x4a] != 1) {
      iVar1 = (**(code **)(param_1 + 0x42))
                        (*(undefined8 *)(param_1 + 0x3c),pvVar2,pvVar3,param_4,param_5);
      if (iVar1 != 0) {
        return 0x80800005;
      }
      pvVar2 = pvVar3;
      pvVar4 = param_3;
      if (pvVar3 == param_3) {
        pvVar4 = *(void **)(param_4 + 0x20);
        pvVar2 = param_3;
      }
    }
    pvVar3 = pvVar4;
    if ((param_1[0x4c] == 0xffffffff) || (param_1[0x5c] == 1)) goto joined_r0x0087df1c;
    iVar1 = (**(code **)(param_1 + 0x54))
                      (*(undefined8 *)(param_1 + 0x4e),pvVar2,pvVar4,param_4,param_5);
    if (iVar1 != 0) {
      return 0x80800005;
    }
    if (pvVar4 == param_3) {
      pvVar2 = param_3;
      pvVar3 = *(void **)(param_4 + 0x20);
      goto joined_r0x0087df1c;
    }
  }
  memcpy(param_3,*(void **)(param_4 + 0x20),(ulong)(param_5 * param_1[4] * 4));
LAB_0087df3c:
  if (pvVar4 == param_2) {
    memcpy(param_3,param_2,(ulong)(param_5 * param_1[4] * 4));
  }
  return 0;
}


