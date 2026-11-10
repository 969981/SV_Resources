/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b47f8; name: FUN_028b47f8
 */


void FUN_028b47f8(long param_1,char param_2)

{
  undefined4 uVar1;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (param_2 == '\x02') {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  else if (param_2 == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  else {
    uVar1 = 0x3f800000;
  }
  local_50 = 0x4aa9ba3dccea94ea;
  puStack_48 = PTR_s_3DBufferWidthScale_047dcfa8;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_028b48e4(uVar1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0x66e7a756352d0d9f;
  puStack_48 = PTR_s_3DBufferHeightScale_047dcfb0;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  FUN_028b48e4(uVar1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  *(char *)(param_1 + 0x1d) = param_2;
  return;
}


