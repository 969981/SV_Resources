/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a4dfc; name: FUN_004a4dfc
 */


bool FUN_004a4dfc(long param_1,long param_2,undefined4 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_108 [176];
  byte *local_58;
  byte *local_28;
  
  if (*(long *)(param_1 + 8) == 0) {
    return false;
  }
  FUN_004caf90(auStack_108,0);
                    /* try { // try from 004a4e3c to 004a4e9b has its CatchHandler @ 004a4ec4 */
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x20))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_2 + 8),param_3,auStack_108);
  if ((uVar2 & 1) != 0) {
    local_28 = *(byte **)(local_58 + 0x10);
    if ((*local_58 & 1) == 0) {
      local_28 = local_58 + 1;
    }
    lVar3 = FUN_004c05ec(*(long *)(param_1 + 0x20) + 0x158,&local_28);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) {
      lVar3 = FUN_004a5ce0(param_1,auStack_108);
      bVar1 = lVar3 != 0;
      goto LAB_004a4ea4;
    }
  }
  bVar1 = false;
LAB_004a4ea4:
  FUN_004cb2ec(auStack_108);
  return bVar1;
}


