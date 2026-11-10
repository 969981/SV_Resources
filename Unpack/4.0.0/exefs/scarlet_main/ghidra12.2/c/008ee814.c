/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ee814; name: FUN_008ee814
 */


void FUN_008ee814(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_G3d-13_3_13-Release");
  lVar2 = *(long *)(param_1 + 0xa8);
  if ((lVar2 != 0) && (lVar3 = *(long *)(param_1 + 0xb0), lVar3 != 0)) {
    FUN_00fad31c(lVar2);
    FUN_00ddef7c(lVar2,param_2,lVar3);
    FUN_008eff70(lVar2,&DAT_03c76b5a);
  }
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_008ee9d4(*(long *)(param_1 + 0x28) + lVar2,param_2);
      lVar2 = lVar2 + 0x78;
    } while ((ulong)uVar1 * 0x78 != lVar2);
  }
  return;
}


