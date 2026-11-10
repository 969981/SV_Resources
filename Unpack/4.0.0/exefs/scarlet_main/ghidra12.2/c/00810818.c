/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00810818; name: FUN_00810818
 */


void FUN_00810818(int *param_1,undefined2 *param_2,undefined8 param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [6];
  undefined2 local_58;
  
  local_70[0] = 0;
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_70);
  uVar6 = 0;
  do {
    FUN_007c70a8(local_70);
    iVar7 = 100;
    do {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar5 = FUN_007c7184(local_70);
      uVar1 = (int)((ulong)((uint)uVar3 - (uint)uVar2) * (uVar5 & 0xffffffff) >> 0x20) + (uint)uVar2
      ;
      uVar8 = (undefined2)uVar1;
      if ((uVar1 & 0xffff) != 0) goto LAB_008108a0;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar8 = 0;
LAB_008108a0:
    *param_2 = uVar8;
    FUN_0284e338(local_70);
    local_90[0] = 0;
    local_80[0] = 0;
    local_58 = uVar8;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_80);
    FUN_007923b4(local_80,param_3,local_70,0,0);
    FUN_018ff39c(local_90,local_80);
    FUN_0284e3d4(local_70);
    FUN_018ff39c(param_1,local_90);
    if ((*param_1 == 0) || (bVar4 = 3 < uVar6, uVar6 = uVar6 + 1, bVar4)) {
      return;
    }
  } while( true );
}


