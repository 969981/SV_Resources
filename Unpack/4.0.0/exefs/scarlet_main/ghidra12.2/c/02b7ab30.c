/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b7ab30; name: FUN_02b7ab30
 */


undefined1  [16] FUN_02b7ab30(long param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if (param_2 < *(uint *)(param_1 + 0x120) >> 1) {
    puVar1 = (ushort *)(*(long *)(param_1 + 0x128) + (ulong)param_2 * 4);
    uVar2 = *puVar1;
    uVar7 = (ulong)uVar2;
    uVar3 = puVar1[1];
    uVar6 = (ulong)uVar3;
    uVar4 = *(uint *)(param_1 + 0x110) >> 1;
    if (uVar2 <= uVar4 && uVar3 <= uVar4) {
      uVar5 = (ulong)(uVar3 != 0xffff && (uVar2 != 0xffff && (uVar3 != 0 || uVar2 != 0)));
      goto LAB_02b7ab88;
    }
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
  }
  uVar5 = 0;
LAB_02b7ab88:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar5 | uVar7 << 0x20;
  return auVar8;
}


