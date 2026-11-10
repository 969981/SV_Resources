/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ddf99c; name: FUN_01ddf99c
 */


ulong FUN_01ddf99c(long param_1)

{
  byte bVar1;
  int param3;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  undefined1 *local_80;
  char **ppcStack_78;
  undefined8 local_70;
  long *local_68;
  char *local_60 [4];
  char *local_40;
  char *pcStack_38;
  
  uVar3 = FUN_01de0e68();
  param3 = FUN_014a24ec();
  local_60[0] = "default_empty";
  local_60[1] = "default_containing";
  local_60[2] = "default_max";
  local_60[3] = "gray_empty";
  local_40 = "gray_containing";
  pcStack_38 = "gray_max";
  uVar2 = snprintf((char *)local_60,0x40,"L_box_change_00/L_temochi_%02d/%s",param3,
                   local_60[uVar3 & 0xffffffff]);
  uVar3 = (ulong)uVar2;
  plVar6 = *(long **)(param_1 + 0x30);
  if (plVar6 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
  }
  local_80 = &DAT_cbf29ce484222645;
  if ((byte)local_60[0] != 0) {
    pbVar5 = (byte *)((ulong)local_60 | 1);
    bVar1 = (byte)local_60[0];
    do {
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  ppcStack_78 = local_60;
  local_70 = 0x3f;
  local_68 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    lVar4 = FUN_00e895f4(plVar6[0x2e],&local_80);
    if (lVar4 != 0) {
      FUN_00dfcea4();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    uVar3 = (**(code **)(*plVar6 + 0x60))(plVar6);
  }
  return uVar3;
}


