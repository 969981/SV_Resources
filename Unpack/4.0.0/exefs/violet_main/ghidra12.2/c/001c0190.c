/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c0190; name: FUN_001c0190
 */


undefined8 FUN_001c0190(long *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong *__src;
  size_t __n;
  uint uVar12;
  byte *pbVar13;
  int *piVar14;
  uint uVar15;
  ulong local_70;
  undefined8 local_68;
  
  pbVar13 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  __src = (ulong *)param_1[3];
  local_70 = 0;
  local_68 = 0;
  puVar6 = (ulong *)param_1[4];
  if (__src <= puVar6) {
    uVar15 = *(uint *)(param_1 + 5);
    uVar12 = *(uint *)((long)param_1 + 0x2c);
    __n = (long)puVar6 - (long)__src;
    if (pbVar13 == pbVar2) {
      puVar7 = (ulong *)0x0;
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar7 = (ulong *)0x0;
      piVar5 = (int *)param_1[2];
      do {
        if ((long)__n < 8) {
          if (lVar8 != 0) {
            return 0;
          }
          memcpy(&local_70,__src,__n);
          memcpy((void *)(((long)register0x00000008 + -0x60) - __n),__src,__n);
          lVar8 = 0x10 - __n;
          puVar6 = (ulong *)((long)register0x00000008 + -0x60);
          puVar7 = __src;
          __src = &local_70;
        }
        uVar9 = (*__src & 0xff00ff00ff00ff00) >> 8 | (*__src & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar9 = puVar6[-1];
        bVar3 = *pbVar13;
        if (bVar3 < 0xf0) {
          iVar10 = uVar15 + (bVar3 >> 4);
          uVar15 = -0x10 << (ulong)(uint)(bVar3 >> 4);
          uVar1 = iVar10 + 4;
          iVar10 = (bVar3 & 0xf |
                   (((uint)(uVar11 >> ((ulong)(0x3c - iVar10) & 0x3f)) & (uVar15 ^ 0xffffffff)) +
                   ~uVar15) * 0x10) - 0xe8;
        }
        else {
          uVar1 = bVar3 - 0xe0;
          if (0x1d < uVar1) {
            return 0;
          }
          uVar4 = -1 << (ulong)(uVar1 & 0x1f);
          uVar1 = uVar1 + uVar15;
          iVar10 = (0x7eff00 - uVar4) +
                   ((uint)(uVar11 >> ((ulong)-uVar1 & 0x3f)) & (uVar4 ^ 0xffffffff));
          if (0x3fffffff < iVar10) {
            return 0;
          }
        }
        piVar14 = piVar5 + 1;
        *piVar5 = -iVar10;
        if (pbVar13 + 1 == pbVar2) {
          pbVar13 = pbVar2;
        }
        else {
          bVar3 = pbVar13[1];
          if (bVar3 < 0xf0) {
            uVar15 = -0x10 << (ulong)(bVar3 >> 4);
            iVar10 = uVar12 + (bVar3 >> 4);
            uVar12 = iVar10 + 4;
            iVar10 = (bVar3 & 0xf |
                     (((uint)(uVar9 >> ((ulong)(0x3c - iVar10) & 0x3f)) & (uVar15 ^ 0xffffffff)) +
                     ~uVar15) * 0x10) - 0xe8;
          }
          else {
            uVar15 = bVar3 - 0xe0;
            if (0x1d < uVar15) {
              return 0;
            }
            uVar12 = uVar15 + uVar12;
            uVar15 = -1 << (ulong)(uVar15 & 0x1f);
            iVar10 = (0x7eff00 - uVar15) +
                     ((uint)(uVar9 >> ((ulong)-uVar12 & 0x3f)) & (uVar15 ^ 0xffffffff));
            if (0x3fffffff < iVar10) {
              return 0;
            }
          }
          piVar5[1] = -iVar10;
          piVar14 = piVar5 + 2;
          pbVar13 = pbVar13 + 2;
        }
        uVar15 = uVar1 & 7;
        __src = (ulong *)((long)__src + (ulong)(uVar1 >> 3));
        puVar6 = (ulong *)((long)puVar6 - (ulong)(uVar12 >> 3));
        uVar12 = uVar12 & 7;
        __n = (long)puVar6 - (long)__src;
        piVar5 = piVar14;
      } while (pbVar13 != pbVar2);
    }
    if (lVar8 <= (long)((-(ulong)(uVar12 != 0) - (ulong)(uVar15 != 0)) + __n)) {
      if (lVar8 == 0) {
        param_1[3] = (long)__src;
      }
      else {
        puVar6 = (ulong *)((long)puVar7 + (long)puVar6 + (-(long)&local_70 - lVar8));
        param_1[3] = (long)puVar7 + ((long)__src - (long)&local_70);
      }
      param_1[4] = (long)puVar6;
      *(uint *)(param_1 + 5) = uVar15;
      *(uint *)((long)param_1 + 0x2c) = uVar12;
      return 1;
    }
  }
  return 0;
}


