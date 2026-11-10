/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013ea40; name: FUN_0013ea40
 */


void FUN_0013ea40(long param_1,uint param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = *(long *)(param_1 + 0x10) - *param_3;
  *(uint *)((long)param_3 + 0x2c) = (int)(uVar6 >> 4) + ~param_2;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  lVar2 = (ulong)*(byte *)(param_4 + 0xc) + 1;
  if (*(long *)(param_1 + 0x28) - (long)puVar1 >> 4 <= lVar2) {
    FUN_00126e50(param_1,lVar2,1);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar1 + 2;
  puVar3 = (undefined8 *)*param_3;
  *puVar1 = *puVar3;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar3 + 1);
  if (0 < (int)param_2) {
    lVar2 = 0;
    lVar4 = (ulong)(param_2 + 1) - 1;
    do {
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x10) = puVar1 + 2;
      lVar5 = *param_3;
      *puVar1 = *(undefined8 *)(lVar5 + lVar2 + 0x10);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(lVar5 + lVar2 + 0x18);
      lVar5 = *param_3 + lVar2;
      lVar2 = lVar2 + 0x10;
      lVar4 = lVar4 + -1;
      *(undefined1 *)(lVar5 + 0x18) = 0;
    } while (lVar4 != 0);
  }
  lVar2 = ((long)(uVar6 * 0x10000000) >> 0x20) * 0x10;
  *param_3 = *param_3 + lVar2;
  param_3[1] = param_3[1] + lVar2;
  return;
}


