/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f0154; name: FUN_007f0154
 */


void FUN_007f0154(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  
  lVar5 = (**(code **)(*param_1 + 0x40))(param_1,param_3);
  if (*(char *)(lVar5 + 0x1f) != '\0') {
    uVar9 = (ulong)(param_3 >> 3) & 0x1c;
    *(uint *)((long)param_1 + uVar9 + 0xa0) =
         *(uint *)((long)param_1 + uVar9 + 0xa0) | 1 << (ulong)(param_3 & 0x1f);
    cVar2 = *(char *)(param_2 + 9);
    lVar5 = (**(code **)(*param_1 + 0x40))(param_1,param_3);
    if ((cVar2 != *(char *)(lVar5 + 0x1e)) &&
       (cVar2 = *(char *)(param_2 + 9), lVar5 = (**(code **)(*param_1 + 0x40))(param_1,param_3),
       cVar2 == (char)(*(char *)(lVar5 + 0x1e) + '\x01'))) {
      lVar5 = (**(code **)(*param_1 + 0x40))(param_1,param_3);
      uVar6 = *(ushort *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x20) = 0xffff;
      uVar7 = (uint)uVar6;
      if (uVar7 != 0xffff) {
        sVar10 = *(short *)(lVar5 + 0x1a);
        uVar8 = 0;
        do {
          if (sVar10 == 0) {
            uVar12 = (uint)*(ushort *)(lVar5 + 0x10);
            uVar11 = *(uint *)(lVar5 + 0x14);
          }
          else {
            uVar11 = *(uint *)(lVar5 + 0x14);
            uVar3 = *(ushort *)(lVar5 + 0x10);
            uVar12 = (uint)uVar3;
            if (*(long *)(lVar5 + 8) != 0) {
              uVar1 = 0;
              if (uVar3 <= uVar11) {
                uVar1 = (uint)uVar3;
              }
              if (*(char *)(*(long *)(lVar5 + 8) + (ulong)(uVar11 - uVar1) * 0x5b8) != '\0') break;
            }
          }
          do {
            uVar11 = uVar12 + 1 + uVar11;
            do {
              uVar11 = uVar11 - uVar12;
            } while (uVar12 <= uVar11);
            if (sVar10 == 0) {
              sVar10 = 0;
              sVar4 = *(short *)(lVar5 + 0x1c);
            }
            else {
              sVar10 = sVar10 + -1;
              *(short *)(lVar5 + 0x1a) = sVar10;
              sVar4 = *(short *)(lVar5 + 0x1c);
            }
            if (sVar4 == 0) {
              uVar6 = uVar6 + 1;
              *(uint *)(lVar5 + 0x14) = uVar11;
              *(undefined2 *)(lVar5 + 0x1c) = 0;
              *(ushort *)(lVar5 + 0x18) = uVar6;
              goto joined_r0x007f02f8;
            }
            *(short *)(lVar5 + 0x1c) = sVar4 + -1;
          } while ((sVar4 != 1) &&
                  (((sVar10 == 0 || (*(long *)(lVar5 + 8) == 0)) ||
                   (*(char *)(*(long *)(lVar5 + 8) + (ulong)uVar11 * 0x5b8) == '\0'))));
          *(uint *)(lVar5 + 0x14) = uVar11;
joined_r0x007f02f8:
          uVar8 = uVar8 + 1;
        } while (uVar8 != (uVar7 ^ 0xffff));
      }
      (**(code **)(*param_1 + 0x40))(param_1,param_3);
      FUN_007f2cf8();
      return;
    }
  }
  return;
}


