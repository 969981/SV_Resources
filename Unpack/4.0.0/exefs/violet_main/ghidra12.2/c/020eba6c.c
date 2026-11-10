/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020eba6c; name: FUN_020eba6c
 */


void FUN_020eba6c(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  ushort uVar6;
  
  if ((param_2 < 0x21) && (param_3 < 0x21)) {
    lVar5 = 0;
    uVar2 = (ushort)(param_2 << 8);
    uVar3 = (ushort)(param_3 << 8);
    param_1 = param_1 + 0x530;
    do {
      lVar1 = param_1 + lVar5;
      uVar4 = (uint)(byte)(*(ushort *)(lVar1 + -10) >> 8);
      uVar6 = uVar3;
      if ((uVar4 == param_2) || (uVar6 = uVar2, uVar4 == param_3)) {
        *(ushort *)(lVar1 + -10) = *(ushort *)(lVar1 + -10) & 0xff | uVar6;
      }
      uVar4 = (uint)(byte)(*(ushort *)(lVar1 + -8) >> 8);
      uVar6 = uVar3;
      if ((uVar4 == param_2) || (uVar6 = uVar2, uVar4 == param_3)) {
        *(ushort *)(lVar1 + -8) = *(ushort *)(lVar1 + -8) & 0xff | uVar6;
      }
      uVar4 = (uint)(byte)(*(ushort *)(lVar1 + -6) >> 8);
      uVar6 = uVar3;
      if ((uVar4 == param_2) || (uVar6 = uVar2, uVar4 == param_3)) {
        *(ushort *)(lVar1 + -6) = *(ushort *)(lVar1 + -6) & 0xff | uVar6;
      }
      uVar4 = (uint)(byte)(*(ushort *)(lVar1 + -4) >> 8);
      uVar6 = uVar3;
      if ((uVar4 == param_2) || (uVar6 = uVar2, uVar4 == param_3)) {
        *(ushort *)(lVar1 + -4) = *(ushort *)(lVar1 + -4) & 0xff | uVar6;
      }
      uVar4 = (uint)(byte)(*(ushort *)(lVar1 + -2) >> 8);
      uVar6 = uVar3;
      if ((uVar4 == param_2) || (uVar6 = uVar2, uVar4 == param_3)) {
        *(ushort *)(lVar1 + -2) = *(ushort *)(lVar1 + -2) & 0xff | uVar6;
      }
      uVar4 = (uint)(byte)(*(ushort *)(param_1 + lVar5) >> 8);
      uVar6 = uVar3;
      if ((uVar4 == param_2) || (uVar6 = uVar2, uVar4 == param_3)) {
        *(ushort *)(param_1 + lVar5) = *(ushort *)(param_1 + lVar5) & 0xff | uVar6;
      }
      lVar5 = lVar5 + 0xc;
    } while (lVar5 != 0x48);
  }
  return;
}


