/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353b410; name: FUN_0353b410
 */


void FUN_0353b410(undefined4 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (*(int *)(param_2 + 0x189c) != 0) {
    FUN_0353b6c0(param_1,param_3);
    FUN_03539580(param_1,param_2);
    return;
  }
  uVar1 = *(uint *)(param_3 + 0x2c);
  if (uVar1 == 1) {
    lVar2 = *(long *)(param_2 + 0xbd8);
    *(long *)(param_2 + 0xbd8) = lVar2 + 1;
    *(long *)(param_2 + lVar2 * 8 + 0xbe0) = param_3;
    if (*(long *)(param_2 + 0xbd8) == 400) {
      lVar2 = 0;
      do {
        FUN_0353b6c0(param_1,*(undefined8 *)(param_2 + 0x1660 + lVar2));
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0x200);
      *(undefined8 *)(param_2 + 0xbd8) = 0x150;
    }
  }
  else {
    lVar4 = param_2 + (ulong)uVar1 * 0x328;
    lVar2 = *(long *)(lVar4 + 0x1258);
    *(long *)(lVar4 + 0x1258) = lVar2 + 1;
    ((long *)(lVar4 + 0x1258))[lVar2 + 1] = param_3;
    uVar3 = 100 - (ulong)(uVar1 >> 1);
    if (*(ulong *)(lVar4 + 0x1258) == uVar3) {
      lVar2 = 6;
      if (uVar3 < 0x10) {
        lVar2 = (uVar3 >> 2) + 2;
      }
      lVar6 = uVar3 - lVar2;
      puVar5 = (undefined8 *)
               ((ulong)uVar1 * 0x328 + (lVar2 + (ulong)(uVar1 >> 1)) * -8 + param_2 + 0x1580);
      do {
        FUN_0353b6c0(param_1,*puVar5);
        lVar2 = lVar2 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar2 != 0);
      *(long *)(lVar4 + 0x1258) = lVar6;
    }
  }
  return;
}


