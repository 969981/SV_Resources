/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02333500; name: FUN_02333500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02333500(char *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == '\x01') {
    uVar1 = FUN_0233358c(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    uVar1 = FUN_02333548(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar1 = uRam0000000000000001;
  }
  return uVar1;
}


