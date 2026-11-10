/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a2d010; name: FUN_02a2d010
 */


void FUN_02a2d010(long *param_1)

{
  long lVar1;
  
  if (((long *)*param_1 == (long *)0x0) || (lVar1 = param_1[1], lVar1 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02a2d03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x58))
            (*(undefined8 *)(lVar1 + 0x1c0),*(undefined8 *)(lVar1 + 0x1d0),
             *(undefined8 *)(lVar1 + 0x1e0),*(undefined8 *)(lVar1 + 0x1f0),
             *(undefined8 *)(lVar1 + 0x200),*(undefined8 *)(lVar1 + 0x210),
             *(undefined8 *)(lVar1 + 0x220),*(undefined8 *)(lVar1 + 0x230));
  return;
}


