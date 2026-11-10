/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02983dc0; name: FUN_02983dc0
 */


void FUN_02983dc0(long param_1,undefined4 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined2 local_78;
  undefined1 local_70 [16];
  
  uVar1 = (**(code **)(*param_3 + 0x220))(param_3,0x29);
  if ((uVar1 & 1) != 0) {
    FUN_0293e210(&local_80);
    local_78 = 0x29;
    local_80 = param_2;
    uStack_7c = param_2;
    local_70 = (**(code **)(*param_3 + 0x240))(param_3,0x29);
    uVar2 = FUN_01a042e4(*(undefined8 *)(param_1 + 0x78));
    FUN_01a042ec(uVar2,auStack_88,&local_80);
  }
  return;
}


