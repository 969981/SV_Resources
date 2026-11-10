/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270be44; name: FUN_0270be44
 */


void FUN_0270be44(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (*param_2 != '\0') {
    lVar1 = *(long *)(param_2 + 8);
  }
  lVar2 = 0;
  if (*param_3 != '\0') {
    lVar2 = *(long *)(param_3 + 8);
  }
  if ((lVar1 == 0 || lVar2 == 0) || (*(long *)(lVar1 + 0x40) == 0 || *(long *)(lVar2 + 0x40) == 0))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0270be98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e1f38)(*(undefined8 *)(param_1 + 0x28));
  return;
}


