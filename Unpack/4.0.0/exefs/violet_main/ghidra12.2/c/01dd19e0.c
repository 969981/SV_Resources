/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd19e0; name: FUN_01dd19e0
 */


void FUN_01dd19e0(uint param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *param_2;
  iVar3 = (int)(uVar2 << 0x14) >> 0x14;
  iVar4 = iVar3 - ((int)(param_1 << 0x14) >> 0x14);
  iVar5 = iVar3 - param_1;
  iVar1 = -iVar5;
  if (-1 < iVar5) {
    iVar1 = iVar5;
  }
  iVar5 = -iVar4;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  uVar6 = (uVar2 & 0xfff) << 0xc;
  uVar7 = uVar2 & 0xfff;
  if ((int)param_1 < iVar3) {
    iVar1 = iVar5;
    uVar6 = uVar2 & 0xfff;
    uVar7 = (param_1 & 0xfff) << 0xc;
  }
  *param_2 = (uVar6 | uVar7 | iVar1 << 0x18) + 0x1000000;
  return;
}


