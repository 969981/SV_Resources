/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0214e5dc; name: FUN_0214e5dc
 */


void FUN_0214e5dc(long param_1)

{
  long lVar1;
  
  if (**(char **)(param_1 + 0x138) != '\0') {
    lVar1 = param_1 + 0x130;
    (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),lVar1);
  }
  if (**(char **)(param_1 + 0x158) != '\0') {
    lVar1 = param_1 + 0x150;
    (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),lVar1);
  }
  if (**(char **)(param_1 + 0x178) != '\0') {
    lVar1 = param_1 + 0x170;
    (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),lVar1);
  }
  if (**(char **)(param_1 + 0x198) == '\0') {
    return;
  }
  lVar1 = param_1 + 400;
  (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),lVar1);
  (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0214e664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),lVar1);
  return;
}


