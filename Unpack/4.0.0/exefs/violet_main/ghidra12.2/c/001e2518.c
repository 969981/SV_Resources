/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e2518; name: FUN_001e2518
 */


undefined8 FUN_001e2518(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  long local_28;
  
  local_28 = param_2;
  if (param_3 == 3) {
    if ((*(long *)(param_1 + 0x6d8) != -1) &&
       (*(long *)(param_1 + 0x6d8) <= *(long *)(param_1 + 0x6d0))) {
      param_3 = 1;
      bVar2 = true;
      goto LAB_001e25d8;
    }
    *(long *)(param_1 + 0x6d0) = *(long *)(param_1 + 0x6d0) + 1;
    *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) | 2;
    if (-1 < *(char *)(param_1 + 0xf42)) {
LAB_001e25d4:
      bVar2 = false;
      param_3 = 3;
      goto LAB_001e25d8;
    }
    if ((*(byte *)(param_1 + 0xf68) >> 1 & 1) != 0) {
      FUN_001ec308(*(undefined8 *)(param_1 + 0xf50));
      *(undefined8 *)(param_1 + 0xf50) = 0;
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfd;
    }
    lVar4 = FUN_001ec328(*(undefined8 *)(param_1 + 0xf48));
    *(long *)(param_1 + 0xf50) = lVar4;
    if (lVar4 != 0) {
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) | 2;
      goto LAB_001e25d4;
    }
LAB_001e2624:
    uVar6 = 0x1b;
    goto LAB_001e27a4;
  }
  bVar2 = false;
LAB_001e25d8:
  uVar5 = FUN_001e2aac(param_2,0,8);
  iVar3 = FUN_001e315c(*(undefined8 *)(param_1 + 0x1548),0,param_2,(ulong)(param_3 == 1) << 3);
  if (iVar3 == 0) {
    iVar3 = FUN_001e2d14(*(undefined8 *)(param_1 + 0x1548),0,&local_28,0);
    if (iVar3 != 0) {
      uVar6 = FUN_001e5370();
      return uVar6;
    }
    if (param_3 == 1) goto LAB_001e266c;
    if ((uVar5 & 1) != 0) {
      *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) & 0xffef;
    }
    bVar7 = *(byte *)(param_1 + 0xf68);
    if ((bVar7 & 1) != 0) {
      FUN_001ec308(*(undefined8 *)(param_1 + 0xf48));
      bVar7 = *(byte *)(param_1 + 0xf68);
      *(undefined8 *)(param_1 + 0xf48) = 0;
    }
    *(long *)(param_1 + 0xf48) = local_28;
    *(byte *)(param_1 + 0xf68) = bVar7 | 1;
    FUN_001db818(param_1,"Issue another request to this URL: \'%s\'\n");
    iVar3 = *(int *)(param_1 + 0x15f8);
    if (iVar3 == 0x12f) {
      if ((*(int *)(param_1 + 0xa38) != 1) && ((*(byte *)(param_1 + 0x6e0) >> 2 & 1) == 0)) {
        *(undefined4 *)(param_1 + 0xa38) = 1;
        puVar1 = &DAT_03c3fef4;
        if ((*(ulong *)(param_1 + 0xf40) & 0x1000000) != 0) {
          puVar1 = &DAT_03bdfd5f;
        }
        FUN_001db818(param_1,"Disables POST, goes with %s\n",puVar1);
      }
    }
    else if (iVar3 == 0x12e) {
      if (*(int *)(param_1 + 0xa38) - 2U < 3) {
        bVar7 = *(byte *)(param_1 + 0x6e0) >> 1;
        goto joined_r0x001e2724;
      }
    }
    else if ((iVar3 == 0x12d) && (*(int *)(param_1 + 0xa38) - 2U < 3)) {
      bVar7 = *(byte *)(param_1 + 0x6e0);
joined_r0x001e2724:
      if ((bVar7 & 1) == 0) {
        FUN_001db818(param_1,"Switch from POST to GET\n");
        *(undefined4 *)(param_1 + 0xa38) = 1;
      }
    }
    FUN_001dac98(param_1,10);
    FUN_001dac30(param_1);
  }
  else {
    if (param_3 != 1) {
      uVar6 = FUN_001e5370();
      return uVar6;
    }
    local_28 = FUN_001ec328(param_2);
    if (local_28 == 0) goto LAB_001e2624;
LAB_001e266c:
    *(long *)(param_1 + 0x1640) = local_28;
    if (bVar2) {
      FUN_001db9c8(param_1,"Maximum (%ld) redirects followed",*(undefined8 *)(param_1 + 0x6d8));
      return 0x2f;
    }
  }
  uVar6 = 0;
LAB_001e27a4:
  return uVar6;
}


