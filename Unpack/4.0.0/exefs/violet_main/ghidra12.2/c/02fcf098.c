/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fcf098; name: FUN_02fcf098
 */


void FUN_02fcf098(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_LAB_046121a8;
  if (*(int *)(param_1 + 0x21) != 0) {
    lVar1 = param_1[0x20];
    lVar2 = (long)*(int *)(param_1 + 0x21) * 0x500;
    do {
      FUN_02fcf60c(lVar1 + -0x500 + lVar2);
      lVar2 = lVar2 + -0x500;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x20],(ulong)*(uint *)((long)param_1 + 0x10c) * 0x500);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0x80000000;
  FUN_02fcf4f4(param_1 + 0x16);
  FUN_02fcf4f4(param_1 + 0xc);
  FUN_02fcf4f4(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x02fcf158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


