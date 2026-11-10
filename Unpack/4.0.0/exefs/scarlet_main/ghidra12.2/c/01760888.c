/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01760888; name: FUN_01760888
 */


ulong FUN_01760888(long *param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined1 *puVar11;
  
  pbVar5 = *(byte **)(param_2 + 8);
  puVar11 = &DAT_cbf29ce484222645;
  bVar1 = *pbVar5;
  while (bVar1 != 0) {
    pbVar5 = pbVar5 + 1;
    puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar5;
  }
  if (param_1[8] == 0) {
    if (param_1[9] != 0) {
      uVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
      uVar3 = (**(code **)(*param_1 + 0x88))(param_1);
      uVar4 = 0;
      uVar7 = 0;
      if ((uVar2 != 0) && (uVar3 != 0)) {
        uVar6 = 0;
        uVar4 = 1;
        uVar7 = 0;
        do {
          puVar8 = *(undefined8 **)(param_1[9] + uVar6 * 8);
          iVar9 = (int)uVar7;
          uVar10 = (ulong)uVar3;
          do {
            if ((undefined1 *)*puVar8 == puVar11) goto LAB_0176092c;
            uVar7 = (ulong)((int)uVar7 + 1);
            uVar10 = uVar10 - 1;
            puVar8 = puVar8 + 2;
          } while (uVar10 != 0);
          uVar6 = uVar6 + 1;
          uVar7 = (ulong)(iVar9 + uVar3);
        } while (uVar6 != uVar2);
        uVar4 = 0;
        uVar7 = (ulong)(uVar3 * ((ushort)(uVar2 - 1) + 1));
      }
      goto LAB_0176092c;
    }
LAB_017609ec:
    uVar7 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x88))(param_1);
    if (uVar3 == 0) goto LAB_017609ec;
    puVar8 = (undefined8 *)param_1[8];
    uVar6 = 0;
    uVar7 = (ulong)uVar3;
    do {
      if ((undefined1 *)*puVar8 == puVar11) {
        uVar4 = 1;
        uVar7 = uVar6 & 0xffffffff;
        goto LAB_0176092c;
      }
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 2;
    } while (uVar7 != uVar6);
  }
  uVar4 = 0;
LAB_0176092c:
  return uVar4 | uVar7 << 0x20;
}


