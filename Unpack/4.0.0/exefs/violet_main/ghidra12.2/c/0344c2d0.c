/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344c2d0; name: FUN_0344c2d0
 */


void FUN_0344c2d0(long param_1,long param_2,byte *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  byte local_58;
  byte local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  if (*(char *)(param_2 + 0x48) == '\0') {
    local_70 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    local_70 = 0;
  }
  bVar1 = *param_3;
  uVar3 = bVar1 - 0x80;
  local_58 = param_3[1];
  if (uVar3 < 0x21 && (1L << ((ulong)uVar3 & 0x3f) & 0x100010001U) != 0) {
    local_50 = param_3[4];
  }
  else {
    local_50 = 0xff;
  }
  local_60 = *(undefined4 *)(param_2 + 0x3c);
  local_48 = 0;
  local_68 = 0;
  if (bVar1 == 0xe0) {
    local_38 = 0;
    local_40 = 0x400000000;
    FUN_034b6d0c((float)((uint)param_3[4] | (uint)param_3[5] << 7) * 0.0078125,
                 *(undefined8 *)PTR_DAT_047e6fd8,0x83,&local_70,&local_40,1,0);
  }
  else if (((bVar1 == 0xb0) && (bVar1 = param_3[4], bVar1 != 0x78)) && (bVar1 != 0x7b)) {
    if (bVar1 == 0x79) {
      *(undefined2 *)(param_1 + 0x10) = 0;
      puVar4 = PTR_DAT_047e6fd8;
      local_38 = 0;
      iVar5 = 1;
      local_40 = 0x400000000;
      do {
        FUN_034b9054(*(undefined8 *)puVar4,iVar5,&local_70,&local_40);
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x86);
    }
    else {
      uVar6 = NEON_ucvtf((uint)param_3[5]);
      local_38 = 0;
      local_40 = 0x400000000;
      FUN_034b6d0c(uVar6,*(undefined8 *)PTR_DAT_047e6fd8,bVar1 + 1,&local_70,&local_40,1,0);
      if (param_3[4] == 0x40) {
        uVar2 = *(ushort *)(param_1 + 0x10) & ((ushort)(1 << (ulong)(param_3[1] & 0x1f)) ^ 0xffff);
        *(ushort *)(param_1 + 0x10) = uVar2;
        *(ushort *)(param_1 + 0x10) =
             uVar2 | (ushort)(0x3f < param_3[5]) << (ulong)(param_3[1] & 0x1f);
      }
    }
  }
  return;
}


