/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c30eac; name: FUN_00c30eac
 */


undefined8 FUN_00c30eac(string *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  string local_48 [8];
  long local_40;
  byte *local_38;
  
  uVar5 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if (uVar5 == 0) {
    return 0;
  }
  pbVar3 = (byte *)std::string::at((ulong)param_1);
  bVar1 = *pbVar3;
  if (((0x19 < bVar1 - 0x61) && (bVar1 != 0x5f)) && (0x19 < (byte)(bVar1 + 0xbf))) {
    return 0;
  }
  std::string::string(local_48,param_1,1,0xffffffffffffffff,(allocator *)param_1);
  if (((byte)local_48[0] & 1) == 0) {
    uVar5 = (ulong)((byte)local_48[0] >> 1);
    if ((byte)local_48[0] >> 1 == 0) {
      return 1;
    }
    pbVar3 = (byte *)((ulong)local_48 | 1);
    do {
      bVar1 = *pbVar3;
      if (((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (bVar1 != 0x5f)) && (9 < (byte)(bVar1 - 0x30)))
      goto LAB_00c30fdc;
      uVar5 = uVar5 - 1;
      pbVar3 = pbVar3 + 1;
    } while (uVar5 != 0);
  }
  else {
    if (local_40 == 0) {
      uVar6 = 1;
      goto LAB_00c30ff4;
    }
    pbVar3 = local_38;
    do {
      bVar1 = *pbVar3;
      if (((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (bVar1 != 0x5f)) && (9 < (byte)(bVar1 - 0x30)))
      goto LAB_00c30fdc;
      local_40 = local_40 + -1;
      pbVar3 = pbVar3 + 1;
    } while (local_40 != 0);
  }
  uVar6 = 1;
joined_r0x00c30fe0:
  if (((byte)local_48[0] & 1) == 0) {
    return uVar6;
  }
LAB_00c30ff4:
  if (local_38 == (byte *)0x0) {
    return uVar6;
  }
  lVar4 = tpidr_el0;
  plVar7 = *(long **)(lVar4 + 0x30);
  if (plVar7 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar7 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
    (**(code **)(*plVar7 + 0x18))(plVar7,local_38,0,8);
    return uVar6;
  }
  FUN_00c48fe8(plVar7,local_38,0,8);
  return uVar6;
LAB_00c30fdc:
  uVar6 = 0;
  goto joined_r0x00c30fe0;
}


