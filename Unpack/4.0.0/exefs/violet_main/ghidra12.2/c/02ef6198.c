/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ef6198; name: FUN_02ef6198
 */


void FUN_02ef6198(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(undefined8 *)(*param_1 + (ulong)param_2 * 0x10) = 0xffffffffffffffff;
  uVar6 = *(uint *)((long)param_1 + 0xc);
  lVar7 = *param_1;
  uVar3 = param_2;
  do {
    uVar3 = uVar6 + uVar3 & uVar6;
  } while (*(long *)(lVar7 + (ulong)uVar3 * 0x10) != -1);
  uVar9 = (ulong)(uVar6 & param_2 + 1);
  lVar10 = *(long *)(lVar7 + uVar9 * 0x10);
  if (lVar10 != -1) {
    uVar3 = uVar3 + 1 & uVar6;
    do {
      uVar5 = (int)lVar10 * -0x61c8864f;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar8 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar5 = (int)((ulong)lVar10 >> 0x20) * -0x61c8864f;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar5 = (uVar8 + (uVar8 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5) & uVar6;
      uVar8 = (uint)uVar9;
      if ((((uVar8 < uVar3) || (uVar5 <= param_2)) &&
          ((param_2 <= uVar8 || (uVar5 <= param_2 && uVar8 < uVar5)))) &&
         (uVar5 <= param_2 || uVar3 <= uVar5)) {
        puVar1 = (undefined8 *)(lVar7 + (ulong)param_2 * 0x10);
        puVar2 = (undefined8 *)(lVar7 + uVar9 * 0x10);
        uVar4 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar4;
        *(undefined8 *)(*param_1 + uVar9 * 0x10) = 0xffffffffffffffff;
        uVar6 = *(uint *)((long)param_1 + 0xc);
        lVar7 = *param_1;
        param_2 = uVar8;
      }
      uVar9 = (ulong)(uVar6 & uVar8 + 1);
      lVar10 = *(long *)(lVar7 + uVar9 * 0x10);
    } while (lVar10 != -1);
  }
  return;
}


