/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086fe00; name: FUN_0086fe00
 */


undefined8 FUN_0086fe00(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x1000b8) == 0) {
    lVar2 = FUN_00e5d3b4();
    *(long *)(lVar4 + 0x1000b8) = lVar2;
    lVar4 = *(long *)(lVar2 + 0x3e0);
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar4 + 0x1000b8) + 0x3e0);
  }
  if (lVar4 != 0) {
    FUN_031d39e0(lVar4,"TtREBUILD",9);
  }
  iVar1 = FUN_02ed44bc(*(long *)(param_1 + 0x18) + 0x18,
                       *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x34),1,0x20,0x10);
  uVar3 = 0x80040200;
  if (-1 < iVar1) {
    uVar3 = 0;
  }
  if (lVar4 != 0) {
    FUN_031d3a90(lVar4,&DAT_03c2d363);
  }
  return uVar3;
}


