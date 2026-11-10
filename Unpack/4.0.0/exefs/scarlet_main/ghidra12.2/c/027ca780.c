/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027ca780; name: FUN_027ca780
 */


long FUN_027ca780(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  plVar1 = (long *)FUN_027ca814(param_1,param_2,&local_38,auStack_40,param_3);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    lVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),0x48,8);
    FUN_01cfa5b0(lVar2 + 0x20,param_4);
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_4 + 0x20);
    FUN_027ca9a4(param_1,local_38,plVar1,lVar2);
  }
  return lVar2;
}


