/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d8914; name: FUN_024d8914
 */


void FUN_024d8914(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 local_60 [16];
  undefined8 uStack_50;
  undefined8 local_40;
  
  puVar1 = PTR_LAB_047defd0;
  if (DAT_0484f0a0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_016af0b8(param_6);
  local_60 = FUN_024da9dc(param_5,puVar1,0,uVar2);
  *param_1 = 1;
  uStack_50 = param_3;
  local_40 = param_4;
  FUN_0236f6c0(param_1 + 8,local_60);
  return;
}


