/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0221ab80; name: FUN_0221ab80
 */


undefined8 FUN_0221ab80(void)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  long local_50;
  undefined8 local_48;
  
  puVar2 = PTR_PTR_047d1a50;
  if (DAT_048855b8 != '\0') {
    local_50 = 0;
    local_48 = -0x8000000000000000;
    lVar8 = 0;
    puVar10 = &DAT_04885630;
    uVar6 = 0;
    uVar3 = 0;
    while( true ) {
      iVar9 = (int)uVar6;
      if (uVar6 < (uVar3 & 0x7fffffff)) {
        iVar4 = iVar9;
      }
      else {
        FUN_0322f434(&local_50,puVar2,uVar6 + 1);
        lVar8 = local_50;
        iVar4 = (int)local_48;
      }
      *(undefined8 **)(lVar8 + (long)iVar4 * 8) = puVar10;
      local_48 = CONCAT44(local_48._4_4_,iVar9 + 1);
      puVar10 = (undefined8 *)puVar10[4];
      if (puVar10 == (undefined8 *)0x0) break;
      uVar6 = uVar6 + 1;
      uVar3 = local_48._4_4_;
    }
    uVar6 = (ulong)(iVar9 + 1);
    do {
      lVar7 = *(long *)(lVar8 + -8 + uVar6 * 8);
      pcVar5 = *(code **)(lVar7 + 0x10);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(*(undefined8 *)(lVar7 + 0x18));
      }
      lVar7 = local_48;
      bVar1 = 1 < (long)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
    uVar6 = (ulong)local_48._4_4_;
    local_48 = (ulong)local_48._4_4_ << 0x20;
    if (-1 < lVar7) {
      (**(code **)(*(long *)puVar2 + 0x20))(puVar2,lVar8,uVar6 << 3);
    }
    if (DAT_04885628 != (long *)0x0) {
      (**(code **)(*DAT_04885628 + 8))();
      DAT_04885628 = (long *)0x0;
    }
    DAT_048855b8 = '\0';
  }
  lVar8 = tpidr_el0;
  FUN_03241064(*(undefined8 *)(lVar8 + 0x1000b8));
  FUN_03240f5c();
  if (DAT_048856a0 != (long *)0x0) {
    (**(code **)*DAT_04885698)();
    (**(code **)(*DAT_048856a0 + 0x18))(DAT_048856a0,DAT_04885698,0x90);
    DAT_04885698 = (undefined8 *)0x0;
    DAT_048856a0 = (long *)0x0;
  }
  return 0;
}


