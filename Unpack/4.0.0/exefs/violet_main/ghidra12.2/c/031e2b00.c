/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e2b00; name: FUN_031e2b00
 */


uint FUN_031e2b00(undefined8 *param_1)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *local_60;
  ulong uStack_58;
  
  pbVar8 = (byte *)*param_1;
  if (pbVar8 == (byte *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar9 = (uint)*pbVar8;
    uVar5 = 0x811c9dc5;
    if (*pbVar8 != 0) {
      do {
        pbVar8 = pbVar8 + 1;
        uVar5 = (uVar5 ^ uVar9) * 0x1000193;
        uVar9 = (uint)*pbVar8;
      } while (uVar9 != 0);
    }
  }
  lVar6 = param_1[1];
  if ((lVar6 != 0) && (uVar2 = *(ushort *)(lVar6 + 8), (ulong)uVar2 != 0)) {
    uVar11 = 0;
    do {
      plVar1 = (long *)(lVar6 + 0x10 + uVar11 * 0x10);
      uVar9 = (uint)*(byte *)plVar1[1] * -0x61c8864f;
      uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
      uVar5 = uVar5 * 0x40 + -0x61c88647 + uVar9 + (uVar9 >> 2) ^ uVar5;
      if (*(byte *)plVar1[1] == 0x74) {
        puVar7 = (ulong *)*plVar1;
        local_60 = puVar7;
        do {
          uVar10 = *local_60;
          if (((uint)uVar10 >> 3 & 1) != 0) {
            if (local_60 != (ulong *)0x0) {
              local_60 = (ulong *)local_60[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
            }
            break;
          }
          if ((uVar10 & 1) != 0) {
            local_60 = (ulong *)0x0;
            break;
          }
          local_60 = (ulong *)local_60[1];
        } while (local_60 != (ulong *)0x0);
        do {
          uVar9 = (uint)*puVar7;
          if ((uVar9 >> 0xf & 1) != 0) {
            uVar10 = CONCAT44(uVar9,uVar9) & 0x7fff00007fff;
            uStack_58 = puVar7[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)))
                               + 2];
            goto LAB_031e2c78;
          }
          if ((*puVar7 & 9) != 0) {
            uStack_58 = 0;
            goto LAB_031e2c78;
          }
          puVar7 = (ulong *)puVar7[1];
        } while (puVar7 != (ulong *)0x0);
        uStack_58 = 0;
LAB_031e2c78:
        uVar9 = FUN_031e2b00(&local_60);
        uVar9 = uVar5 * 0x40 + -0x61c88647 + uVar9 + (uVar9 >> 2);
      }
      else {
        uVar9 = (int)*plVar1 * -0x61c8864f;
        uVar3 = *(int *)((long)plVar1 + 4) * -0x61c8864f;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        uVar4 = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar9 * 0x40 ^ uVar9;
        uVar9 = uVar5 * 0x40 + -0x61c88647 + uVar9 + (uVar9 >> 2);
      }
      uVar11 = uVar11 + 1;
      uVar5 = uVar9 ^ uVar5;
    } while (uVar11 != uVar2);
  }
  return uVar5;
}


