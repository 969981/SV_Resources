/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00354fa0; name: FUN_00354fa0
 */


void FUN_00354fa0(undefined4 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(DAT_047ef690 + 0x10);
  if ((param_3 & 1) != 0) {
    uVar2 = FUN_003547e0();
    if ((uVar2 & 1) != 0) {
      bVar1 = *(char *)(DAT_047ef690 + 8) != '\0';
      goto LAB_00354fec;
    }
  }
  bVar1 = false;
LAB_00354fec:
                    /* WARNING: Could not recover jumptable at 0x00355000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,bVar1);
  return;
}


