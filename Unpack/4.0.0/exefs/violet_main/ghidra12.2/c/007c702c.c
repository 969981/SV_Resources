/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c702c; name: FUN_007c702c
 */


long FUN_007c702c(undefined1 *param_1,ulong param_2,byte *param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  bVar2 = *param_3;
  puVar4 = param_1;
  if (bVar2 != 0) {
    while( true ) {
      uVar5 = (ulong)(byte)(&DAT_03d0c98a)[bVar2 >> 1];
      uVar1 = uVar5 + 1;
      bVar3 = param_2 < uVar1;
      param_2 = param_2 - uVar1;
      if (((bVar3 || param_2 == 0) || param_4 <= uVar5) || bVar2 == 0) break;
      uVar6 = 0;
      while (puVar4[uVar6] = bVar2, uVar5 != uVar6) {
        bVar2 = param_3[uVar6 + 1];
        uVar6 = uVar6 + 1;
        if (bVar2 == 0) goto LAB_007c709c;
      }
      param_3 = param_3 + uVar1;
      bVar2 = *param_3;
      puVar4 = puVar4 + uVar1;
      param_4 = param_4 - uVar1;
      if (bVar2 == 0) break;
    }
  }
LAB_007c709c:
  *puVar4 = 0;
  return (long)puVar4 - (long)param_1;
}


