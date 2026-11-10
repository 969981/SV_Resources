/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00164b00; name: FUN_00164b00
 */


ushort * FUN_00164b00(ushort *param_1,ulong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  ushort *puVar3;
  ushort *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar5 = 1L << ((ulong)param_3 & 0x3f);
  if (param_2 < 0x10000U - lVar5) {
    *(char *)param_1 = (char)(lVar5 + param_2 >> 8);
    *(char *)((long)param_1 + 1) = (char)(lVar5 + param_2);
    return param_1 + 1;
  }
  param_2 = param_2 - (0x10000U - lVar5);
  uVar1 = (uint)param_2 & (int)lVar5 - 1U;
  param_2 = param_2 >> ((ulong)param_3 & 0x3f);
  lVar5 = 1L << ((ulong)param_4 & 0x3f);
  uVar7 = 0x100 - lVar5;
  puVar4 = param_1 + 1;
  *param_1 = (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff00ff) << 8);
  cVar2 = (char)lVar5;
  if (uVar7 <= param_2) {
    puVar3 = puVar4;
    do {
      uVar6 = param_2 - uVar7;
      param_2 = uVar6 >> ((ulong)param_4 & 0x3f);
      puVar4 = (ushort *)((long)puVar3 + 1);
      *(byte *)puVar3 = (byte)uVar6 & cVar2 - 1U;
      puVar3 = puVar4;
    } while (uVar7 <= param_2);
  }
  *(char *)puVar4 = (char)param_2 + cVar2;
  return (ushort *)((long)puVar4 + 1);
}


