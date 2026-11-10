/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032ac030; name: FUN_032ac030
 */


void FUN_032ac030(undefined8 *param_1)

{
  DAT_0488afa8 = 1;
  (**(code **)*param_1)(param_1,&PTR_s_hkpStiffSpringConstraintAtom_04703200);
  (**(code **)*param_1)(param_1,&PTR_s_hkpConeLimitConstraintAtom_047032a8);
  (**(code **)*param_1)(param_1,&PTR_s_hkpConstraintData_04703300);
                    /* WARNING: Could not recover jumptable at 0x032ac0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,&PTR_s_hkp3dAngConstraintAtom_04703378);
  return;
}


