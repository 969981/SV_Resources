/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00120090; name: FUN_00120090
 */


void FUN_00120090(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong local_40 [2];
  
  uVar3 = param_1;
  while (iVar2 = FUN_0011fca0(uVar3,param_2,local_40,0x10), iVar2 != 0) {
    uVar3 = local_40[0] & 0xffffffffffffff00;
    if (uVar3 != param_3) {
      FUN_0011fcd0(*(uint *)(uVar3 + (local_40[0] & 0xf) * 4 + 0xf0) & 0xfffffcff);
    }
    lVar1 = uVar3 + (local_40[0] & 0xf) * 4;
    *(uint *)(lVar1 + 0xf0) = *(uint *)(lVar1 + 0xf0) & 0xfffffeff;
    param_2 = 0;
    uVar3 = param_1 & 0xffffffff;
  }
  return;
}


