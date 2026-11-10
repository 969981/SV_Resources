/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011f680; name: FUN_0011f680
 */


undefined8 FUN_0011f680(int param_1)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  DAT_047ec990 = (char *)0x0;
  if (param_1 < 3) {
    lVar8 = (long)param_1;
    if ((&DAT_047ec998)[lVar8] == '\0') {
      lVar6 = FUN_00120310(0,0x18740);
      (&DAT_047ec9a0)[lVar8] = lVar6;
      if (lVar6 == 0) {
        return 0;
      }
      iVar5 = FUN_0011f820(lVar6 + 0x210);
      if (iVar5 != 0) {
        iVar5 = FUN_0011f820((&DAT_047ec9a0)[lVar8] + 0x4a8);
        uVar4 = s_BinkAsy0_03be606a._0_8_;
        if (iVar5 != 0) {
          lVar6 = (&DAT_047ec9a0)[lVar8];
          *(undefined1 *)(lVar6 + 0x208) = 0;
          *(undefined8 *)(lVar6 + 0x200) = uVar4;
          *(char *)(lVar6 + 0x207) = (char)param_1 + '0';
          iVar5 = FUN_00120520(lVar6,&LAB_0011ffe0,lVar8,0x18000,lVar6 + 0x740,3,lVar8 << 8 | 0xf0);
          if (iVar5 != 0) {
            lVar6 = 0;
            uVar9 = 0;
            uVar7 = 1;
            (&DAT_047ec998)[lVar8] = 1;
            do {
              pcVar1 = &DAT_047ec998 + lVar6;
              lVar6 = lVar6 + 1;
              uVar2 = 0;
              if (*pcVar1 != '\0') {
                uVar2 = uVar7;
              }
              uVar7 = uVar7 << 1;
              uVar9 = uVar2 | uVar9;
            } while (lVar6 != 3);
            lVar8 = 0;
            cVar3 = DAT_047ec998;
            while( true ) {
              if (cVar3 != '\0') {
                FUN_001206a0((&DAT_047ec9a0)[lVar8],uVar9);
              }
              if (lVar8 + 1 == 3) break;
              cVar3 = (&DAT_047ec999)[lVar8];
              lVar8 = lVar8 + 1;
            }
            return 1;
          }
          DAT_047ec990 = "CreateThread failed.";
          FUN_0011f8e0((&DAT_047ec9a0)[lVar8] + 0x4a8);
        }
        FUN_0011f8e0((&DAT_047ec9a0)[lVar8] + 0x210);
      }
      FUN_0011f610((&DAT_047ec9a0)[lVar8]);
      (&DAT_047ec9a0)[lVar8] = 0;
      return 0;
    }
    DAT_047ec990 = "Already loaded on this thread number.";
  }
  else {
    DAT_047ec990 = "Out of range thread number.";
  }
  return 0;
}


