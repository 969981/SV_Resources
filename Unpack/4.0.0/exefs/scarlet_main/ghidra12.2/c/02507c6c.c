/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02507c6c; name: FUN_02507c6c
 */


void FUN_02507c6c(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  
  puVar1 = PTR_FUN_047df2b8;
  if (DAT_0484f238 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_024e0848(param_3);
  FUN_0250a1ac(auStack_b0,param_2,puVar1,0,uVar2);
  *param_1 = 1;
  memcpy(auStack_70,auStack_b0,0x40);
  FUN_0250a1f4(param_1 + 8,auStack_70);
  return;
}


