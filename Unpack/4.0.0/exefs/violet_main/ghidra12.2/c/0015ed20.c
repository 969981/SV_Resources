/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015ed20; name: FUN_0015ed20
 */


undefined8 FUN_0015ed20(void)

{
  undefined8 uVar1;
  
  if (*(code **)PTR_PTR_047cb8d0 == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0015ed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)PTR_PTR_047cb8d0)();
  return uVar1;
}


