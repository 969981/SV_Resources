/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00812b88; name: FUN_00812b88
 */


void FUN_00812b88(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(0x14,uVar2);
  if (lVar3 != 0) {
    FUN_00792120(lVar3);
  }
  *(long *)(param_2 + 0x6f0) = lVar3;
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(0x4c0,uVar2);
  if (lVar3 != 0) {
    FUN_00818304(lVar3);
  }
  *(long *)(param_2 + 0x6f8) = lVar3;
  uVar1 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) - 1;
  uVar4 = (ulong)uVar1;
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(uVar4 * 0xb0,uVar2);
  if ((lVar3 != 0) && (uVar1 != 0)) {
    puVar5 = (undefined8 *)(lVar3 + 0xa0);
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[-0x10] = 0;
      puVar5[-0x14] = 0;
      puVar5[-2] = 0;
      puVar5[-1] = 0;
      puVar5[-4] = 0;
      puVar5[-3] = 0;
      puVar5[-6] = 0;
      puVar5[-5] = 0;
      puVar5[-8] = 0;
      puVar5[-7] = 0;
      puVar5[-10] = 0;
      puVar5[-9] = 0;
      puVar5[-0xc] = 0;
      puVar5[-0xb] = 0;
      puVar5[-0xf] = 0;
      puVar5[-0xe] = 0;
      puVar5[-0x13] = 0;
      puVar5[-0x12] = 0;
      puVar5[-0x11] = 0;
      puVar5[-0xd] = 0;
      FUN_0284e338();
      FUN_0284e338(puVar5 + -0xd);
      puVar5[-8] = 0;
      puVar5[-7] = 0;
      uVar4 = uVar4 - 1;
      puVar5[-6] = 0;
      puVar5[-5] = 0;
      puVar5[-4] = 0;
      puVar5[-3] = 0;
      puVar5[-1] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 0x16;
    } while (uVar4 != 0);
  }
  *(long *)(param_2 + 0x860) = lVar3;
  local_50[0] = 0;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_50);
  return;
}


