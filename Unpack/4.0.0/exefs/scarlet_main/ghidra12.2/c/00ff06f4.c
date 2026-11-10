/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff06f4; name: FUN_00ff06f4
 */


void FUN_00ff06f4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint *puVar2;
  undefined4 uVar3;
  
  if ((*param_2 != 0) && (puVar2 = (uint *)*param_3, 0.0 < (float)puVar2[1])) {
    uVar3 = 0;
    if (*(char *)(*param_2 + 0x240) != '\0') {
      uVar3 = 0x3f800000;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(PTR_PTR_047e3190 + (ulong)*puVar2 * 0x10);
    uVar1 = *(ulong *)((long)(PTR_PTR_047e3190 + (ulong)*puVar2 * 0x10) + 8);
    if ((uVar1 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)puVar2 + ((long)uVar1 >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x00ff0750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)*param_1,uVar3);
    return;
  }
  return;
}


