/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00808eb4; name: FUN_00808eb4
 */


void FUN_00808eb4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_50 [4];
  undefined1 auStack_40 [16];
  int local_30 [4];
  undefined4 local_18 [2];
  
  lVar1 = *(long *)(param_2 + 0x1420);
  if (lVar1 == 0) {
    local_30[0] = 0x10407;
  }
  else {
    if (*(int *)(param_2 + 0x1428) != 1) {
      if (*(int *)(param_2 + 0x1458) != 0) {
        FUN_0078cac8(param_2 + 0x1428);
        lVar1 = *(long *)(param_2 + 0x1420);
        *(undefined4 *)(param_2 + 0x1458) = 0;
      }
      FUN_0080e614(local_30,lVar1,param_2 + 0x1428);
      if (local_30[0] == 0) {
        *(undefined4 *)(param_2 + 0x1458) = 2;
        FUN_0078cd58(*(undefined8 *)(param_2 + 0x1420),0);
      }
      uVar2 = *(undefined8 *)PTR_DAT_047d0a08;
      local_50[0] = 0;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_18);
      FUN_00cbd7c0(auStack_40,local_50);
      FUN_007cd5e8(uVar2,auStack_40,1);
      goto LAB_00808f98;
    }
    local_30[0] = 0x10408;
  }
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_50);
LAB_00808f98:
  FUN_00cbd7c0(param_1,local_30);
  return;
}


