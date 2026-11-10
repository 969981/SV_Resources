/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c6f88; name: FUN_007c6f88
 */


undefined8 FUN_007c6f88(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  
  bVar1 = *param_1;
  do {
    if (bVar1 == 0) {
      return 1;
    }
    if (0xfd < bVar1) {
      return 0;
    }
    if ((char)bVar1 < -0x3e) {
      return 0;
    }
    bVar2 = (&DAT_03d0c98a)[bVar1 >> 1];
    if (0xbf < bVar1) {
      uVar3 = (uint)bVar2;
      if (bVar2 < 2) {
        uVar3 = 1;
      }
      uVar5 = (ulong)uVar3;
      pbVar4 = param_1;
      do {
        pbVar4 = pbVar4 + 1;
        if (-1 < (char)*pbVar4) {
          return 0;
        }
        if (0xbf < *pbVar4) {
          return 0;
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_1 = param_1 + (ulong)bVar2 + 1;
    bVar1 = *param_1;
  } while( true );
}


