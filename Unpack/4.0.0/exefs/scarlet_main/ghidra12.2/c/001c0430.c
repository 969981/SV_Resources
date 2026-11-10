/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c0430; name: FUN_001c0430
 */


undefined8 FUN_001c0430(long *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *__src;
  size_t __n;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int *piVar14;
  ulong local_70;
  undefined8 local_68;
  
  pbVar13 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  __src = (ulong *)param_1[3];
  local_70 = 0;
  local_68 = 0;
  puVar7 = (ulong *)param_1[4];
  if (__src <= puVar7) {
    uVar12 = *(uint *)(param_1 + 5);
    uVar11 = *(uint *)((long)param_1 + 0x2c);
    __n = (long)puVar7 - (long)__src;
    if (pbVar13 == pbVar2) {
      puVar8 = (ulong *)0x0;
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      puVar8 = (ulong *)0x0;
      piVar6 = (int *)param_1[2];
      do {
        if ((long)__n < 8) {
          if (lVar9 != 0) {
            return 0;
          }
          memcpy(&local_70,__src,__n);
          memcpy((void *)(((long)register0x00000008 + -0x60) - __n),__src,__n);
          lVar9 = 0x10 - __n;
          puVar7 = (ulong *)((long)register0x00000008 + -0x60);
          puVar8 = __src;
          __src = &local_70;
        }
        uVar10 = puVar7[-1];
        bVar3 = *pbVar13;
        if (0xd7 < bVar3) {
          return 0;
        }
        uVar4 = (uint)(bVar3 >> 3);
        uVar1 = uVar4 + uVar12;
        uVar5 = (*__src & 0xff00ff00ff00ff00) >> 8 | (*__src & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        piVar14 = piVar6 + 1;
        *piVar6 = 8 - ((uint)((uVar5 >> 0x20 | uVar5 << 0x20) >> ((ulong)-uVar1 & 0x3f)) &
                       (-1 << (ulong)uVar4 ^ 0xffffffffU) | (bVar3 & 7 | 8) << (ulong)uVar4);
        if (pbVar13 + 1 == pbVar2) {
          pbVar13 = pbVar2;
        }
        else {
          bVar3 = pbVar13[1];
          if (0xd7 < bVar3) {
            return 0;
          }
          uVar12 = (uint)(bVar3 >> 3);
          uVar11 = uVar12 + uVar11;
          piVar6[1] = 8 - ((uint)(uVar10 >> ((ulong)-uVar11 & 0x3f)) &
                           (-1 << (ulong)uVar12 ^ 0xffffffffU) | (bVar3 & 7 | 8) << (ulong)uVar12);
          piVar14 = piVar6 + 2;
          pbVar13 = pbVar13 + 2;
        }
        uVar12 = uVar1 & 7;
        __src = (ulong *)((long)__src + (ulong)(uVar1 >> 3));
        puVar7 = (ulong *)((long)puVar7 - (ulong)(uVar11 >> 3));
        uVar11 = uVar11 & 7;
        __n = (long)puVar7 - (long)__src;
        piVar6 = piVar14;
      } while (pbVar13 != pbVar2);
    }
    if (lVar9 <= (long)((-(ulong)(uVar11 != 0) - (ulong)(uVar12 != 0)) + __n)) {
      if (lVar9 == 0) {
        param_1[3] = (long)__src;
      }
      else {
        puVar7 = (ulong *)((long)puVar8 + (long)puVar7 + (-(long)&local_70 - lVar9));
        param_1[3] = (long)puVar8 + ((long)__src - (long)&local_70);
      }
      param_1[4] = (long)puVar7;
      *(uint *)(param_1 + 5) = uVar12;
      *(uint *)((long)param_1 + 0x2c) = uVar11;
      return 1;
    }
  }
  return 0;
}


