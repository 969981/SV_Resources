/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001845e0; name: FUN_001845e0
 */


int FUN_001845e0(uint *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  
  if (param_3 < 2) {
    return 0x28;
  }
  if ((int)param_2 < 1) {
    iVar5 = 0;
    iVar6 = 0;
    uVar4 = 0;
    iVar8 = 0;
    iVar7 = 0;
LAB_001846ac:
    uVar3 = iVar6 + (int)LZCOUNT(iVar8 + 1) * -2 + 0x3f;
    uVar2 = iVar7 << 3;
    if (uVar3 <= (uint)(iVar7 << 3)) {
      uVar2 = uVar3;
    }
    return iVar5 + (int)(uVar4 >> 0xd) + uVar2 + 0x28;
  }
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = 0x40000000 / param_3;
  }
  iVar5 = 0;
  iVar6 = 0;
  uVar4 = 0;
  iVar8 = 0;
  iVar7 = 0;
  uVar9 = (ulong)param_2;
  uVar2 = *param_1;
  if (uVar2 == 0) goto LAB_00184678;
  do {
    iVar1 = iVar6 + (int)LZCOUNT(iVar8 + 1) * -2 + 0x3f;
    if (iVar8 == 0) {
      iVar1 = iVar6 + 1;
    }
    iVar5 = iVar5 + (int)LZCOUNT(uVar2) * -2 + 0x3f;
    uVar4 = uVar4 + (ulong)*(uint *)(PTR_DAT_047cb918 + (ulong)(uVar2 * uVar3 >> 0x11) * 4) *
                    (ulong)uVar2;
    iVar7 = iVar7 + 1;
    iVar8 = 0;
    iVar6 = iVar1;
    while( true ) {
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        if (iVar7 == 1) {
          return 0x30;
        }
        goto LAB_001846ac;
      }
      param_1 = param_1 + 1;
      uVar2 = *param_1;
      if (uVar2 != 0) break;
LAB_00184678:
      iVar8 = iVar8 + 1;
    }
  } while( true );
}


