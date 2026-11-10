/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ec3a0; name: FUN_001ec3a0
 */


void FUN_001ec3a0(long param_1)

{
  if (*(code **)(PTR_DAT_047cb9d0 + 8) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    nndetailDiagAbortFormatImpl(&DAT_03c886bc,&DAT_03c886bc,&DAT_03c886bc,0,&DAT_03c886bc);
  }
                    /* WARNING: Could not recover jumptable at 0x001ec3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047cb9d0 + 8))(*(undefined8 *)(param_1 + -8));
  return;
}


