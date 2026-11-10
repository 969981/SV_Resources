/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02999c50; name: FUN_02999c50
 */


int FUN_02999c50(undefined4 param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  double dVar5;
  
  uVar3 = FUN_0190c240();
  iVar2 = FUN_0190c240(param_1,param_2);
  iVar4 = (int)((uVar3 & 0xffffffff) / 100);
  if (0x28f5c28 < ((uint)(iVar2 * -0x3d70a3d7) >> 2 | iVar2 * 0x40000000)) {
    iVar4 = iVar4 + 1;
  }
  dVar5 = 0.0;
  if ((param_2 & 0xfff) != 0) {
    dVar5 = (double)(param_2 & 0xfff) * 0.000244140625;
  }
  dVar5 = dVar5 + (double)((int)param_2 >> 0xc);
  bVar1 = true;
  if ((iVar4 == 0) && (bVar1 = false, !NAN(dVar5))) {
    bVar1 = dVar5 == 0.0;
  }
  if (!bVar1) {
    iVar4 = 1;
  }
  return iVar4;
}


