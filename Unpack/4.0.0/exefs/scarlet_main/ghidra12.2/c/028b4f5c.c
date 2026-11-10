/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b4f5c; name: FUN_028b4f5c
 */


void FUN_028b4f5c(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1[0xb] != 0) {
    FUN_028b5068(param_1,param_1[6]);
    uVar4 = param_1[1];
    param_1[6] = 0;
    if (uVar4 != 0) {
      uVar1 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar2 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar2 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar2 * 8 + 0x10) = 0;
          lVar3 = uVar2 * 8;
          uVar2 = uVar2 + 4;
          *(undefined8 *)(*param_1 + lVar3 + 0x18) = 0;
        } while ((uVar4 & 0xfffffffffffffffc) != uVar2);
      }
      if (uVar1 != 0) {
        lVar3 = uVar2 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar3) = 0;
          uVar1 = uVar1 - 1;
          lVar3 = lVar3 + 8;
        } while (uVar1 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


