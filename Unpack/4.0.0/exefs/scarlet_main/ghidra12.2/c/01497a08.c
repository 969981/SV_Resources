/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01497a08; name: FUN_01497a08
 */


ulong FUN_01497a08(short *param_1)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 local_8 [8];
  
  uVar2 = (ulong)local_8 | 1;
  psVar4 = param_1;
  while (*psVar4 == 0x10) {
    uVar1 = psVar4[2];
    if (1 < (byte)((char)(uVar1 >> 8) - 1U)) goto LAB_01497a58;
    if ((ushort)psVar4[1] < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)(ushort)psVar4[3];
    }
    if (((uVar1 & 0xff00) != 0x100) ||
       ((((uVar1 & 0xff) != 0xe && ((uVar1 & 0xff) != 0x9e)) || (uVar5 = (uint)uVar7, 6 < uVar5))))
    goto LAB_01497a58;
    uVar3 = uVar5;
    if (uVar5 < 7) {
      uVar3 = 6;
    }
    uVar3 = uVar3 + 1;
    uVar9 = ~uVar7;
    uVar10 = (ulong)(uVar3 - uVar5) & 3;
    if ((uVar3 - uVar5 & 3) != 0) {
      do {
        *(char *)(uVar2 + uVar7) = *(char *)(uVar2 + uVar7) + '\x01';
        uVar7 = uVar7 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (2 < uVar9 + uVar3) {
      lVar6 = uVar3 - uVar7;
      pcVar8 = (char *)(((ulong)local_8 | 2) + uVar7);
      do {
        pcVar8[-1] = pcVar8[-1] + '\x01';
        *pcVar8 = *pcVar8 + '\x01';
        pcVar8[1] = pcVar8[1] + '\x01';
        pcVar8[2] = pcVar8[2] + '\x01';
        lVar6 = lVar6 + -4;
        pcVar8 = pcVar8 + 4;
      } while (lVar6 != 0);
    }
    if (*psVar4 == 0x10) {
LAB_01497a58:
      lVar6 = (ulong)(ushort)psVar4[1] + 2;
LAB_01497a38:
      psVar4 = psVar4 + lVar6;
    }
  }
  if (*psVar4 == 0) {
    do {
      if (*param_1 == 0x10) {
        if (param_1[2] == 0x114) {
          if ((ushort)param_1[1] < 2) {
            return 0;
          }
          return (ulong)(ushort)param_1[3];
        }
        lVar6 = (ulong)(ushort)param_1[1] + 2;
      }
      else {
        if (*param_1 == 0) {
          return 0xffffffff;
        }
        lVar6 = 1;
      }
      param_1 = param_1 + lVar6;
    } while( true );
  }
  lVar6 = 1;
  goto LAB_01497a38;
}


