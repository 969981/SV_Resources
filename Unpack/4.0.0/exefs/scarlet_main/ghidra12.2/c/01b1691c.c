/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b1691c; name: FUN_01b1691c
 */


void FUN_01b1691c(undefined8 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  undefined1 *puVar1;
  undefined2 local_20 [2];
  undefined2 local_1c [2];
  undefined2 local_18 [2];
  undefined2 local_14 [2];
  
  puVar1 = &LAB_008fa0ec;
  if (DAT_04804318 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_20[0] = param_5;
  local_1c[0] = param_4;
  local_18[0] = param_3;
  local_14[0] = param_2;
  FUN_01b172f0(param_1,puVar1,0,local_14,local_18,local_1c,local_20);
  return;
}


