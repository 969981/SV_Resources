/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03391790; name: FUN_03391790
 */


ulong FUN_03391790(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = (ulong *)*param_1;
  puVar2 = (ulong *)param_1[1];
  if (puVar1 == puVar2) {
LAB_03391834:
    uVar3 = 0;
    bVar4 = (byte)param_1[3] | 2;
  }
  else {
    bVar4 = (byte)*puVar1;
    uVar3 = (ulong)bVar4;
    if ((char)bVar4 < '\0') {
      if (0xf < (bVar4 >> 3) - 0x10) goto LAB_03391834;
      uVar3 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar3 >> 0x20 | uVar3 << 0x20;
      switch((uint)(bVar4 >> 3)) {
      default:
        uVar3 = (uVar3 & 0xffffffff) >> 0x10 & 0x3fff;
        lVar5 = 2;
        break;
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        uVar3 = (uVar3 & 0xffffffff) >> 8 & 0x1fffff;
        lVar5 = 3;
        break;
      case 0x1c:
        uVar3 = uVar3 & 0x7ffffff;
        lVar5 = 4;
        break;
      case 0x1d:
        uVar3 = uVar6 >> 0x18 & 0x7ffffffff;
        lVar5 = 5;
        break;
      case 0x1e:
        uVar3 = uVar3 >> 0x20 | uVar3 << 0x20 & 0x7ffffffffffffff;
        lVar5 = 8;
        break;
      case 0x1f:
        if ((bVar4 & 7) == 1) {
          uVar3 = (*(ulong *)((long)puVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)((long)puVar1 + 1) & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
          lVar5 = 9;
        }
        else {
          if ((bVar4 & 7) != 0) goto LAB_03391834;
          uVar3 = uVar6 >> 0x10 & 0xffffffffff;
          lVar5 = 6;
        }
      }
    }
    else {
      lVar5 = 1;
    }
    if ((ulong *)(lVar5 + (long)puVar1) <= puVar2) {
      *param_1 = (ulong)(lVar5 + (long)puVar1);
      return uVar3;
    }
    *param_1 = (ulong)puVar2;
    bVar4 = (byte)param_1[3] | 1;
  }
  *(byte *)(param_1 + 3) = bVar4;
  return uVar3;
}


