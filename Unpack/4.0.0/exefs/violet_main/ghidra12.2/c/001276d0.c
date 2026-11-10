/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001276d0; name: FUN_001276d0
 */


void FUN_001276d0(long param_1,long *param_2,long *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  
  lVar13 = *(long *)(*param_3 + 0x18);
  bVar3 = *(byte *)(lVar13 + 0xc);
  bVar4 = *(byte *)(lVar13 + 10);
  if (0 < (int)param_4) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)((long)param_3 + lVar6);
      puVar2 = (undefined8 *)(*param_2 + lVar6);
      *puVar2 = *puVar1;
      lVar6 = lVar6 + 0x10;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
    } while ((ulong)param_4 * 0x10 != lVar6);
  }
  lVar6 = *(long *)(param_1 + 0x28);
  uVar14 = (uint)bVar4;
  if ((long)(ulong)bVar3 < lVar6 - *(long *)(param_1 + 0x10) >> 4) {
    lVar6 = *param_2;
    uVar5 = bVar4 - param_4;
  }
  else {
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_0012ac30(param_1);
      lVar6 = *(long *)(param_1 + 0x28);
    }
    uVar7 = lVar6 - *(long *)(param_1 + 0x30);
    if (1000000 < (int)(uVar7 >> 4)) {
                    /* WARNING: Subroutine does not return */
      FUN_00126bd0(param_1,5);
    }
    uVar5 = (uint)(uVar7 >> 3) & 0xfffffffe;
    if (999999 < (int)uVar5) {
      uVar5 = 1000000;
    }
    uVar12 = (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x30)) >> 4) +
             (uint)bVar3;
    if ((int)uVar12 <= (int)uVar5) {
      uVar12 = uVar5;
    }
    if (1000000 < (int)uVar12) {
      FUN_00126ce0(param_1,0xf4308,1);
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"stack overflow");
    }
    FUN_00126ce0(param_1,uVar12,1);
    lVar6 = *param_2;
    uVar5 = uVar14 - param_4;
  }
  uVar12 = param_4;
  if ((int)param_4 <= (int)(uint)bVar4) {
    uVar12 = uVar14 + 1;
    lVar8 = (long)(int)param_4;
    uVar11 = uVar12 - param_4 & 3;
    if (uVar11 != 0) {
      puVar9 = (undefined1 *)(lVar6 + lVar8 * 0x10 + 8);
      do {
        lVar8 = lVar8 + 1;
        uVar11 = uVar11 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 0x10;
      } while (uVar11 != 0);
    }
    if (2 < uVar5) {
      iVar10 = (uVar14 - (int)lVar8) + 1;
      puVar9 = (undefined1 *)(lVar6 + lVar8 * 0x10 + 0x28);
      do {
        puVar9[-0x20] = 0;
        iVar10 = iVar10 + -4;
        puVar9[-0x10] = 0;
        *puVar9 = 0;
        puVar9[0x10] = 0;
        puVar9 = puVar9 + 0x40;
      } while (iVar10 != 0);
    }
  }
  param_2[1] = lVar6 + (ulong)bVar3 * 0x10 + 0x10;
  lVar13 = *(long *)(lVar13 + 0x40);
  *(ushort *)((long)param_2 + 0x3e) = *(ushort *)((long)param_2 + 0x3e) | 0x20;
  param_2[4] = lVar13;
  *(long *)(param_1 + 0x10) = lVar6 + (long)(int)uVar12 * 0x10;
  return;
}


