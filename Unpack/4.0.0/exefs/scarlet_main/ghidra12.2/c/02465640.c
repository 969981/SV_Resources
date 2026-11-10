/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02465640; name: FUN_02465640
 */


undefined8 FUN_02465640(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_40 [8];
  undefined1 auStack_38 [8];
  
  uVar2 = FUN_02464980(param_1,1);
  uVar3 = FUN_00c92df0(param_1,2,0);
  if (((DAT_048494b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048494b0), iVar1 != 0)) {
    DAT_048497e0 = 1;
    __cxa_guard_release(&DAT_048494b0,uVar3);
  }
  FUN_02465708(local_40,uVar2,uVar3);
  FUN_0245e620(param_1,local_40);
  if (local_40[0] == '\x01') {
    FUN_0245e704(auStack_38);
  }
  return 1;
}


