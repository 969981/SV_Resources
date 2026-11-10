/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013df20; name: FUN_0013df20
 */


long FUN_0013df20(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = (int)((ulong)*(byte *)(param_2 + 1) & 0xf);
  if (iVar1 == 7) {
    lVar2 = *(long *)(*param_2 + 0x18);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else if (iVar1 == 5) {
    lVar2 = *(long *)(*param_2 + 0x28);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)*(byte *)(param_2 + 1) & 0xf) * 8 + 0x1e0)
    ;
    lVar3 = *(long *)(param_1 + 0x18);
  }
  if (lVar2 == 0) {
    return lVar3 + 0x50;
  }
  lVar2 = FUN_0013d2c0(lVar2,*(undefined8 *)(lVar3 + (ulong)param_3 * 8 + 0x118));
  return lVar2;
}


