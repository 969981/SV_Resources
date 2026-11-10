/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034b630; name: FUN_0034b630
 */


void FUN_0034b630(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  FUN_0038db40(param_1 + 0x10);
  if ((*(char *)(param_1 + 0x30) == '\0') && (*(long *)(param_1 + 0x50) != 0)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    lVar2 = *(long *)(param_1 + 0x50) + -1;
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      plVar3 = *(long **)(param_1 + 0x40 + lVar2 * 8);
    }
    else {
      plVar3 = *(long **)(*(long *)(param_1 + 0x40) + lVar2 * 8);
    }
    uVar1 = param_2;
    if (4 < param_2) {
                    /* try { // try from 0034b69c to 0034b6b7 has its CatchHandler @ 0034b6e4 */
      uVar1 = FUN_00350fb0(param_2,param_2);
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,uVar1);
  }
                    /* try { // try from 0034b6b8 to 0034b6bf has its CatchHandler @ 0034b6fc */
  FUN_0038db60(param_1 + 0x10);
  if (param_2 < 5) {
    return;
  }
  FUN_00350fd0(param_2);
  return;
}


