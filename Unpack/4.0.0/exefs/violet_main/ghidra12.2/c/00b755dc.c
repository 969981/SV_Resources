/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b755dc; name: FUN_00b755dc
 */


/* WARNING: Removing unreachable block (ram,0x00b7564c) */

undefined8 FUN_00b755dc(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  
  puVar5 = PTR_DAT_047dabb0;
  plVar1 = (long *)(param_1 + 0x18);
  plVar2 = (long *)(param_1 + 0x20);
LAB_00b7561c:
  while (pbVar13 = (byte *)*param_2, (byte *)param_2[1] <= pbVar13) {
    uVar9 = 0;
LAB_00b75654:
    uVar7 = FUN_00c096d0(param_2,uVar9);
    bVar6 = uVar7 - 1 < 0x7f;
    *(uint *)(param_2 + 4) = uVar7;
    uVar9 = (ulong)CONCAT14(bVar6,uVar7);
    if (bVar6) goto LAB_00b75678;
LAB_00b756e0:
    if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
      return 1;
    }
    uVar9 = FUN_00c09bd4(param_2);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  bVar4 = *pbVar13;
  uVar9 = (ulong)(uint)bVar4;
  if ((char)bVar4 < '\x01') goto LAB_00b75654;
  *(uint *)(param_2 + 4) = (uint)bVar4;
  *param_2 = (ulong)(pbVar13 + 1);
LAB_00b75678:
  uVar11 = (uint)(uVar9 >> 3) & 0x1fffffff;
  uVar7 = (uint)uVar9;
  if (uVar11 == 2) {
    if (uVar7 != 0x12) goto LAB_00b756e0;
  }
  else {
    if ((uVar11 != 1) || (uVar7 != 10)) goto LAB_00b756e0;
    lVar12 = *(long *)puVar5;
    lVar10 = *plVar1;
    if (lVar10 == lVar12) {
      FUN_00b6eb88(plVar1,lVar12);
      lVar10 = *plVar1;
    }
    uVar9 = FUN_00c0d824(param_2,lVar10);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    pbVar13 = *(byte **)(param_1 + 0x18);
    if ((*pbVar13 & 1) == 0) {
      pbVar8 = pbVar13 + 1;
      uVar9 = (ulong)(*pbVar13 >> 1);
    }
    else {
      uVar9 = *(ulong *)(pbVar13 + 8);
      pbVar8 = *(byte **)(pbVar13 + 0x10);
    }
    uVar9 = FUN_00c0d914(pbVar8,uVar9,0,"SaturdayBleSendCompleteProto.nonce");
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    pcVar3 = (char *)*param_2;
    if (((char *)param_2[1] <= pcVar3) || (*pcVar3 != '\x12')) goto LAB_00b7561c;
    *param_2 = (ulong)(pcVar3 + 1);
  }
  lVar12 = *(long *)puVar5;
  lVar10 = *plVar2;
  if (lVar10 == lVar12) {
    FUN_00b6eb88(plVar2,lVar12);
    lVar10 = *plVar2;
  }
  uVar9 = FUN_00c0d824(param_2,lVar10);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  pbVar13 = *(byte **)(param_1 + 0x20);
  if ((*pbVar13 & 1) == 0) {
    pbVar8 = pbVar13 + 1;
    uVar9 = (ulong)(*pbVar13 >> 1);
  }
  else {
    uVar9 = *(ulong *)(pbVar13 + 8);
    pbVar8 = *(byte **)(pbVar13 + 0x10);
  }
  uVar9 = FUN_00c0d914(pbVar8,uVar9,0,"SaturdayBleSendCompleteProto.application_id");
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  if ((*param_2 == param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00b7561c;
}


