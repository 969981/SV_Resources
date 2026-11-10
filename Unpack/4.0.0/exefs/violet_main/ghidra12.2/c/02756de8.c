/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02756de8; name: FUN_02756de8
 */


void FUN_02756de8(float param_1,uint *param_2)

{
  long *plVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  float fVar3;
  
  fVar3 = (float)NEON_ucvtf(param_2[1]);
  plVar1 = (long *)((ulong)(param_1 < 0.0 || (float)param_2[2] < 0.0) * 0x20 + 0x4608af8 +
                   (ulong)*param_2 * 0x10);
  UNRECOVERED_JUMPTABLE = (code *)*plVar1;
  uVar2 = plVar1[1];
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[3] = (uint)((float)param_2[3] + (float)param_2[2] * fVar3 * param_1);
  if ((uVar2 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)param_2 + ((long)uVar2 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x02756e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


