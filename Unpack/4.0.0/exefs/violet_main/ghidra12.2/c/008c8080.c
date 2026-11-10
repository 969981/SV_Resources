/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c8080; name: FUN_008c8080
 */


void FUN_008c8080(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar3 = *(long *)(lVar1 + 0x3e0);
  lVar2 = *(long *)(lVar1 + 1000);
  if ((*(long *)(lVar1 + 0x3f0) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + 0x3f0) + 0x30),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    (*UNRECOVERED_JUMPTABLE)(param_1);
  }
  if ((lVar3 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    (*UNRECOVERED_JUMPTABLE)(param_1);
  }
  if ((lVar2 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x30), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008c80e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


