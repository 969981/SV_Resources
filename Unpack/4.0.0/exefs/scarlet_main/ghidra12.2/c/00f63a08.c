/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f63a08; name: FUN_00f63a08
 */


void FUN_00f63a08(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_00f63a60(*(undefined8 *)(param_1 + 0x30));
  if (cVar1 == '\0') {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x498);
  uVar2 = FUN_00f63a60(*(undefined8 *)(param_1 + 0x30));
  FUN_01070a58(uVar3,uVar2);
  FUN_00f63a6c(*(undefined8 *)(param_1 + 0x498),0);
  return;
}


