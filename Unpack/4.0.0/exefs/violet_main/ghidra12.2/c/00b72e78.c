/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b72e78; name: FUN_00b72e78
 */


/* WARNING: Removing unreachable block (ram,0x00b72ed8) */

undefined8 FUN_00b72e78(long param_1,ulong *param_2)

{
  long *plVar1;
  char *pcVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 auVar12 [16];
  
  puVar4 = PTR_DAT_047dabb0;
  plVar1 = (long *)(param_1 + 0x20);
LAB_00b72ea8:
  while (pbVar11 = (byte *)*param_2, (byte *)param_2[1] <= pbVar11) {
    uVar8 = 0;
LAB_00b72ee0:
    uVar6 = FUN_00c096d0(param_2,uVar8);
    bVar5 = uVar6 - 1 < 0x7f;
    *(uint *)(param_2 + 4) = uVar6;
    uVar8 = (ulong)CONCAT14(bVar5,uVar6);
    if (bVar5) goto LAB_00b72f04;
LAB_00b72f4c:
    if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
      return 1;
    }
    uVar8 = FUN_00c09bd4(param_2);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  bVar3 = *pbVar11;
  uVar8 = (ulong)(uint)bVar3;
  if ((char)bVar3 < '\x01') goto LAB_00b72ee0;
  *(uint *)(param_2 + 4) = (uint)bVar3;
  *param_2 = (ulong)(pbVar11 + 1);
LAB_00b72f04:
  uVar10 = (uint)(uVar8 >> 3) & 0x1fffffff;
  uVar6 = (uint)uVar8;
  if (uVar10 == 2) {
    if (uVar6 != 0x12) goto LAB_00b72f4c;
  }
  else {
    if ((uVar10 != 1) || (uVar6 != 8)) goto LAB_00b72f4c;
    pbVar11 = (byte *)*param_2;
    if ((pbVar11 < (byte *)param_2[1]) && (-1 < (char)*pbVar11)) {
      uVar8 = (ulong)*pbVar11;
      *param_2 = (ulong)(pbVar11 + 1);
    }
    else {
      auVar12 = FUN_00c09268(param_2);
      uVar8 = auVar12._0_8_;
      if ((auVar12._8_8_ & 1) == 0) {
        return 0;
      }
    }
    *(ulong *)(param_1 + 0x18) = uVar8;
    pcVar2 = (char *)*param_2;
    if (((char *)param_2[1] <= pcVar2) || (*pcVar2 != '\x12')) goto LAB_00b72ea8;
    *param_2 = (ulong)(pcVar2 + 1);
  }
  lVar9 = *plVar1;
  if (lVar9 == *(long *)puVar4) {
    FUN_00b6eb88(plVar1,*(long *)puVar4);
    lVar9 = *plVar1;
  }
  uVar8 = FUN_00c0d824(param_2,lVar9);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  pbVar11 = *(byte **)(param_1 + 0x20);
  if ((*pbVar11 & 1) == 0) {
    pbVar7 = pbVar11 + 1;
    uVar8 = (ulong)(*pbVar11 >> 1);
  }
  else {
    uVar8 = *(ulong *)(pbVar11 + 8);
    pbVar7 = *(byte **)(pbVar11 + 0x10);
  }
  uVar8 = FUN_00c0d914(pbVar7,uVar8,0,"SaturdayBleCompleteRequestProto.nonce");
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if ((*param_2 == param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00b72ea8;
}


