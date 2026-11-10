/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031aaa80; name: FUN_031aaa80
 */


void FUN_031aaa80(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  lVar4 = (ulong)*(uint *)(param_1 + 0x34) * 0x38;
  bVar3 = (&DAT_0487f132)[lVar4];
  uVar6 = *(int *)(param_1 + 0x28) * (uint)bVar3 - 1;
  uVar7 = 0;
  if ((byte)(&DAT_0487f132)[(ulong)*(uint *)(param_1 + 0x30) * 0x38] != 0) {
    uVar7 = uVar6 / (byte)(&DAT_0487f132)[(ulong)*(uint *)(param_1 + 0x30) * 0x38];
  }
  uVar8 = 0;
  if (bVar3 != 0) {
    uVar8 = uVar6 / bVar3;
  }
  iVar9 = *(int *)(param_2 + 0x18) * *(int *)(param_1 + 0x40);
  uVar6 = iVar9 + *(int *)(param_1 + 0x40);
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (uVar6 <= *(uint *)(param_1 + 0x2c)) {
    uVar2 = uVar6;
  }
  iVar5 = ((uVar7 + 1) * (uint)(ushort)(&DAT_0487f130)[(ulong)*(uint *)(param_1 + 0x30) * 0x1c] >> 3
          ) * (uint)(byte)(&DAT_0487f133)[lVar4];
  lVar4 = *(long *)(param_1 + 8) + (ulong)(uint)(iVar5 * iVar9);
  uVar6 = (uVar8 + 1) * (uint)(ushort)(&DAT_0487f130)[(ulong)*(uint *)(param_1 + 0x34) * 0x1c] >> 3;
  lVar1 = *(long *)(param_1 + 0x18) + (ulong)(uVar6 * iVar9);
  iVar9 = (**(code **)(**(long **)(param_1 + 0x38) + 0x20))
                    (*(long **)(param_1 + 0x38),lVar4,lVar4 + (ulong)(iVar5 * (uVar2 - iVar9)),lVar1
                     ,lVar1 + (ulong)(uVar6 * (uVar2 - iVar9)));
  if (iVar9 < 0) {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}


