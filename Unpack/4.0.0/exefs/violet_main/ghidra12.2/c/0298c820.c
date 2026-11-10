/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298c820; name: FUN_0298c820
 */


undefined8 FUN_0298c820(long param_1,byte param_2,byte param_3,uint param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  bVar1 = (int)param_4 < 0x13;
  lVar2 = 0;
  if (param_2 < 2 && bVar1) {
    lVar2 = param_1 + 8 + (ulong)param_2 * 0x2f8 + (ulong)param_4 * 0x28;
  }
  uVar4 = 0;
  lVar3 = 0;
  if (param_3 < 2 && bVar1) {
    lVar3 = param_1 + 8 + (ulong)param_3 * 0x2f8 + (ulong)param_4 * 0x28;
  }
  if ((param_3 < 2) && (param_2 < 2 && bVar1)) {
    uVar5 = FUN_014df9c4(lVar2);
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_014df9c4(lVar3), (uVar5 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      FUN_0298fca0(lVar2,lVar3);
      uVar4 = 1;
    }
  }
  return uVar4;
}


