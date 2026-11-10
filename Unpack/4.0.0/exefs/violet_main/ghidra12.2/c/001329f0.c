/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001329f0; name: FUN_001329f0
 */


void FUN_001329f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = FUN_00138700();
  uVar1 = FUN_0012e860(uVar2,"%s expected",uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00138770(param_1,uVar1);
}


