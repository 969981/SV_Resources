/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc6528; name: FUN_01dc6528
 */


void FUN_01dc6528(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if ((((param_2 < 0x21) && (param_3 < 0x1e)) && (param_4 < 0x21)) && (param_5 < 0x1e)) {
    param_3 = param_3 + param_2 * 0x100;
    lVar2 = 0;
    param_1 = param_1 + 0x526;
    param_5 = param_5 + param_4 * 0x100;
    do {
      uVar3 = param_5;
      if ((param_3 == *(ushort *)(param_1 + lVar2)) ||
         (uVar3 = param_3, param_5 == *(ushort *)(param_1 + lVar2))) {
        *(short *)(param_1 + lVar2) = (short)uVar3;
      }
      lVar1 = param_1 + lVar2;
      uVar3 = param_5;
      if ((param_3 == *(ushort *)(lVar1 + 2)) ||
         (uVar3 = param_3, param_5 == *(ushort *)(lVar1 + 2))) {
        *(short *)(lVar1 + 2) = (short)uVar3;
      }
      uVar3 = param_5;
      if ((param_3 == *(ushort *)(lVar1 + 4)) ||
         (uVar3 = param_3, param_5 == *(ushort *)(lVar1 + 4))) {
        *(short *)(lVar1 + 4) = (short)uVar3;
      }
      uVar3 = param_5;
      if ((param_3 == *(ushort *)(lVar1 + 6)) ||
         (uVar3 = param_3, param_5 == *(ushort *)(lVar1 + 6))) {
        *(short *)(lVar1 + 6) = (short)uVar3;
      }
      uVar3 = param_5;
      if ((param_3 == *(ushort *)(lVar1 + 8)) ||
         (uVar3 = param_3, param_5 == *(ushort *)(lVar1 + 8))) {
        *(short *)(lVar1 + 8) = (short)uVar3;
      }
      uVar3 = param_5;
      if ((param_3 == *(ushort *)(lVar1 + 10)) ||
         (uVar3 = param_3, param_5 == *(ushort *)(lVar1 + 10))) {
        *(short *)(lVar1 + 10) = (short)uVar3;
      }
      lVar2 = lVar2 + 0xc;
    } while (lVar2 != 0x48);
  }
  return;
}


