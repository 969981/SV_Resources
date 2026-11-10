/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0944c; name: FUN_00c0944c
 */


ulong FUN_00c0944c(ulong *param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 auVar4 [12];
  
  uVar1 = *param_1;
  if (((int)param_1[1] - (int)uVar1 < 10) && (param_1[1] <= uVar1)) {
    auVar4 = FUN_00c09268();
    uVar1 = auVar4._0_8_ & 0xffffffff;
    if ((auVar4._8_4_ & 1) == 0) {
      uVar1 = 0xffffffffffffffff;
    }
  }
  else {
    uVar2 = (param_2 + (uint)*(byte *)(uVar1 + 1) * 0x80) - 0x80;
    if ((char)*(byte *)(uVar1 + 1) < '\0') {
      uVar2 = (uVar2 + (uint)*(byte *)(uVar1 + 2) * 0x4000) - 0x4000;
      if ((char)*(byte *)(uVar1 + 2) < '\0') {
        uVar2 = (uVar2 + (uint)*(byte *)(uVar1 + 3) * 0x200000) - 0x200000;
        if ((char)*(byte *)(uVar1 + 3) < '\0') {
          uVar2 = uVar2 + (uint)*(byte *)(uVar1 + 4) * 0x10000000 + 0xf0000000;
          if ((char)*(byte *)(uVar1 + 4) < '\0') {
            if (*(char *)(uVar1 + 5) < '\0') {
              if (*(char *)(uVar1 + 6) < '\0') {
                if (*(char *)(uVar1 + 7) < '\0') {
                  pcVar3 = (char *)(uVar1 + 9);
                  if (*(char *)(uVar1 + 8) < '\0') {
                    if (*pcVar3 < '\0') {
                      return 0xffffffffffffffff;
                    }
                    pcVar3 = (char *)(uVar1 + 10);
                  }
                }
                else {
                  pcVar3 = (char *)(uVar1 + 8);
                }
              }
              else {
                pcVar3 = (char *)(uVar1 + 7);
              }
            }
            else {
              pcVar3 = (char *)(uVar1 + 6);
            }
          }
          else {
            pcVar3 = (char *)(uVar1 + 5);
          }
        }
        else {
          pcVar3 = (char *)(uVar1 + 4);
        }
      }
      else {
        pcVar3 = (char *)(uVar1 + 3);
      }
    }
    else {
      pcVar3 = (char *)(uVar1 + 2);
    }
    *param_1 = (ulong)pcVar3;
    uVar1 = (ulong)uVar2;
  }
  return uVar1;
}


