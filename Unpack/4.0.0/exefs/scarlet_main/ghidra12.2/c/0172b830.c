/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0172b830; name: FUN_0172b830
 */


bool FUN_0172b830(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  uint *puVar5;
  uint uVar6;
  
  plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*plVar4 + 0x98))();
  puVar5 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x290) + 8) + 0x50),
                                uVar3);
  if (puVar5 == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar5;
    if (4 < (int)uVar6) {
      uVar6 = 0;
    }
  }
  return uVar6 == *(byte *)(lVar1 + 0x95);
}


