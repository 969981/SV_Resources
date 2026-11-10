/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d0950; name: FUN_031d0950
 */


long FUN_031d0950(byte *param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 *local_60;
  byte local_58;
  undefined8 local_50;
  code *pcStack_48;
  
  lVar11 = *(long *)(param_1 + 8);
  bVar3 = *param_1;
  uVar2 = *(uint *)(lVar11 + -8);
  uVar10 = (ulong)uVar2;
  lVar7 = tpidr_el0;
  lVar6 = *(long *)(lVar7 + 0x1000b8);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar6;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0x3d0) + (ulong)bVar3 * 8 + 8);
  uVar8 = *(ulong *)(lVar11 + -0x10) & 0xfffffffffffffffe;
  *(ushort *)(uVar8 + 0x18) = *(ushort *)(uVar8 + 0x18) | 0x4000;
  uVar8 = (ulong)*(byte *)(*(long *)(uVar8 + 0x10) + 0x18);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar6;
  }
  if (uVar2 != 0) {
    lVar7 = *(long *)(lVar6 + 0x3d8);
    plVar1 = (long *)(DAT_04883ee8 + uVar8 * 0x210 + 0xe8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + uVar10 * -0x10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar7 = lVar7 + 0x28 + uVar8 * 0xe8;
    *(ulong *)(lVar7 + 0x90) = *(long *)(lVar7 + 0x90) + uVar10 * -0x10;
  }
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0;
  local_60 = &local_78;
  local_68 = 0;
  local_58 = *param_1;
  local_50 = *(undefined8 *)(param_1 + 8);
  pcStack_48 = FUN_031d0b80;
  FUN_031d0c20(uVar9,&local_60,1);
  return uVar10 * 0x10;
}


