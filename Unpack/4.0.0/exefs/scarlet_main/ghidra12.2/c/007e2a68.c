/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e2a68; name: FUN_007e2a68
 */


void FUN_007e2a68(undefined8 param_1,long param_2,undefined8 *param_3,char param_4)

{
  long lVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 == (undefined8 *)0x0) {
    local_28[0] = 0x10407;
  }
  else {
    if (*(int *)(param_2 + 0xb8) != 0) {
      for (lVar1 = *(long *)(param_2 + 0xb0); lVar1 != param_2 + 0xa8; lVar1 = *(long *)(lVar1 + 8))
      {
        if (*(char *)(lVar1 + 0x38) == param_4) {
          *param_3 = *(undefined8 *)(lVar1 + 0x40);
          local_28[0] = 0;
          goto LAB_007e2ad0;
        }
      }
    }
    local_28[0] = 0x2c0a;
  }
LAB_007e2ad0:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


