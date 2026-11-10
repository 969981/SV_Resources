/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bd98b4; name: FUN_00bd98b4
 */


/* WARNING: Removing unreachable block (ram,0x00bd9910) */

undefined8 FUN_00bd98b4(long param_1,ulong *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 auVar11 [16];
  
  puVar2 = PTR_DAT_047dabb0;
LAB_00bd98e0:
  while (pbVar9 = (byte *)*param_2, (byte *)param_2[1] <= pbVar9) {
    uVar5 = 0;
LAB_00bd9918:
    iVar4 = FUN_00c096d0(param_2,uVar5);
    bVar3 = iVar4 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar4;
    uVar5 = (ulong)CONCAT14(bVar3,iVar4);
    if (bVar3) goto LAB_00bd993c;
LAB_00bd99bc:
    if (((uint)uVar5 == 0) || (((uint)uVar5 & 7) == 4)) {
      return 1;
    }
    uVar8 = *(ulong *)(param_1 + 8);
    if ((uVar8 & 1) == 0) {
      uVar8 = FUN_00b7714c((ulong *)(param_1 + 8));
    }
    else {
      uVar8 = uVar8 & 0xfffffffffffffffe;
    }
    uVar5 = FUN_00c01b50(param_2,uVar5 & 0xffffffff,uVar8);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  bVar1 = *pbVar9;
  uVar5 = (ulong)(uint)bVar1;
  if ((char)bVar1 < '\x01') goto LAB_00bd9918;
  *(uint *)(param_2 + 4) = (uint)bVar1;
  *param_2 = (ulong)(pbVar9 + 1);
LAB_00bd993c:
  uVar7 = (uint)(uVar5 >> 3) & 0x1fffffff;
  if (uVar7 == 2) {
    if ((int)uVar5 != 0x10) goto LAB_00bd99bc;
    pbVar9 = (byte *)*param_2;
    pbVar10 = (byte *)param_2[1];
  }
  else {
    if ((uVar7 != 1) || ((int)uVar5 != 10)) goto LAB_00bd99bc;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 == *(long *)puVar2) {
      FUN_00b6eb88((long *)(param_1 + 0x18),*(long *)puVar2);
      lVar6 = *(long *)(param_1 + 0x18);
    }
    uVar5 = FUN_00c0d824(param_2,lVar6);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    pbVar9 = (byte *)*param_2;
    pbVar10 = (byte *)param_2[1];
    if ((pbVar10 <= pbVar9) || (*pbVar9 != 0x10)) goto LAB_00bd98e0;
    pbVar9 = pbVar9 + 1;
    *param_2 = (ulong)pbVar9;
  }
  if ((pbVar9 < pbVar10) && (-1 < (char)*pbVar9)) {
    uVar5 = (ulong)*pbVar9;
    *param_2 = (ulong)(pbVar9 + 1);
  }
  else {
    auVar11 = FUN_00c09268(param_2);
    uVar5 = auVar11._0_8_;
    if ((auVar11._8_8_ & 1) == 0) {
      return 0;
    }
  }
  *(bool *)(param_1 + 0x20) = uVar5 != 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if ((*param_2 == param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00bd98e0;
}


