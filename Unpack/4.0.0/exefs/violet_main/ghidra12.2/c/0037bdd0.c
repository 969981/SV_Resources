/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037bdd0; name: FUN_0037bdd0
 */


undefined8 FUN_0037bdd0(long param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar3 = *param_2;
  bVar1 = *(byte *)(param_1 + lVar3);
  while (uVar5 = (ulong)bVar1, 0x7e < bVar1) {
    while (uVar4 = (uint)uVar5, 9 < uVar4 - 0x30 && 0x19 < ((uVar4 & 0xffffffdf) - 0x41 & 0xff)) {
      if ((uVar4 | 0x10) != 0x3f) {
        return 1;
      }
      lVar3 = lVar3 + 1;
      *param_2 = lVar3;
      uVar5 = (ulong)*(byte *)(param_1 + lVar3);
      if (*(byte *)(param_1 + lVar3) < 0x7f) goto LAB_0037be08;
    }
    lVar3 = lVar3 + 1;
    *param_2 = lVar3;
    bVar1 = *(byte *)(param_1 + lVar3);
  }
LAB_0037be08:
                    /* WARNING: Could not recover jumptable at 0x0037be18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)((ulong)(byte)"7################################"[uVar5] * 4 + 0x37bdf4))(1);
  return uVar2;
}


