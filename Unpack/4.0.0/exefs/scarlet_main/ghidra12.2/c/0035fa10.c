/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035fa10; name: FUN_0035fa10
 */


void FUN_0035fa10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x18;
  FUN_0038db40(lVar1);
  if (*(char *)(param_1 + 0x48) != '\x01') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 == 0) {
    FUN_0038db60(lVar1);
    FUN_0035fb10(param_1);
    return;
  }
  do {
    FUN_00362310(lVar2 + 0x18);
    *(code **)(lVar2 + 0xd0) = FUN_0035fab0;
    *(long *)(lVar2 + 0xd8) = param_1;
    *(undefined8 *)(lVar2 + 0xe0) = 0;
    FUN_00355020(*(undefined8 *)(lVar2 + 8),lVar2 + 200,0,"tcp_listener_shutdown");
    lVar2 = *(long *)(lVar2 + 0xe8);
  } while (lVar2 != 0);
  FUN_0038db60(lVar1);
  return;
}


