/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d0360; name: FUN_031d0360
 */


void FUN_031d0360(undefined8 *param_1,undefined4 param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
  puVar6 = param_1;
  if (((ulong)param_1 & 0xf) == 0) {
    uVar4 = param_3;
  }
  else {
    uVar4 = 4 - (((ulong)param_1 & 0xf) >> 2);
    uVar7 = param_3;
    if (uVar4 <= param_3) {
      uVar7 = uVar4;
    }
    puVar2 = (undefined8 *)((long)param_1 + uVar7 * 4);
    uVar4 = param_3 - uVar7;
    if (param_1 < puVar2) {
      uVar7 = uVar7 * 4 - 1;
      uVar1 = ((uint)(uVar7 >> 2) & 0x3fffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar8 = -((ulong)uVar1 & 7);
        puVar5 = param_1;
        do {
          bVar3 = lVar8 != -1;
          lVar8 = lVar8 + 1;
          puVar6 = (undefined8 *)((long)puVar5 + 4);
          *(undefined4 *)puVar5 = param_2;
          puVar5 = puVar6;
        } while (bVar3);
      }
      if (0x1b < uVar7) {
        do {
          puVar5 = puVar6 + 4;
          *(undefined4 *)puVar6 = param_2;
          *(undefined4 *)((long)puVar6 + 4) = param_2;
          *(undefined4 *)(puVar6 + 1) = param_2;
          *(undefined4 *)((long)puVar6 + 0xc) = param_2;
          *(undefined4 *)(puVar6 + 2) = param_2;
          *(undefined4 *)((long)puVar6 + 0x14) = param_2;
          *(undefined4 *)(puVar6 + 3) = param_2;
          *(undefined4 *)((long)puVar6 + 0x1c) = param_2;
          puVar6 = puVar5;
        } while (puVar5 < puVar2);
      }
    }
    else {
    }
  }
  if ((3 < uVar4) && (0 < (long)(uVar4 & 0xfffffffffffffffc))) {
    puVar2 = (undefined8 *)((long)puVar6 + (uVar4 & 0xfffffffffffffffc) * 4);
    puVar5 = puVar6;
    do {
      puVar6 = puVar5 + 2;
      puVar5[1] = CONCAT44(param_2,param_2);
      *puVar5 = CONCAT44(param_2,param_2);
      puVar5 = puVar6;
    } while (puVar6 < puVar2);
  }
  for (; puVar6 < (undefined8 *)((long)param_1 + param_3 * 4);
      puVar6 = (undefined8 *)((long)puVar6 + 4)) {
    *(undefined4 *)puVar6 = param_2;
  }
  return;
}


