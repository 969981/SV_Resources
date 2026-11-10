/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a2704; name: FUN_004a2704
 */


undefined8 FUN_004a2704(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [176];
  byte *local_48;
  byte *local_18;
  
  if ((*(long *)(param_1 + 8) == 0) ||
     (lVar1 = FUN_004c458c(*(long *)(param_1 + 0x20) + 0x40), lVar1 != 0)) {
    return 0;
  }
  FUN_004caf90(auStack_f8,0);
                    /* try { // try from 004a2744 to 004a27cb has its CatchHandler @ 004a27ec */
  uVar2 = FUN_004a6218(param_1,param_2);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x18))
                        (*(long **)(param_1 + 8),param_2,auStack_f8), (uVar2 & 1) != 0)) {
    local_18 = *(byte **)(local_48 + 0x10);
    if ((*local_48 & 1) == 0) {
      local_18 = local_48 + 1;
    }
    lVar1 = FUN_004c05ec(*(long *)(param_1 + 0x20) + 0x158,&local_18);
    if (((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) &&
       (lVar1 = FUN_004a5ce0(param_1,auStack_f8), lVar1 != 0)) {
      uVar3 = 1;
      goto LAB_004a27d0;
    }
  }
  FUN_004a5db0(*(long *)(param_1 + 0x20) + 0x40,param_2);
  uVar3 = 0;
LAB_004a27d0:
  FUN_004cb2ec(auStack_f8);
  return uVar3;
}


