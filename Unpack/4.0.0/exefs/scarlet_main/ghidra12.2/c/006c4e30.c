/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c4e30; name: thunk_FUN_006c4e40
 */


undefined4 thunk_FUN_006c4e40(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_70 [64];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  while( true ) {
    FUN_006c44c4(auStack_70);
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_006c45f4(auStack_70,uVar1);
    uVar2 = FUN_006c482c(auStack_70,auStack_30);
    FUN_006c44d0(auStack_70);
    if ((uVar2 & 1) != 0) break;
    lVar3 = FUN_006c4ae0();
    FUN_006c4240(*(undefined8 *)(lVar3 + 0x18),param_1);
  }
  return uStack_28;
}


