/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081308c; name: FUN_0081308c
 */


void FUN_0081308c(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  Result *pRVar3;
  undefined4 local_80 [4];
  undefined4 local_70 [6];
  short local_58;
  int local_50 [4];
  
  pRVar3 = (Result *)local_80;
  lVar2 = *(long *)(param_2 + 0x6f0);
  if (0 < *(int *)(lVar2 + 4)) {
    FUN_00792300(local_70);
    lVar2 = *(long *)(param_2 + 0x6f0);
  }
  FUN_00792140(local_50,lVar2,2,2,0x11);
  do {
    if (local_50[0] != 0) {
      local_70[0] = 0x10408;
      local_80[0] = 0;
LAB_008131b8:
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),pRVar3);
      FUN_00cbd7c0(param_1,local_70);
      return;
    }
    iVar1 = rand();
    FUN_0284e338(local_70);
    local_58 = (short)iVar1 +
               ((short)((ulong)((long)iVar1 * 0x51eb851f) >> 0x25) - (short)(iVar1 >> 0x1f)) * -100
               + -0x2928;
    FUN_007923b4(local_80,*(undefined8 *)(param_2 + 0x6f0),local_70,0,0);
    FUN_018ff39c(local_50,local_80);
    if (local_50[0] == 0) {
      FUN_0284e3d4(local_70);
      pRVar3 = (Result *)local_50;
      local_70[0] = 0;
      local_50[0] = 0;
      goto LAB_008131b8;
    }
    FUN_00792300(local_80,*(undefined8 *)(param_2 + 0x6f0));
    FUN_0284e3d4(local_70);
    FUN_00792140(local_50,*(undefined8 *)(param_2 + 0x6f0),2,2,0x11);
  } while( true );
}


