/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016f9f38; name: FUN_016f9f38
 */


uint FUN_016f9f38(long param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                 char param_5,uint param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_50;
  undefined1 local_48;
  char local_28 [8];
  
  *param_2 = 0;
  local_50 = param_4;
  if ((param_6 & 0xff) == 0) {
    if (param_5 == '\x04') {
      local_48 = 1;
      FUN_01461214(param_1);
      uVar1 = FUN_016fa02c();
      FUN_016fa034(uVar1,local_28,&local_50);
      if (local_28[0] == '\0') {
        return 7;
      }
    }
    param_6 = 0;
  }
  else if (param_5 == '\x04') {
    local_48 = 0;
    FUN_01461214(param_1);
    uVar1 = FUN_016fa02c();
    FUN_016fa034(uVar1,local_28,&local_50);
    if ((local_28[0] != '\0') &&
       (uVar2 = FUN_016fa528(*(undefined8 *)(param_1 + 0x38),param_3,param_4), (uVar2 & 1) == 0)) {
      param_6 = 0;
      *param_2 = 1;
    }
  }
  return param_6;
}


