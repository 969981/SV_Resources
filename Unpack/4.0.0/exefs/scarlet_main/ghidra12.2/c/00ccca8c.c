/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ccca8c; name: FUN_00ccca8c
 */


void FUN_00ccca8c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,uint param_5)

{
  char cVar1;
  undefined1 auStack_80 [64];
  
  (**(code **)PTR_DAT_047e1f58)(auStack_80);
  (**(code **)PTR_DAT_047e1f60)(auStack_80,param_2);
  (**(code **)PTR_DAT_047e1f68)(auStack_80,*(undefined8 *)(param_1 + 0x1c0));
  (**(code **)PTR_DAT_047e1f70)(auStack_80,param_5,param_4);
  cVar1 = (**(code **)PTR_DAT_047e1f78)(param_1,auStack_80);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x1c8) = 1;
  }
  FUN_00cccf8c(param_1 + 0x188,param_3,param_3 + (ulong)param_5 * 0x10);
  return;
}


