/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f2cf8; name: FUN_007f2cf8
 */


void FUN_007f2cf8(long *param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = *(ushort *)(param_1 + 3);
  uVar5 = 0xffff;
  if (uVar4 != 0xffff) {
    sVar7 = *(short *)((long)param_1 + 0x1a);
    uVar2 = uVar4 ^ 0xffff;
    uVar6 = 0;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    do {
      if (sVar7 == 0) {
        uVar9 = (uint)*(ushort *)(param_1 + 2);
        uVar8 = *(uint *)((long)param_1 + 0x14);
      }
      else {
        uVar8 = *(uint *)((long)param_1 + 0x14);
        uVar5 = *(ushort *)(param_1 + 2);
        uVar9 = (uint)uVar5;
        if (param_1[1] != 0) {
          uVar1 = 0;
          if (uVar5 <= uVar8) {
            uVar1 = (uint)uVar5;
          }
          uVar5 = uVar4;
          if (*(char *)(param_1[1] + (ulong)(uVar8 - uVar1) * 0x5b8) != '\0') break;
        }
      }
      do {
        uVar8 = uVar9 + 1 + uVar8;
        do {
          uVar8 = uVar8 - uVar9;
        } while (uVar9 <= uVar8);
        if (sVar7 == 0) {
          sVar7 = 0;
          sVar3 = *(short *)((long)param_1 + 0x1c);
        }
        else {
          sVar7 = sVar7 + -1;
          *(short *)((long)param_1 + 0x1a) = sVar7;
          sVar3 = *(short *)((long)param_1 + 0x1c);
        }
        if (sVar3 == 0) {
          uVar4 = uVar4 + 1;
          *(uint *)((long)param_1 + 0x14) = uVar8;
          *(undefined2 *)((long)param_1 + 0x1c) = 0;
          *(ushort *)(param_1 + 3) = uVar4;
          goto joined_r0x007f2dfc;
        }
        *(short *)((long)param_1 + 0x1c) = sVar3 + -1;
      } while ((sVar3 != 1) &&
              (((sVar7 == 0 || (param_1[1] == 0)) ||
               (*(char *)(param_1[1] + (ulong)uVar8 * 0x5b8) == '\0'))));
      *(uint *)((long)param_1 + 0x14) = uVar8;
joined_r0x007f2dfc:
      uVar6 = uVar6 + 1;
      uVar5 = uVar4;
    } while (uVar6 != uVar2);
  }
  *(ushort *)((long)param_1 + 0x1c) = ~uVar5;
  (**(code **)(*param_1 + 0x18))(param_1);
  *(char *)((long)param_1 + 0x1e) = *(char *)((long)param_1 + 0x1e) + '\x01';
  return;
}


