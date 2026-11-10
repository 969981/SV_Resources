/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ccaac0; name: FUN_01ccaac0
 */


undefined8 FUN_01ccaac0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01ccab70(param_1,1);
  if ((DAT_048190a8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_048190a8);
    if (iVar3 != 0) {
      DAT_0481b6c8 = '\x01';
      __cxa_guard_release(&DAT_048190a8);
    }
  }
  puVar1 = &LAB_0097914c;
  if (DAT_0481b6c8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = FUN_01ccabfc(uVar4,puVar1,0);
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


