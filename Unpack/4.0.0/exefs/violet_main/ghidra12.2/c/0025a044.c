/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025a044; name: FUN_0025a044
 */


void FUN_0025a044(long param_1,long param_2)

{
  long lVar1;
  void *__s;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  byte *pbVar6;
  size_t __n;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_48 [24];
  
  uVar8 = *(ulong *)(param_1 + 8);
  __n = param_2 << 3;
  lVar1 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 8) = param_2;
  if (lVar4 == 0) {
    __s = (void *)FUN_0049e6c0(__n);
  }
  else {
    if (*(long *)(lVar4 + 0x70) != 0) {
      FUN_00520d08(lVar4,0,__n);
    }
    __s = (void *)FUN_00520c00(lVar4,__n);
  }
  memset(__s,0,__n);
  uVar7 = *(ulong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(void **)(param_1 + 0x20) = __s;
  for (; uVar7 < uVar8; uVar7 = uVar7 + 1) {
    puVar2 = *(undefined8 **)(lVar1 + uVar7 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      if (puVar2 == *(undefined8 **)(lVar1 + (uVar7 ^ 1) * 8)) {
        FUN_0025a188(param_1,lVar1,uVar7);
        uVar7 = uVar7 + 1;
      }
      else {
        do {
          pbVar3 = (byte *)*puVar2;
          pbVar6 = *(byte **)(pbVar3 + 0x10);
          if ((*pbVar3 & 1) == 0) {
            pbVar6 = pbVar3 + 1;
          }
          puVar2 = (undefined8 *)puVar2[2];
          bVar5 = *pbVar6;
          if (bVar5 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = 0;
            do {
              pbVar6 = pbVar6 + 1;
              lVar4 = lVar4 * 5 + (ulong)bVar5;
              bVar5 = *pbVar6;
            } while (bVar5 != 0);
          }
          FUN_00259f48(auStack_48,param_1,
                       *(long *)(param_1 + 8) - 1U & *(long *)(param_1 + 0x10) + lVar4);
        } while (puVar2 != (undefined8 *)0x0);
      }
    }
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    FUN_0049e700(lVar1);
  }
  return;
}


