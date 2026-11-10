/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032b25b0; name: FUN_032b25b0
 */


void FUN_032b25b0(undefined8 *param_1)

{
  DAT_0488b038 = 1;
  (**(code **)*param_1)(param_1,&PTR_s_hkpPulleyConstraintAtom_04704ac0);
  (**(code **)*param_1)(param_1,&PTR_s_hkpRackAndPinionConstraintAtom_04704b38);
                    /* WARNING: Could not recover jumptable at 0x032b2614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,&PTR_s_hkpCogWheelConstraintAtom_04704bb0);
  return;
}


