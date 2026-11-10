/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f6730; name: FUN_018f6730
 */


undefined1 FUN_018f6730(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  long *plVar11;
  
  plVar11 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar3 = 0;
  if (plVar11 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar11 + 0x170))();
    uVar5 = (**(code **)(*plVar11 + 0x178))(plVar11);
    uVar6 = (**(code **)(*plVar11 + 0x180))(plVar11);
    uVar7 = (**(code **)(*plVar11 + 0x188))(plVar11);
    uVar8 = (**(code **)(*plVar11 + 400))(plVar11);
    uVar9 = uVar5;
    if (uVar4 >= uVar5) {
      uVar9 = uVar4;
    }
    uVar10 = uVar6;
    if (uVar6 <= uVar9) {
      uVar10 = uVar9;
    }
    uVar2 = 2;
    if (uVar6 <= uVar9) {
      uVar2 = (ulong)(uVar4 < uVar5);
    }
    uVar9 = uVar7;
    if (uVar7 <= uVar10) {
      uVar9 = uVar10;
    }
    uVar1 = 3;
    if (uVar7 <= uVar10) {
      uVar1 = uVar2;
    }
    uVar2 = 4;
    if (uVar8 <= uVar9) {
      uVar2 = uVar1;
    }
    uVar3 = (&DAT_03d69fc4)[uVar2];
  }
  return uVar3;
}


