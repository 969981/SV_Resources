/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01827900; name: FUN_01827900
 */


void FUN_01827900(code *param_1,undefined4 *param_2,char *param_3)

{
  undefined4 uVar1;
  char local_50 [8];
  undefined1 auStack_48 [24];
  
  uVar1 = *param_2;
  local_50[0] = '\0';
  if (*param_3 != '\0') {
    FUN_01827aa0(local_50,param_3 + 8);
  }
  (*param_1)(uVar1,local_50);
  if (local_50[0] != '\0') {
    FUN_00d8e444(auStack_48);
  }
  return;
}


