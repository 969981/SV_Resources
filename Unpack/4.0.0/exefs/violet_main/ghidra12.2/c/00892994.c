/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00892994; name: FUN_00892994
 */


void FUN_00892994(long param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  
  uVar4 = param_3;
  if ((param_3 & 0xff) <= (uint)*(byte *)(param_1 + 1)) {
    uVar4 = (uint)*(byte *)(param_1 + 1);
  }
  *(char *)(param_1 + 1) = (char)uVar4;
  if (0 < (int)param_3) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar6);
      puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + lVar6);
      uVar5 = puVar1[-3];
      *puVar2 = puVar1[-4];
      puVar2[1] = uVar5;
      uVar5 = puVar1[-1];
      lVar3 = *(long *)(param_1 + 8) + lVar6;
      *(undefined4 *)(lVar3 + 8) = puVar1[-2];
      *(undefined4 *)(lVar3 + 0xc) = uVar5;
      uVar5 = puVar1[1];
      lVar3 = *(long *)(param_1 + 8) + lVar6;
      *(undefined4 *)(lVar3 + 0x10) = *puVar1;
      *(undefined4 *)(lVar3 + 0x14) = uVar5;
      lVar3 = *(long *)(param_1 + 8) + lVar6;
      uVar5 = puVar1[3];
      lVar6 = lVar6 + 0x20;
      *(undefined4 *)(lVar3 + 0x18) = puVar1[2];
      *(undefined4 *)(lVar3 + 0x1c) = uVar5;
    } while ((ulong)param_3 * 0x20 != lVar6);
  }
  return;
}


