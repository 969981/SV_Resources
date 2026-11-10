/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014be3a0; name: FUN_014be3a0
 */


void FUN_014be3a0(long param_1,long *param_2,short param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  short *psVar10;
  undefined8 uVar11;
  uint local_44;
  
  uVar9 = 1;
  psVar10 = &DAT_045f6a70;
  while (psVar10[-8] != param_3) {
    if (*psVar10 == param_3) goto LAB_014be408;
    uVar9 = uVar9 + 2;
    psVar10 = psVar10 + 0x10;
    if (uVar9 == 0x131) {
      return;
    }
  }
  uVar9 = uVar9 - 1;
LAB_014be408:
  lVar7 = (**(code **)((uVar9 & 0xffffffff) * 0x10 + 0x45f6a68))(&local_44);
  if (lVar7 == 0) {
    return;
  }
  uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar6 = (**(code **)(*param_2 + 0xe0))(param_2);
  uVar4 = local_44;
  local_44 = local_44 & 0xffff;
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xd0);
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  lVar8 = FUN_0129baac(uVar11,0xffffffff);
  if (lVar8 == 0) {
    return;
  }
  uVar3 = uVar4 >> 0x10;
  uVar1 = 0x2000000;
  if (uVar3 != 0) {
    uVar1 = ~uVar3 * 0x1000000 + 0x9000000;
  }
  *(undefined4 *)(lVar8 + 0x12) = 0xee00ee;
  memset((void *)(lVar8 + 0x18),0,0x58);
  *(undefined1 *)(lVar8 + 0x28) = 4;
  *(uint *)(lVar8 + 0x2c) = uVar1 | uVar6 & 0xffff;
  *(long *)(lVar8 + 0x20) = lVar7;
  *(char *)(lVar8 + 0x3e) = (char)uVar4;
  *(short *)(lVar8 + 0x30) = param_3;
  *(undefined4 *)(lVar8 + 0x34) = uVar5;
  *(undefined4 *)(lVar8 + 0x38) = uVar5;
  *(short *)(lVar8 + 0x3c) = (short)uVar2;
  *(undefined1 *)(lVar8 + 0x44) = 1;
  FUN_0129b6cc(uVar11,lVar8);
  return;
}


