/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03047548; name: FUN_03047548
 */


void FUN_03047548(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  void *__src;
  ulong uVar2;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    __src = (void *)(param_2 + 0x20);
    puVar1 = PTR_DAT_047ddb70 + 0x10;
    do {
      param_1[1] = 0xffffffff;
      param_1[2] = 1;
      *param_1 = (long)puVar1;
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)((long)__src + -8);
      *param_1 = (long)&PTR_LAB_0464c168;
      memcpy(param_1 + 4,__src,0x208);
      uVar2 = uVar2 - 1;
      __src = (void *)((long)__src + 0x230);
      param_1 = param_1 + 0x46;
    } while (uVar2 != 0);
  }
  return;
}


