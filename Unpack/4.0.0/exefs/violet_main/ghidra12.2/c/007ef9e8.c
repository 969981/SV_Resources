/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ef9e8; name: FUN_007ef9e8
 */


ulong FUN_007ef9e8(ulong param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  short sVar11;
  long lVar12;
  char acStack_68 [24];
  
  puVar6 = PTR_DAT_047d0860;
  uVar8 = param_1;
  if (*(short *)(param_1 + 0x32) != 0) {
    uVar7 = *(uint *)(param_1 + 0x2c);
    uVar9 = (uint)*(ushort *)(param_1 + 0x28);
    do {
      lVar12 = *(long *)(param_1 + 0x20);
      uVar2 = 0;
      if (uVar9 <= uVar7) {
        uVar2 = uVar9;
      }
      if ((*(short *)(lVar12 + (ulong)(uVar7 - uVar2) * 0x5d0 + 0x24) == 0) &&
         (*(short *)(param_1 + 0x30) == -1)) {
        FUN_007f2bc4(param_1 + 0x18);
        memset((uint *)(param_1 + 0x78),0,4);
        uVar3 = *(ushort *)(*(long *)puVar6 + 0x50);
        if (uVar3 != 0) {
          lVar10 = *(long *)(param_1 + 0x40);
          uVar9 = (uint)uVar3;
          uVar8 = 0;
          if (uVar3 < 2) {
            uVar9 = 1;
          }
          do {
            if (*(long *)(lVar10 + uVar8 * 8) != 0) {
              lVar1 = param_1 + (uVar8 >> 5 & 0x7ffffff) * 4;
              uVar5 = 1 << (ulong)((uint)uVar8 & 0x1f);
              if ((*(uint *)(lVar1 + 0x74) & uVar5) == 0) {
                *(uint *)(lVar1 + 0x78) = *(uint *)(lVar1 + 0x78) | uVar5;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar9 != uVar8);
        }
        uVar9 = sprintf(acStack_68,"%08x",(ulong)*(uint *)(param_1 + 0x78));
        uVar8 = (ulong)uVar9;
      }
      if (*(int *)(lVar12 + (ulong)(uVar7 - uVar2) * 0x5d0 + 0x2c) != 0) {
        return uVar8;
      }
      uVar9 = (uint)*(ushort *)(param_1 + 0x28);
      uVar7 = *(uint *)(param_1 + 0x2c);
      do {
        uVar7 = uVar9 + 1 + uVar7;
        do {
          uVar7 = uVar7 - uVar9;
        } while (uVar9 <= uVar7);
        sVar11 = *(short *)(param_1 + 0x32);
        if (sVar11 != 0) {
          sVar11 = sVar11 + -1;
          *(short *)(param_1 + 0x32) = sVar11;
        }
        sVar4 = *(short *)(param_1 + 0x34);
        if (sVar4 == 0) {
          *(uint *)(param_1 + 0x2c) = uVar7;
          *(undefined2 *)(param_1 + 0x34) = 0;
          *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
          goto joined_r0x007efa50;
        }
        *(short *)(param_1 + 0x34) = sVar4 + -1;
      } while ((sVar4 != 1) &&
              (((sVar11 == 0 || (*(long *)(param_1 + 0x20) == 0)) ||
               (*(char *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 0x5d0) == '\0'))));
      *(uint *)(param_1 + 0x2c) = uVar7;
joined_r0x007efa50:
    } while (sVar11 != 0);
  }
  return uVar8;
}


