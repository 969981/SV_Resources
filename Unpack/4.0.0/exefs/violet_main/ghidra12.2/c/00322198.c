/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00322198; name: FUN_00322198
 */


void FUN_00322198(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8) + 0x58;
  local_28 = param_2;
  FUN_0038db40(lVar1);
                    /* try { // try from 003221bc to 003221cb has its CatchHandler @ 0032221c */
  uVar4 = FUN_00325510(uVar2,param_1,&local_28);
                    /* try { // try from 003221d0 to 003221d7 has its CatchHandler @ 00322218 */
  FUN_0038db60(lVar1);
  uVar3 = local_28;
  if ((uVar4 & 1) != 0) {
    FUN_003261e0(param_1,local_28);
    if (4 < uVar3) {
      FUN_00350fd0(uVar3);
      return;
    }
  }
  return;
}


