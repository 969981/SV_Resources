/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c51a0; name: FUN_031c51a0
 */


void FUN_031c51a0(float param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long local_58;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar9 = (long)((float)param_3 / param_1) + 6;
  *param_2 = 0;
  puVar3 = PTR_DAT_047d1a08;
  if (uVar9 < 7) {
    uVar9 = 0;
  }
  else {
    uVar9 = uVar9 / 7;
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
  }
  uVar6 = 7L << (uVar9 & 0x3f);
  while ((ulong)(long)((float)uVar6 * param_1) < param_3) {
    uVar6 = uVar6 << 1;
    uVar9 = uVar9 + 1;
  }
  local_58 = 0x80L << (uVar9 & 0x3f);
  puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0x80);
  *param_2 = (long)puVar5;
  param_2[1] = ~(-1L << (uVar9 & 0x3f));
  *(int *)(param_2 + 2) = 0x38 - (int)uVar9;
  *puVar5 = 0;
  puVar5[1] = 0;
  if (param_2[1] != 0) {
    uVar9 = 1;
    lVar7 = 0x80;
    do {
      lVar8 = *param_2;
      uVar9 = uVar9 + 1;
      *(undefined8 *)(lVar8 + lVar7) = 0;
      ((undefined8 *)(lVar8 + lVar7))[1] = 0;
      lVar7 = lVar7 + 0x80;
    } while (uVar9 <= (ulong)param_2[1]);
  }
  if (lVar2 != -1) {
    lVar7 = 0;
    puVar5 = (undefined8 *)(lVar1 + 0x18);
    do {
      uVar9 = *(ulong *)(lVar1 + lVar7 * 0x80 + 8) >> 8 & 0x101010101010101;
      if (uVar9 != 0) {
        puVar10 = puVar5;
        do {
          if ((uVar9 & 1) != 0) {
            FUN_031c46dc(param_2,puVar10[-1],*puVar10);
          }
          uVar9 = uVar9 >> 8;
          puVar10 = puVar10 + 2;
        } while (uVar9 != 0);
      }
      bVar4 = lVar7 != lVar2;
      lVar7 = lVar7 + 1;
      puVar5 = puVar5 + 0x10;
    } while (bVar4);
  }
  (**(code **)(puVar3 + 8))(0,lVar1,0);
  return;
}


