/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00386050; name: FUN_00386050
 */


byte * FUN_00386050(undefined8 param_1,byte *param_2,byte *param_3,ulong *param_4)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  while ((param_3 != param_2 && (uVar5 < 0x46))) {
    pbVar4 = param_2 + 1;
    bVar1 = *param_2;
    uVar2 = uVar5 & 0x3f;
    uVar5 = uVar5 + 7;
    uVar6 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar6;
    param_2 = pbVar4;
    if (-1 < (char)bVar1) {
      *param_4 = uVar6;
      return pbVar4;
    }
  }
  FUN_00386040();
                    /* WARNING: Does not return */
  pcVar3 = (code *)UndefinedInstructionException(0,0x386098);
  (*pcVar3)();
}


