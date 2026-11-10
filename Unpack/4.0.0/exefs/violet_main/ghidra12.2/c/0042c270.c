/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0042c270; name: FUN_0042c270
 */


bool FUN_0042c270(long *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if ((*param_1 == 0) || (pcVar2 = *(code **)(*param_1 + 0x48), pcVar2 == (code *)0x0)) {
    return false;
  }
  iVar1 = (*pcVar2)();
  return 0 < iVar1;
}


