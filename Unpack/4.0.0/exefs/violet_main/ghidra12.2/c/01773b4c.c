/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01773b4c; name: FUN_01773b4c
 */


void FUN_01773b4c(long param_1,undefined4 param_2,undefined8 param_3,uint param_4,uint param_5,
                 uint param_6)

{
  long lVar1;
  char *pcVar2;
  undefined1 local_70 [16];
  
  if ((param_6 & 1) == 0) {
    FUN_00d101e0();
  }
  else {
    FUN_01690980(*(undefined8 *)(param_1 + 200),2,param_2,param_3);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x58);
  if (((int)param_4 < 3) && ((int)param_5 < 0xe)) {
    pcVar2 = (char *)(lVar1 + (ulong)param_4 * 0xe0 + (ulong)param_5 * 0x10 + 8);
    if (*pcVar2 == '\0') {
      local_70 = FUN_0166cf98(lVar1,param_4,param_5);
      *(long *)pcVar2 = local_70._0_8_;
      *(long *)(lVar1 + (ulong)param_4 * 0xe0 + (ulong)param_5 * 0x10 + 0x10) = local_70._8_8_;
    }
    else {
      local_70._8_8_ = *(undefined8 *)(lVar1 + (ulong)param_4 * 0xe0 + (ulong)param_5 * 0x10 + 0x10)
      ;
      local_70._0_8_ = *(undefined8 *)pcVar2;
    }
  }
  else {
    local_70 = FUN_0166cf98(lVar1,param_4,param_5);
  }
  if ((param_6 & 1) == 0) {
    FUN_00ead0d0();
  }
  else {
    FUN_01447330(*(undefined8 *)(param_1 + 200),2,param_2,local_70);
  }
  return;
}


