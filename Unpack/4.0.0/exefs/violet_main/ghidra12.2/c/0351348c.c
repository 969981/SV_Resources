/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351348c; name: FUN_0351348c
 */


void FUN_0351348c(char *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (*(code **)PTR_DAT_047e2fd0 != (code *)0x0) {
    (**(code **)PTR_DAT_047e2fd0)();
  }
  DAT_048b0c98 = nn::os::GetCurrentThread();
  puVar4 = PTR_DAT_047e7320;
  puVar3 = PTR_DAT_047e6fe8;
  puVar2 = PTR_DAT_047e2fe8;
  do {
    FUN_0344f608(*(undefined8 *)puVar2,0,0);
    nn::os::TimedWaitEvent(puVar3,(ulong)*(uint *)puVar4 * 1000000);
  } while (*param_1 == '\0');
  FUN_0349e468();
  if (*(code **)(puVar1 + 8) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03513528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 8))();
  return;
}


