/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01280638; name: FUN_01280638
 */


long FUN_01280638(long param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  if ((ulong)uVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    lVar3 = 0;
    uVar4 = 0;
    do {
      iVar2 = strcmp((char *)(lVar5 + (ulong)*(uint *)(lVar5 + uVar4 * 4)),param_2);
      if (iVar2 == 0) {
        return *(long *)(param_1 + 0x18) + lVar3;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < uVar1);
  }
  return 0;
}


