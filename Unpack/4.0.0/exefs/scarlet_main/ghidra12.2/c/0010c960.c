/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0010c960; name: FUN_0010c960
 */


void FUN_0010c960(int param_1,uint param_2,int param_3,uint param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  *(uint *)(param_5 + 8) = (param_3 + 0x1fU >> 3 & 0x1ffffffc) + 4;
  if (param_1 == 0x6632424b) {
    uVar1 = param_4 + 0x20 >> 1 & 0x7fffffe0;
    *(undefined4 *)(param_5 + 4) = 2;
    *(uint *)(param_5 + 0xc) = uVar1;
    if (uVar1 == param_4) {
      return;
    }
    *(uint *)(param_5 + 0x10) = param_4;
    return;
  }
  uVar1 = param_4 + 0x1f & 0xffffffe0;
  if (param_1 == 0x6732424b) {
    if (0x7f < uVar1) {
      *(undefined4 *)(param_5 + 4) = 2;
      *(uint *)(param_5 + 0xc) = param_4 + 0x1f >> 1 & 0x7fffffe0;
      *(uint *)(param_5 + 0x10) = uVar1;
      return;
    }
  }
  else {
    iVar5 = FUN_0010c7c0();
    if (iVar5 == 0) {
      *(undefined8 *)(param_5 + 4) = 2;
      return;
    }
    if (0x7f < uVar1) {
      bVar2 = (&DAT_044830e8)[(ulong)param_2 & 3];
      uVar8 = (uint)bVar2;
      *(uint *)(param_5 + 4) = (uint)bVar2;
      puVar7 = (uint *)(param_5 + 0xc);
      if (bVar2 != 1) {
        uVar9 = 0;
        iVar5 = uVar1 + (uint)bVar2 * 0x20 + -1;
        puVar6 = puVar7;
        do {
          uVar3 = iVar5 - uVar9;
          iVar5 = iVar5 + -0x20;
          uVar4 = 0;
          if (uVar8 != 0) {
            uVar4 = uVar3 / uVar8;
          }
          uVar8 = uVar8 - 1;
          uVar9 = (uVar4 & 0xffffffe0) + uVar9;
          puVar7 = puVar6 + 1;
          *puVar6 = uVar9;
          puVar6 = puVar7;
        } while (uVar8 != 1);
      }
      *puVar7 = uVar1;
      return;
    }
  }
  *(undefined4 *)(param_5 + 4) = 1;
  *(uint *)(param_5 + 0xc) = uVar1;
  return;
}


