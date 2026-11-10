/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e1640; name: FUN_003e1640
 */


ulong FUN_003e1640(undefined1 *param_1,ulong param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  char acStack_9 [6];
  char local_3 [3];
  
  uVar16 = 0xffffffffffffffff;
  lVar8 = 8;
  pcVar10 = acStack_9;
  do {
    pcVar9 = pcVar10;
    lVar7 = lVar8;
    uVar6 = param_2 >> 8;
    uVar16 = uVar16 + 1;
    uVar11 = (uint)param_2;
    cVar5 = (char)param_2;
    acStack_9[lVar7] = cVar5;
    param_2 = uVar6;
    lVar8 = lVar7 + -1;
    pcVar10 = pcVar9 + -1;
  } while (uVar6 != 0);
  uVar6 = -lVar7 + 9;
  if (uVar6 == 0) {
    if (param_1 == (undefined1 *)0x0) {
      return 1;
    }
    *param_1 = 0;
    uVar16 = 1;
  }
  else {
    if (param_3 == 0) {
      uVar11 = 0;
      uVar13 = (ulong)(cVar5 < '\0');
      uVar16 = uVar6 + uVar13;
    }
    else {
      uVar11 = uVar11 & 0xff;
      if (uVar11 < 0x81) {
        if (uVar11 == 0x80) {
          if (uVar6 < 2) {
            uVar13 = 0;
          }
          else {
            uVar11 = 8 - (int)lVar7;
            uVar13 = (ulong)uVar11 & 3;
            if (7U - lVar7 < 3) {
              bVar14 = 0;
              lVar8 = 1;
            }
            else {
              bVar14 = 0;
              uVar4 = 0;
              do {
                uVar17 = uVar4;
                pbVar15 = (byte *)(pcVar9 + 9);
                pbVar1 = (byte *)(pcVar9 + 10);
                pbVar2 = (byte *)(pcVar9 + 0xb);
                pbVar3 = (byte *)(pcVar9 + 0xc);
                pcVar9 = pcVar9 + 4;
                uVar4 = uVar17 + 4;
                bVar14 = bVar14 | *pbVar15 | *pbVar1 | *pbVar2 | *pbVar3;
              } while ((uVar16 & 0xfffffffffffffffc) != uVar4);
              lVar8 = uVar17 + 5;
            }
            if ((uVar11 & 3) != 0) {
              pcVar10 = acStack_9 + lVar8 + 1;
              do {
                pbVar15 = (byte *)(pcVar10 + lVar7 + -1);
                pcVar10 = pcVar10 + 1;
                bVar14 = bVar14 | *pbVar15;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            uVar13 = (ulong)(bVar14 != 0);
          }
          uVar11 = -(int)uVar13;
          uVar16 = uVar6 + uVar13;
        }
        else {
          uVar13 = 0;
          uVar11 = 0xff;
          uVar16 = uVar6;
        }
      }
      else {
        uVar11 = 0xff;
        uVar13 = 1;
        uVar16 = -lVar7 + 10;
      }
    }
    if (param_1 != (undefined1 *)0x0) {
      *param_1 = (char)uVar11;
      param_1 = param_1 + uVar6 + uVar13;
      uVar12 = uVar11 & 1;
      if ((uVar6 & 1) != 0) {
        uVar6 = 8 - lVar7;
        register0x00000008 = (BADSPACEBASE *)(local_3 + 2);
        uVar12 = uVar12 + ((uint)(byte)local_3[2] ^ uVar11 & 0xff);
        param_1 = param_1 + -1;
        *param_1 = (char)uVar12;
        uVar12 = uVar12 >> 8;
      }
      if (lVar7 != 8) {
        param_1 = param_1 + -1;
        pbVar15 = (byte *)((long)register0x00000008 + -1);
        do {
          uVar12 = uVar12 + ((*pbVar15 ^ uVar11) & 0xff);
          *param_1 = (char)uVar12;
          uVar12 = (uVar12 >> 8) + ((pbVar15[-1] ^ uVar11) & 0xff);
          uVar6 = uVar6 - 2;
          param_1[-1] = (char)uVar12;
          uVar12 = uVar12 >> 8;
          param_1 = param_1 + -2;
          pbVar15 = pbVar15 + -2;
        } while (uVar6 != 0);
      }
    }
  }
  return uVar16 & 0xffffffff;
}


