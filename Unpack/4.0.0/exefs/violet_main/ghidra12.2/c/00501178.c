/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00501178; name: FUN_00501178
 */


void FUN_00501178(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  void *__s;
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  byte *pbVar6;
  size_t __n;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_58 [24];
  
  uVar8 = *(ulong *)(param_1 + 8);
  __n = param_2 << 3;
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 8) = param_2;
  if (lVar2 == 0) {
    __s = (void *)FUN_0049e6c0(__n);
  }
  else {
    if (*(long *)(lVar2 + 0x70) != 0) {
      FUN_00520d08(lVar2,0,__n);
    }
    __s = (void *)FUN_00520c00(lVar2,__n);
  }
  memset(__s,0,__n);
  uVar7 = *(ulong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(void **)(param_1 + 0x20) = __s;
  for (; uVar7 < uVar8; uVar7 = uVar7 + 1) {
    puVar9 = *(undefined8 **)(lVar1 + uVar7 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      if (puVar9 == *(undefined8 **)(lVar1 + (uVar7 ^ 1) * 8)) {
        FUN_00501318(param_1,lVar1,uVar7);
        uVar7 = uVar7 + 1;
      }
      else {
        do {
          puVar10 = (undefined8 *)puVar9[2];
          uVar3 = 0;
          puVar5 = (ulong *)*puVar9;
          switch((uint)puVar5[3]) {
          case 1:
            uVar3 = (ulong)(int)(uint)*puVar5;
            break;
          case 2:
          case 4:
            uVar3 = *puVar5;
            break;
          case 3:
            uVar3 = (ulong)(uint)*puVar5;
            break;
          case 7:
            uVar3 = (ulong)(byte)*puVar5;
            break;
          case 9:
            pbVar6 = (byte *)puVar5[2];
            if ((*puVar5 & 1) == 0) {
              pbVar6 = (byte *)((long)puVar5 + 1);
            }
            bVar4 = *pbVar6;
            if (bVar4 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 0;
              do {
                pbVar6 = pbVar6 + 1;
                uVar3 = uVar3 * 5 + (ulong)bVar4;
                bVar4 = *pbVar6;
              } while (bVar4 != 0);
            }
          }
          FUN_0050107c(auStack_58,param_1,
                       *(long *)(param_1 + 8) - 1U & *(long *)(param_1 + 0x10) + uVar3);
          puVar9 = puVar10;
        } while (puVar10 != (undefined8 *)0x0);
      }
    }
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    FUN_0049e700(lVar1);
  }
  return;
}


