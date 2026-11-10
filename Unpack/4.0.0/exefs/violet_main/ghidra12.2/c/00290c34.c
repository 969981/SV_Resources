/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00290c34; name: FUN_00290c34
 */


uint FUN_00290c34(long param_1,long param_2)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar2 = (ulong)(*(byte *)(param_2 + 0x10) >> 1);
  pvVar3 = (void *)(param_2 + 0x11);
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 0x18);
    pvVar3 = *(void **)(param_2 + 0x20);
  }
  sVar4 = uVar2;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar6 = (ulong)(*(byte *)(param_1 + 0x10) >> 1);
    pvVar1 = (void *)(param_1 + 0x11);
    if (uVar6 <= uVar2) {
      sVar4 = uVar6;
    }
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x18);
    pvVar1 = *(void **)(param_1 + 0x20);
    if (uVar6 <= uVar2) {
      sVar4 = uVar6;
    }
  }
  if ((sVar4 == 0) || (uVar5 = memcmp(pvVar1,pvVar3,sVar4), uVar5 == 0)) {
    uVar5 = 1;
    if (uVar6 < uVar2) {
      uVar5 = 0xffffffff;
    }
    if (uVar2 == uVar6) {
      uVar2 = (ulong)(*(byte *)(param_2 + 0x28) >> 1);
      pvVar3 = (void *)(param_2 + 0x29);
      if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
        uVar2 = *(ulong *)(param_2 + 0x30);
        pvVar3 = *(void **)(param_2 + 0x38);
      }
      sVar4 = uVar2;
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        uVar6 = (ulong)(*(byte *)(param_1 + 0x28) >> 1);
        pvVar1 = (void *)(param_1 + 0x29);
        if (uVar6 <= uVar2) {
          sVar4 = uVar6;
        }
      }
      else {
        uVar6 = *(ulong *)(param_1 + 0x30);
        pvVar1 = *(void **)(param_1 + 0x38);
        if (uVar6 <= uVar2) {
          sVar4 = uVar6;
        }
      }
      if ((sVar4 == 0) || (uVar5 = memcmp(pvVar1,pvVar3,sVar4), uVar5 == 0)) {
        uVar5 = 1;
        if (uVar6 < uVar2) {
          uVar5 = 0xffffffff;
        }
        if (uVar2 == uVar6) {
          uVar2 = (ulong)(*(byte *)(param_2 + 0x40) >> 1);
          pvVar3 = (void *)(param_2 + 0x41);
          if ((*(byte *)(param_2 + 0x40) & 1) != 0) {
            uVar2 = *(ulong *)(param_2 + 0x48);
            pvVar3 = *(void **)(param_2 + 0x50);
          }
          sVar4 = uVar2;
          if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
            uVar6 = (ulong)(*(byte *)(param_1 + 0x40) >> 1);
            pvVar1 = (void *)(param_1 + 0x41);
            if (uVar6 <= uVar2) {
              sVar4 = uVar6;
            }
          }
          else {
            uVar6 = *(ulong *)(param_1 + 0x48);
            pvVar1 = *(void **)(param_1 + 0x50);
            if (uVar6 <= uVar2) {
              sVar4 = uVar6;
            }
          }
          if ((sVar4 == 0) || (uVar5 = memcmp(pvVar1,pvVar3,sVar4), uVar5 == 0)) {
            uVar5 = (uint)(uVar2 < uVar6);
            if (uVar6 < uVar2) {
              uVar5 = 0xffffffff;
            }
            return uVar5;
          }
        }
      }
    }
  }
  return uVar5;
}


