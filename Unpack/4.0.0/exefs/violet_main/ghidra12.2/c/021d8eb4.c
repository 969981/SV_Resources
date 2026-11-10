/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d8eb4; name: FUN_021d8eb4
 */


long * FUN_021d8eb4(long param_1,uint param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  
  if (0x200 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_021d88f0();
  }
  param_1 = param_1 + (ulong)param_2 * 0x20;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x20) = 0x128;
  plVar1 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0x128,8);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xe8))();
  }
  else {
    FUN_012d4af4(plVar1,param_3,param_4,param_4);
    *(long **)(param_1 + 8) = plVar1;
    (**(code **)(*plVar1 + 0xe0))(plVar1,&DAT_03c12387);
  }
  return plVar1;
}


