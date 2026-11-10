/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d6dd0; name: FUN_007d6dd0
 */


void FUN_007d6dd0(long param_1,long param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  ulong uVar4;
  undefined *puVar5;
  short sVar6;
  ushort uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int local_a0 [4];
  undefined1 auStack_90 [64];
  
  puVar5 = PTR_DAT_047d0a08;
  if (param_3 == 0x19) {
    uVar10 = *(ulong *)(param_2 + 1);
    uVar3 = *(ushort *)(param_2 + 0xb);
    uVar4 = (*(ulong *)(param_2 + 0xd) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0xd) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar1 = *(undefined1 *)(param_2 + 0x17);
    uVar2 = *(undefined1 *)(param_2 + 0x18);
    lVar9 = *(long *)PTR_DAT_047d0a08;
    uVar8 = FUN_007e5328(lVar9 + 0x178);
    if ((uVar8 == (uVar4 >> 0x20 | uVar4 << 0x20)) &&
       (sVar6 = FUN_007e5330(lVar9 + 0x178), CONCAT11(uVar1,uVar2) == sVar6)) {
      FUN_007e5190(auStack_90);
      (**(code **)(**(long **)(*(long *)puVar5 + 0x18) + 0x108))
                (local_a0,*(long **)(*(long *)puVar5 + 0x18),auStack_90);
      if ((local_a0[0] == 0) &&
         ((uVar4 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8,
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10,
          uVar8 = FUN_007e5328(auStack_90), uVar8 == (uVar4 >> 0x20 | uVar4 << 0x20) &&
          (uVar7 = FUN_007e5330(auStack_90), (ushort)(uVar3 >> 8 | uVar3 << 8) == uVar7)))) {
        FUN_007da5ec(*(undefined8 *)(param_1 + 0xa8));
      }
      FUN_007e51d0(auStack_90);
    }
  }
  return;
}


