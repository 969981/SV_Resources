/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c92334; name: FUN_01c92334
 */


int FUN_01c92334(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0126a9c0();
  *param_1 = uVar3;
  memset(param_1 + 1,0,0xc2f);
  uVar1 = FUN_0168d1c0();
  *(undefined1 *)((long)param_1 + 0xc37) = uVar1;
  *(undefined1 *)((long)param_1 + 0xc3c) = 1;
  *(undefined4 *)(param_1 + 0x187) = 0;
  *(undefined1 *)(param_1 + 0x3ff) = 0;
  memset(param_1 + 0x188,0,0x13a9);
  iVar2 = snprintf((char *)((long)param_1 + 0xc25),0x11,"%s",param_2);
  return iVar2;
}


