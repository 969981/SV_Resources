/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a4900; name: FUN_004a4900
 */


undefined8 FUN_004a4900(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [216];
  
  if ((*(long *)(param_1 + 8) == 0) ||
     (lVar1 = FUN_004c458c(*(long *)(param_1 + 0x20) + 0x18), lVar1 != 0)) {
    uVar3 = 0;
  }
  else {
    FUN_004caf90(auStack_f8,0);
                    /* try { // try from 004a494c to 004a4983 has its CatchHandler @ 004a49a4 */
    uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                      (*(long **)(param_1 + 8),param_2,auStack_f8);
    if (((uVar2 & 1) == 0) || (lVar1 = FUN_004a5ce0(param_1,auStack_f8), lVar1 == 0)) {
      FUN_004a5db0(*(long *)(param_1 + 0x20) + 0x18,param_2);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    FUN_004cb2ec(auStack_f8);
  }
  return uVar3;
}


