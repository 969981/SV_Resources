/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c69ca0; name: FUN_01c69ca0
 */


void FUN_01c69ca0(undefined1 *param_1,undefined8 param_2,uint param_3)

{
  undefined8 local_20;
  undefined2 local_18;
  undefined1 local_16;
  
  if (param_3 >> 0x18 == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    local_16 = (undefined1)(param_3 >> 0x10);
    local_18 = (undefined2)param_3;
    local_20 = param_2;
    FUN_01c6c20c(param_1 + 8,&local_20);
  }
  return;
}


